/*
 * XREFs of ?HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180149FA8
 * Callers:
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x1800FEAD8 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSyste.c)
 *     ?RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ @ 0x180116D54 (-RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::HardwareLoopbackEnabled(CEndpointCharacteristics *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v1 = *((_QWORD *)this + 5);
  v5 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v2 = 1;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(
         v1,
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         pvar) < 0
    || LOWORD(pvar[0]) != 19 )
  {
    v2 = 0;
  }
  PropVariantClear(pvar);
  return v2;
}
