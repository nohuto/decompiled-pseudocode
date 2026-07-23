/*
 * XREFs of sub_140958F84 @ 0x140958F84
 * Callers:
 *     sub_140958D9C @ 0x140958D9C (sub_140958D9C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140748D08 @ 0x140748D08 (sub_140748D08.c)
 *     sub_14081FDD8 @ 0x14081FDD8 (sub_14081FDD8.c)
 *     sub_14081FECC @ 0x14081FECC (sub_14081FECC.c)
 *     sub_14081FF24 @ 0x14081FF24 (sub_14081FF24.c)
 *     sub_140820DCC @ 0x140820DCC (sub_140820DCC.c)
 *     sub_140821D18 @ 0x140821D18 (sub_140821D18.c)
 *     sub_140854DB4 @ 0x140854DB4 (sub_140854DB4.c)
 *     sub_140858F98 @ 0x140858F98 (sub_140858F98.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140958F84(__int64 a1)
{
  _DWORD *v1; // rdx
  _DWORD *v4; // rbx
  int v5; // esi
  __int64 v6; // rbx
  _DWORD *v7; // rbx
  ULONG v8; // eax
  __int128 v9; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v10[8]; // [rsp+30h] [rbp-40h] BYREF
  char vars0; // [rsp+70h] [rbp+0h] BYREF

  v1 = *(_DWORD **)(a1 + 416);
  v9 = 0LL;
  if ( !v1 )
    return 0LL;
  v4 = sub_140821D18(a1, v1, 0);
  if ( !v4 )
    return 3221225626LL;
  memset(v10, 0, sizeof(v10));
  v10[0] = *(_QWORD *)(a1 + 32);
  v10[3] = v4;
  HIDWORD(v10[1]) = 4;
  v5 = sub_140820DCC((__int64)v10, &v10[4]);
  if ( v5 >= 0 && (v6 = v10[4]) != 0 )
  {
    sub_140858F98(v10[4]);
    if ( !*(_QWORD *)(v6 + 24) )
    {
      sub_14081FECC((unsigned __int64)v10, (unsigned __int64)&vars0);
      return 3221225858LL;
    }
    v5 = sub_14081FF24((__int64)v10, 1u, (__int64)&v9);
    sub_14081FECC((unsigned __int64)v10, (unsigned __int64)&vars0);
    if ( v5 >= 0 )
      v5 = sub_140854DB4((_QWORD **)&v9);
    if ( v10[5] )
      ExFreePoolWithTag((PVOID)v10[5], 0);
    if ( v10[6] )
      ExFreePoolWithTag((PVOID)v10[6], 0);
    v7 = *(_DWORD **)(a1 + 416);
    v8 = sub_140748D08(v7);
    sub_14081FDD8(a1, v7, v8);
  }
  else
  {
    ExFreePoolWithTag((PVOID)v10[3], 0);
  }
  return (unsigned int)v5;
}
