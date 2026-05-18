/*
 * XREFs of sub_180045AA4 @ 0x180045AA4
 * Callers:
 *     sub_1800453E0 @ 0x1800453E0 (sub_1800453E0.c)
 *     sub_1800457FC @ 0x1800457FC (sub_1800457FC.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     sub_18003F590 @ 0x18003F590 (sub_18003F590.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_180045AA4(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  volatile signed __int32 *v17; // rcx
  __int128 v19; // [rsp+20h] [rbp-30h] BYREF
  __int128 v20; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-10h] BYREF

  sub_18002C7C4((__int64)(a1 + 2));
  v19 = 0LL;
  v6 = a1[1];
  if ( !v6 )
LABEL_25:
    sub_1800120F4();
  v7 = *(_DWORD *)(v6 + 8);
  do
  {
    if ( !v7 )
      goto LABEL_25;
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
  }
  while ( v8 != v7 );
  *(_QWORD *)&v19 = *a1;
  v9 = a1[1];
  *((_QWORD *)&v19 + 1) = v9;
  v10 = sub_18001D684();
  if ( v10 )
  {
    v11 = *a3;
    v20 = 0LL;
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v20 = v19;
    v12 = sub_18003F590(v10, &v20, v11);
  }
  else
  {
    v12 = 0LL;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v13 = sub_18001D684();
  if ( v13 )
  {
    *(_DWORD *)(v13 + 8) = 1;
    *(_DWORD *)(v13 + 12) = 1;
    *(_QWORD *)v13 = &std::_Ref_count<Spectre::Engine::SceneNode>::`vftable';
    *(_QWORD *)(v13 + 16) = v12;
  }
  *a2 = v12;
  a2[1] = v13;
  if ( v12 )
  {
    v14 = *(_QWORD *)(v12 + 16);
    if ( !v14 || !*(_DWORD *)(v14 + 8) )
    {
      if ( v13 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        v13 = a2[1];
      }
      v21[0] = v12;
      v21[1] = v13;
      v15 = 0LL;
      v16 = 0LL;
      if ( v13 )
      {
        v15 = v12;
        v16 = v13;
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 12));
      }
      *(_QWORD *)(v12 + 8) = v15;
      v17 = *(volatile signed __int32 **)(v12 + 16);
      *(_QWORD *)(v12 + 16) = v16;
      if ( v17 && _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      sub_180010910((__int64)v21);
    }
  }
  sub_180010910((__int64)&v19);
  return a2;
}
