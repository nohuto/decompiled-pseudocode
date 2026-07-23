/*
 * XREFs of sub_1405D18CC @ 0x1405D18CC
 * Callers:
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void sub_1405D18CC()
{
  unsigned __int16 v0; // bx
  unsigned int v1; // eax
  unsigned int v2; // r8d
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  ULONG UserDataCount; // r9d
  bool v6; // zf
  _DWORD *v7; // rcx
  __int64 v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  unsigned __int16 v13; // [rsp+40h] [rbp-118h] BYREF
  _DWORD v14[14]; // [rsp+48h] [rbp-110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-D8h] BYREF
  _QWORD v16[22]; // [rsp+90h] [rbp-C8h]

  v0 = 0;
  if ( byte_140C5AE14 && EtwEventEnabled(RegHandle, &stru_1400390F0) )
  {
    LOBYTE(v1) = KeAcquireSpinLockRaiseToDpc(&qword_140C1FB98);
    v2 = dword_140C1FB94;
    v3 = (unsigned __int8)v1;
    *(_QWORD *)&UserData.Size = 2LL;
    v4 = (unsigned int)dword_140C1FB94 - (((unsigned __int64)(unsigned int)dword_140C1FB94 >> 1) & 0x5555555555555555LL);
    v13 = (0x101010101010101LL
         * (((v4 & 0x3333333333333333LL)
           + ((v4 >> 2) & 0x3333333333333333LL)
           + (((v4 & 0x3333333333333333LL) + ((v4 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    UserDataCount = v13 + 1;
    UserData.Ptr = (ULONGLONG)&v13;
    v6 = !_BitScanForward(&v1, dword_140C1FB94);
    v14[0] = v1;
    if ( !v6 )
    {
      v7 = v14;
      do
      {
        v2 &= v2 - 1;
        v8 = 2LL * v0++;
        v16[v8] = v7;
        v16[v8 + 1] = 4LL;
        v7 = &v14[v0];
        v6 = !_BitScanForward((unsigned int *)&v8, v2);
        *v7 = v8;
      }
      while ( !v6 );
    }
    EtwWriteEx(RegHandle, &stru_1400390F0, 0LL, 0, 0LL, 0LL, UserDataCount, &UserData);
    KeReleaseSpinLockFromDpcLevel(&qword_140C1FB98);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v6 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v6 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
}
