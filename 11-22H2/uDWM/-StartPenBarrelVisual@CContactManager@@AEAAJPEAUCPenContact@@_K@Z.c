/*
 * XREFs of ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x1800B2830
 * Callers:
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18006C424 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800B090C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180046280 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18006D374 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x1800AEDA4 (--$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x1800CD370 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 */

__int64 __fastcall CContactManager::StartPenBarrelVisual(
        CContactManager *this,
        struct CPenContact *a2,
        unsigned __int64 a3)
{
  unsigned int v3; // esi
  CPenBarrelKeyVisual **v4; // rbx
  int Touch; // eax
  CPenBarrelKeyVisual *v8; // rcx
  char v9; // al

  v3 = 0;
  v4 = (CPenBarrelKeyVisual **)((char *)a2 + 8);
  if ( *((_QWORD *)a2 + 1) )
  {
LABEL_7:
    CPenBarrelKeyVisual::Start(*v4, (const struct tagPOINT *)((char *)a2 + 28), *((_DWORD *)a2 + 1), *(_DWORD *)a2);
    return v3;
  }
  Touch = CreateTouchVisual<CPenBarrelKeyVisual>(a3, (CTouchVisual **)a2 + 1);
  v3 = Touch;
  if ( Touch >= 0 )
  {
    v8 = *v4;
    v9 = (*((_DWORD *)a2 + 6) & 0x10) != 0;
    if ( *((_BYTE *)*v4 + 348) != v9 )
    {
      *((_BYTE *)v8 + 348) = v9;
      CPenBarrelKeyVisual::UpdateBarrelAlpha(v8);
    }
    CContactManager::AddToTouchNode(v8, a3, *v4);
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x7CCu);
  return v3;
}
