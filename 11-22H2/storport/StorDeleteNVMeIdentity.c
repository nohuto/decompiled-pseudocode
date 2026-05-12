/*
 * XREFs of StorDeleteNVMeIdentity @ 0x1C00747A0
 * Callers:
 *     StorProcessNVMeEnumeratorFillInfo @ 0x1C00747F0 (StorProcessNVMeEnumeratorFillInfo.c)
 *     StorProcessNVMeUnitEnumerator @ 0x1C0074ADC (StorProcessNVMeUnitEnumerator.c)
 * Callees:
 *     StorFreeAnsiString @ 0x1C0017A04 (StorFreeAnsiString.c)
 */

__int64 __fastcall StorDeleteNVMeIdentity(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  StorFreeAnsiString(a1 + 8);
  v2 = *(void **)(a1 + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x434E6152u);
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return result;
}
