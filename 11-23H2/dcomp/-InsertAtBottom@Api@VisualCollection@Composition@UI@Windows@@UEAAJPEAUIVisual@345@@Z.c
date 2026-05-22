/*
 * XREFs of ?InsertAtBottom@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x180062C00
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

__int64 __fastcall Windows::UI::Composition::VisualCollection::Api::InsertAtBottom(
        Windows::UI::Composition::VisualCollection::Api *this,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  int v5; // eax
  unsigned int v6; // ebp
  int v7; // eax
  __int64 v8; // rdx
  struct Microsoft::WRL2::ContextRuntimeClass *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rcx
  signed __int32 v12; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v13; // r13
  int v14; // r15d
  int v15; // r12d
  DirectComposition::CDevice *v16; // rdi
  char *v17; // rax
  void (__fastcall ***v18)(_QWORD); // rcx
  unsigned int v20; // edx
  int v21; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct Microsoft::WRL2::ContextRuntimeClass *v23; // [rsp+60h] [rbp+8h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v24; // [rsp+70h] [rbp+18h] BYREF
  void *v25; // [rsp+78h] [rbp+20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    if ( a2 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 256LL))(*((_QWORD *)this + 2));
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x45,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualcollection.cpp",
          (const char *)(unsigned int)v5);
        DoStackCaptureDirect(v6, 0x7Bu);
      }
      else
      {
        v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
               (struct Microsoft::WRL2::ContextSession *)v2,
               a2,
               (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
               &v24);
        v9 = v24;
        v6 = v7;
        v23 = v24;
        if ( v7 < 0 )
        {
          v20 = 126;
          v21 = v7;
        }
        else
        {
          v10 = *((_QWORD *)this + 2);
          if ( !*((_QWORD *)v24 + 17) )
          {
            *((_QWORD *)v24 + 17) = v10;
            v11 = *(_QWORD *)(v10 + 144);
            if ( v11 )
            {
              *((_QWORD *)v9 + 19) = v11;
              *((_QWORD *)v9 + 20) = *(_QWORD *)(v11 + 160);
              *(_QWORD *)(v11 + 160) = v9;
            }
            *(_QWORD *)(v10 + 144) = v9;
            v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 4, 1u);
            v13 = v24;
            if ( !v12 )
              (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *))(*(_QWORD *)v24 + 80LL))(v24);
            v14 = *(_DWORD *)(v10 + 128);
            v6 = 0;
            if ( v14 )
            {
              v15 = *((_DWORD *)v13 + 32);
              if ( v15 )
              {
                v16 = *(DirectComposition::CDevice **)(*(_QWORD *)(v10 + 24) + 456LL);
                DirectComposition::CDevice::BeginKernelCommand(v16, 0x14u, &v25, 0);
                v17 = (char *)v25;
                *(_DWORD *)v25 = 17;
                *((_DWORD *)v17 + 1) = v14;
                *((_DWORD *)v17 + 2) = v15;
                *(_QWORD *)(v17 + 12) = 1LL;
                v18 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v16 + 10);
                if ( v18 )
                  (**v18)(v18);
              }
            }
            if ( Windows::UI::Composition::Visual::s_fIsVisualTreeCallbackRegistered )
              Windows::UI::Composition::CompositionDiagnosticsInterop::OnVisualAdded(
                v13,
                (struct Windows::UI::Composition::Visual *)v10,
                0LL,
                1);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 4, 0xFFFFFFFF) == 1 )
            {
              LOBYTE(v8) = 1;
              (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v24 + 64LL))(
                v24,
                v8);
            }
            goto LABEL_18;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x520,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
            (const char *)0x80070057LL);
          v6 = -2147024809;
          v20 = 134;
          v21 = -2147024809;
        }
        DoStackCaptureDirect(v21, v20);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v23);
      }
    }
    else
    {
      v6 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x79u);
    }
LABEL_18:
    Microsoft::WRL2::ContextSession::EndApiEntry(v2);
    return v6;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return 2147483667LL;
}
