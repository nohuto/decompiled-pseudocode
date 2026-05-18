/*
 * XREFs of ?Update@TweenManager@Tweening@Utils@Spectre@@QEAAXXZ @ 0x1800E07B0
 * Callers:
 *     ?UpdateScene@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800375F8 (-UpdateScene@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     floor @ 0x18000C020 (floor.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180025D24 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?clear@?$vector@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@2@@std@@QEAAXXZ @ 0x1800278E4 (-clear@-$vector@V-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VFra.c)
 *     ??B?$atomic@_N@std@@QEBA_NXZ @ 0x1800573E0 (--B-$atomic@_N@std@@QEBA_NXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x1800711A8 (--$_Emplace_reallocate@AEBV-$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@-$vector@V.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@std@@$0A@@?$vector@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V?$allocator@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@1@V21@1@Z @ 0x1800E06BC (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VTween@Tweening@Util.c)
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@std@@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@0@V10@V10@AEBV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@0@@Z @ 0x1800E0714 (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VTween@Tweening@Util.c)
 *     ?erase@?$vector@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V?$allocator@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@2@0@Z @ 0x1800E0A98 (-erase@-$vector@V-$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V-$allocator@V-$shared_ptr@VT.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Utils::Tweening::TweenManager::Update(Spectre::Utils::Tweening::TweenManager *this)
{
  char *j; // rsi
  _QWORD *v3; // r15
  char *i; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  double v7; // xmm6_8
  double v8; // xmm1_8
  double v9; // xmm7_8
  int v10; // r14d
  int v11; // r12d
  int v12; // ecx
  __int64 v13; // rcx
  __int64 *v14; // rbx
  __int64 **v15; // rax
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v17; // [rsp+38h] [rbp-48h]
  __int128 v18; // [rsp+40h] [rbp-40h] BYREF
  char *v19; // [rsp+50h] [rbp-30h]
  __int64 v20; // [rsp+C0h] [rbp+40h] BYREF
  double v21; // [rsp+C8h] [rbp+48h] BYREF
  _QWORD *v22; // [rsp+D0h] [rbp+50h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  (***((void (__fastcall ****)(_QWORD, __int64 *))this + 17))(*((_QWORD *)this + 17), &v20);
  *(_QWORD *)&v21 = (char *)this + 56;
  std::_Mutex_base::lock((Spectre::Utils::Tweening::TweenManager *)((char *)this + 56));
  std::vector<std::shared_ptr<Spectre::Utils::Tweening::Tween>>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Utils::Tweening::Tween>>>>,0>(
    this,
    &v22,
    *((char **)this + 1),
    *((char **)this + 3),
    *((char **)this + 4));
  std::vector<std::shared_ptr<Spectre::Engine::FrameBuffer>>::clear((__int64 *)this + 3);
  _Mtx_unlock((Spectre::Utils::Tweening::TweenManager *)((char *)this + 56));
  v3 = *(_QWORD **)this;
  v22 = (_QWORD *)*((_QWORD *)this + 1);
  for ( i = 0LL; v3 != v22; v3 += 2 )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v16, v3);
    LOBYTE(j) = 1;
    v5 = v16;
    if ( !std::atomic<bool>::operator bool(v16 + 168) )
    {
      v7 = (double)((int)v20 - *(_DWORD *)(v5 + 8)) / 1000000000.0 / ((double)(int)*(_QWORD *)(v5 + 16) / 1000000000.0);
      v8 = 0.0;
      v9 = 0.0;
      v10 = (int)v7;
      v11 = *(_DWORD *)(v5 + 24);
      v12 = *(_DWORD *)(v5 + 28);
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          if ( v10 < v11 )
            v8 = v7 - floor(v7);
          v9 = v8;
        }
      }
      else if ( v10 < v11 )
      {
        v9 = v7 - floor(v7);
      }
      LOBYTE(j) = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v5 + 32) + 8LL))(
                    *(_QWORD *)(v5 + 32),
                    v6,
                    *(_QWORD *)v5);
      if ( (_BYTE)j && *(_QWORD *)(v5 + 96) )
      {
        v21 = ((double)v10 + v9) / (double)*(int *)(v5 + 24);
        v13 = *(_QWORD *)(v5 + 96);
        if ( !v13 )
        {
          std::_Xbad_function_call();
          goto LABEL_28;
        }
        (*(void (__fastcall **)(__int64, double *))(*(_QWORD *)v13 + 16LL))(v13, &v21);
      }
      if ( v10 >= v11 )
        goto LABEL_18;
    }
    if ( std::atomic<bool>::operator bool(v5 + 168) || !(_BYTE)j )
    {
LABEL_18:
      if ( *(_QWORD *)(v5 + 160) && (_BYTE)j )
        std::_Func_class<void,>::operator()(v5 + 104);
      if ( i == v19 )
      {
        std::vector<std::shared_ptr<Spectre::Engine::ImageProcessingEffect>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> const &>(
          (char **)&v18,
          i,
          &v16);
        i = (char *)*((_QWORD *)&v18 + 1);
      }
      else
      {
        std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          i,
          &v16);
        i += 16;
        *((_QWORD *)&v18 + 1) = i;
      }
    }
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
  }
  for ( j = (char *)v18; j != i; j += 16 )
  {
LABEL_28:
    v14 = (__int64 *)*((_QWORD *)this + 1);
    v15 = std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Utils::Tweening::Tween>>>>,std::shared_ptr<Spectre::Utils::Tweening::Tween>>(
            (__int64 **)&v21,
            *(__int64 **)this,
            v14,
            j);
    std::vector<std::shared_ptr<Spectre::Utils::Tweening::Tween>>::erase(this, &v22, *v15, v14);
  }
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)&v18);
}
