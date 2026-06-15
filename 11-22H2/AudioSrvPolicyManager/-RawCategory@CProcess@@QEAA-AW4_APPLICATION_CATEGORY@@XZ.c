/*
 * XREFs of ?RawCategory@CProcess@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x1800286C8
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006EE0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::RawCategory(unsigned int *a1)
{
  if ( a1[120] && a1[119] == 4 )
    return a1[121];
  else
    return a1[78];
}
