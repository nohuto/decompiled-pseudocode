/*
 * XREFs of ??$_Uninitialized_move@PEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@YAPEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@QEAU12@0PEAU12@AEAV?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@0@@Z @ 0x1803AF2E0
 * Callers:
 *     ??$_Emplace_reallocate@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAPEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@QEAU23@$$QEAU23@@Z @ 0x1803AF17C (--$_Emplace_reallocate@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@-$vector@UClassId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move<ImmersiveShellComponentsConfiguration::ClassIdAndInfo *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  while ( a1 != a2 )
  {
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 16);
    a3 += 24LL;
    a1 += 24LL;
  }
  return a3;
}
