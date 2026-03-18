/*
 * XREFs of ??$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z @ 0x1C00D7C88
 * Callers:
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C00D7DB0 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00869F0 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall CWindowProp::CreateWindowProp<GroupedFGBoostProp>(_QWORD *a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax

  v2 = 0;
  v3 = (_QWORD *)Win32AllocPoolZInit(0x28uLL, 1734767445);
  if ( v3 )
  {
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    *v3 = &GroupedFGBoostProp::`vftable';
    *a1 = v3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
