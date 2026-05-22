/*
 * XREFs of ?InsertAtTop@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x180062A50
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnVisualAdded@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@00_N@Z @ 0x1801013B0 (-OnVisualAdded@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@00_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualCollection::Api::InsertAtTop(
        Windows::UI::Composition::VisualCollection::Api *this,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  struct Microsoft::WRL2::ContextRuntimeClass *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  signed __int32 v12; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v13; // rsi
  __int64 v14; // rax
  int v15; // r15d
  __int64 v16; // r13
  int v17; // ebp
  _DWORD *v18; // rax
  void (__fastcall ***v19)(_QWORD); // rcx
  __int64 v21; // rax
  unsigned int v22; // edx
  int v23; // ecx
  unsigned int v24; // edx
  int v25; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct Microsoft::WRL2::ContextRuntimeClass *v27; // [rsp+60h] [rbp+8h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v28; // [rsp+70h] [rbp+18h] BYREF
  void *v29; // [rsp+78h] [rbp+20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 104) & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_18;
  }
  if ( !a2 )
  {
    v22 = 154;
    v6 = -2147024809;
    v23 = -2147024809;
LABEL_23:
    DoStackCaptureDirect(v23, v22);
    goto LABEL_18;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 256LL))(*((_QWORD *)this + 2));
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualcollection.cpp",
      (const char *)(unsigned int)v5);
    v22 = 156;
    v23 = v6;
    goto LABEL_23;
  }
  v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         (struct Microsoft::WRL2::ContextSession *)v2,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
         &v28);
  v9 = v28;
  v6 = v7;
  v27 = v28;
  if ( v7 < 0 )
  {
    v24 = 159;
    v25 = v7;
    goto LABEL_26;
  }
  v10 = *((_QWORD *)this + 2);
  if ( *((_QWORD *)v28 + 17) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x520,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
      (const char *)0x80070057LL);
    v24 = 167;
    v25 = -2147024809;
    v6 = -2147024809;
LABEL_26:
    DoStackCaptureDirect(v25, v24);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v27);
    goto LABEL_18;
  }
  *((_QWORD *)v28 + 17) = v10;
  v11 = *(_QWORD *)(v10 + 144);
  if ( v11 )
  {
    v21 = *(_QWORD *)(v11 + 160);
    *(_QWORD *)(v21 + 152) = v9;
    *(_QWORD *)(v11 + 160) = v9;
    *((_QWORD *)v9 + 20) = v21;
  }
  else
  {
    *(_QWORD *)(v10 + 144) = v9;
  }
  v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 4, 1u);
  v13 = v28;
  if ( !v12 )
    (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *))(*(_QWORD *)v28 + 80LL))(v28);
  v14 = *(_QWORD *)(v10 + 24);
  v15 = *(_DWORD *)(v10 + 128);
  v16 = *(_QWORD *)(v14 + 456);
  if ( v15 )
  {
    v17 = *((_DWORD *)v13 + 32);
    if ( v17 )
    {
      DirectComposition::CDevice::BeginKernelCommand(*(DirectComposition::CDevice **)(v14 + 456), 0x14u, &v29, 0);
      v18 = v29;
      *(_DWORD *)v29 = 17;
      v18[1] = v15;
      v18[2] = v17;
      v18[3] = 0;
      v18[4] = 0;
      v19 = *(void (__fastcall ****)(_QWORD))(v16 + 80);
      if ( v19 )
        (**v19)(v19);
    }
  }
  if ( Windows::UI::Composition::Visual::s_fIsVisualTreeCallbackRegistered )
    Windows::UI::Composition::CompositionDiagnosticsInterop::OnVisualAdded(
      v13,
      (struct Windows::UI::Composition::Visual *)v10,
      0LL,
      0);
  v6 = 0;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 4, 0xFFFFFFFF) == 1 )
  {
    LOBYTE(v8) = 1;
    (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v28 + 64LL))(v28, v8);
  }
LABEL_18:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v6;
}
