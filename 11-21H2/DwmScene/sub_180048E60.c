/*
 * XREFs of sub_180048E60 @ 0x180048E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001872C @ 0x18001872C (sub_18001872C.c)
 *     sub_180049898 @ 0x180049898 (sub_180049898.c)
 *     sub_1800FA4C4 @ 0x1800FA4C4 (sub_1800FA4C4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180048E60(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  unsigned __int16 v11; // cx
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  __int128 v15; // [rsp+40h] [rbp-10h] BYREF

  sub_18001872C(&v14, a3);
  if ( (_QWORD)v14 )
    v7 = *(_QWORD *)(v14 + 152);
  else
    v7 = *(_QWORD *)(v6 + 32);
  if ( *(_WORD *)(v6 + 24) != 511 )
  {
    v13 = 0LL;
    v8 = *(_QWORD *)(v6 + 16);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 8);
      while ( v9 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9);
        if ( v10 == v9 )
        {
          v13 = *(_OWORD *)(v6 + 8);
          break;
        }
      }
    }
    if ( (_QWORD)v13 )
    {
      v11 = *(_WORD *)(v6 + 24);
      v15 = 0LL;
      if ( *((_QWORD *)&v14 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
      v15 = v14;
      sub_180049898(v13, &v15, v11, v7);
    }
    sub_180010910((__int64)&v13);
  }
  sub_1800FA4C4(a2, v5, v7);
  sub_180010910((__int64)&v14);
  sub_180010910((__int64)a3);
  return a2;
}
