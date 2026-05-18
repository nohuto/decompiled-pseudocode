/*
 * XREFs of sub_18003460C @ 0x18003460C
 * Callers:
 *     sub_1800347F0 @ 0x1800347F0 (sub_1800347F0.c)
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180018350 @ 0x180018350 (sub_180018350.c)
 *     sub_180033B58 @ 0x180033B58 (sub_180033B58.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18003460C(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int128 v18; // [rsp+20h] [rbp-40h] BYREF
  __int128 v19; // [rsp+30h] [rbp-30h] BYREF
  __int128 v20; // [rsp+40h] [rbp-20h] BYREF
  __int128 v21; // [rsp+50h] [rbp-10h] BYREF

  v4 = *a2;
  v19 = 0LL;
  v5 = *(_QWORD *)(v4 + 64);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 8);
    while ( v6 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6);
      if ( v7 == v6 )
      {
        v19 = *(_OWORD *)(v4 + 56);
        break;
      }
    }
  }
  v18 = 0LL;
  v8 = *(_QWORD *)(v19 + 80);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 8);
    while ( v9 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9);
      if ( v10 == v9 )
      {
        v18 = *(_OWORD *)(v19 + 72);
        break;
      }
    }
  }
  sub_180010910((__int64)&v19);
  v20 = 0LL;
  if ( *((_QWORD *)&v18 + 1) )
  {
    v20 = v18;
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 12LL));
  }
  v11 = (__int64 *)sub_180033B58((__int64 *)(a1 + 728), (__int64 *)&v20);
  v12 = v11[1];
  if ( v12 == v11[2] )
  {
    sub_180018350(v11, (char *)v12, a2);
  }
  else
  {
    *(_QWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)v12 = *a2;
    *(_QWORD *)(v12 + 8) = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    v11[1] += 16LL;
  }
  v13 = *((_QWORD *)&v20 + 1);
  if ( *((_QWORD *)&v20 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  }
  v21 = 0LL;
  if ( *((_QWORD *)&v18 + 1) )
  {
    v21 = v18;
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 12LL));
  }
  v14 = (_QWORD *)sub_180033B58((__int64 *)(a1 + 728), (__int64 *)&v21);
  v15 = (__int64)(v14[1] - *v14) >> 4;
  v16 = *((_QWORD *)&v21 + 1);
  if ( *((_QWORD *)&v21 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  }
  sub_180010910((__int64)&v18);
  sub_180010910((__int64)a2);
  return v15 - 1;
}
