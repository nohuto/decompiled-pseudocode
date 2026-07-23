/*
 * XREFs of sub_140AF5AE4 @ 0x140AF5AE4
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140AF5C0C @ 0x140AF5C0C (sub_140AF5C0C.c)
 *     sub_140AF6408 @ 0x140AF6408 (sub_140AF6408.c)
 */

__int64 __fastcall sub_140AF5AE4(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  ULONG_PTR v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  _QWORD *v11; // rax
  unsigned __int64 v13; // rbx
  _BYTE v14[512]; // [rsp+20h] [rbp-218h] BYREF

  qword_140C590C0 = -1LL;
  sub_140AF6408(a1, v14);
  v2 = a1 + 352;
  v3 = *(_QWORD *)(v2 + 8);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      return 1LL;
    v13 = v3 ^ (v2 | 1);
  }
  else
  {
    v13 = *(_QWORD *)(v2 + 8);
  }
  while ( v13 )
  {
    v6 = *(int *)(v13 + 24);
    if ( (unsigned int)v6 > 0x2A || (v7 = 0x5C5C0C00048LL, !_bittest64(&v7, v6)) )
    {
      v8 = *(_QWORD *)(v13 + 32);
      v9 = *(_QWORD *)(v13 + 40);
      if ( v9 + v8 > qword_140C590C8 )
        qword_140C590C8 = v9 + v8 - 1;
      qword_140C590D0 += v9;
      if ( v8 < qword_140C590C0 )
        qword_140C590C0 = v8;
      v10 = *(_DWORD *)(v13 + 24);
      if ( v10 == 2 || v10 == 24 )
        sub_140AF5C0C(v13, v14);
    }
    v11 = *(_QWORD **)(v13 + 8);
    v4 = v13;
    if ( v11 )
    {
      v5 = (_QWORD *)*v11;
      v13 = *(_QWORD *)(v13 + 8);
      if ( *v11 )
      {
        do
        {
          v13 = (unsigned __int64)v5;
          v5 = (_QWORD *)*v5;
        }
        while ( v5 );
      }
    }
    else
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v13 || *(_QWORD *)v13 == v4 )
          break;
        v4 = v13;
      }
    }
  }
  return 1LL;
}
