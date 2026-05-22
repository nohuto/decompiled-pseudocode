/*
 * XREFs of ?CreateSurfaceFromVisualSnapshot@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual2@@II_NPEAU_D3DMATRIX@@PEAPEAUIUnknown@@@Z @ 0x18015E220
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateSurfaceFromVisualSnapshot(
        Windows::UI::Composition::InteropCompositor::Api *this,
        struct IUnknown *a2,
        unsigned int a3,
        unsigned int a4,
        bool a5,
        struct _D3DMATRIX *a6,
        struct IUnknown **a7)
{
  struct Microsoft::WRL2::ContextSession *v7; // rdi
  __int64 v12; // rdx
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v18; // [rsp+60h] [rbp+8h] BYREF

  v7 = (Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1216);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1216));
  if ( (*((_BYTE *)v7 + 32) & 2) != 0 )
  {
    if ( !a2 )
    {
      v13 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x44Bu);
      goto LABEL_12;
    }
    v18 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(
      (volatile signed __int32 **)&v18,
      v12);
    v14 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            v7,
            a2,
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::InteropVisual::s_InterfaceType,
            &v18);
    v13 = v14;
    if ( v14 < 0 )
    {
      v16 = 1105;
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, bool, struct _D3DMATRIX *, struct IUnknown **))(*(_QWORD *)((*((_QWORD *)this - 95) + 16LL) & -(__int64)(*((_QWORD *)this - 95) != 0LL)) + 296LL))(
              (*((_QWORD *)this - 95) + 16LL) & -(__int64)(*((_QWORD *)this - 95) != 0LL),
              *((_QWORD *)v18 + 39),
              a3,
              a4,
              a5,
              a6,
              a7);
      v13 = v14;
      if ( v14 >= 0 )
      {
        v13 = 0;
LABEL_11:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(
          (volatile signed __int32 **)&v18,
          v15);
        goto LABEL_12;
      }
      v16 = 1113;
    }
    DoStackCaptureDirect(v14, v16);
    goto LABEL_11;
  }
  v13 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_12:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v7);
  return v13;
}
