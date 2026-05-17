/*
 * XREFs of LdrpHpatAllocationOptOut @ 0x18002CC20
 * Callers:
 *     LdrpMapViewOfSection @ 0x18002CBA0 (LdrpMapViewOfSection.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180014B60 (RtlCompareUnicodeStrings.c)
 *     RtlGetNtSystemRoot @ 0x180018A20 (RtlGetNtSystemRoot.c)
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 */

bool __fastcall LdrpHpatAllocationOptOut(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  __int64 NtSystemRoot; // rax
  unsigned __int16 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  if ( (ProcessParameters->Flags & 0x2000000) == 0 || **(_WORD **)(a1 + 8) == 92 )
    return 0;
  NtSystemRoot = RtlGetNtSystemRoot(a1, (__int64)ProcessParameters, a3, a4);
  RtlInitUnicodeStringEx((__int64)&v8, NtSystemRoot);
  return *(_WORD *)a1 < v8
      || (unsigned int)RtlCompareUnicodeStrings(
                         *(_WORD **)(a1 + 8),
                         (unsigned __int64)v8 >> 1,
                         v9,
                         (unsigned __int64)v8 >> 1,
                         1) != 0;
}
