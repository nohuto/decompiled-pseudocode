/*
 * XREFs of ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180033B3C
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180020500 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z @ 0x180021F50 (-UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x1800233A8 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x1800356A4 (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?RuntimeClassInitialize@ForegroundManager@@UEAAJXZ @ 0x1800417A0 (-RuntimeClassInitialize@ForegroundManager@@UEAAJXZ.c)
 *     ??4?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConnection@@@Z @ 0x1800517BC (--4-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConne.c)
 *     ??1?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A900 (--1-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CursorSuppressionProcessor@@UEAA@XZ @ 0x180166490 (--1CursorSuppressionProcessor@@UEAA@XZ.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x1801FB19C (--1DWMCursor@@MEAA@XZ.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180033D64 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  unsigned int result; // eax
  Microsoft::Bamo::BaseBamoConnection *v2; // rdx

  result = 0;
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::Bamo::BaseBamoConnection::Release(v2);
  }
  return result;
}
