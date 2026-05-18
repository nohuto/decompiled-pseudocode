/*
 * XREFs of sub_18004B7C0 @ 0x18004B7C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180084DC0 @ 0x180084DC0 (sub_180084DC0.c)
 */

__int64 __fastcall sub_18004B7C0(__int64 a1, __int64 *a2)
{
  unsigned int v3; // eax
  __int64 v4; // r8
  _QWORD *v5; // rbp
  unsigned int v6; // edi
  _QWORD *i; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_180026650(*a2);
  v5 = *(_QWORD **)(v4 + 112);
  v6 = v3;
  for ( i = *(_QWORD **)(v4 + 104); i != v5; i += 11 )
  {
    v8 = i[3];
    if ( v8 )
      sub_180084DC0(v8, v6);
    v9 = i[5];
    if ( v9 )
      sub_180084DC0(v9, v6);
    v10 = i[7];
    if ( v10 )
      sub_180084DC0(v10, v6);
    v11 = i[9];
    if ( v11 )
      sub_180084DC0(v11, v6);
  }
  result = (__int64)sub_18001246C(v15, a2);
  v13 = *(_QWORD *)(result + 8);
  if ( v13 )
    result = sub_180010530(v13);
  v14 = a2[1];
  if ( v14 )
    return sub_180010530(v14);
  return result;
}
