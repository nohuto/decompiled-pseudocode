/*
 * XREFs of ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180077180
 * Callers:
 *     ?EndFrame@CSubDrawingContext@@AEAAX_N@Z @ 0x1800216CC (-EndFrame@CSubDrawingContext@@AEAAX_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800770C0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800A11C4 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180021F64 (-clear_region@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackS.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180076868 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x180077510 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAXXZ @ 0x180077578 (-Optimize@-$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?clear_region@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800775E0 (-clear_region@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingScop.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18008F7DC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800CACC8 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::PopAllStacks(CDrawingContext *this)
{
  int v2; // eax
  __int64 v3; // r15
  int v4; // eax
  __int64 v5; // r14
  int v6; // eax
  int v7; // eax
  unsigned int i; // esi
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // r8
  __int64 *v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rsi
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rdi
  unsigned int v27; // eax
  __int64 v28; // rdi
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rdi
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  __int64 v36; // rcx
  int v37; // eax
  unsigned int v38; // ecx
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // eax
  unsigned int v42; // ecx
  int v43; // eax
  unsigned int v44; // ecx
  void *v45; // [rsp+60h] [rbp+30h] BYREF

  *((_DWORD *)this + 92) = 0;
  v2 = *((_DWORD *)this + 94);
  v3 = 64LL;
  if ( v2 == 10 )
  {
    v25 = *((_DWORD *)this + 98);
    v26 = 64LL;
    if ( v25 > 0x40 )
      v26 = v25;
    if ( (unsigned __int64)(3 * v26) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v26) <= *((_DWORD *)this + 93) )
    {
      v45 = 0LL;
      v32 = HrMalloc(0x10uLL, (unsigned int)v26, &v45);
      if ( v32 >= 0 )
      {
        operator delete(*((void **)this + 48));
        *((_QWORD *)this + 48) = v45;
        *((_DWORD *)this + 93) = v26;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 98) = 0;
    v4 = 0;
  }
  else
  {
    v4 = v2 + 1;
  }
  *((_DWORD *)this + 94) = v4;
  v5 = 8LL;
  *((_DWORD *)this + 100) = 0;
  v6 = *((_DWORD *)this + 102);
  if ( v6 == 8 )
  {
    v30 = *((_DWORD *)this + 106);
    v31 = 8LL;
    if ( v30 > 8 )
      v31 = v30;
    if ( (unsigned __int64)(3 * v31) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v31) <= *((_DWORD *)this + 101) )
    {
      v45 = 0LL;
      v34 = HrMalloc(0x44uLL, (unsigned int)v31, &v45);
      if ( v34 >= 0 )
      {
        operator delete(*((void **)this + 52));
        *((_QWORD *)this + 52) = v45;
        *((_DWORD *)this + 101) = v31;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 106) = 0;
    v7 = 0;
  }
  else
  {
    v7 = v6 + 1;
  }
  *((_DWORD *)this + 102) = v7;
  *((_DWORD *)this + 108) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize((char *)this + 432);
  *((_DWORD *)this + 116) = 0;
  CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Optimize((char *)this + 464);
  while ( *((_DWORD *)this + 130) )
    CDrawingContext::PopLayerInternal((__int64)this);
  for ( i = 0; i < *((_DWORD *)this + 146); ++i )
  {
    v36 = *(_QWORD *)(*((_QWORD *)this + 70) + 16LL * i);
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  *((_DWORD *)this + 146) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 560, 16LL);
  v9 = *((_QWORD *)this + 83);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    *((_QWORD *)this + 83) = 0LL;
  }
  *((_DWORD *)this + 192) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 744, 8LL);
  *((_DWORD *)this + 206) = 0;
  *((_DWORD *)this + 216) = 0;
  v10 = *((_DWORD *)this + 218);
  if ( v10 == 10 )
  {
    v27 = *((_DWORD *)this + 222);
    v28 = 64LL;
    if ( v27 > 0x40 )
      v28 = v27;
    if ( (unsigned __int64)(3 * v28) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v28) <= *((_DWORD *)this + 217) )
    {
      v45 = 0LL;
      v37 = HrMalloc(0x1CuLL, (unsigned int)v28, &v45);
      if ( v37 >= 0 )
      {
        operator delete(*((void **)this + 110));
        *((_QWORD *)this + 110) = v45;
        *((_DWORD *)this + 217) = v28;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 222) = 0;
    v11 = 0;
  }
  else
  {
    v11 = v10 + 1;
  }
  *((_DWORD *)this + 218) = v11;
  v12 = 0xD37A6F4DE9BD37A7uLL * ((__int64)(*((_QWORD *)this + 113) - *((_QWORD *)this + 112)) >> 3);
  if ( v12 )
    detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 896,
      0LL,
      v12);
  v13 = (__int64 *)((char *)this + 2760);
  v14 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 346) - *((_QWORD *)this + 345)) >> 3);
  if ( v14 )
    detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::clear_region(
      v13,
      0LL,
      v14);
  *((_DWORD *)this + 804) = 0;
  v15 = *((_DWORD *)this + 806);
  if ( v15 == 8 )
  {
    v22 = *((_DWORD *)this + 810);
    v23 = 8LL;
    LODWORD(v13) = -1;
    if ( v22 > 8 )
      v23 = v22;
    if ( (unsigned __int64)(3 * v23) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v23) <= *((_DWORD *)this + 805) )
    {
      v45 = 0LL;
      v39 = HrMalloc(0x10uLL, (unsigned int)v23, &v45);
      if ( v39 >= 0 )
      {
        operator delete(*((void **)this + 404));
        *((_QWORD *)this + 404) = v45;
        *((_DWORD *)this + 805) = v23;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 810) = 0;
    v16 = 0;
  }
  else
  {
    v16 = v15 + 1;
  }
  *((_DWORD *)this + 806) = v16;
  *((_DWORD *)this + 796) = 0;
  v17 = *((_DWORD *)this + 798);
  if ( v17 == 8 )
  {
    v24 = *((_DWORD *)this + 802);
    if ( v24 > 8 )
      v5 = v24;
    if ( (unsigned __int64)(3 * v5) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v5) <= *((_DWORD *)this + 797) )
    {
      v45 = 0LL;
      v41 = HrMalloc(0x10uLL, (unsigned int)v5, &v45);
      if ( v41 >= 0 )
      {
        operator delete(*((void **)this + 400));
        *((_QWORD *)this + 400) = v45;
        *((_DWORD *)this + 797) = v5;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 802) = 0;
    v18 = 0;
  }
  else
  {
    v18 = v17 + 1;
  }
  *((_DWORD *)this + 798) = v18;
  *((_DWORD *)this + 812) = 0;
  CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Optimize((char *)this + 3248);
  *((_DWORD *)this + 848) = 0;
  v20 = *((_DWORD *)this + 850);
  if ( v20 == 10 )
  {
    v29 = *((_DWORD *)this + 854);
    if ( v29 > 0x40 )
      v3 = v29;
    if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v3) <= *((_DWORD *)this + 849) )
    {
      v45 = 0LL;
      v43 = HrMalloc(0x10uLL, (unsigned int)v3, &v45);
      if ( v43 >= 0 )
      {
        operator delete(*((void **)this + 426));
        *((_QWORD *)this + 426) = v45;
        *((_DWORD *)this + 849) = v3;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 854) = 0;
    v21 = 0;
  }
  else
  {
    v21 = v20 + 1;
  }
  *((_DWORD *)this + 850) = v21;
  *((_DWORD *)this + 820) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize((char *)this + 3280);
}
