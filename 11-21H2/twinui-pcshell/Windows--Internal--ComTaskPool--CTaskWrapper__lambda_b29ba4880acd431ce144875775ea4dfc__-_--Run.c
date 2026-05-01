/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b29ba4880acd431ce144875775ea4dfc__&_::Run @ 0x18017FCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x1800B0F0C (-Initialize@TabletModePositioner@@AEAAJXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b29ba4880acd431ce144875775ea4dfc____::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = TabletModePositioner::Initialize(*(TabletModePositioner **)(a1 + 16));
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x212,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v1);
}
