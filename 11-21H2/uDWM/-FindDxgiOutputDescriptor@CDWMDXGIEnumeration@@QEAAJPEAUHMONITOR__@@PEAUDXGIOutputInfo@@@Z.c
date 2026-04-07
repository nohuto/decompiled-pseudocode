/*
 * XREFs of ?FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x1800B07EC
 * Callers:
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800B0ACC (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1800B0D50 (-IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindDxgiOutputDescriptor@CDWMDXGIAdapter@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x1800BBF30 (-FindDxgiOutputDescriptor@CDWMDXGIAdapter@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z.c)
 */

__int64 __fastcall CDWMDXGIEnumeration::FindDxgiOutputDescriptor(
        CDWMDXGIEnumeration *this,
        HMONITOR a2,
        struct DXGIOutputInfo *a3)
{
  unsigned int v3; // ebp
  int v7; // ebx
  __int64 v8; // rdi
  int DxgiOutputDescriptor; // eax

  v3 = *((_DWORD *)this + 20);
  v7 = -2147024809;
  v8 = 0LL;
  do
  {
    if ( (unsigned int)v8 >= v3 )
      break;
    DxgiOutputDescriptor = CDWMDXGIAdapter::FindDxgiOutputDescriptor(
                             *(CDWMDXGIAdapter **)(*((_QWORD *)this + 7) + 8 * v8),
                             a2,
                             a3);
    v7 = DxgiOutputDescriptor;
    if ( DxgiOutputDescriptor < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DxgiOutputDescriptor, 0xB7u);
    v8 = (unsigned int)(v8 + 1);
  }
  while ( v7 < 0 );
  return (unsigned int)v7;
}
