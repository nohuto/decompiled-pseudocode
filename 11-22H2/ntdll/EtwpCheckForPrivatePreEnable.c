/*
 * XREFs of EtwpCheckForPrivatePreEnable @ 0x180032398
 * Callers:
 *     EtwNotificationRegister @ 0x1800327E0 (EtwNotificationRegister.c)
 * Callees:
 *     EtwpGetUmProcessImageInfo @ 0x1800020AC (EtwpGetUmProcessImageInfo.c)
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     EtwpFindGuidEntry @ 0x1800324AC (EtwpFindGuidEntry.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180081DE8 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpPopulatePrivateEnableInfoFromGuidEntry @ 0x180082548 (EtwpPopulatePrivateEnableInfoFromGuidEntry.c)
 *     EtwpPreEnableEventApiCallback @ 0x18008682C (EtwpPreEnableEventApiCallback.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

signed __int64 __fastcall EtwpCheckForPrivatePreEnable(__int64 a1)
{
  char v2; // r14
  signed __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  signed __int64 v7; // rsi
  volatile signed __int64 *v8; // rdi
  unsigned __int8 *v9; // rbp
  __int64 v10; // r15
  __int128 v11; // xmm0
  __int64 v12; // r8
  _BYTE v13[40]; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v14; // [rsp+48h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-40h]
  int v16; // [rsp+90h] [rbp-38h]

  v2 = 0;
  result = EtwpFindGuidEntry((void *)(a1 + 32));
  v7 = result;
  if ( result )
  {
    v8 = (volatile signed __int64 *)(result + 40);
    RtlAcquireSRWLockShared((volatile signed __int64 *)(result + 40), v4, v5, v6);
    *(_QWORD *)(a1 + 240) = v7;
    EtwpPopulatePrivateEnableInfoFromGuidEntry(a1);
    v9 = (unsigned __int8 *)(a1 + 142);
    v10 = 4LL;
    do
    {
      if ( *(v9 - 2) )
      {
        if ( (*(_WORD *)(a1 + 86) & 0x3FFF) == 2 || *(__int16 *)(a1 + 86) < 0 )
          EtwpGetUmProcessImageInfo(*v9, a1);
        v2 = 1;
      }
      v9 += 24;
      --v10;
    }
    while ( v10 );
    if ( v2 )
    {
      if ( (*(_WORD *)(a1 + 86) & 0x3FFF) == 2 )
      {
        memset_thunk_772440563353939046(v13, 0, 0x78uLL);
        v11 = *(_OWORD *)(v7 + 24);
        v15 = *(_QWORD *)(v7 + 152);
        v16 = *(_DWORD *)(v7 + 160);
        v14 = v11;
        RtlReleaseSRWLockShared(v8);
        LOBYTE(v12) = 1;
        return EtwpRegisterGuidsApiCallback(v13, a1, v12);
      }
      else
      {
        RtlReleaseSRWLockShared(v8);
        return EtwpPreEnableEventApiCallback(a1);
      }
    }
    else
    {
      return RtlReleaseSRWLockShared(v8);
    }
  }
  return result;
}
