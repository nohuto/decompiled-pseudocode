/*
 * XREFs of ?CreateIsGameManager@@YAJPEAPEAUIIsGameManager@@@Z @ 0x18008DEFC
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800905A0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 * Callees:
 *     ??$MakeAndInitialize@VIsGameManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIsGameManager@@@Z @ 0x18008DDA0 (--$MakeAndInitialize@VIsGameManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIsGameManager@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreateIsGameManager(struct IIsGameManager **a1)
{
  int IsGame; // eax
  unsigned int v3; // ebx
  IsGameManager *v4; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  IsGameManager *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  IsGame = Microsoft::WRL::Details::MakeAndInitialize<IsGameManager,IsGameManager,>(&v8);
  v3 = IsGame;
  if ( IsGame < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB8,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)IsGame,
      v6);
    v4 = v8;
  }
  else
  {
    v4 = 0LL;
    *a1 = v8;
    v3 = 0;
  }
  if ( v4 )
    (*(void (__fastcall **)(IsGameManager *))(*(_QWORD *)v4 + 16LL))(v4);
  return v3;
}
