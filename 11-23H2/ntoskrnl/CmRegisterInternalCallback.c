/*
 * XREFs of CmRegisterInternalCallback @ 0x140850C9C
 * Callers:
 *     VrpIncrementSiloCount @ 0x14077CE2C (VrpIncrementSiloCount.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x140850D1C (CmpRegisterCallbackInternal.c)
 */

__int64 __fastcall CmRegisterInternalCallback(__int64 a1, int a2)
{
  if ( VrpDriverObject )
    return CmpRegisterCallbackInternal((unsigned int)VrpRegistryCallback, 0, a2, 0, 1, (__int64)&VrpCallbackCookie);
  else
    return 3221225713LL;
}
