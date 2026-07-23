/*
 * XREFs of HalDmaAllocateCrashDumpRegistersEx @ 0x1403B58F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403B37F0 @ 0x1403B37F0 (sub_1403B37F0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_14045746C @ 0x14045746C (sub_14045746C.c)
 *     sub_140512C04 @ 0x140512C04 (sub_140512C04.c)
 */

__int64 __fastcall HalDmaAllocateCrashDumpRegistersEx(
        __int64 a1,
        unsigned int a2,
        signed int a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 v5; // rsi
  unsigned int *v8; // r15
  __int64 v9; // rdi
  __int64 *i; // rdx
  __int64 result; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rbp
  int v17; // r13d
  __int64 v18; // rcx
  __int64 v19; // r12
  _QWORD *v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v30; // eax
  unsigned int v31; // [rsp+90h] [rbp+8h] BYREF

  v5 = a2;
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v8 = a5;
  if ( !a5 || (unsigned int)a3 > 1 )
    return 3221225485LL;
  if ( !*(_BYTE *)(a1 + 432) && *(_BYTE *)(a1 + 437) )
  {
    *(_QWORD *)a4 = 0LL;
    *v8 = a2;
    v9 = a3;
    *(_QWORD *)(a1 + 232) = 0LL;
    *(_DWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 8LL * a3 + 248) = 0LL;
    *(_DWORD *)(a1 + 4LL * a3 + 264) = 0;
    goto LABEL_9;
  }
  v9 = a3;
  v14 = *(_DWORD *)(a1 + 4LL * a3 + 264);
  if ( a2 <= v14 )
  {
    *a5 = a2;
    *(_QWORD *)a4 = *(_QWORD *)(a1 + 8LL * a3 + 248);
    goto LABEL_9;
  }
  if ( a2 > *(_DWORD *)(a1 + 224) )
    return 3221225485LL;
  if ( !KeGetCurrentIrql() )
  {
    v15 = sub_140456F16(a1, a2);
    v16 = v15;
    if ( v15 )
    {
      *(_QWORD *)(a1 + 8 * v9 + 248) = v15;
      *(_DWORD *)(a1 + 4 * v9 + 264) = v5;
      if ( *(_DWORD *)(a1 + 512) == 3 )
      {
        v17 = sub_14042A5E0(*(_QWORD *)(*(_QWORD *)(a1 + 504) + 40LL), v5 << 12);
        if ( v17 < 0 )
          goto LABEL_34;
        if ( sub_1403B37F0() )
        {
          v19 = sub_1403B1F04(v18, 8 * v5);
          if ( v19 )
          {
            v20 = (_QWORD *)v16;
            v21 = 0LL;
            do
            {
              *(_QWORD *)(v19 + 8 * v21) = *v20 >> 12;
              v21 = (unsigned int)(v21 + 1);
              v20 = (_QWORD *)v20[1];
            }
            while ( v20 );
            v17 = sub_14042A5E0(*(_QWORD *)(v16 + 24), 0LL);
            sub_1403B1B5C(v22, v19);
            if ( v17 >= 0 )
            {
              *(_BYTE *)(v16 + 64) = 1;
              goto LABEL_31;
            }
          }
LABEL_34:
          sub_14045746C(a1, v16, (unsigned int)v5);
          return (unsigned int)v17;
        }
      }
LABEL_31:
      *v8 = v5;
      *(_QWORD *)a4 = *(_QWORD *)(a1 + 8 * v9 + 248);
      goto LABEL_9;
    }
    return 3221225626LL;
  }
  if ( a1 != -264 && !*(_BYTE *)(a1 + 434) )
  {
    result = 3221225626LL;
LABEL_40:
    *(_QWORD *)a4 = 0LL;
    *v8 = *(_DWORD *)(a1 + 4LL * a3 + 264);
    return result;
  }
  if ( dword_140C4E248 == 1 )
  {
    result = 3221225659LL;
    goto LABEL_40;
  }
  v31 = a2 - v14;
  v24 = sub_140512C04(a1, &v31);
  v25 = v24;
  if ( !v24 )
  {
    *(_QWORD *)a4 = 0LL;
    *v8 = v14;
    return 3221225626LL;
  }
  v26 = v31;
  if ( v31 != (_DWORD)v5 - v14 )
  {
    v23 = v31 + v14;
    *(_QWORD *)a4 = 0LL;
    *v8 = v23;
    sub_14045746C(a1, v25, v26);
    return 3221225626LL;
  }
  if ( *(_QWORD *)(a1 + 8 * v9 + 248) )
  {
    _mm_lfence();
    v27 = *(_DWORD *)(a1 + 4 * v9 + 264);
    v28 = *(_QWORD *)(a1 + 8 * v9 + 248);
    if ( v27 > 1 )
    {
      v29 = v27 - 1;
      do
      {
        v28 = *(_QWORD *)(v28 + 8);
        --v29;
      }
      while ( v29 );
    }
    v30 = v31;
    *(_QWORD *)(v28 + 8) = v25;
    *(_DWORD *)(a1 + 4 * v9 + 264) += v30;
    *(_DWORD *)(a1 + 240) = v5;
  }
  else
  {
    *(_QWORD *)(a1 + 232) = v24;
    *(_DWORD *)(a1 + 240) = v5;
    *(_QWORD *)(a1 + 8 * v9 + 248) = v24;
    *(_DWORD *)(a1 + 4 * v9 + 264) = v5;
  }
  *(_QWORD *)a4 = *(_QWORD *)(a1 + 8 * v9 + 248);
  *v8 = v5;
LABEL_9:
  if ( *(_QWORD *)a4 )
    *(_QWORD *)(*(_QWORD *)a4 + 56LL) = *(_QWORD *)a4;
  ++*(_DWORD *)(a1 + 4 * v9 + 272);
  for ( i = (__int64 *)qword_140C4E270; i != &qword_140C4E270; i = (__int64 *)*i )
  {
    if ( i - 35 == (__int64 *)a1 )
      return 0LL;
  }
  v12 = (_QWORD *)qword_140C4E278;
  v13 = (_QWORD *)(a1 + 280);
  if ( *(__int64 **)qword_140C4E278 != &qword_140C4E270 )
    __fastfail(3u);
  *v13 = &qword_140C4E270;
  v13[1] = v12;
  *v12 = v13;
  qword_140C4E278 = (__int64)v13;
  return 0LL;
}
