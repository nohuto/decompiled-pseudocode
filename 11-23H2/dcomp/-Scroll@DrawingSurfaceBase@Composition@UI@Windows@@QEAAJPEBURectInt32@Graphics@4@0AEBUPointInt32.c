/*
 * XREFs of ?Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBURectInt32@Graphics@4@0AEBUPointInt32@64@@Z @ 0x180152C5C
 * Callers:
 *     ?Scroll@Api@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@@Z @ 0x18010A630 (-Scroll@Api@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@@Z.c)
 *     ?ScrollRect@Api@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@URectInt32@75@@Z @ 0x18010A780 (-ScrollRect@Api@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@UR.c)
 *     ?ScrollRectWithClip@Api@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@URectInt32@75@1@Z @ 0x18010A820 (-ScrollRectWithClip@Api@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graph.c)
 *     ?ScrollWithClip@Api@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@URectInt32@75@@Z @ 0x18010A8D0 (-ScrollWithClip@Api@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@.c)
 *     ?Scroll@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@@Z @ 0x180195CF0 (-Scroll@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5.c)
 *     ?ScrollRect@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@URectInt32@75@@Z @ 0x180195E40 (-ScrollRect@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphi.c)
 *     ?ScrollRectWithClip@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@URectInt32@75@1@Z @ 0x180195EE0 (-ScrollRectWithClip@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt3.c)
 *     ?ScrollWithClip@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@URectInt32@75@@Z @ 0x180195F90 (-ScrollWithClip@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Gr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?OptionalRectIToRECT@@YAJPEBURectInt32@Graphics@Windows@@PEAUtagRECT@@PEAPEAU4@@Z @ 0x180152B6C (-OptionalRectIToRECT@@YAJPEBURectInt32@Graphics@Windows@@PEAUtagRECT@@PEAPEAU4@@Z.c)
 *     ?Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@0HH@Z @ 0x180152D20 (-Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@0HH@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::DrawingSurfaceBase::Scroll(
        Windows::UI::Composition::DrawingSurfaceBase *this,
        const struct Windows::Graphics::RectInt32 *a2,
        const struct Windows::Graphics::RectInt32 *a3,
        const struct Windows::Graphics::PointInt32 *a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  struct tagRECT *v10; // [rsp+30h] [rbp-68h] BYREF
  struct tagRECT *v11; // [rsp+38h] [rbp-60h] BYREF
  struct tagRECT v12; // [rsp+40h] [rbp-58h] BYREF
  struct tagRECT v13; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v7 = OptionalRectIToRECT(a2, &v12, &v11);
  if ( v7 < 0 )
  {
    v8 = 126LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdrawingsurfacebase.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = OptionalRectIToRECT(a3, &v13, &v10);
  if ( v7 < 0 )
  {
    v8 = 130LL;
    goto LABEL_3;
  }
  v7 = Windows::UI::Composition::DrawingSurfaceBase::Scroll(this, v11, v10, *(_DWORD *)a4, *((_DWORD *)a4 + 1));
  if ( v7 < 0 )
  {
    v8 = 132LL;
    goto LABEL_3;
  }
  return 0LL;
}
