/*
 * XREFs of sub_18005BD5C @ 0x18005BD5C
 * Callers:
 *     sub_18005A490 @ 0x18005A490 (sub_18005A490.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_18005BD5C(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // edi
  int v6; // r9d
  _DWORD *v7; // rbx
  int v8; // r8d
  int v9; // eax
  int v10; // r10d
  int v11; // edx
  int v12; // ecx
  bool v13; // cc
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  _DWORD *result; // rax

  v3 = *a3;
  v6 = a3[2];
  v7 = a3;
  v8 = a3[1];
  v9 = v3;
  if ( *a2 >= v3 )
    v9 = *a2;
  v10 = v6;
  v11 = v7[3];
  v12 = v11;
  if ( v6 >= v9 )
    v10 = v9;
  v13 = a2[1] < v8;
  v14 = v7;
  *a1 = v10;
  if ( !v13 )
    v14 = a2;
  if ( v11 >= v14[1] )
    v12 = v14[1];
  v15 = v7;
  v13 = v6 < a2[2];
  a1[1] = v12;
  if ( !v13 )
    v15 = a2;
  if ( v11 >= a2[3] )
    v7 = a2;
  if ( v15[2] >= v3 )
    v3 = v15[2];
  result = a1;
  v13 = v7[3] < v8;
  a1[2] = v3;
  if ( !v13 )
    v8 = v7[3];
  a1[3] = v8;
  return result;
}
