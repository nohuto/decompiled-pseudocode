/*
 * XREFs of ?Resize@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@@Z @ 0x18008C848
 * Callers:
 *     ?Resize@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@@Z @ 0x18008C7E0 (-Resize@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@.c)
 *     ?Resize@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUtagSIZE@@@Z @ 0x180195C60 (-Resize@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUtagSIZE@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?UseUnderlyingVirtualSurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCompositionVirtualSurface@@@Z @ 0x18008C8D0 (-UseUnderlyingVirtualSurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@AEAAJPEAPE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionVirtualDrawingSurface::Resize(
        Windows::UI::Composition::CompositionVirtualDrawingSurface *a1,
        __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  char v10; // al
  bool v12; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v14; // [rsp+3Ch] [rbp+14h]
  struct IDCompositionVirtualSurface *v15; // [rsp+40h] [rbp+18h] BYREF

  v14 = HIDWORD(a2);
  v2 = a2;
  v4 = Windows::UI::Composition::CompositionVirtualDrawingSurface::UseUnderlyingVirtualSurface(a1, &v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionvirtualdrawingsurface.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct IDCompositionVirtualSurface *, _QWORD, _QWORD))(*(_QWORD *)v15 + 64LL))(
           v15,
           v2,
           v14);
    v8 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionvirtualdrawingsurface.cpp",
        (const char *)(unsigned int)v6);
      return v8;
    }
    else
    {
      v9 = *((_QWORD *)a1 + 3);
      v10 = *(_BYTE *)(v9 + 452);
      if ( (v10 & 1) == 0 )
      {
        v12 = *(_DWORD *)(v9 + 448) == 0;
        *(_BYTE *)(v9 + 452) = v10 | 1;
        if ( v12 )
          Windows::UI::Composition::CompositorCommon::EnableMessageGroup(
            (Windows::UI::Composition::CompositorCommon *)v9,
            v7);
      }
      return 0LL;
    }
  }
}
