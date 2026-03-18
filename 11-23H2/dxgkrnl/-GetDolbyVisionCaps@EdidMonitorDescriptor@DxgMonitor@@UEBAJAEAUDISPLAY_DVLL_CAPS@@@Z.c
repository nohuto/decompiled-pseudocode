/*
 * XREFs of ?GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0228380
 * Callers:
 *     <none>
 * Callees:
 *     ?EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0023A90 (-EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z.c)
 *     Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledDeviceUsage @ 0x1C002730C (Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledDeviceUsage.c)
 *     ?EDID_V1_GetDolbyVisionCapsUpdated@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0027544 (-EDID_V1_GetDolbyVisionCapsUpdated@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z.c)
 *     ??1?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAA@XZ @ 0x1C004A76C (--1-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAA@XZ.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C01D8390 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetDolbyVisionCaps(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct DISPLAY_DVLL_CAPS *a2)
{
  unsigned int DolbyVisionCapsUpdated; // eax
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int8 *v7; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this, &v7, &v6);
  if ( (unsigned int)Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledDeviceUsage() )
    DolbyVisionCapsUpdated = EDID_V1_GetDolbyVisionCapsUpdated(v6, v7, a2);
  else
    DolbyVisionCapsUpdated = EDID_V1_GetDolbyVisionCaps(v6, v7, a2);
  v4 = DolbyVisionCapsUpdated;
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::~unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>((void **)&v7);
  return v4;
}
