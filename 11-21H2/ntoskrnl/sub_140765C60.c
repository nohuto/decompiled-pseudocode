/*
 * XREFs of sub_140765C60 @ 0x140765C60
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_14095E4BC @ 0x14095E4BC (sub_14095E4BC.c)
 * Callees:
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14078B2D4 @ 0x14078B2D4 (sub_14078B2D4.c)
 */

__int64 __fastcall sub_140765C60(__int64 a1, _WORD *a2, __int128 *a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int128 v9; // xmm6
  __int64 v10; // r12
  void *v11; // r15
  __int64 v12; // r13
  __int64 result; // rax
  __int64 v14; // r11
  int v15; // ebx
  __int128 v16; // xmm0
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rax
  _WORD Src[200]; // [rsp+20h] [rbp-1E8h] BYREF

  if ( a6 )
    *a6 = 0;
  v9 = *(_OWORD *)(a1 + 112);
  v10 = *(_QWORD *)(a1 + 48);
  v11 = (void *)(a1 + 160);
  v12 = *(_QWORD *)(a1 + 56);
  result = sub_1402E0200(Src, 200LL, a1 + 160);
  v15 = result;
  if ( !(_DWORD)result )
  {
    v16 = *a3;
    v17 = -1LL;
    *(_QWORD *)(a1 + 48) = v14;
    *(_OWORD *)(a1 + 112) = v16;
    *(_QWORD *)(a1 + 56) = a5;
    while ( *a2 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a2[v18] );
      memmove(v11, a2, 2 * v18 + 2);
      v15 = sub_14078B2D4(a1);
      if ( v15 < 0 )
      {
        if ( v15 == -1073741536 )
          v15 = -2147483608;
        break;
      }
      if ( a6 )
        ++*a6;
      v19 = -1LL;
      do
        ++v19;
      while ( a2[v19] );
      a2 += v19 + 1;
    }
    *(_OWORD *)(a1 + 112) = v9;
    *(_QWORD *)(a1 + 48) = v10;
    *(_QWORD *)(a1 + 56) = v12;
    do
      ++v17;
    while ( Src[v17] );
    memmove(v11, Src, 2 * v17 + 2);
    return (unsigned int)v15;
  }
  return result;
}
