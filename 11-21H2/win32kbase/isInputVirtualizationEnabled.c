/*
 * XREFs of isInputVirtualizationEnabled @ 0x1C00384C4
 * Callers:
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C005A850 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C005A980 (-PreUninitialize@CKeyboardSensor@@EEAAXXZ.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C005D270 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     InputUnInitialize @ 0x1C009E774 (InputUnInitialize.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00B6F30 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     CleanupLogonProcess @ 0x1C00B8E60 (CleanupLogonProcess.c)
 *     _RegisterLogonProcess @ 0x1C00BDE70 (_RegisterLogonProcess.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00C3160 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00C5700 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool isInputVirtualizationEnabled()
{
  return gbInputVirtualizationEnabled && gSessionId == gInputVirtualizationSessionId;
}
