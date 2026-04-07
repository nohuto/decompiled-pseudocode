/*
 * XREFs of ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18003C3BC
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x1800AFCEC (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18000A060 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EnableRuntimeDebugBreakForIdd@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003C5EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EnableRuntimeDebugBreakForIdd@@@details@w.c)
 *     ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x18003C674 (-ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ.c)
 *     ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x18003C6DC (-ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x18003C7A0 (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18003D34C (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18003DC54 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::EnumerateMonitors(CDesktopManager *this, struct CDWMDisplaySet **a2)
{
  volatile signed __int32 *v3; // rax
  struct CDWMDXGIEnumeration **v4; // r14
  CDWMDisplaySet *v5; // rcx
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rax
  CDWMDisplaySet *v9; // rdi
  struct CDWMDXGIEnumeration *v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ebp
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // edx
  int v20; // r9d
  unsigned int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-38h]
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF
  __int64 v24; // [rsp+68h] [rbp+10h]

  *a2 = (struct CDWMDisplaySet *)*((_QWORD *)this + 17);
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 17);
  if ( v3 )
    _InterlockedIncrement(v3);
  v4 = (struct CDWMDXGIEnumeration **)((char *)this + 128);
  while ( 1 )
  {
    if ( *v4 )
    {
      (*(void (__fastcall **)(struct CDWMDXGIEnumeration *))(*(_QWORD *)*v4 + 8LL))(*v4);
      *v4 = 0LL;
    }
    v5 = (CDWMDisplaySet *)*((_QWORD *)this + 17);
    if ( v5 )
    {
      CDWMDisplaySet::Release(v5);
      *((_QWORD *)this + 17) = 0LL;
    }
    v6 = CDWMDXGIEnumeration::Create(v4);
    v7 = v6;
    if ( v6 < 0 )
      break;
    v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           112LL);
    v9 = (CDWMDisplaySet *)v8;
    v24 = v8;
    if ( !v8 )
    {
      *((_QWORD *)this + 17) = 0LL;
      v7 = -2147024882;
      v22 = 1164;
LABEL_29:
      v20 = v7;
      goto LABEL_35;
    }
    *(_DWORD *)v8 = 1;
    *(_QWORD *)(v8 + 40) = v8 + 72;
    *(_QWORD *)(v8 + 48) = v8 + 72;
    *(_DWORD *)(v8 + 56) = 4;
    *(_QWORD *)(v8 + 60) = 4LL;
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 16) = 0LL;
    *((_QWORD *)this + 17) = v8;
    v10 = *v4;
    *(_QWORD *)(v8 + 8) = *v4;
    if ( v10 )
      (**(void (__fastcall ***)(struct CDWMDXGIEnumeration *))v10)(v10);
    v11 = CDWMDisplaySet::EnumerateOutputs(v9);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A384, 1LL, v11, 0x76u);
    }
    else
    {
      v12 = CDWMDisplaySet::ArrangeCloneDisplays(v9);
      v7 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A384, 1LL, v12, 0x78u);
      else
        CDWMDisplaySet::ComputeDisplayBounds(v9);
    }
    v13 = *((_QWORD *)*v4 + 2);
    if ( v13 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 104LL))(v13) )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_EnableRuntimeDebugBreakForIdd>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_EnableRuntimeDebugBreakForIdd>::GetImpl'::`2'::impl,
        0LL);
      if ( v7 < 0 )
      {
        v22 = 1183;
      }
      else
      {
        *((_DWORD *)this + 30) = 0;
        DynArrayImpl<0>::ShrinkToSize((__int64)this + 96, 8u);
        v14 = *((_QWORD *)this + 17);
        v15 = 0;
        if ( !*(_DWORD *)(v14 + 64) )
          return (unsigned int)v7;
        while ( 1 )
        {
          v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 40) + 8LL * v15) + 88LL) + 16LL);
          v17 = *((unsigned int *)this + 30);
          v23 = v16;
          v18 = v17 + 1;
          if ( (int)v17 + 1 < (unsigned int)v17 )
            break;
          if ( v18 <= *((_DWORD *)this + 29) )
          {
            v7 = 0;
            *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v17) = v16;
            *((_DWORD *)this + 30) = v18;
          }
          else
          {
            v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 96, 8u, 1, &v23);
            if ( v7 < 0 )
            {
              v21 = 192;
              goto LABEL_33;
            }
          }
          v14 = *((_QWORD *)this + 17);
          if ( ++v15 >= *(_DWORD *)(v14 + 64) )
            return (unsigned int)v7;
        }
        v7 = -2147024362;
        v21 = 181;
LABEL_33:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v21);
        v22 = 1189;
      }
      goto LABEL_29;
    }
  }
  v20 = v6;
  v22 = 1161;
LABEL_35:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, v22);
  return (unsigned int)v7;
}
