/*
 * XREFs of sub_140AA1A00 @ 0x140AA1A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140AA1A00(int *a1)
{
  void *v1; // rbx
  int v3; // ecx
  __int64 v4; // rcx

  v1 = 0LL;
  v3 = *a1;
  if ( (qword_140D01450 & 0x800) == 0 || !dword_140D57588 )
    goto LABEL_9;
  if ( (unsigned int)(v3 - 1) <= 1 )
  {
    v4 = *((_QWORD *)a1 + 1);
  }
  else
  {
    if ( v3 != 3 )
      goto LABEL_9;
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL);
  }
  if ( v4 )
    v1 = *(void **)(v4 + 48);
LABEL_9:
  sub_14042A5E0(a1, a1);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
