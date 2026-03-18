/*
 * XREFs of ?RebaseSums@?$LinearFitT@$0BAA@@@QEAA_NXZ @ 0x1C0016AF0
 * Callers:
 *     ?SmoothenFrame@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0I@Z @ 0x1C00048C0 (-SmoothenFrame@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0I@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall LinearFitT<256>::RebaseSums(__int64 a1)
{
  int v1; // r13d
  _QWORD *v2; // r10
  int v3; // r11d
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // r12
  signed __int64 v11; // r8
  signed __int64 v12; // r9
  __int128 v13; // rax
  __int128 v14; // rax
  char result; // al

  v1 = *(_DWORD *)(a1 + 8);
  v2 = (_QWORD *)(a1 + 104);
  v3 = v1;
  *(_QWORD *)(a1 + 80) = 0LL;
  v4 = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  v5 = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  v6 = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 104);
  v9 = 256LL;
  *(_QWORD *)(a1 + 40) = v8;
  v10 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 48) = v10;
  do
  {
    v11 = *v2 - v8;
    v12 = v2[1] - v10;
    v13 = v11 * (__int128)v11;
    if ( (__int64)v13 >= 0 )
    {
      if ( is_mul_ok(v11, v11) )
        goto LABEL_4;
LABEL_8:
      *(_QWORD *)&v13 = -1LL;
      goto LABEL_4;
    }
    if ( *((_QWORD *)&v13 + 1) != -1LL )
      goto LABEL_8;
LABEL_4:
    v4 += v13;
    v14 = v11 * (__int128)v12;
    if ( (__int64)v14 >= 0 )
    {
      if ( is_mul_ok(v11, v12) )
        goto LABEL_6;
LABEL_9:
      *(_QWORD *)&v14 = -1LL;
      goto LABEL_6;
    }
    if ( *((_QWORD *)&v14 + 1) != -1LL )
      goto LABEL_9;
LABEL_6:
    v5 += v14;
    *(_QWORD *)(a1 + 80) = v4;
    v6 += v11;
    *(_QWORD *)(a1 + 72) = v5;
    v7 += v12;
    *(_QWORD *)(a1 + 56) = v6;
    ++v3;
    *(_QWORD *)(a1 + 64) = v7;
    v2 += 2;
    *(_DWORD *)(a1 + 8) = v3;
    --v9;
  }
  while ( v9 );
  result = 1;
  *(_DWORD *)(a1 + 8) = v1;
  return result;
}
