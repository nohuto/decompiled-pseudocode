/*
 * XREFs of ?Set@?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@IEAA_NM@Z @ 0x180092E70
 * Callers:
 *     ?Tween@?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@MEAA_NNPEBVICurve@234@@Z @ 0x1800934B0 (-Tween@-$TweenProperty@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spect.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180011A3C (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Spectre::Utils::Tweening::TweenProperty<float,Spectre::Utils::Tweening::TransformationDefault<float>>::Set(
        __int64 a1,
        float a2)
{
  __int64 v2; // r8
  std::_Ref_count_base *v3; // rcx
  __int64 v4; // rax
  __int128 v5; // rcx
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // r8
  float *v8; // rax
  std::_Ref_count_base *v9; // rcx
  float v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = a1;
  v3 = *(std::_Ref_count_base **)(a1 + 16);
  if ( !v3 || !*((_DWORD *)v3 + 2) )
  {
    v4 = *(_QWORD *)(v2 + 32);
    if ( !v4 || !*(_DWORD *)(v4 + 8) )
      return 0;
  }
  if ( v3 && std::_Ref_count_base::_Incref_nz(v3) )
    v5 = *(_OWORD *)(v2 + 8);
  else
    v5 = 0LL;
  if ( (_QWORD)v5 )
  {
    (**(void (__fastcall ***)(_QWORD, float *))v5)(v5, &v11);
  }
  else
  {
    v6 = *(std::_Ref_count_base **)(v2 + 32);
    if ( v6 && std::_Ref_count_base::_Incref_nz(v6) )
    {
      v8 = *(float **)(v7 + 24);
      v9 = *(std::_Ref_count_base **)(v7 + 32);
      if ( v8 )
        *v8 = v11;
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
    }
  }
  if ( *((_QWORD *)&v5 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v5 + 1));
  return 1;
}
