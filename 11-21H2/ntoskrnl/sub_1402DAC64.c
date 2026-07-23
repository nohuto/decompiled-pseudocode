/*
 * XREFs of sub_1402DAC64 @ 0x1402DAC64
 * Callers:
 *     sub_1407614BC @ 0x1407614BC (sub_1407614BC.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402DAEB0 @ 0x1402DAEB0 (sub_1402DAEB0.c)
 *     sub_1402DB710 @ 0x1402DB710 (sub_1402DB710.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1402DAC64(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r9
  char *v6; // r12
  unsigned __int64 v7; // rsi
  unsigned __int8 v8; // di
  __int64 v9; // r15
  __int64 v10; // rax
  ULONG_PTR v11; // rbx
  unsigned __int64 v13; // rbx
  __int64 v14; // rbp
  int v15; // edi
  __int64 v16; // rbx
  __int64 v17; // r13
  int v18; // eax
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-50h]
  unsigned __int8 v21; // [rsp+90h] [rbp+8h]
  int v24; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a3;
  v6 = sub_14026DFC0(1);
  v7 = ((*(_QWORD *)(v5 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = v7 + 8 * ((unsigned __int64)*(unsigned int *)(v5 + 64) >> 12);
  v21 = sub_1402CF4F0((__int64)v6);
  v8 = v21;
  if ( v7 >= v20 )
    return sub_1402B0CE0((__int64)v6, v8);
  v9 = 0LL;
  do
  {
    if ( v3 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_5;
      sub_14020D8D0((__int64)v6, v3);
    }
    v3 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    sub_14031DE00(v6, v3, 0LL);
LABEL_5:
    v10 = sub_140317A10(v7);
    v19 = v10;
    v11 = v10;
    if ( !v10 )
      goto LABEL_8;
    if ( (v10 & 1) != 0 )
    {
      v13 = ((unsigned __int64)sub_140317A10(&v19) >> 12) & 0xFFFFFFFFFFLL;
      v14 = 48 * v13 - 0x220000000000LL;
      if ( *(__int64 *)(v14 + 40) < 0 )
      {
        v7 += 8LL;
        v9 += 8LL;
        continue;
      }
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v24);
        while ( *(__int64 *)(v14 + 24) < 0 );
      }
      sub_1402DB710(48 * v13 - 0x220000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      sub_14020D8D0((__int64)v6, v3);
      v3 = 0LL;
      sub_1402B0CE0((__int64)v6, v8);
      v15 = sub_1402DAEB0(a2, v4, v9 >> 3, v13);
      sub_1402F2700(48 * v13 - 0x220000000000LL);
      v16 = 0LL;
      v17 = 0LL;
      if ( v15 != 1 )
      {
        v16 = sub_14033C2A0(v14);
        v17 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL));
      }
      sub_140336AD8(v14);
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v16 )
        sub_1402E20D0(v17, v16, 1LL);
      sub_1402CF4F0((__int64)v6);
      v4 = a3;
      v7 += 8LL;
      v9 += 8LL;
    }
    else
    {
      if ( (v10 & 0x400) != 0 )
      {
LABEL_8:
        v7 += 8LL;
        v9 += 8LL;
        continue;
      }
      sub_14020D8D0((__int64)v6, v3);
      v3 = 0LL;
      sub_1402B0CE0((__int64)v6, v8);
      v18 = sub_14031C860(0LL, (__int64)(v7 << 25) >> 16);
      if ( v18 < 0 )
        KeBugCheckEx(0x1Au, 0x1081uLL, (__int64)(v7 << 25) >> 16, v11, v18);
      sub_1402CF4F0((__int64)v6);
    }
    v8 = v21;
  }
  while ( v7 < v20 );
  if ( v3 )
    sub_14020D8D0((__int64)v6, v3);
  return sub_1402B0CE0((__int64)v6, v8);
}
