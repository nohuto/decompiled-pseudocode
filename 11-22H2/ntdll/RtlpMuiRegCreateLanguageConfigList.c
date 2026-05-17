/*
 * XREFs of RtlpMuiRegCreateLanguageConfigList @ 0x18000AB90
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x18000A9A0 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x1801115F8 (RtlpMuiRegDupLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x180112FF8 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     _SafeAllocBlob @ 0x1800124B4 (_SafeAllocBlob.c)
 */

__int64 __fastcall RtlpMuiRegCreateLanguageConfigList(int a1)
{
  int v1; // ebx
  __int64 result; // rax
  int v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = 4;
  if ( a1 >= 1 )
    v1 = a1;
  result = SafeAllocBlob(16, v1, 12, 0, 0, (__int64)&v3);
  if ( result )
  {
    *(_DWORD *)result = v3;
    *(_QWORD *)(result + 8) = result + 16;
    *(_WORD *)(result + 4) = 0;
    *(_WORD *)(result + 6) = v1;
  }
  return result;
}
