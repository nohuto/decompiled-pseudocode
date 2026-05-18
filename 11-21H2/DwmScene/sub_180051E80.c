/*
 * XREFs of sub_180051E80 @ 0x180051E80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_180092790 @ 0x180092790 (sub_180092790.c)
 */

__int64 __fastcall sub_180051E80(__int64 a1, __int64 *a2)
{
  unsigned int v3; // eax
  __int64 v4; // r8
  _QWORD *v5; // rbp
  unsigned int v6; // esi
  _QWORD *i; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_180028544(*a2);
  v5 = *(_QWORD **)(v4 + 112);
  v6 = v3;
  for ( i = *(_QWORD **)(v4 + 104); i != v5; i += 11 )
  {
    v8 = i[3];
    if ( v8 )
      sub_180092790(v8, v6);
    v9 = i[5];
    if ( v9 )
      sub_180092790(v9, v6);
    v10 = i[7];
    if ( v10 )
      sub_180092790(v10, v6);
    v11 = i[9];
    if ( v11 )
      sub_180092790(v11, v6);
  }
  v12 = a2[1];
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = a2[1];
  }
  v13 = *a2;
  v15[1] = v12;
  v15[0] = v13;
  sub_180010910((__int64)v15);
  return sub_180010910((__int64)a2);
}
