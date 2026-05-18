/*
 * XREFs of sub_180066C28 @ 0x180066C28
 * Callers:
 *     sub_180066DF0 @ 0x180066DF0 (sub_180066DF0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011198 @ 0x180011198 (sub_180011198.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180035680 @ 0x180035680 (sub_180035680.c)
 *     sub_180066E60 @ 0x180066E60 (sub_180066E60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_180066C28(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rcx
  __int64 *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // rdx
  __int64 v16; // rcx
  __int128 v18; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h] BYREF
  char v21; // [rsp+50h] [rbp-10h]

  v4 = sub_18001D684();
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::Material>::`vftable';
    sub_180066E60(v4 + 16);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5 + 16;
  *a2 = v5 + 16;
  a2[1] = v5;
  if ( v5 != -16 )
  {
    v7 = *(_QWORD *)(v5 + 120);
    if ( !v7 || !*(_DWORD *)(v7 + 8) )
    {
      if ( v5 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
        v5 = a2[1];
      }
      v19[0] = v6;
      v19[1] = v5;
      v8 = 0LL;
      v9 = 0LL;
      if ( v5 )
      {
        v8 = v6;
        v9 = v5;
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
      }
      *(_QWORD *)(v6 + 96) = v8;
      v10 = *(volatile signed __int32 **)(v6 + 104);
      *(_QWORD *)(v6 + 104) = v9;
      if ( v10 && _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      sub_180010910((__int64)v19);
    }
  }
  sub_18002C460((__int64)(a1 + 101), (__int64)&v20);
  v11 = a1 + 108;
  v18 = 0LL;
  v12 = a2[1];
  v13 = 0LL;
  v14 = 0LL;
  if ( v12 )
  {
    v13 = *a2;
    *(_QWORD *)&v18 = *a2;
    *((_QWORD *)&v18 + 1) = v12;
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
    v14 = v12;
  }
  v15 = (__int64 *)a1[109];
  if ( v15 == (__int64 *)a1[110] )
  {
    sub_180011198(a1 + 108, (__int64)v15, &v18);
    v16 = *((_QWORD *)&v18 + 1);
  }
  else
  {
    *v15 = v13;
    v15[1] = v14;
    v16 = 0LL;
    *((_QWORD *)&v18 + 1) = 0LL;
    a1[109] += 16LL;
  }
  if ( v16 && _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64, __int64 *, int, _QWORD))(**((_QWORD **)&v18 + 1) + 8LL))(
      *((_QWORD *)&v18 + 1),
      v15,
      v14,
      v11,
      3,
      v18);
  if ( v21 )
    j_LanguageEnumProc(v20);
  sub_180035680((__int64)a1, *a2);
  return a2;
}
