/*
 * XREFs of ?OnAnimatedPropertyChanged@Visual@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180072060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18006DAE0 (-OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRE.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ?OnAnimatedPropertyChanged@ComponentTransform3D@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x1800722E0 (-OnAnimatedPropertyChanged@ComponentTransform3D@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EX.c)
 *     ??$UpdateAnimatedPropertyWorker@V?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x180072534 (--$UpdateAnimatedPropertyWorker@V-$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 *     _invalid_parameter_noinfo @ 0x18009690A (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ??$UpdateAnimatedSparseProperty@VVisual@Composition@UI@Windows@@UVector2@Numerics@Foundation@4@P81234@EBA?AU5674@XZP81234@EAAXU5674@@Z@ProxyObject@Composition@UI@Windows@@IEAAXPEAVVisual@123@AEBUVector2@Numerics@Foundation@3@_N2GP84123@EBA?AU5673@XZP84123@EAAXU5673@@ZAEBUAnimatedProperty@AnimationHelper@123@@Z @ 0x18010AC44 (--$UpdateAnimatedSparseProperty@VVisual@Composition@UI@Windows@@UVector2@Numerics@Foundation@4@P.c)
 *     ??$UpdateAnimatedSparseProperty@VVisual@Composition@UI@Windows@@UVector3@Numerics@Foundation@4@P81234@EBA?AU5674@XZP81234@EAAXU5674@@Z@ProxyObject@Composition@UI@Windows@@IEAAXPEAVVisual@123@AEBUVector3@Numerics@Foundation@3@_N2GP84123@EBA?AU5673@XZP84123@EAAXU5673@@ZAEBUAnimatedProperty@AnimationHelper@123@@Z @ 0x18010ACB4 (--$UpdateAnimatedSparseProperty@VVisual@Composition@UI@Windows@@UVector3@Numerics@Foundation@4@P.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::OnAnimatedPropertyChanged(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        char a6,
        void *Src,
        unsigned __int16 a8)
{
  int v8; // r12d
  const struct Windows::UI::Composition::AnimationHelper::AnimatedProperty *const near *const *v11; // rax
  void *v12; // rdx
  const struct Windows::UI::Composition::AnimationHelper::AnimatedProperty *const near *v13; // rcx
  int v14; // edi
  size_t v15; // r14
  void *v16; // r15
  void *v17; // rsi
  char v18; // al
  float v19; // r13d
  DirectComposition::CDevice *v20; // rbx
  _DWORD *v21; // rcx
  void (__fastcall ***v22)(_QWORD); // rcx
  __int64 v23; // rcx
  _DWORD *Reference; // rax
  unsigned int v26; // r9d
  unsigned int v27; // r10d
  __int64 v28; // r11
  int v29; // eax
  unsigned int v30; // ebx
  float v31; // xmm0_4
  int v32; // eax
  unsigned int v33; // ebx
  unsigned __int64 v34; // r14
  unsigned int v35; // ecx
  int v36; // r8d
  __int64 v37; // rdx
  int v38; // eax
  unsigned int v39; // ebx
  __int128 v40; // [rsp+50h] [rbp-49h] BYREF
  __int128 v41; // [rsp+60h] [rbp-39h] BYREF
  __int64 v42; // [rsp+70h] [rbp-29h] BYREF
  __int128 v43; // [rsp+78h] [rbp-21h]
  __int128 v44; // [rsp+88h] [rbp-11h]
  float *v45; // [rsp+98h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+3Fh]
  void *v47; // [rsp+E0h] [rbp+47h] BYREF
  float v48; // [rsp+E8h] [rbp+4Fh] BYREF

  v8 = *(_DWORD *)(a1 + 128);
  if ( a2 == v8 )
  {
    switch ( (_DWORD)a3 )
    {
      case 0x19:
        v42 = a1;
        DWORD2(v41) = 0;
        v31 = *(float *)Src;
        *(_QWORD *)&v41 = Windows::UI::Composition::Visual::SetSparse_Opacity;
        *(_QWORD *)&v40 = Windows::UI::Composition::Visual::GetSparse_Opacity;
        v45 = &v48;
        v47 = &Windows::UI::Composition::Visual::sc_Opacity;
        DWORD2(v40) = 0;
        v48 = v31;
        v44 = v41;
        v43 = v40;
        Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<float,Windows::UI::Composition::Visual,float (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(float)>,Windows::UI::Composition::PropertyUpdateInfo>(
          a1,
          (unsigned int)&v42,
          (unsigned int)&v47,
          a5,
          a6,
          a8);
        break;
      case 0x1D:
        *(_QWORD *)&v41 = &Windows::UI::Composition::Visual::SetSparse_RelativeOffsetAdjustment;
        DWORD2(v41) = 0;
        *(_QWORD *)&v40 = &Windows::UI::Composition::Visual::GetSparse_RelativeOffsetAdjustment;
        DWORD2(v40) = 0;
        Windows::UI::Composition::ProxyObject::UpdateAnimatedSparseProperty<Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector3,Windows::Foundation::Numerics::Vector3 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector3)>(
          a1,
          a1,
          (_DWORD)Src,
          a5,
          a6,
          a8,
          (__int64)&v40,
          (__int64)&v41);
        break;
      case 0x1E:
        *(_QWORD *)&v41 = &Windows::UI::Composition::Visual::SetSparse_RelativeSizeAdjustment;
        DWORD2(v41) = 0;
        *(_QWORD *)&v40 = &Windows::UI::Composition::Visual::GetSparse_RelativeSizeAdjustment;
        DWORD2(v40) = 0;
        Windows::UI::Composition::ProxyObject::UpdateAnimatedSparseProperty<Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector2,Windows::Foundation::Numerics::Vector2 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector2)>(
          a1,
          a1,
          (_DWORD)Src,
          a5,
          a6,
          a8,
          (__int64)&v40,
          (__int64)&v41);
        break;
      default:
        v11 = &Windows::UI::Composition::Visual::k_rgAnimDef;
        v12 = &unk_1801BE3B8;
        do
        {
          v13 = *v11;
          v14 = *((_DWORD *)*v11 + 2);
          if ( (_DWORD)a3 == v14 )
          {
            v15 = *((_QWORD *)v13 + 4);
            v16 = (void *)(a1 + *((_QWORD *)v13 + 3));
            v17 = Src;
            if ( a6 )
            {
              if ( *((_BYTE *)v13 + 21) )
                v14 = *((_DWORD *)v13 + 3);
              v18 = *((_BYTE *)v13 + 20);
              if ( v18 )
              {
                if ( v18 == 1 )
                {
                  DirectComposition::CDevice::ResourceSetBufferProperty(
                    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
                    v8,
                    v14,
                    Src,
                    v15);
                }
                else
                {
                  switch ( v15 )
                  {
                    case 1uLL:
                      LODWORD(v19) = *(unsigned __int8 *)Src;
                      break;
                    case 2uLL:
                      LODWORD(v19) = *(unsigned __int16 *)Src;
                      break;
                    case 4uLL:
                      v19 = *(float *)Src;
                      break;
                    default:
                      Microsoft::WRL2::FailFast::Unexpected(0LL);
                  }
                  if ( v8 )
                  {
                    v20 = *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL);
                    DirectComposition::CDevice::BeginKernelCommand(v20, 0x18u, &v47, 0);
                    v21 = v47;
                    *(_DWORD *)v47 = 8;
                    v21[1] = v8;
                    v21[2] = v14;
                    *((_QWORD *)v21 + 2) = SLODWORD(v19);
                    v22 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v20 + 10);
                    if ( v22 )
                      (**v22)(v22);
                  }
                }
              }
              else
              {
                DirectComposition::CDevice::ResourceSetFloatProperty(
                  *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
                  v8,
                  v14,
                  *(float *)Src);
              }
            }
            if ( a5 )
            {
              v23 = 0xFFFFLL;
              if ( a8 == 0xFFFF )
              {
                if ( !v15 )
                  return 0LL;
                if ( v16 )
                {
                  if ( v17 )
                  {
                    memcpy_0(v16, v17, v15);
                    return 0LL;
                  }
                  memset_0(v16, 0, v15);
                }
                *(_DWORD *)_o__errno(v23, v12, a3, a4) = 22;
                invalid_parameter_noinfo();
              }
              else
              {
                v34 = v15 >> 2;
                v35 = 0;
                if ( v34 )
                {
                  v36 = a8;
                  v37 = 0LL;
                  do
                  {
                    if ( _bittest(&v36, v35) )
                      *((_DWORD *)v16 + v37) = *((_DWORD *)v17 + v37);
                    v37 = ++v35;
                  }
                  while ( v35 < v34 );
                }
              }
            }
            return 0LL;
          }
          ++v11;
        }
        while ( v11 != (const struct Windows::UI::Composition::AnimationHelper::AnimatedProperty *const near *const *)&unk_1801BE3B8 );
        v32 = Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(
                a1,
                a2,
                a3,
                a4,
                a5,
                a6,
                (__int64)Src,
                a8);
        v33 = v32;
        if ( v32 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x837,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
            (const char *)(unsigned int)v32);
          return v33;
        }
        break;
    }
    return 0LL;
  }
  Reference = CSparseStorage::GetReference((CSparseStorage *)(a1 + 112), 8u);
  if ( Reference && a2 == Reference[32] )
  {
    v29 = Windows::UI::Composition::ComponentTransform3D::OnAnimatedPropertyChanged(Reference, a2, v27);
    v30 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x846,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
        (const char *)(unsigned int)v29);
      return v30;
    }
    return 0LL;
  }
  v38 = Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(
          v28,
          a2,
          v27,
          v26,
          a5,
          a6,
          (__int64)Src,
          a8);
  v39 = v38;
  if ( v38 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x851,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
    (const char *)(unsigned int)v38);
  return v39;
}
