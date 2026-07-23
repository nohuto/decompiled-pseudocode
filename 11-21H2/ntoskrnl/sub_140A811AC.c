/*
 * XREFs of sub_140A811AC @ 0x140A811AC
 * Callers:
 *     VfIsVerificationEnabled @ 0x1403B64C0 (VfIsVerificationEnabled.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140A811AC(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( v1 )
    {
      v2 = *(_DWORD *)(v1 + 396);
      if ( (v2 & 0x20000) == 0 && (v2 & 0x8000) != 0 )
        return 1;
    }
  }
  return result;
}
