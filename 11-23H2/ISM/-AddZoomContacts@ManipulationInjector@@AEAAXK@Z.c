/*
 * XREFs of ?AddZoomContacts@ManipulationInjector@@AEAAXK@Z @ 0x18011B810
 * Callers:
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x18011D158 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x18011D56C (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x18011B6D8 (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 */

void __fastcall ManipulationInjector::AddZoomContacts(
        struct tagPOINT *this,
        unsigned int a2,
        __int64 a3,
        const char *a4)
{
  LONG x; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v8; // [rsp+30h] [rbp+8h]
  struct tagPOINT v9; // [rsp+30h] [rbp+8h]
  struct tagPOINT v10; // [rsp+30h] [rbp+8h]

  if ( this[11].x == 16 )
  {
    v8.x = this[10].x - this[3].x;
    v8.y = this[10].y;
    ManipulationInjector::AddContact(this, v8, 0, (const char *)a2);
    x = this[3].x;
  }
  else
  {
    if ( this[11].x != 32 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x4BF,
        (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        a4);
    v9.x = this[10].x - this[4].x;
    v9.y = this[10].y;
    ManipulationInjector::AddContact(this, v9, 0, (const char *)a2);
    x = this[4].x;
  }
  v10.x = this[10].x + x;
  v10.y = this[10].y;
  ManipulationInjector::AddContact(this, v10, 0, (const char *)a2);
}
