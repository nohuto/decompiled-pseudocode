/*
 * XREFs of sub_1407E4964 @ 0x1407E4964
 * Callers:
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14041BB20 (ZwFreeVirtualMemory.c)
 *     sub_140705D0C @ 0x140705D0C (sub_140705D0C.c)
 *     sub_1407E4A98 @ 0x1407E4A98 (sub_1407E4A98.c)
 */

__int64 __fastcall sub_1407E4964(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  char v5; // bl
  int v10; // edi
  __int64 v11; // r15
  ULONG_PTR v13; // [rsp+20h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v16[3]; // [rsp+40h] [rbp-78h] BYREF

  v4 = *(_BYTE *)a4;
  v5 = 0;
  memset(v16, 0, sizeof(v16));
  if ( (v4 & 1) != 0 )
    goto LABEL_7;
  sub_14030D5C0(a1, 0LL, (__int64)v16, a4);
  v10 = sub_1407E4A98(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), 4096, v13, a3);
  if ( v10 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 2512) & 0x40) != 0 )
      v11 = 0LL;
    else
      v11 = 16 * (unsigned int)(sub_140363220(1) & 0x7F);
    if ( *(_QWORD *)(a1 + 1408) )
    {
      v10 = sub_140705D0C((unsigned __int64 *)(a3 + 16), a1);
      if ( v10 < 0 )
      {
        BaseAddress = *(PVOID *)(a3 + 32);
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        goto LABEL_11;
      }
    }
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a3 + 16) - v11 - 40;
    sub_1402D0930((__int64)v16, 0LL);
    v4 = *(_BYTE *)a4;
    v5 = 2;
LABEL_7:
    *(_BYTE *)a4 = v5 | v4 & 0xFD;
    return 0LL;
  }
LABEL_11:
  sub_1402D0930((__int64)v16, 0LL);
  return (unsigned int)v10;
}
