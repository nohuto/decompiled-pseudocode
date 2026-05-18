/*
 * XREFs of ??$_Construct_in_place@VTweenManager@Tweening@Utils@Spectre@@$$V@std@@YAXAEAVTweenManager@Tweening@Utils@Spectre@@@Z @ 0x18002E0AC
 * Callers:
 *     ?GetTweenManager@Engine@1Spectre@@QEBA?AV?$shared_ptr@VTweenManager@Tweening@Utils@Spectre@@@std@@AEBV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x1800348A4 (-GetTweenManager@Engine@1Spectre@@QEBA-AV-$shared_ptr@VTweenManager@Tweening@Utils@Spectre@@@std.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::_Construct_in_place<Spectre::Utils::Tweening::TweenManager,>(__int64 a1)
{
  volatile signed __int32 *v2; // rax
  volatile signed __int32 *v3; // rbx

  v2 = (volatile signed __int32 *)operator new(0x18uLL);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 2) = 1;
    *((_DWORD *)v2 + 3) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::Tweening::HighPerfClock>::`vftable';
    *((_QWORD *)v2 + 2) = &Spectre::Utils::Tweening::HighPerfClock::`vftable';
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
  _Mtx_init_in_situ((_Mtx_t)(a1 + 56), 2);
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( v3 )
    _InterlockedIncrement(v3 + 2);
  *(_QWORD *)(a1 + 136) = v3 + 4;
  *(_QWORD *)(a1 + 144) = v3;
  if ( v3 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v3);
}
