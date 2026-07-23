/*
 * XREFs of sub_140239CF8 @ 0x140239CF8
 * Callers:
 *     sub_140283E8C @ 0x140283E8C (sub_140283E8C.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14030F1E0 (MmDoesFileHaveUserWritableReferences.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140239CF8(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned __int64 v2; // rdx

  v1 = *(_DWORD *)(a1 + 92);
  if ( !v1 )
  {
    v2 = *(_QWORD *)(a1 + 112);
    if ( v2 > 1
      && (*(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)) + 1688LL) != a1 || v2 - 1 > 1) )
    {
      return 1;
    }
  }
  return v1;
}
