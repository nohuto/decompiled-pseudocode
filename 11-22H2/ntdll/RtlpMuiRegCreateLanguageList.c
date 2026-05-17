/*
 * XREFs of RtlpMuiRegCreateLanguageList @ 0x180012424
 * Callers:
 *     RtlpLoadUserUIByPolicy @ 0x18000A8B0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000B870 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegDupLanguageList @ 0x180011CB8 (RtlpMuiRegDupLanguageList.c)
 *     LdrpCreateLangFallbackList @ 0x1800123DC (LdrpCreateLangFallbackList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180012AD4 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015960 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     InitializeUserOrMachineLangList @ 0x180070780 (InitializeUserOrMachineLangList.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180087880 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     _SafeAllocBlob @ 0x1800124B4 (_SafeAllocBlob.c)
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
