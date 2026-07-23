/*
 * XREFs of LdrpCheckKnownDllFullPath @ 0x18004F308
 * Callers:
 *     LdrpLoadKnownDll @ 0x18004D3FC (LdrpLoadKnownDll.c)
 * Callees:
 *     LdrpGetBaseNameFromFullName @ 0x180042D7C (LdrpGetBaseNameFromFullName.c)
 *     RtlEqualUnicodeString @ 0x18004A360 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall LdrpCheckKnownDllFullPath(unsigned __int16 *a1, __int64 a2)
{
  BOOLEAN result; // al
  __int64 v3; // rdx
  __int64 v4; // r10
  _UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  result = 0;
  if ( LdrpKnownDllPath.Length )
  {
    LdrpGetBaseNameFromFullName(a1, a2);
    LOWORD(v3) = *(_WORD *)(v3 + 8) - *(_WORD *)(v4 + 8);
    String1.Buffer = *(wchar_t **)(v4 + 8);
    String1.MaximumLength = v3;
    String1.Length = v3 - 2;
    return RtlEqualUnicodeString(&String1, &LdrpKnownDllPath, 1u);
  }
  return result;
}
