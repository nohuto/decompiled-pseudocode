/*
 * XREFs of sub_1406E616C @ 0x1406E616C
 * Callers:
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14041BB20 (ZwFreeVirtualMemory.c)
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 */

__int64 __fastcall sub_1406E616C(ULONG_PTR a1, __int64 a2, _QWORD *a3, char *a4)
{
  char v6; // al
  void *v7; // rax
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v13[3]; // [rsp+40h] [rbp-40h] BYREF

  memset(v13, 0, sizeof(v13));
  sub_14030D5C0(a1, 0LL, (__int64)v13, (__int64)a4);
  v6 = *a4;
  if ( (*a4 & 2) != 0 )
  {
    v7 = (void *)a3[4];
    RegionSize = 0LL;
    BaseAddress = v7;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    v6 = *a4;
  }
  if ( (v6 & 4) != 0 )
  {
    v9 = a3[7];
    BaseAddress = 0LL;
    RegionSize = v9;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&RegionSize, (PSIZE_T)&BaseAddress, 0x8000u);
    v6 = *a4;
  }
  if ( (v6 & 8) != 0 )
  {
    v10 = a3[8];
    BaseAddress = 0LL;
    RegionSize = v10;
    sub_1407B99C0(0xFFFFFFFFFFFFFFFFuLL, 0, 0x40000000);
  }
  return sub_1402D0930((__int64)v13, 0LL);
}
