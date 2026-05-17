/*
 * XREFs of LdrpValidateEntrySection @ 0x18002B5C8
 * Callers:
 *     LdrpProcessMappedModule @ 0x18002B3C4 (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 */

bool __fastcall LdrpValidateEntrySection(__int64 a1)
{
  unsigned int v2; // edx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3, *(_QWORD *)(a1 + 48), 0LL, &v4);
  v2 = *(_DWORD *)(v4 + 40);
  return !v2 || !*(_QWORD *)(a1 + 56) || v2 >= *(_DWORD *)(v4 + 84);
}
