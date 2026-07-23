/*
 * XREFs of EtwpCheckForPrivatePreEnable @ 0x180032238
 * Callers:
 *     EtwNotificationRegister @ 0x180032680 (EtwNotificationRegister.c)
 * Callees:
 *     EtwpGetUmProcessImageInfo @ 0x1800020DC (EtwpGetUmProcessImageInfo.c)
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     EtwpFindGuidEntry @ 0x18003234C (EtwpFindGuidEntry.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180082458 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpPopulatePrivateEnableInfoFromGuidEntry @ 0x180082BB8 (EtwpPopulatePrivateEnableInfoFromGuidEntry.c)
 *     EtwpPreEnableEventApiCallback @ 0x18008702C (EtwpPreEnableEventApiCallback.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
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
  _BYTE v10[40]; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v11; // [rsp+48h] [rbp-80h]
  unsigned __int64 Value; // [rsp+88h] [rbp-40h]
  int v13; // [rsp+90h] [rbp-38h]

  v2 = 0;
  GuidEntry = (_RTL_SRWLOCK *)EtwpFindGuidEntry((void *)(a1 + 32));
  v4 = GuidEntry;
  if ( GuidEntry )
  {
    v5 = GuidEntry + 5;
    RtlAcquireSRWLockShared(GuidEntry + 5);
    *(_QWORD *)(a1 + 240) = v4;
    EtwpPopulatePrivateEnableInfoFromGuidEntry(a1);
    v6 = (unsigned __int8 *)(a1 + 142);
    v7 = 4LL;
    do
    {
      if ( *(v6 - 2) )
      {
        if ( (*(_WORD *)(a1 + 86) & 0x3FFF) == 2 || *(__int16 *)(a1 + 86) < 0 )
          EtwpGetUmProcessImageInfo(*v6, a1);
        v2 = 1;
      }
      v6 += 24;
      --v7;
    }
    while ( v7 );
    if ( v2 )
    {
      if ( (*(_WORD *)(a1 + 86) & 0x3FFF) == 2 )
      {
        memset_thunk_772440563353939046(v10, 0, 0x78uLL);
        v8 = *(_OWORD *)&v4[3].0;
        Value = v4[19].Value;
        v13 = (int)v4[20].0;
        v11 = v8;
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
