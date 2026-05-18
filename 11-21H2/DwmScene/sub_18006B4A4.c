/*
 * XREFs of sub_18006B4A4 @ 0x18006B4A4
 * Callers:
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001872C @ 0x18001872C (sub_18001872C.c)
 *     sub_18007EDCC @ 0x18007EDCC (sub_18007EDCC.c)
 */

_QWORD *__fastcall sub_18006B4A4(__int64 a1, _QWORD *a2)
{
  char *v3; // r8
  __int64 v4; // rax
  int v5; // ebx
  _BYTE *v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rax
  __int64 v11[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h]
  _BYTE v14[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h]
  char *v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h]
  __int64 v18; // [rsp+60h] [rbp-10h]
  void *v19; // [rsp+88h] [rbp+18h] BYREF

  v19 = &Spectre::Engine::ImageProcessingEffectPlanarReflection `RTTI Type Descriptor';
  sub_18007EDCC(a1, &v16, &v19);
  v3 = v16;
  if ( (v17 - (__int64)v16) >> 4 )
  {
    v4 = *((_QWORD *)v16 + 1);
    v5 = 1;
    if ( v4 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
      v4 = *((_QWORD *)v3 + 1);
    }
    v15 = v4;
    v6 = v14;
    v7 = *(_QWORD *)v3;
    v8 = 0;
  }
  else
  {
    v13 = 0LL;
    v6 = v12;
    v7 = 0LL;
    v5 = 0;
    v8 = 2;
  }
  *(_QWORD *)v6 = 0LL;
  v11[0] = v7;
  v9 = *((_QWORD *)v6 + 1);
  *((_QWORD *)v6 + 1) = 0LL;
  v11[1] = v9;
  if ( v8 )
    sub_180010910((__int64)v12);
  if ( v5 )
    sub_180010910((__int64)v14);
  sub_18001872C(a2, v11);
  sub_180010910((__int64)v11);
  if ( v16 )
  {
    sub_1800126E8((__int64)v16, v17);
    sub_180010884(v16, (v18 - (_QWORD)v16) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return a2;
}
