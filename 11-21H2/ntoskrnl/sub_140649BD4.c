/*
 * XREFs of sub_140649BD4 @ 0x140649BD4
 * Callers:
 *     sub_140A1641C @ 0x140A1641C (sub_140A1641C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140649BD4(_WORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r10
  _WORD *v5; // rax
  __int64 result; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  _WORD *v9; // rcx
  __int64 v10; // r8
  __int16 v11; // ax
  _WORD *v12; // rax

  v4 = 260LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = 3221225485LL;
  if ( !v4 )
    return 3221225485LL;
  v7 = a4 >> 1;
  if ( v7 <= 0x7FFFFFFE )
  {
    v8 = ((v4 - 260) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)) + 260;
    v9 = (_WORD *)((char *)a1 + (-(__int64)(v4 != 0) & (2 * (260 - v4))));
    if ( ((v4 - 260) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)) != 0xFFFFFFFFFFFFFEFCuLL )
    {
      v10 = a3 - (_QWORD)v9;
      do
      {
        if ( !v7 )
          break;
        v11 = *(_WORD *)((char *)v9 + v10);
        if ( !v11 )
          break;
        *v9 = v11;
        --v7;
        ++v9;
        --v8;
      }
      while ( v8 );
    }
    v12 = v9 - 1;
    if ( v8 )
      v12 = v9;
    *v12 = 0;
    return v8 == 0 ? 0x80000005 : 0;
  }
  return result;
}
