/*
 * XREFs of sub_140863944 @ 0x140863944
 * Callers:
 *     sub_140749814 @ 0x140749814 (sub_140749814.c)
 *     sub_14084C604 @ 0x14084C604 (sub_14084C604.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140863944(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( (*(_BYTE *)(BugCheckParameter2 + 16) & 2) != 0 )
    KeBugCheckEx(0xCAu, 0x11uLL, BugCheckParameter2, *(unsigned __int8 *)(BugCheckParameter2 + 16), 0x1001uLL);
  v2 = *(void **)BugCheckParameter2;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x64706E50u);
    *(_QWORD *)BugCheckParameter2 = 0LL;
  }
  v3 = *(void **)(BugCheckParameter2 + 24);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x64706E50u);
    *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0x64706E50u);
}
