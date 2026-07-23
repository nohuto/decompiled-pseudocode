/*
 * XREFs of RtlULongLongAdd @ 0x140250590
 * Callers:
 *     CmpCaptureKeyValueArray @ 0x1406D2448 (CmpCaptureKeyValueArray.c)
 *     sub_1406EF5A0 @ 0x1406EF5A0 (sub_1406EF5A0.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1406F315C (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x14075A398 (LdrpResGetResourceDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongAdd(ULONGLONG ullAugend, ULONGLONG ullAddend, ULONGLONG *pullResult)
{
  ULONGLONG v3; // rdx

  v3 = ullAugend + ullAddend;
  if ( v3 < ullAugend )
  {
    *pullResult = -1LL;
    return -1073741675;
  }
  else
  {
    *pullResult = v3;
    return 0;
  }
}
