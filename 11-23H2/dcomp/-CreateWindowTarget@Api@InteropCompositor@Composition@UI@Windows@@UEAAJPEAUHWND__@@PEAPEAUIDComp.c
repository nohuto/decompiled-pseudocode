/*
 * XREFs of ?CreateWindowTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@PEAPEAUIDCompositionTarget@@@Z @ 0x18015EA10
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIDCompositionTarget@@@?$ComPtr@VInteropCompositionTarget@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800896B8 (--$As@UIDCompositionTarget@@@-$ComPtr@VInteropCompositionTarget@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?CreateTarget@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUHWND__@@W4_HwndTargetType@@PEAPEAVInteropCompositionTarget@234@@Z @ 0x1800896F4 (-CreateTarget@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUHWND__@@W4_HwndTargetType@@PEAP.c)
 *     ?InternalRelease@?$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D740 (-InternalRelease@-$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateWindowTarget(
        Windows::UI::Composition::InteropCompositor::Api *this,
        __int64 a2,
        struct IDCompositionTarget **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  struct IDCompositionTarget *v9; // rax
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+20h] BYREF
  struct IDCompositionTarget *v12; // [rsp+50h] [rbp+30h] BYREF

  *a3 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1216);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1216));
  if ( (v3->SpinCount & 2) != 0 )
  {
    if ( a2 )
    {
      v11 = 0LL;
      Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v11);
      v7 = Windows::UI::Composition::InteropCompositor::CreateTarget((__int64)v3, a2, 2, &v11);
      v6 = v7;
      if ( v7 < 0 )
      {
        DoStackCaptureDirect(v7, 0x1C3u);
      }
      else
      {
        v12 = 0LL;
        v8 = Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropCompositionTarget>::As<IDCompositionTarget>(
               &v11,
               (__int64 *)&v12);
        v6 = v8;
        if ( v8 < 0 )
        {
          DoStackCaptureDirect(v8, 0x1C7u);
        }
        else
        {
          v9 = v12;
          v12 = 0LL;
          v6 = 0;
          *a3 = v9;
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v12);
      }
      Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v11);
    }
    else
    {
      v6 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x1C0u);
    }
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v6;
}
