/*
 * XREFs of sub_1405CEBEC @ 0x1405CEBEC
 * Callers:
 *     sub_1405CD4FC @ 0x1405CD4FC (sub_1405CD4FC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall sub_1405CEBEC(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  ULONG_PTR v5; // rdi
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 72);
  v10 = 0LL;
  v5 = *(_QWORD *)(a1 + 64);
  v7 = v3;
  LODWORD(v3) = *(_DWORD *)a3;
  v8 = a2;
  v9 = v3;
  if ( !(unsigned __int8)sub_14042A5E0(34LL, &v7) )
    sub_1405CAE6C(0x605uLL, 0x22uLL, v5, 0LL);
  result = v10;
  *(_QWORD *)(a3 + 8) = v10;
  return result;
}
