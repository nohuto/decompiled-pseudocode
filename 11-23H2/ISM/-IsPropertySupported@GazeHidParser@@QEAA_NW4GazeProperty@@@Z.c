/*
 * XREFs of ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x1801A1308
 * Callers:
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800E6334 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1801A09C0 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1801A0E14 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 *     ?SetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEAXKPEADK@Z @ 0x1801A1350 (-SetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEAXKPEADK@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@W4GazeProperty@@@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@std@@@1@AEBW4GazeProperty@@@Z @ 0x1801A08E0 (--$_Find_lower_bound@W4GazeProperty@@@-$_Tree@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4GazePro.c)
 */

bool __fastcall GazeHidParser::IsPropertySupported(__int64 a1, int a2)
{
  int v2; // r10d
  _QWORD *v3; // r11
  bool result; // al
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Find_lower_bound<enum GazeProperty>(
    (__int64 *)(a1 + 72),
    (__int64)v5,
    &v7);
  result = 0;
  if ( !*(_BYTE *)(v6 + 25) && v2 >= *(_DWORD *)(v6 + 28) )
    return v6 != *v3;
  return result;
}
