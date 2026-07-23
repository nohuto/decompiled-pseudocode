/*
 * XREFs of sub_140653D68 @ 0x140653D68
 * Callers:
 *     sub_14062B464 @ 0x14062B464 (sub_14062B464.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140653D68(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  unsigned int v9; // r15d
  __int64 v10; // r14
  _QWORD *v11; // rsi
  _QWORD *v12; // rax
  void *v13; // rcx
  const void *v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rax
  size_t v17; // rbx
  __int64 result; // rax
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h]
  __int64 v21; // [rsp+38h] [rbp-28h]
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]
  __int64 v24; // [rsp+58h] [rbp-8h]

  v23 = 0LL;
  LODWORD(v24) = 0;
  v20 = 0LL;
  v9 = 0;
  LODWORD(v21) = 0;
  v22 = 0LL;
  v10 = 0LL;
  v19 = 0LL;
  v11 = sub_14039DF90((PHYSICAL_ADDRESS *)&v22, 1, 0LL, 0LL);
  v12 = sub_14039DF90((PHYSICAL_ADDRESS *)&v19, 2, 0LL, 0LL);
  *v11 = a1;
  v13 = v11 + 2;
  v11[1] = a2;
  v14 = v12;
  while ( 1 )
  {
    v15 = 510LL;
    if ( a3 < 0x1FE )
      v15 = a3;
    memmove(v13, (const void *)(a4 + 8 * v10), 8 * v15);
    v16 = HvlInvokeHypercall(202);
    if ( (_WORD)v16 )
      break;
    v17 = WORD2(v16) & 0xFFF;
    memmove((void *)(v10 + a6), v14, v17);
    v13 = v11 + 2;
    v10 += v17;
    a3 -= v17;
    if ( !a3 )
      goto LABEL_8;
  }
  v10 += WORD2(v16) & 0xFFF;
  v9 = sub_14054CA70(v16);
LABEL_8:
  sub_14039D8F0((__int64)&v19);
  sub_14039D8F0((__int64)&v22);
  result = v9;
  *a5 = v10;
  return result;
}
