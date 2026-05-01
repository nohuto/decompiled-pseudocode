/*
 * XREFs of ?GetGameConfigFromPID@CQueryKnownGameList@@UEAAJKPEAUKGLGameConfig@KnownGameList@@@Z @ 0x18073F8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitGameConfigFromEntry@@YAJPEAUIGameEntry@KnownGameList@@PEAUKGLGameConfig@2@@Z @ 0x180740AE4 (-InitGameConfigFromEntry@@YAJPEAUIGameEntry@KnownGameList@@PEAUKGLGameConfig@2@@Z.c)
 */

__int64 __fastcall CQueryKnownGameList::GetGameConfigFromPID(
        CQueryKnownGameList *this,
        __int64 a2,
        struct KnownGameList::KGLGameConfig *a3)
{
  int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int inited; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct KnownGameList::IGameEntry *v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  if ( !a3 )
  {
    v4 = -2147467261;
    v5 = 2147500035LL;
    v6 = 345LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v5);
    goto LABEL_8;
  }
  v4 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, __int64, struct KnownGameList::IGameEntry **))(*(_QWORD *)this + 48LL))(
         this,
         a2,
         &v10);
  if ( v4 >= 0 )
  {
    inited = InitGameConfigFromEntry(v10, a3);
    v4 = inited;
    if ( inited >= 0 )
    {
      v4 = 0;
      goto LABEL_8;
    }
    v5 = (unsigned int)inited;
    v6 = 351LL;
    goto LABEL_6;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
  return (unsigned int)v4;
}
