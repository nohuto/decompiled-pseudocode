/*
 * XREFs of sub_14027F03C @ 0x14027F03C
 * Callers:
 *     CcCoherencyFlushAndPurgeCache @ 0x14027EF40 (CcCoherencyFlushAndPurgeCache.c)
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 * Callees:
 *     sub_14027E174 @ 0x14027E174 (sub_14027E174.c)
 *     sub_140283E8C @ 0x140283E8C (sub_140283E8C.c)
 *     sub_1402867DC @ 0x1402867DC (sub_1402867DC.c)
 */

__int64 __fastcall sub_14027F03C(int a1, __int64 *a2, int a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]
  __int128 v10; // [rsp+50h] [rbp-18h]
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v4 = a4 & 1 | 0x20;
  if ( (a4 & 2) == 0 )
    v4 = a4 & 1;
  if ( a2 )
  {
    v7 = *a2;
    a2 = &v11;
    v11 = v7;
  }
  if ( !(unsigned int)sub_140283E8C(a1, (_DWORD)a2, a3, v4 >= 0x20, (__int64)&v8) )
    return 0LL;
  v5 = sub_14027E174(&v8, 0LL, 0, v4);
  sub_1402867DC(v8, *((_QWORD *)&v9 + 1), v10);
  return v5;
}
