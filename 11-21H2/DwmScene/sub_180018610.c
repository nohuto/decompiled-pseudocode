/*
 * XREFs of sub_180018610 @ 0x180018610
 * Callers:
 *     sub_180017448 @ 0x180017448 (sub_180017448.c)
 *     sub_180026808 @ 0x180026808 (sub_180026808.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001815C @ 0x18001815C (sub_18001815C.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180018610(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rcx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = sub_18001D684(184LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::Texture>::`vftable';
    sub_18001815C();
  }
  else
  {
    v3 = 0LL;
  }
  v4 = v3 + 16;
  *a1 = v3 + 16;
  a1[1] = v3;
  if ( v3 != -16 )
  {
    v5 = *(_QWORD *)(v3 + 120);
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      if ( v3 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
        v3 = a1[1];
      }
      v10[0] = v4;
      v10[1] = v3;
      v6 = 0LL;
      v7 = 0LL;
      if ( v3 )
      {
        v6 = v4;
        v7 = v3;
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 12));
      }
      *(_QWORD *)(v4 + 96) = v6;
      v8 = *(volatile signed __int32 **)(v4 + 104);
      *(_QWORD *)(v4 + 104) = v7;
      if ( v8 && _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      sub_180010910((__int64)v10);
    }
  }
  return a1;
}
