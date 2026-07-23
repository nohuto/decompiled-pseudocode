/*
 * XREFs of ProviderHandleLookup @ 0x180030550
 * Callers:
 *     EtwpSetProviderTraits @ 0x18002FBC8 (EtwpSetProviderTraits.c)
 *     EtwEventProviderEnabled @ 0x18002FF80 (EtwEventProviderEnabled.c)
 *     EtwNotificationUnregister @ 0x180030010 (EtwNotificationUnregister.c)
 *     EtwpEventWriteFull @ 0x180030178 (EtwpEventWriteFull.c)
 *     EtwEventWriteTransfer @ 0x180030320 (EtwEventWriteTransfer.c)
 *     EtwEventEnabled @ 0x1800527B0 (EtwEventEnabled.c)
 *     EtwpGetKmRegHandle @ 0x180052848 (EtwpGetKmRegHandle.c)
 *     EtwpTrackProviderBinary @ 0x18008510C (EtwpTrackProviderBinary.c)
 *     EtwEventWriteString @ 0x180124E60 (EtwEventWriteString.c)
 *     EtwpUseDescriptorType @ 0x180125090 (EtwpUseDescriptorType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProviderHandleLookup(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  __int64 result; // rax

  v2 = (a2 >> 1) & 7;
  v3 = qword_180187F90[v2];
  if ( ((v3 != 0) & (unsigned __int8)-(a2 >> 4 < dword_1801490D0[v2]) & (unsigned __int8)a2) == 0 )
    return 0LL;
  result = *(_QWORD *)(v3 + 8 * ((unsigned __int64)a2 >> 4));
  if ( (result & 1) != 0 )
    return 0LL;
  return result;
}
