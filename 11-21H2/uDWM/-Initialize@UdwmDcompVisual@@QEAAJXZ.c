/*
 * XREFs of ?Initialize@UdwmDcompVisual@@QEAAJXZ @ 0x180036E64
 * Callers:
 *     ?Initialize@AcrylicHostBackdrop@@QEAAJXZ @ 0x180036DA4 (-Initialize@AcrylicHostBackdrop@@QEAAJXZ.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x18004DDEC (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateSharedVisual@UdwmDcompVisual@@AEAAJAEAUSharedDwmDcompVisual@@_N@Z @ 0x180036F40 (-CreateSharedVisual@UdwmDcompVisual@@AEAAJAEAUSharedDwmDcompVisual@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UdwmDcompVisual::Initialize(UdwmDcompVisual *this)
{
  UdwmDcompVisual *v2; // rcx
  int SharedVisual; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  SharedVisual = UdwmDcompVisual::CreateSharedVisual(this, (UdwmDcompVisual *)((char *)this + 16), 1);
  if ( SharedVisual < 0 )
  {
    v7 = 394LL;
  }
  else
  {
    SharedVisual = UdwmDcompVisual::CreateSharedVisual(v2, (UdwmDcompVisual *)((char *)this + 48), 0);
    if ( SharedVisual < 0 )
    {
      v7 = 395LL;
    }
    else
    {
      v4 = *((_QWORD *)this + 2);
      v5 = *((_QWORD *)this + 6);
      *(_QWORD *)(v4 + 248) = v5;
      *(_QWORD *)(v5 + 248) = v4;
      SharedVisual = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 128LL))(
                       *((_QWORD *)this + 3),
                       *((_QWORD *)this + 7),
                       1LL);
      if ( SharedVisual < 0 )
      {
        v7 = 402LL;
      }
      else
      {
        SharedVisual = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                         + 5)
                                                                       + 32LL)
                                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                              + 5)
                                                                            + 32LL));
        if ( SharedVisual >= 0 )
          return 0LL;
        v7 = 403LL;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
    (const char *)(unsigned int)SharedVisual);
  return (unsigned int)SharedVisual;
}
