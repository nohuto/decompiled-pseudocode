/*
 * XREFs of ?CreateTargetForHwnd@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@HPEAPEAUIDCompositionTarget@@@Z @ 0x1800895E0
 * Callers:
 *     ?CreateTargetForHwnd@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAUHWND__@@HPEAPEAUIDCompositionTarget@@@Z @ 0x1800AC050 (-CreateTargetForHwnd@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAUHWND__@@HPEAPEAUI.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIDCompositionTarget@@@?$ComPtr@VInteropCompositionTarget@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800896B8 (--$As@UIDCompositionTarget@@@-$ComPtr@VInteropCompositionTarget@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?CreateTarget@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUHWND__@@W4_HwndTargetType@@PEAPEAVInteropCompositionTarget@234@@Z @ 0x1800896F4 (-CreateTarget@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUHWND__@@W4_HwndTargetType@@PEAP.c)
 *     ?InternalRelease@?$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D740 (-InternalRelease@-$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateTargetForHwnd(
        struct _RTL_CRITICAL_SECTION *this,
        HWND a2,
        int a3,
        struct IDCompositionTarget **a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  struct IDCompositionTarget *v11; // rax
  __int64 v13; // [rsp+40h] [rbp+20h] BYREF
  struct IDCompositionTarget *v14; // [rsp+58h] [rbp+38h] BYREF

  *a4 = 0LL;
  v4 = this - 30;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 30);
  if ( (v4->SpinCount & 2) != 0 )
  {
    if ( a2 )
    {
      v13 = 0LL;
      Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v13);
      v8 = Windows::UI::Composition::InteropCompositor::CreateTarget(v4, a2, a3 != 0, &v13);
      v9 = v8;
      if ( v8 < 0 )
      {
        DoStackCaptureDirect(v8, 0x1ADu);
      }
      else
      {
        v14 = 0LL;
        v10 = Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropCompositionTarget>::As<IDCompositionTarget>(
                &v13,
                &v14);
        v9 = v10;
        if ( v10 < 0 )
        {
          DoStackCaptureDirect(v10, 0x1B1u);
        }
        else
        {
          v11 = v14;
          v14 = 0LL;
          v9 = 0;
          *a4 = v11;
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v14);
      }
      Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v13);
    }
    else
    {
      v9 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x1AAu);
    }
  }
  else
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v9;
}
