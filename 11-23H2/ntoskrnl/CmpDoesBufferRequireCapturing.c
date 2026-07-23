/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x1406D31FC
 * Callers:
 *     CmpCaptureKeyValueArray @ 0x1406D2448 (CmpCaptureKeyValueArray.c)
 *     NtSetValueKey @ 0x1406D2A30 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14070EC50 (NtDeleteValueKey.c)
 *     NtRenameKey @ 0x140A0E260 (NtRenameKey.c)
 * Callees:
 *     CmpIsBufferGloballyVisible @ 0x14073E880 (CmpIsBufferGloballyVisible.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, __int64 a2)
{
  if ( a1 )
    return 1;
  if ( *((_QWORD *)&CmpRegistryProcess + 1) )
    return (unsigned __int8)CmpIsBufferGloballyVisible(a2) == 0;
  return 0;
}
