/*
 * XREFs of ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x180129768
 * Callers:
 *     ?AddZoomContacts@ManipulationInjector@@AEAAXK@Z @ 0x1801298A0 (-AddZoomContacts@ManipulationInjector@@AEAAXK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x18012ACD8 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x18012AE18 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x18012B5FC (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x18012BAD4 (-UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x180129D80 (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 */

void __fastcall ManipulationInjector::AddContact(struct tagPOINT *this, struct tagPOINT a2, char a3, const char *y)
{
  LONG v4; // edi
  struct tagPOINT *v6; // r11
  struct tagPOINT *v7; // rax
  __int64 v8; // rcx
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rax
  LONG v12; // edx
  LONG v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v15; // [rsp+30h] [rbp+8h] BYREF

  v4 = (int)y;
  v6 = this;
  if ( this[6].x >= 4u )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x44E,
      (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      y);
  this[19 * (unsigned int)this[6].x + 18] = a2;
  if ( this->x == 2 )
  {
    v7 = (struct tagPOINT *)ManipulationInjector::DeskToDigiPt((ManipulationInjector *)this, (struct tagPOINT)&v15);
    v6[19 * *(unsigned int *)(v8 + 48) + 19] = *v7;
  }
  v9 = 0;
  if ( v6[6].x != -1 )
  {
    y = (const char *)(unsigned int)v6[5].y;
    while ( 1 )
    {
      v10 = ((_BYTE)y + (_BYTE)v9) & 3;
      if ( *((_BYTE *)&v6[91].x + v10) )
        break;
      if ( ++v9 >= (unsigned int)(v6[6].x + 1) )
        goto LABEL_10;
    }
    v6[5].y = v10;
  }
LABEL_10:
  v11 = (unsigned int)v6[5].y;
  if ( !*((_BYTE *)&v6[91].x + v11) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x460,
      (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      y);
  *((_BYTE *)&v6[91].x + v11) = 0;
  v12 = v6[5].y;
  v6[5].y = v12 + 1;
  v6[19 * (unsigned int)v6[6].x + 14].y = v12;
  v13 = v6[5].y;
  if ( v13 == 4 )
    v13 = 0;
  v6[5].y = v13;
  v6[19 * (unsigned int)v6[6].x + 15].y = a3 != 0 ? 131074 : 65542;
  *(&v6[89].x + (unsigned int)v6[6].x++) = v4;
}
