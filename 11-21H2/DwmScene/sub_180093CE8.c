/*
 * XREFs of sub_180093CE8 @ 0x180093CE8
 * Callers:
 *     sub_180093E38 @ 0x180093E38 (sub_180093E38.c)
 * Callees:
 *     sub_180011198 @ 0x180011198 (sub_180011198.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180035680 @ 0x180035680 (sub_180035680.c)
 *     sub_180093E58 @ 0x180093E58 (sub_180093E58.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_180093CE8(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rdx
  __int64 v11; // rcx
  __int128 v13; // [rsp+28h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+40h] [rbp-10h]

  v4 = sub_18001D684();
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::VertexLayout>::`vftable';
    sub_180093E58(v4 + 16);
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = v5 + 16;
  a2[1] = v5;
  sub_18002C460((__int64)(a1 + 101), (__int64)&v14);
  v6 = a1 + 108;
  v13 = 0LL;
  v7 = a2[1];
  v8 = 0LL;
  v9 = 0LL;
  if ( v7 )
  {
    v8 = *a2;
    *(_QWORD *)&v13 = *a2;
    *((_QWORD *)&v13 + 1) = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
    v9 = v7;
  }
  v10 = (__int64 *)a1[109];
  if ( v10 == (__int64 *)a1[110] )
  {
    sub_180011198(a1 + 108, (__int64)v10, &v13);
    v11 = *((_QWORD *)&v13 + 1);
  }
  else
  {
    *v10 = v8;
    v10[1] = v9;
    v11 = 0LL;
    *((_QWORD *)&v13 + 1) = 0LL;
    a1[109] += 16LL;
  }
  if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64, __int64 *, int, _QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(
      *((_QWORD *)&v13 + 1),
      v10,
      v9,
      v6,
      3,
      v13);
  if ( v15 )
    j_LanguageEnumProc(v14);
  sub_180035680((__int64)a1, *a2);
  return a2;
}
