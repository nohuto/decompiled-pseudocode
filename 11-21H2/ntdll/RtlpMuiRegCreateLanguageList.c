/*
 * XREFs of RtlpMuiRegCreateLanguageList @ 0x180049C30
 * Callers:
 *     LdrpCreateLangFallbackList @ 0x180049BE8 (LdrpCreateLangFallbackList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180049D38 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18004B31C (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegDupLanguageList @ 0x18004C61C (RtlpMuiRegDupLanguageList.c)
 *     InitializeUserOrMachineLangList @ 0x18004D8E4 (InitializeUserOrMachineLangList.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18006DBD0 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18006EC44 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006F390 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     _SafeAllocBlob @ 0x180049CC0 (_SafeAllocBlob.c)
 */

__int64 __fastcall RtlpMuiRegCreateLanguageList(int a1, char a2, __int64 a3)
{
  int v5; // ebx
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v5 = 4;
  if ( a1 >= 1 )
    v5 = a1;
  result = SafeAllocBlob(64, v5, 6, 0, 0, (__int64)&v7);
  if ( result )
  {
    *(_DWORD *)result = v7;
    *(_QWORD *)(result + 24) = result + 64;
    *(_WORD *)(result + 4) = 0;
    *(_WORD *)(result + 6) = v5;
    *(_BYTE *)(result + 8) = a2;
    *(_DWORD *)(result + 40) = 0;
    *(_QWORD *)(result + 16) = a3;
  }
  return result;
}
