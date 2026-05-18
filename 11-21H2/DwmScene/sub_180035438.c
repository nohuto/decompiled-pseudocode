/*
 * XREFs of sub_180035438 @ 0x180035438
 * Callers:
 *     sub_18001AB5C @ 0x18001AB5C (sub_18001AB5C.c)
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180030740 @ 0x180030740 (sub_180030740.c)
 *     sub_180030834 @ 0x180030834 (sub_180030834.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180035438(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 *v15; // r9
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r9
  _QWORD *v20; // r8
  unsigned int v22; // [rsp+20h] [rbp-30h] BYREF
  int v23; // [rsp+28h] [rbp-28h]
  __int64 v24; // [rsp+30h] [rbp-20h]
  __int64 *v25; // [rsp+38h] [rbp-18h]
  _QWORD v26[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v27; // [rsp+70h] [rbp+20h] BYREF
  _QWORD *v28; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v29; // [rsp+88h] [rbp+38h] BYREF

  v29 = a4;
  v28 = a2;
  v23 = 0;
  v22 = 1;
  v6 = sub_18001D684();
  v7 = v6;
  v27 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::Display>::`vftable';
    sub_180030834(v6 + 16, a1, &v22, &v29);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = (_QWORD *)(v7 + 16);
  *a2 = v7 + 16;
  a2[1] = v7;
  if ( v7 != -16 )
  {
    v9 = *(_QWORD *)(v7 + 24);
    if ( !v9 || !*(_DWORD *)(v9 + 8) )
    {
      if ( v7 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
        v7 = a2[1];
      }
      v26[0] = v8;
      v26[1] = v7;
      v10 = 0LL;
      v11 = 0LL;
      if ( v7 )
      {
        v10 = v8;
        v11 = v7;
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
      }
      *v8 = v10;
      v12 = (volatile signed __int32 *)v8[1];
      v8[1] = v11;
      if ( v12 && _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      sub_180010910((__int64)v26);
    }
  }
  v23 = 3;
  v13 = a1 + 168;
  v14 = *(_QWORD *)(a1 + 168);
  if ( *(_QWORD *)(v13 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list too long");
  v24 = v13;
  v25 = 0LL;
  v15 = (__int64 *)sub_180011088(0x20uLL);
  v25 = v15;
  v16 = v15 + 2;
  v15[2] = 0LL;
  v15[3] = 0LL;
  v17 = a2[1];
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v15 = v25;
  }
  *v16 = *a2;
  v16[1] = a2[1];
  ++*(_QWORD *)(v13 + 8);
  v28 = (_QWORD *)v14;
  v27 = *(_QWORD *)(v14 + 8);
  sub_180030740(v15, (__int64 *)&v28);
  sub_180030740((__int64 *)(v18 + 8), &v27);
  *(_QWORD *)(v14 + 8) = v19;
  *v20 = v19;
  return a2;
}
