/*
 * XREFs of sub_18002E12C @ 0x18002E12C
 * Callers:
 *     sub_180034924 @ 0x180034924 (sub_180034924.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

void __fastcall sub_18002E12C(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001C190();
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::Tweening::HighPerfClock>::`vftable';
    *(_QWORD *)(v2 + 16) = &Spectre::Utils::Tweening::HighPerfClock::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  Mtx_init_in_situ((_Mtx_t)(a1 + 56), 2);
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *(_QWORD *)(a1 + 136) = v3 + 16;
  *(_QWORD *)(a1 + 144) = v3;
  if ( v3 )
    sub_180010530(v3);
}
