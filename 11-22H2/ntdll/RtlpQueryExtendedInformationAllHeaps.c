/*
 * XREFs of RtlpQueryExtendedInformationAllHeaps @ 0x18008B358
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x18008AEC0 (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x1800773DC (RtlpEnumProcessHeaps.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryExtendedInformationAllHeaps(__int64 a1)
{
  int v2; // ebx
  int v4; // [rsp+20h] [rbp-79h] BYREF
  __int64 v5; // [rsp+28h] [rbp-71h]
  __int64 v6; // [rsp+30h] [rbp-69h]
  __int64 v7; // [rsp+38h] [rbp-61h]
  int v8; // [rsp+40h] [rbp-59h]
  __int64 v9; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v10; // [rsp+D8h] [rbp+3Fh]
  int v11; // [rsp+E0h] [rbp+47h]

  if ( *(_DWORD *)a1 == 0x80000000 || (unsigned int)(*(_DWORD *)a1 - 1) <= 4 )
  {
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpLockUlockAllHeapsCallback, 1LL, 1);
    if ( *(_DWORD *)a1 == 0x80000000 )
      goto LABEL_3;
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0;
    v2 = RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpHeapQueryTotalReserveSize, (__int64)&v9, 3);
    if ( v2 >= 0 )
    {
      memset_thunk_772440563353939046(&v4, 0, 0xB0uLL);
      v8 = v11;
      v6 = v9;
      v7 = v10;
      v4 = 1;
      v5 = 48LL;
      v2 = (*(__int64 (__fastcall **)(int *, _QWORD))(a1 + 8))(&v4, *(_QWORD *)(a1 + 16));
      if ( v2 >= 0 && *(_DWORD *)a1 >= 2u )
LABEL_3:
        v2 = RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpQueryExtendedInformationHeap, a1, 3);
    }
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpLockUlockAllHeapsCallback, 0LL, 1);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
