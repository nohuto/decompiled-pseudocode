/*
 * XREFs of sub_1800515D0 @ 0x1800515D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     sub_1800521F8 @ 0x1800521F8 (sub_1800521F8.c)
 *     sub_180092300 @ 0x180092300 (sub_180092300.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800515D0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int128 v21; // [rsp+20h] [rbp-50h] BYREF
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  __int128 v24; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-10h] BYREF

  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  v25[0] = *a2;
  v25[1] = v4;
  sub_180010910((__int64)v25);
  sub_18002C7C4(*a2 + 24LL);
  v5 = 0LL;
  if ( sub_1800521F8(a1) )
  {
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD *)(a1 + 104);
      if ( sub_1800122C0((_QWORD *)(v6 + v7 + 40)) )
      {
        v9 = *v8;
        v21 = 0LL;
        v10 = a2[1];
        if ( v10 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
          v10 = a2[1];
        }
        *(_QWORD *)&v21 = *a2;
        *((_QWORD *)&v21 + 1) = v10;
        sub_180092300(v9, &v21);
      }
      if ( sub_1800122C0((_QWORD *)(v6 + v7 + 24)) )
      {
        v12 = *v11;
        v22 = 0LL;
        v13 = a2[1];
        if ( v13 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
          v13 = a2[1];
        }
        *(_QWORD *)&v22 = *a2;
        *((_QWORD *)&v22 + 1) = v13;
        sub_180092300(v12, &v22);
      }
      if ( sub_1800122C0((_QWORD *)(v6 + v7 + 56)) )
      {
        v15 = *v14;
        v23 = 0LL;
        v16 = a2[1];
        if ( v16 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
          v16 = a2[1];
        }
        *(_QWORD *)&v23 = *a2;
        *((_QWORD *)&v23 + 1) = v16;
        sub_180092300(v15, &v23);
      }
      if ( sub_1800122C0((_QWORD *)(v6 + v7 + 72)) )
      {
        v18 = *v17;
        v24 = 0LL;
        v19 = a2[1];
        if ( v19 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
          v19 = a2[1];
        }
        *(_QWORD *)&v24 = *a2;
        *((_QWORD *)&v24 + 1) = v19;
        sub_180092300(v18, &v24);
      }
      ++v5;
      v6 += 88LL;
    }
    while ( v5 < sub_1800521F8(a1) );
  }
  return sub_180010910((__int64)a2);
}
