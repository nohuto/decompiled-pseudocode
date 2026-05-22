/*
 * XREFs of ?GetResults@AsyncOperation@VisualCapture@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurface@345@@Z @ 0x180154E30
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ErrorCode@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXPEAJ@Z @ 0x1801164F8 (-ErrorCode@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI.c)
 *     ??$ToApi@UICompositionSurface@Composition@UI@Windows@@@CompositionDrawingSurface@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801542F8 (--$ToApi@UICompositionSurface@Composition@UI@Windows@@@CompositionDrawingSurface@Composition@UI@.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualCapture::AsyncOperation::GetResults(
        Windows::UI::Composition::VisualCapture::AsyncOperation *this,
        struct Windows::UI::Composition::ICompositionSurface **a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned __int32 v5; // edi
  signed __int32 v6; // edx
  int v7; // ecx
  Microsoft::WRL2::NestableRuntimeClass *v8; // rcx
  struct Windows::UI::Composition::ICompositionSurface *v9; // rax
  signed __int32 v11; // [rsp+40h] [rbp+8h] BYREF
  signed __int32 v12; // [rsp+48h] [rbp+10h] BYREF
  struct Windows::UI::Composition::ICompositionSurface *v13; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    v6 = *((_DWORD *)this + 16);
    v11 = -2;
    _InterlockedCompareExchange(&v11, v6, -2);
    if ( v11 == 3 )
    {
      Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::ICompositionSurface *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::ErrorCode(
        (__int64)this + 16,
        &v12);
      v5 = v12;
      v7 = v12;
      if ( v12 >= 0 )
      {
LABEL_5:
        v8 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 14);
        v13 = 0LL;
        Windows::UI::Composition::CompositionDrawingSurface::ToApi<Windows::UI::Composition::ICompositionSurface>(
          v8,
          (__int64 *)&v13);
        v9 = v13;
        v13 = 0LL;
        v5 = 0;
        *a2 = v9;
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
        goto LABEL_6;
      }
    }
    else
    {
      if ( v11 == 1 )
        goto LABEL_5;
      v5 = -2147483634;
      RoOriginateError(2147483662LL, 0LL);
      v7 = -2147483634;
    }
    DoStackCaptureDirect(v7, 0x124u);
    goto LABEL_6;
  }
  v5 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
