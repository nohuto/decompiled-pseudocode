/*
 * XREFs of GetHvProcessorInfo @ 0x1C0005658
 * Callers:
 *     RegisterHvPackage @ 0x1C0025620 (RegisterHvPackage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHvProcessorInfo(int a1)
{
  __int64 v1; // r9
  unsigned int i; // r8d

  v1 = 0LL;
  for ( i = 0; i < dword_1C0012A50; ++i )
  {
    if ( a1 == *(_DWORD *)(qword_1C0012A48 + 12LL * i) )
      return qword_1C0012A48 + 12LL * i;
  }
  return v1;
}
