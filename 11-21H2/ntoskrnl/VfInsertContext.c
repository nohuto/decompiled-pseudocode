/*
 * XREFs of VfInsertContext @ 0x1405FE110
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A835CC @ 0x140A835CC (sub_140A835CC.c)
 *     sub_140A8360C @ 0x140A8360C (sub_140A8360C.c)
 *     sub_140A8362C @ 0x140A8362C (sub_140A8362C.c)
 *     sub_140A8368C @ 0x140A8368C (sub_140A8368C.c)
 *     sub_140A836B4 @ 0x140A836B4 (sub_140A836B4.c)
 *     sub_140A83764 @ 0x140A83764 (sub_140A83764.c)
 */

__int64 __fastcall VfInsertContext(unsigned __int16 *a1)
{
  unsigned int v1; // ebx
  unsigned int v4; // r8d
  volatile signed __int64 *v5; // rsi
  signed __int64 v6; // rax
  volatile signed __int64 v7; // rax
  __int64 v8; // rcx

  v1 = 0;
  if ( !dword_140C1B2A0 )
    return 3221225473LL;
  if ( !(unsigned __int8)sub_140A8368C(*a1, a1[1]) )
    return 3221225485LL;
  v5 = (volatile signed __int64 *)sub_140A8362C(*((_QWORD *)a1 + 1), v4);
  if ( !v5 )
    return 3221225659LL;
  while ( !(unsigned __int8)sub_140A836B4(v5) )
  {
    v6 = sub_140A835CC(*a1);
    if ( !v6 )
      return 3221225626LL;
    if ( !_InterlockedCompareExchange64(v5, v6, 0LL) )
      break;
    sub_140A8360C(v6);
  }
  v7 = *v5;
  v8 = a1[1];
  if ( *(_QWORD *)(*v5 + 8 * v8 + 8) )
  {
    v1 = -1073741270;
  }
  else
  {
    *(_QWORD *)(v7 + 8 * v8 + 8) = a1;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 4));
    _InterlockedIncrement((volatile signed __int32 *)a1 + 1);
  }
  sub_140A83764(v5);
  return v1;
}
