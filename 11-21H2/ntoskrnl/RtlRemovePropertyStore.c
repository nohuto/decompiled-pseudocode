/*
 * XREFs of RtlRemovePropertyStore @ 0x1405E79C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     bsearch @ 0x1403E1840 (bsearch.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405E7AF0 @ 0x1405E7AF0 (sub_1405E7AF0.c)
 */

NTSTATUS __cdecl RtlRemovePropertyStore(ULONG_PTR Key, PULONG_PTR Context)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 *v5; // rax
  unsigned int v6; // ebx
  NTSTATUS v7; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // edx
  bool v12; // zf

  v4 = (unsigned __int8)sub_1405E7AF0(&dword_140D04908);
  if ( qword_140C1BC18
    && (v5 = (unsigned __int64 *)bsearch(
                                   (const void *)Key,
                                   qword_140C1BC18,
                                   (unsigned int)dword_140C1BC20,
                                   0x18uLL,
                                   sub_1405E7BE0)) != 0LL )
  {
    v6 = dword_140C1BC20;
    *Context = v5[2];
    memmove(v5, v5 + 3, 24 * (v6 - 0xAAAAAAAAAAAAAAABuLL * (((char *)v5 - (_BYTE *)qword_140C1BC18) >> 3)) - 24);
    LODWORD(dword_140C1BC20) = v6 - 1;
    v7 = 0;
  }
  else
  {
    v7 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D04908);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v7;
}
