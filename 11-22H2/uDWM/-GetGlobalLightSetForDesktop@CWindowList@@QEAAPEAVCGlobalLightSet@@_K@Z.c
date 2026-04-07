/*
 * XREFs of ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x18003EC28
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18003EAC4 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z @ 0x1800CE480 (-AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z.c)
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800CEE78 (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 *     ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z @ 0x1800CF374 (-RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18002AD84 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x18003ECA8 (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1A98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct CGlobalLightSet *__fastcall CWindowList::GetGlobalLightSetForDesktop(CWindowList *this, unsigned __int64 a2)
{
  _QWORD *Element; // rbx
  int v4; // eax
  volatile signed __int32 *v5; // rcx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v9; // [rsp+30h] [rbp+8h] BYREF

  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
              a2);
  if ( Element[7] )
    return (struct CGlobalLightSet *)Element[7];
  v9 = 0LL;
  v4 = CGlobalLightSet::Create(a2, &v9);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1DCB,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v4,
      v7);
  }
  else
  {
    v5 = (volatile signed __int32 *)v9;
    Element[7] = v9;
    if ( !v5 )
      goto LABEL_6;
    _InterlockedIncrement(v5 + 2);
  }
  v5 = (volatile signed __int32 *)v9;
LABEL_6:
  if ( v5 )
  {
    v9 = 0LL;
    CBaseObject::Release((CBaseObject *)v5);
  }
  return (struct CGlobalLightSet *)Element[7];
}
