/*
 * XREFs of sub_14058C874 @ 0x14058C874
 * Callers:
 *     MmSetGraphicsPtes @ 0x14096B560 (MmSetGraphicsPtes.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_14027D6E0 @ 0x14027D6E0 (sub_14027D6E0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 */

__int64 __fastcall sub_14058C874(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        int a5,
        unsigned __int8 a6)
{
  unsigned __int64 *v6; // r15
  unsigned int v7; // edi
  unsigned __int64 v8; // r12
  unsigned __int8 v9; // si
  unsigned __int64 v10; // r13
  __int64 v11; // rbp
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rbx
  int v14; // esi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rax
  unsigned __int64 v20; // [rsp+20h] [rbp-48h]
  unsigned __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp+10h]
  unsigned __int64 v23; // [rsp+88h] [rbp+20h]

  v23 = a4;
  v6 = a3;
  v7 = 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = v8;
  v9 = a6;
  v10 = (((a2 + a1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v21 = 0LL;
  v22 = v10;
  a5 = a6 & 1;
  if ( (a6 & 1) != 0 && a3 )
  {
    v6 = &v21;
    v21 = *a3;
  }
  v11 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
  v12 = sub_1402CF4F0(v11);
  v13 = v21;
  a6 = v12;
  v14 = (v9 & 2) == 0;
  while ( 1 )
  {
    v15 = v8;
    if ( v8 <= v10 )
      break;
LABEL_24:
    if ( (unsigned int)++v14 >= 2 )
      goto LABEL_27;
  }
  while ( 1 )
  {
    if ( (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v22 )
      v10 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    v16 = sub_14027D6E0(v11, v15, &v21);
    v21 = v16;
    if ( v16 == ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      break;
LABEL_14:
    if ( v14 )
    {
LABEL_15:
      v18 = (((__int64)(v10 - v15) >> 3) + 1) / (v23 >> 12);
      if ( a5 )
      {
        v13 += v23 * v18;
      }
      else if ( v6 )
      {
        v6 += v18;
      }
    }
LABEL_19:
    sub_14020D8D0(v11, v16);
    if ( sub_1403531F0(v11) || KeShouldYieldProcessor() )
    {
      sub_1402B0CE0(v11, a6);
      sub_1402CF4F0(v11);
    }
    v15 = v10 + 8;
    v10 = v22;
    if ( v15 > v22 )
    {
      v8 = v20;
      goto LABEL_24;
    }
  }
  if ( v14 )
    goto LABEL_15;
  v17 = v15;
  if ( v15 > v10 )
    goto LABEL_19;
  while ( !sub_140317A10(v17) )
  {
    v17 += 8LL;
    if ( v17 > v10 )
    {
      v16 = v21;
      goto LABEL_14;
    }
  }
  v7 = -1073741800;
  sub_14020D8D0(v11, v21);
LABEL_27:
  sub_1402B0CE0(v11, a6);
  return v7;
}
