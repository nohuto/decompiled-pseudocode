/*
 * XREFs of CmpTraceHiveSaveFileCopied @ 0x140A12E00
 * Callers:
 *     CmSaveKey @ 0x140A0B990 (CmSaveKey.c)
 * Callees:
 *     EtwWrite @ 0x1402578A0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

BOOLEAN CmpTraceHiveSaveFileCopied()
{
  REGHANDLE v0; // rbx
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-28h] BYREF

  v0 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_SAVE_FILE_COPIED;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
    return EtwWrite(v0, &EventDescriptor, 0LL, 0, 0LL);
  return result;
}
