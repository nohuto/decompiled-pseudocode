/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b29ba4880acd431ce144875775ea4dfc__&_::Run @ 0x1801071F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x180107378 (-Initialize@TabletModePositioner@@AEAAJXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b29ba4880acd431ce144875775ea4dfc____::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = TabletModePositioner::Initialize(*(TabletModePositioner **)(a1 + 16));
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x212,
      (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v5,
      a5);
}
