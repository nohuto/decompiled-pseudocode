/*
 * XREFs of TranslateBindMutexResources @ 0x1C004EFEC
 * Callers:
 *     AcpiHandleDeviceFirmwareLock @ 0x1C002CD00 (AcpiHandleDeviceFirmwareLock.c)
 * Callees:
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0030C38 (ACPIInternalGetDeviceFromNSOBJ.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009832C (PnpBiosResourcesToNtResources.c)
 */

__int64 __fastcall TranslateBindMutexResources(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  PVOID v6; // rdi
  PVOID Object[2]; // [rsp+30h] [rbp-10h] BYREF

  Object[0] = 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), 0LL, 0LL) )
    return 0;
  ACPIInternalGetDeviceFromNSOBJ(a2, Object, a3, 0LL);
  v6 = Object[0];
  if ( !Object[0] )
  {
    v5 = -1073741661;
LABEL_8:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), 0LL, 0LL) )
      v5 = 0;
    v6 = Object[0];
    goto LABEL_11;
  }
  v5 = PnpBiosResourcesToNtResources(Object[0], a3, 4LL);
  if ( v5 < 0 || MEMORY[0x24] == 1 )
    goto LABEL_8;
  v5 = -1073741637;
LABEL_11:
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v5;
}
