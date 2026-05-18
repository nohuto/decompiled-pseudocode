/*
 * XREFs of sub_18006296C @ 0x18006296C
 * Callers:
 *     sub_180064BB0 @ 0x180064BB0 (sub_180064BB0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180047AFC @ 0x180047AFC (sub_180047AFC.c)
 *     sub_1800733CC @ 0x1800733CC (sub_1800733CC.c)
 */

_QWORD *__fastcall sub_18006296C(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rdi
  char v8; // [rsp+28h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-40h]
  __int64 v10[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-20h]
  _QWORD *v13[3]; // [rsp+58h] [rbp-18h] BYREF
  void *v14; // [rsp+88h] [rbp+18h] BYREF

  v14 = &Spectre::Engine::ImageProcessingEffectBloom `RTTI Type Descriptor';
  sub_1800733CC(a1, v13, &v14);
  if ( ((char *)v13[1] - (char *)v13[0]) >> 4 )
  {
    v3 = sub_18001246C(&v11, v13[0]);
    v4 = 1;
    v5 = *v3;
  }
  else
  {
    v9 = 0LL;
    v3 = (__int64 *)&v8;
    v5 = 0LL;
    v4 = 2;
  }
  v6 = v3[1];
  v3[1] = 0LL;
  *v3 = 0LL;
  v10[0] = v5;
  v10[1] = v6;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( v9 )
      sub_180010530(v9);
  }
  if ( (v4 & 1) != 0 && v12 )
    sub_180010530(v12);
  sub_180047AFC(a2, v10);
  if ( v6 )
    sub_180010530(v6);
  sub_180013300((__int64)v13);
  return a2;
}
