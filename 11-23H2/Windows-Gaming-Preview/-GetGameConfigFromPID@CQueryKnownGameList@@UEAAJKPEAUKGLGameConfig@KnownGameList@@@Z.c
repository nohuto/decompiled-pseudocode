/*
 * XREFs of ?GetGameConfigFromPID@CQueryKnownGameList@@UEAAJKPEAUKGLGameConfig@KnownGameList@@@Z @ 0x180046900
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitGameConfigFromEntry@@YAJPEAUIGameEntry@KnownGameList@@PEAUKGLGameConfig@2@@Z @ 0x1800497F8 (-InitGameConfigFromEntry@@YAJPEAUIGameEntry@KnownGameList@@PEAUKGLGameConfig@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CQueryKnownGameList::GetGameConfigFromPID(
        CQueryKnownGameList *this,
        __int64 a2,
        struct KnownGameList::KGLGameConfig *a3)
{
  int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int inited; // eax
  struct KnownGameList::IGameEntry *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct KnownGameList::IGameEntry *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
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
         &v11);
  if ( v4 < 0 )
    goto LABEL_8;
  inited = InitGameConfigFromEntry(v11, a3);
  v4 = inited;
  if ( inited < 0 )
  {
    v5 = (unsigned int)inited;
    v6 = 351LL;
    goto LABEL_6;
  }
  v4 = 0;
LABEL_8:
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v4;
}
