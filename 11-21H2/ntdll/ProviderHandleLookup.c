/*
 * XREFs of ProviderHandleLookup @ 0x1800A3A68
 * Callers:
 *     EtwpGetKmRegHandle @ 0x18000498C (EtwpGetKmRegHandle.c)
 *     EtwEventEnabled @ 0x180004AF0 (EtwEventEnabled.c)
 *     EtwEventWriteTransfer @ 0x180004F40 (EtwEventWriteTransfer.c)
 *     EtwpEventWriteFull @ 0x180006228 (EtwpEventWriteFull.c)
 *     EtwNotificationUnregister @ 0x1800065F0 (EtwNotificationUnregister.c)
 *     EtwpSetProviderTraits @ 0x180015628 (EtwpSetProviderTraits.c)
 *     EtwEventProviderEnabled @ 0x18007B090 (EtwEventProviderEnabled.c)
 *     EtwpTrackProviderBinary @ 0x18008894C (EtwpTrackProviderBinary.c)
 *     EtwEventWriteString @ 0x180121D10 (EtwEventWriteString.c)
 *     EtwpUseDescriptorType @ 0x180121F48 (EtwpUseDescriptorType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProviderHandleLookup(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  __int64 result; // rax

  v2 = (a2 >> 1) & 7;
  v3 = qword_18017AC50[v2];
  if ( ((v3 != 0) & (unsigned __int8)-(a2 >> 4 < dword_18013CD00[v2]) & (unsigned __int8)a2) == 0 )
    return 0LL;
  result = *(_QWORD *)(v3 + 8 * ((unsigned __int64)a2 >> 4));
  if ( (result & 1) != 0 )
    return 0LL;
  return result;
}
