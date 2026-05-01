/*
 * XREFs of ??4?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18048A150
 * Callers:
 *     ??0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z @ 0x180489E08 (--0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@AEAAXXZ @ 0x1802D36E4 (-_Tidy@-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndI.c)
 */

_QWORD *__fastcall std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::operator=(
        _QWORD *a1,
        _QWORD *a2)
{
  if ( a1 != a2 )
  {
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)a1);
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  return a1;
}
