/*
 * XREFs of ?put_Mask@Api@?$CompositionMaskBrushT@VCompositionMaskBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x180047950
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?Validate_Mask@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z @ 0x180047EE0 (-Validate_Mask@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionMaskBrushT<Windows::UI::Composition::CompositionMaskBrush,Windows::UI::Composition::CompositionBrush>::Api::put_Mask(
        __int64 a1,
        struct Windows::UI::Composition::ICompositionBrush *a2)
{
  __int64 v2; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  volatile signed __int32 *v7; // rsi
  int v8; // r14d
  int v9; // r15d
  DirectComposition::CDevice *v10; // rdi
  _DWORD *v11; // rax
  void (__fastcall ***v12)(_QWORD); // rcx
  Microsoft::WRL2::NestableRuntimeClass *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::UI::Composition::CompositionBrush *v16; // [rsp+50h] [rbp+8h] BYREF
  void *v17; // [rsp+60h] [rbp+18h] BYREF

  v2 = a1 - 152;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 152 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    v16 = 0LL;
    v5 = Windows::UI::Composition::CompositionMaskBrush::Validate_Mask(
           (Windows::UI::Composition::CompositionMaskBrush *)v2,
           a2,
           &v16);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C31,
        (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
        (const char *)(unsigned int)v5);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v16);
    }
    else
    {
      v7 = (volatile signed __int32 *)v16;
      v8 = 0;
      if ( v16 )
        v8 = *((_DWORD *)v16 + 32);
      v9 = *(_DWORD *)(v2 + 128);
      if ( v9 )
      {
        v10 = *(DirectComposition::CDevice **)(*(_QWORD *)(v2 + 24) + 456LL);
        DirectComposition::CDevice::BeginKernelCommand(v10, 0x10u, &v17, 0);
        v11 = v17;
        *(_DWORD *)v17 = 13;
        v11[1] = v9;
        v11[2] = 1;
        v11[3] = v8;
        v12 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v10 + 10);
        if ( v12 )
          (**v12)(v12);
      }
      if ( *(volatile signed __int32 **)(v2 + 168) != v7 )
      {
        if ( v7 && _InterlockedIncrement(v7 + 4) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 80LL))(v7);
        v13 = *(Microsoft::WRL2::NestableRuntimeClass **)(v2 + 168);
        *(_QWORD *)(v2 + 168) = v7;
        if ( v13 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v13);
      }
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C2D,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)0x80000013LL);
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
