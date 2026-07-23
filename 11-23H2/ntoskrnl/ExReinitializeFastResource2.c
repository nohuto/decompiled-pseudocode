/*
 * XREFs of ExReinitializeFastResource2 @ 0x14041404C
 * Callers:
 *     ExReinitializeFastResource @ 0x1403D63D0 (ExReinitializeFastResource.c)
 * Callees:
 *     ExpIsFastResourceOwned @ 0x140415DF0 (ExpIsFastResourceOwned.c)
 *     Feature_Servicing_FastResourceReinitializationFlags__private_IsEnabledDeviceUsage @ 0x140416D10 (Feature_Servicing_FastResourceReinitializationFlags__private_IsEnabledDeviceUsage.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int16 __fastcall ExReinitializeFastResource2(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int8 CurrentIrql; // al
  int IsEnabledDeviceUsage; // eax
  __int16 v5; // dx
  bool v6; // zf
  __int16 result; // ax

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( (unsigned __int8)ExpIsFastResourceOwned(BugCheckParameter2, a2) )
    KeBugCheckEx(0x1C6u, 4uLL, BugCheckParameter2, 0LL, 0LL);
  IsEnabledDeviceUsage = Feature_Servicing_FastResourceReinitializationFlags__private_IsEnabledDeviceUsage();
  v5 = *(_WORD *)(BugCheckParameter2 + 26);
  v6 = IsEnabledDeviceUsage == 0;
  *(_BYTE *)(BugCheckParameter2 + 100) = 0;
  LOBYTE(IsEnabledDeviceUsage) = *(_BYTE *)(BugCheckParameter2 + 101);
  *(_QWORD *)BugCheckParameter2 = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 72) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 80) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 96) = 0;
  *(_BYTE *)(BugCheckParameter2 + 101) = IsEnabledDeviceUsage & 0xF8 | 2;
  *(_OWORD *)(BugCheckParameter2 + 8) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 60) = 0;
  *(_DWORD *)(BugCheckParameter2 + 56) = 0;
  result = v5 & (!v6 ? 73 : 65);
  *(_WORD *)(BugCheckParameter2 + 26) = result;
  return result;
}
