/*
 * XREFs of RtlULongLongAdd @ 0x1402504C0
 * Callers:
 *     CmpCaptureKeyValueArray @ 0x1406D2418 (CmpCaptureKeyValueArray.c)
 *     sub_1406EF570 @ 0x1406EF570 (sub_1406EF570.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1406F312C (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x14075A1A8 (LdrpResGetResourceDirectory.c)
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
