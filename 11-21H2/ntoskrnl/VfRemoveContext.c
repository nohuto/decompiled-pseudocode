/*
 * XREFs of VfRemoveContext @ 0x1405FE2E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8360C @ 0x140A8360C (sub_140A8360C.c)
 *     sub_140A8362C @ 0x140A8362C (sub_140A8362C.c)
 *     sub_140A8368C @ 0x140A8368C (sub_140A8368C.c)
 *     sub_140A836B4 @ 0x140A836B4 (sub_140A836B4.c)
 *     sub_140A83764 @ 0x140A83764 (sub_140A83764.c)
 */

__int64 __fastcall VfRemoveContext(unsigned __int16 *a1)
{
  int v2; // r14d
  unsigned int v4; // r8d
  __int64 v5; // rax
  volatile __int64 *v6; // rsi
  volatile __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx

  v2 = -1073741275;
  if ( !dword_140C1B2A0 )
    return 3221225473LL;
  if ( !(unsigned __int8)sub_140A8368C(*a1, a1[1]) )
    return 3221225485LL;
  v5 = sub_140A8362C(*((_QWORD *)a1 + 1), v4);
  v6 = (volatile __int64 *)v5;
  if ( !v5 )
    return 3221225659LL;
  if ( !(unsigned __int8)sub_140A836B4(v5) )
    return (unsigned int)v2;
  v7 = *v6;
  v8 = a1[1];
  if ( *(unsigned __int16 **)(*v6 + 8 * v8 + 8) != a1
    || (*(_QWORD *)(v7 + 8 * v8 + 8) = 0LL,
        v2 = 0,
        _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 4), 0xFFFFFFFF) != 1) )
  {
    sub_140A83764(v6);
    if ( v2 >= 0 && !((_DWORD)v9 + _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 1, v9)) )
      sub_14042A5E0(a1, v9);
    return (unsigned int)v2;
  }
  _InterlockedExchange64(v6, 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 1, 0xFFFFFFFF) == 1 )
    sub_14042A5E0(a1, 0xFFFFFFFFLL);
  sub_140A8360C(v7);
  return 0LL;
}
