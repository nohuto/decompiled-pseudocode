/*
 * XREFs of sub_18004D278 @ 0x18004D278
 * Callers:
 *     sub_18004D254 @ 0x18004D254 (sub_18004D254.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011198 @ 0x180011198 (sub_180011198.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180035680 @ 0x180035680 (sub_180035680.c)
 *     sub_18004DB0C @ 0x18004DB0C (sub_18004DB0C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_18004D278(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rcx
  __int64 *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *v18; // rdx
  __int64 v19; // rcx
  __int128 v21; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v22[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  char v24; // [rsp+50h] [rbp-10h]

  v7 = sub_18001D684();
  v8 = v7;
  if ( v7 )
  {
    *(_OWORD *)v7 = 0LL;
    *(_DWORD *)(v7 + 8) = 1;
    *(_DWORD *)(v7 + 12) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj2<Spectre::Engine::VertexBuffer>::`vftable';
    sub_18004DB0C(v7 + 16, a4);
  }
  else
  {
    v8 = 0LL;
  }
  v9 = v8 + 16;
  *a2 = v8 + 16;
  a2[1] = v8;
  if ( v8 != -16 )
  {
    v10 = *(_QWORD *)(v8 + 120);
    if ( !v10 || !*(_DWORD *)(v10 + 8) )
    {
      if ( v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        v8 = a2[1];
      }
      v22[0] = v9;
      v22[1] = v8;
      v11 = 0LL;
      v12 = 0LL;
      if ( v8 )
      {
        v11 = v9;
        v12 = v8;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
      }
      *(_QWORD *)(v9 + 96) = v11;
      v13 = *(volatile signed __int32 **)(v9 + 104);
      *(_QWORD *)(v9 + 104) = v12;
      if ( v13 && _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      sub_180010910((__int64)v22);
    }
  }
  sub_18002C460((__int64)(a1 + 101), (__int64)&v23);
  v14 = a1 + 108;
  v21 = 0LL;
  v15 = a2[1];
  v16 = 0LL;
  v17 = 0LL;
  if ( v15 )
  {
    v16 = *a2;
    *(_QWORD *)&v21 = *a2;
    *((_QWORD *)&v21 + 1) = v15;
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 12));
    v17 = v15;
  }
  v18 = (__int64 *)a1[109];
  if ( v18 == (__int64 *)a1[110] )
  {
    sub_180011198(a1 + 108, (__int64)v18, &v21);
    v19 = *((_QWORD *)&v21 + 1);
  }
  else
  {
    *v18 = v16;
    v18[1] = v17;
    v19 = 0LL;
    *((_QWORD *)&v21 + 1) = 0LL;
    a1[109] += 16LL;
  }
  if ( v19 && _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64, __int64 *, int, _QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(
      *((_QWORD *)&v21 + 1),
      v18,
      v17,
      v14,
      3,
      v21);
  if ( v24 )
    j_LanguageEnumProc(v23);
  sub_180035680((__int64)a1, *a2);
  return a2;
}
