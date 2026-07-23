/*
 * XREFs of EtwpCheckForPrivatePreEnable @ 0x180016194
 * Callers:
 *     EtwNotificationRegister @ 0x180016730 (EtwNotificationRegister.c)
 * Callees:
 *     EtwpFindGuidEntry @ 0x180016878 (EtwpFindGuidEntry.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180088038 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpPopulatePrivateEnableInfoFromGuidEntry @ 0x1800882E8 (EtwpPopulatePrivateEnableInfoFromGuidEntry.c)
 *     EtwpPreEnableEventApiCallback @ 0x18008B3D8 (EtwpPreEnableEventApiCallback.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     EtwpGetUmProcessImageInfo @ 0x180122610 (EtwpGetUmProcessImageInfo.c)
 */

void __fastcall EtwpCheckForPrivatePreEnable(__int64 a1)
{
  char v2; // r14
  _RTL_SRWLOCK *GuidEntry; // rax
  _RTL_SRWLOCK *v4; // rsi
  _RTL_SRWLOCK *v5; // rdi
  unsigned __int8 *v6; // rbp
  __int64 v7; // r15
  __int128 v8; // xmm0
  __int64 v9; // r8
  _QWORD v10[15]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = 0;
  GuidEntry = (_RTL_SRWLOCK *)EtwpFindGuidEntry((void *)(a1 + 32));
  v4 = GuidEntry;
  if ( GuidEntry )
  {
    v5 = GuidEntry + 5;
    RtlAcquireSRWLockShared(GuidEntry + 5);
    *(_QWORD *)(a1 + 248) = v4;
    EtwpPopulatePrivateEnableInfoFromGuidEntry(a1);
    v6 = (unsigned __int8 *)(a1 + 150);
    v7 = 4LL;
    do
    {
      if ( *(v6 - 2) )
      {
        if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 || *(__int16 *)(a1 + 98) < 0 )
          EtwpGetUmProcessImageInfo(*v6, a1);
        v2 = 1;
      }
      v6 += 24;
      --v7;
    }
    while ( v7 );
    if ( v2 )
    {
      if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 )
      {
        memset(v10, 0, sizeof(v10));
        v8 = *(_OWORD *)&v4[3].0;
        v10[13] = v4[19].0;
        LODWORD(v10[14]) = v4[20].0;
        *(_OWORD *)&v10[5] = v8;
        RtlReleaseSRWLockShared(v5);
        LOBYTE(v9) = 1;
        EtwpRegisterGuidsApiCallback(v10, a1, v9);
      }
      else
      {
        RtlReleaseSRWLockShared(v5);
        EtwpPreEnableEventApiCallback(a1);
      }
    }
    else
    {
      RtlReleaseSRWLockShared(v5);
    }
  }
}
