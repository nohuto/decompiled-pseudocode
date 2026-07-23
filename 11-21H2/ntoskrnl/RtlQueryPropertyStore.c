/*
 * XREFs of RtlQueryPropertyStore @ 0x1405E7780
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     bsearch @ 0x1403E1840 (bsearch.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405E7B68 @ 0x1405E7B68 (sub_1405E7B68.c)
 */

NTSTATUS __cdecl RtlQueryPropertyStore(ULONG_PTR Key, PULONG_PTR Context)
{
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rax
  NTSTATUS v6; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v9; // r9
  int v10; // edx
  bool v11; // zf

  v4 = (unsigned __int8)sub_1405E7B68(&dword_140D04908);
  if ( qword_140C1BC18
    && (v5 = bsearch((const void *)Key, qword_140C1BC18, (unsigned int)dword_140C1BC20, 0x18uLL, sub_1405E7BE0)) != 0LL )
  {
    *Context = v5[2];
    v6 = 0;
  }
  else
  {
    v6 = -1073741275;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140D04908);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v6;
}
