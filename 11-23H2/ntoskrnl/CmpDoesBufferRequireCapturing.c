/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x1406D31CC
 * Callers:
 *     CmpCaptureKeyValueArray @ 0x1406D2418 (CmpCaptureKeyValueArray.c)
 *     NtSetValueKey @ 0x1406D2A00 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14070EA40 (NtDeleteValueKey.c)
 *     NtRenameKey @ 0x140A0DFB0 (NtRenameKey.c)
 * Callees:
 *     CmpIsBufferGloballyVisible @ 0x14073E690 (CmpIsBufferGloballyVisible.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, __int64 a2)
{
  if ( a1 )
    return 1;
  if ( *((_QWORD *)&CmpRegistryProcess + 1) )
    return (unsigned __int8)CmpIsBufferGloballyVisible(a2) == 0;
  return 0;
}
