/*
 * XREFs of sub_18004A230 @ 0x18004A230
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013FC4 @ 0x180013FC4 (sub_180013FC4.c)
 *     sub_180081340 @ 0x180081340 (sub_180081340.c)
 */

__int64 __fastcall sub_18004A230(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // xmm0_8
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = sub_18001246C(&v8, a2);
  sub_180081340(a1, v4);
  sub_180013FC4(&v8, a2);
  v5 = *(_QWORD *)(a1 + 104);
  result = v8;
  *(_OWORD *)(v8 + 88) = *(_OWORD *)(a1 + 88);
  *(_QWORD *)(result + 104) = v5;
  if ( v9 )
    result = sub_180010530(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
