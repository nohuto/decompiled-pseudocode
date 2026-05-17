/*
 * XREFs of ProviderHandleLookup @ 0x180030720
 * Callers:
 *     EtwpSetProviderTraits @ 0x18002FD98 (EtwpSetProviderTraits.c)
 *     EtwEventProviderEnabled @ 0x180030150 (EtwEventProviderEnabled.c)
 *     EtwNotificationUnregister @ 0x1800301E0 (EtwNotificationUnregister.c)
 *     EtwpEventWriteFull @ 0x180030348 (EtwpEventWriteFull.c)
 *     EtwEventWriteTransfer @ 0x1800304F0 (EtwEventWriteTransfer.c)
 *     EtwEventEnabled @ 0x180052910 (EtwEventEnabled.c)
 *     EtwpGetKmRegHandle @ 0x1800529A8 (EtwpGetKmRegHandle.c)
 *     EtwpTrackProviderBinary @ 0x18008490C (EtwpTrackProviderBinary.c)
 *     EtwEventWriteString @ 0x1801239E0 (EtwEventWriteString.c)
 *     EtwpUseDescriptorType @ 0x180123C10 (EtwpUseDescriptorType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProviderHandleLookup(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  __int64 result; // rax

  v2 = (a2 >> 1) & 7;
  v3 = qword_180184E90[v2];
  if ( ((v3 != 0) & (unsigned __int8)-(a2 >> 4 < dword_180145CF0[v2]) & (unsigned __int8)a2) == 0 )
    return 0LL;
  result = *(_QWORD *)(v3 + 8 * ((unsigned __int64)a2 >> 4));
  if ( (result & 1) != 0 )
    return 0LL;
  return result;
}
