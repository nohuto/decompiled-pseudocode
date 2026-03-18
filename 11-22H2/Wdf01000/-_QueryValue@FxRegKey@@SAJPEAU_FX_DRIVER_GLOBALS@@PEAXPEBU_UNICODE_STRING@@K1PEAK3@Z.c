/*
 * XREFs of ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C004CBC4
 * Callers:
 *     ?FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z @ 0x1C0026E98 (-FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z.c)
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C002CE74 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     FxVerifierReadObjectDebugInfo @ 0x1C0044CF0 (FxVerifierReadObjectDebugInfo.c)
 *     ?QueryValue@FxRegKey@@QEAAJPEBU_UNICODE_STRING@@KPEAXPEAK2@Z @ 0x1C004A114 (-QueryValue@FxRegKey@@QEAAJPEBU_UNICODE_STRING@@KPEAXPEAK2@Z.c)
 *     imp_WdfRegistryQueryValue @ 0x1C004BD60 (imp_WdfRegistryQueryValue.c)
 *     ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C006B714 (-PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 */

__int64 __fastcall FxRegKey::_QueryValue(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        void *Key,
        _UNICODE_STRING *ValueName,
        unsigned int ValueLength,
        void *Value,
        unsigned int *ValueLengthQueried,
        unsigned int *ValueType)
{
  __int64 Tag; // r8
  ULONG Length; // eax
  _KEY_VALUE_PARTIAL_INFORMATION *Pool2; // rbx
  NTSTATUS v14; // edi
  unsigned int DataLength; // eax
  unsigned int length; // [rsp+30h] [rbp-58h] BYREF
  _KEY_VALUE_PARTIAL_INFORMATION partial; // [rsp+38h] [rbp-50h] BYREF

  partial = 0LL;
  if ( FxDriverGlobals )
    Tag = FxDriverGlobals->Tag;
  else
    Tag = 1917089862LL;
  if ( Value )
  {
    length = ValueLength + 12;
    Pool2 = (_KEY_VALUE_PARTIAL_INFORMATION *)ExAllocatePool2(256LL, ValueLength + 12, Tag);
    if ( !Pool2 )
      return 3221225626LL;
    Length = length;
  }
  else
  {
    Length = 12;
    length = 12;
    Pool2 = &partial;
  }
  v14 = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, Pool2, Length, &length);
  if ( v14 >= 0 )
  {
    if ( Value )
    {
      DataLength = Pool2->DataLength;
      if ( ValueLength >= DataLength )
        memmove(Value, Pool2->Data, DataLength);
    }
    goto LABEL_14;
  }
  if ( v14 == -2147483643 )
  {
LABEL_14:
    if ( ValueLengthQueried )
      *ValueLengthQueried = Pool2->DataLength;
    if ( ValueType )
      *ValueType = Pool2->Type;
  }
  if ( Pool2 != &partial )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v14;
}
