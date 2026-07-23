/*
 * XREFs of sub_140A12D00 @ 0x140A12D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_1408434E0 @ 0x1408434E0 (sub_1408434E0.c)
 */

__int64 __fastcall sub_140A12D00(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v7; // r14d
  int v9; // ebx
  unsigned int v10; // edi
  BOOL v12; // [rsp+38h] [rbp-30h]
  _DWORD v13[4]; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+70h] [rbp+8h] BYREF

  v7 = a5;
  v9 = 0;
  v13[0] = 0;
  v14 = 0;
  v10 = sub_1408434E0(v13, &v14, a2, a3, a5, a6, 1, v12);
  if ( !v10 || v14 )
    v9 = v13[0];
  else
    LOBYTE(v9) = (unsigned int)sub_140792CCC(a3, v7, 4099) == 0;
  *a1 = v9;
  return v10;
}
