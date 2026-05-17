/*
 * XREFs of LdrpCheckKnownDllFullPath @ 0x18004F308
 * Callers:
 *     LdrpLoadKnownDll @ 0x18004D3FC (LdrpLoadKnownDll.c)
 * Callees:
 *     LdrpGetBaseNameFromFullName @ 0x180042D7C (LdrpGetBaseNameFromFullName.c)
 *     RtlEqualUnicodeString @ 0x18004A360 (RtlEqualUnicodeString.c)
 */

char __fastcall LdrpCheckKnownDllFullPath(unsigned __int16 *a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // r10
  unsigned __int16 v5[4]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  result = 0;
  if ( LdrpKnownDllPath )
  {
    LdrpGetBaseNameFromFullName(a1, a2);
    LOWORD(v3) = *(_WORD *)(v3 + 8) - *(_WORD *)(v4 + 8);
    v6 = *(_QWORD *)(v4 + 8);
    v5[1] = v3;
    v5[0] = v3 - 2;
    return RtlEqualUnicodeString(v5, (__int64)&LdrpKnownDllPath, 1);
  }
  return result;
}
