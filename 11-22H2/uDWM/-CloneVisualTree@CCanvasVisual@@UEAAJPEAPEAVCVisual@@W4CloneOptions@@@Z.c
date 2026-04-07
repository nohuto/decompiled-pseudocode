/*
 * XREFs of ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180010170
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800102A8 (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ??0CVisual@@IEAA@XZ @ 0x1800221E0 (--0CVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCanvasVisual::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  CVisual *v6; // rax
  CBaseObject *v7; // rbx
  __int64 v8; // rcx
  int v9; // edi
  int v10; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  unsigned int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CBaseObject *v16; // [rsp+58h] [rbp+10h] BYREF
  CVisual *v17; // [rsp+68h] [rbp+20h]

  v16 = 0LL;
  *a2 = 0LL;
  v6 = (CVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    288LL);
  v7 = v6;
  v17 = v6;
  if ( !v6 )
  {
    v7 = 0LL;
    goto LABEL_10;
  }
  CVisual::CVisual(v6);
  *(_QWORD *)(v8 + 256) = 0LL;
  *(_QWORD *)(v8 + 264) = 0LL;
  *(_DWORD *)(v8 + 272) = 0;
  *(_DWORD *)(v8 + 276) = 0;
  *(_DWORD *)(v8 + 280) = 0;
  *(_QWORD *)(v8 + 248) = 0LL;
  *(_QWORD *)v8 = &CCanvasVisual::`vftable';
  if ( !v8 )
  {
LABEL_10:
    v9 = -2147024882;
    goto LABEL_6;
  }
  v9 = ((__int64 (*)(void))*(&CCanvasVisual::`vftable' + 1))();
  if ( v9 < 0 )
  {
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x15u, 0LL);
    v16 = 0LL;
    if ( v7 )
      CBaseObject::Release(v7);
    v12 = (unsigned int)v9;
    v13 = 77LL;
    goto LABEL_12;
  }
  v16 = v7;
  v10 = CRenderDataVisual::InitializeVisualTreeClone(a1, v7, a3);
  v9 = v10;
  if ( v10 >= 0 )
  {
    *a2 = v16;
    return 0LL;
  }
  v12 = (unsigned int)v10;
  v13 = 78LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\canvasvisual.cpp",
    (const char *)v12,
    v14);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v16);
  return (unsigned int)v9;
}
