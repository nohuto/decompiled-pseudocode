/*
 * XREFs of ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x18011DA44
 * Callers:
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x18011CD88 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x18011B6D8 (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?CheckOverlap@ManipulationInjector@@AEAA_NI@Z @ 0x18011B8C0 (-CheckOverlap@ManipulationInjector@@AEAA_NI@Z.c)
 */

void __fastcall ManipulationInjector::UpdatePanOverlapState(
        struct tagPOINT *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( this->y == 2 && LOBYTE(this[1].y) )
  {
    if ( ManipulationInjector::CheckOverlap((ManipulationInjector *)this, this[6].x - 1, a3, a4) )
    {
      ManipulationInjector::AddContact(this, this[10], 0, (const char *)(unsigned int)this[89].x);
      this[5].x = 1;
    }
    else
    {
      if ( (this[5].x & 0xFFFFFFFD) != 0 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x338,
          (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v5);
      this[5].x = 0;
    }
  }
}
