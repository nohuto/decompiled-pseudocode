/*
 * XREFs of sub_140363850 @ 0x140363850
 * Callers:
 *     <none>
 * Callees:
 *     sub_140208F20 @ 0x140208F20 (sub_140208F20.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140363780 @ 0x140363780 (sub_140363780.c)
 *     sub_1403639F0 @ 0x1403639F0 (sub_1403639F0.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 */

__int64 __fastcall sub_140363850(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        __int64 a6,
        ULONG_PTR *a7,
        _DWORD *a8)
{
  unsigned int v10; // r15d
  __int64 v12; // rbx
  __int64 *v13; // rdi
  signed __int64 v14; // rsi
  __int64 v15; // r14
  struct _EX_RUNDOWN_REF *v16; // rbx
  struct _EX_RUNDOWN_REF *v17; // rcx
  ULONG_PTR i; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v22; // rax
  __int128 v23; // xmm1
  struct _EX_RUNDOWN_REF *v24; // [rsp+38h] [rbp-49h] BYREF
  __int64 v25; // [rsp+40h] [rbp-41h] BYREF
  __int128 v26; // [rsp+48h] [rbp-39h] BYREF
  __int128 v27; // [rsp+58h] [rbp-29h] BYREF
  __int128 v28; // [rsp+68h] [rbp-19h]
  __int128 v29; // [rsp+78h] [rbp-9h] BYREF
  __int128 v30; // [rsp+88h] [rbp+7h]

  v25 = 0LL;
  v24 = 0LL;
  v10 = 0;
  *a7 = 0LL;
  v26 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( (int)sub_1403639F0(a1, &v24, &v25) < 0 )
  {
LABEL_11:
    v16 = v24;
    goto LABEL_12;
  }
  sub_140363780(v25, a2, a4, &v26, a5);
  v12 = a6 + 16;
  v13 = (__int64 *)&v26;
  v14 = (char *)a4 - (char *)&v26;
  v15 = 2LL;
  do
  {
    if ( *(__int64 *)((char *)v13 + v14) )
    {
      sub_140208F20(*v13, &v29, &v27);
      v22 = *((_QWORD *)&v28 + 1);
      v23 = v30;
      *(_OWORD *)(v12 - 16) = v29;
      *(_OWORD *)v12 = v23;
      *(_QWORD *)(v12 + 8) += v22;
      *(_QWORD *)v12 += v28;
      *(_QWORD *)(v12 - 16) += v27;
      *(_QWORD *)(v12 - 8) += *((_QWORD *)&v27 + 1);
      ++v10;
    }
    ++v13;
    v12 += 32LL;
    --v15;
  }
  while ( v15 );
  v16 = v24;
  v17 = v24;
  for ( i = v24[22].Count; i; i = *(_QWORD *)(i + 176) )
    v17 = (struct _EX_RUNDOWN_REF *)i;
  *a7 = v17[3].Count;
  if ( a8 )
  {
    *a8 = 0;
    v19 = *(_QWORD *)(a3 + 544);
    if ( *(_QWORD *)(v19 + 1296) )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + 1296) + 1760LL);
      if ( v20 )
      {
        if ( v20 == v25 || *(_QWORD *)(v20 + 1544) == v25 )
          *a8 |= 1u;
      }
    }
    goto LABEL_11;
  }
LABEL_12:
  if ( v16 )
  {
    sub_1402AD030(v16 + 21);
    sub_140366814(v16);
  }
  return v10;
}
