/*
 * XREFs of sub_14050C5B0 @ 0x14050C5B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_1403A572C @ 0x1403A572C (sub_1403A572C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14050C5B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r10
  signed __int64 v11; // rax
  int v12; // r9d
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  signed __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  signed __int32 v23[18]; // [rsp+0h] [rbp-48h] BYREF

  ++dword_140D01734;
  *(_QWORD *)(qword_140C4E390 + 112) = qword_140D01728;
  qword_140D01728 = 0LL;
  v3 = *(_QWORD *)(qword_140C4E378 + 16);
  if ( v3 )
  {
    do
    {
      v4 = qword_140C4E390;
      v5 = *(_QWORD *)(qword_140C4E390 + 192);
      if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
      {
        v19 = sub_140303720(qword_140C4E390);
        v21 = sub_14042A5E0(v19, v20);
        v6 = *(_QWORD *)(v4 + 208);
        v17 = v21;
      }
      else
      {
        do
        {
          v6 = *(_QWORD *)(v4 + 208);
          do
          {
            v7 = *(_QWORD *)(v4 + 200);
            v8 = sub_140303720(v4);
            v10 = sub_14042A5E0(v8, v9);
            _InterlockedOr(v23, 0);
            v11 = *(_QWORD *)(v4 + 200);
          }
          while ( v7 != v11 );
        }
        while ( v6 != *(_QWORD *)(v4 + 208) );
        v12 = *(_DWORD *)(v4 + 220);
        v13 = v7 ^ v10;
        if ( _bittest64((const __int64 *)&v13, (unsigned __int8)(v12 - 1)) )
        {
          if ( v12 == 64 )
            v14 = -1LL;
          else
            v14 = (1LL << v12) - 1;
          v15 = 1LL;
          if ( v12 != 64 )
            v15 = 1LL << v12;
          v16 = v7 & v14;
          v17 = v10 | v7 ^ v16;
          if ( v10 < v16 )
            v17 += v15;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v17, v11);
        }
        else
        {
          if ( v12 == 64 )
            v18 = -1LL;
          else
            v18 = (1LL << v12) - 1;
          v17 = v10 | v7 & ~v18;
        }
      }
    }
    while ( sub_1403A572C(v6 + v17, v5, *(_QWORD *)(qword_140C4E378 + 192)) < v3 );
  }
  return sub_14042A5E0(a1, a2);
}
