/*
 * XREFs of RtlpQueryExtendedInformationAllHeaps @ 0x18007DB40
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x18007D9C8 (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18007DC2C (RtlpEnumProcessHeaps.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall RtlpQueryExtendedInformationAllHeaps(__int64 a1)
{
  int v2; // ebx
  _QWORD v4[22]; // [rsp+20h] [rbp-79h] BYREF
  __int64 v5; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v6; // [rsp+D8h] [rbp+3Fh]
  int v7; // [rsp+E0h] [rbp+47h]

  if ( *(_DWORD *)a1 == 0x80000000 || (unsigned int)(*(_DWORD *)a1 - 1) <= 4 )
  {
    RtlpEnumProcessHeaps(RtlpLockUlockAllHeapsCallback, 1LL, 1LL);
    if ( *(_DWORD *)a1 == 0x80000000 )
      goto LABEL_3;
    v5 = 0LL;
    v6 = 0LL;
    v7 = 0;
    v2 = RtlpEnumProcessHeaps(RtlpHeapQueryTotalReserveSize, &v5, 3LL);
    if ( v2 >= 0 )
    {
      memset(v4, 0, 0xA8uLL);
      LODWORD(v4[4]) = v7;
      v4[2] = v5;
      v4[3] = v6;
      LODWORD(v4[0]) = 1;
      v4[1] = 48LL;
      v2 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(a1 + 8))(v4, *(_QWORD *)(a1 + 16));
      if ( v2 >= 0 && *(_DWORD *)a1 >= 2u )
LABEL_3:
        v2 = RtlpEnumProcessHeaps(RtlpQueryExtendedInformationHeap, a1, 3LL);
    }
    RtlpEnumProcessHeaps(RtlpLockUlockAllHeapsCallback, 0LL, 1LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
