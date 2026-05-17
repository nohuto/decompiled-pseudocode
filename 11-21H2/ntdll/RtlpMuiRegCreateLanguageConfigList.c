/*
 * XREFs of RtlpMuiRegCreateLanguageConfigList @ 0x18006F324
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x18006EA54 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x180111178 (RtlpMuiRegDupLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x180112B9C (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     _SafeAllocBlob @ 0x180049CC0 (_SafeAllocBlob.c)
 */

__int64 __fastcall RtlpMuiRegCreateLanguageConfigList(int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = 4;
  if ( a1 >= 1 )
    v1 = a1;
  result = SafeAllocBlob(0x10u, v1, 0xCu, 0, 0, &v3);
  if ( result )
  {
    *(_DWORD *)result = v3;
    *(_QWORD *)(result + 8) = result + 16;
    *(_WORD *)(result + 4) = 0;
    *(_WORD *)(result + 6) = v1;
  }
  return result;
}
