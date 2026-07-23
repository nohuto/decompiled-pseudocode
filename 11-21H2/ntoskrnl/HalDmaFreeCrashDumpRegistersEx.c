/*
 * XREFs of HalDmaFreeCrashDumpRegistersEx @ 0x140398080
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14045746C @ 0x14045746C (sub_14045746C.c)
 */

__int64 __fastcall HalDmaFreeCrashDumpRegistersEx(__int64 a1, signed int a2)
{
  __int64 v3; // rsi
  int v4; // eax
  int v5; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx
  char v10; // al
  _DWORD *v11; // rdx
  __int64 v12; // r8
  char v13; // cl
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax

  if ( !a1 || (unsigned int)a2 > 1 )
    return 3221225485LL;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 4LL * a2 + 272);
  if ( !v4 )
    return 3221225473LL;
  v5 = v4 - 1;
  *(_DWORD *)(a1 + 4LL * a2 + 272) = v5;
  if ( !v5 )
  {
    if ( *(_DWORD *)(a1 + 4LL * a2 + 264) )
    {
      v7 = *(_QWORD *)(a1 + 8LL * a2 + 248);
      if ( v7 )
      {
        *(_QWORD *)(v7 + 56) = v7;
        v7 = *(_QWORD *)(a1 + 8 * v3 + 248);
      }
      if ( *(_DWORD *)(a1 + 512) == 3 )
      {
        _mm_lfence();
        v8 = *(_QWORD *)(a1 + 8 * v3 + 248);
        sub_14042A5E0(v8 + 24, v7);
        sub_14042A5E0(*(_QWORD *)(v8 + 24), v9);
        v7 = *(_QWORD *)(a1 + 8 * v3 + 248);
      }
      sub_14045746C(a1, v7, *(unsigned int *)(a1 + 4 * v3 + 264));
      *(_QWORD *)(a1 + 8 * v3 + 248) = 0LL;
      *(_DWORD *)(a1 + 4 * v3 + 264) = 0;
    }
    v10 = 1;
    v11 = (_DWORD *)(a1 + 272);
    v12 = 2LL;
    do
    {
      v13 = 0;
      if ( *v11++ == 0 )
        v13 = v10;
      v10 = v13;
      --v12;
    }
    while ( v12 );
    if ( v13 )
    {
      v15 = (_QWORD *)(a1 + 280);
      v16 = *v15;
      if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v17 = (_QWORD *)v15[1], (_QWORD *)*v17 != v15) )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
    }
  }
  return 0LL;
}
