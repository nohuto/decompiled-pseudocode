/*
 * XREFs of sub_140A8A840 @ 0x140A8A840
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

PMDL __fastcall sub_140A8A840(void *a1, __int64 a2, BOOLEAN a3, BOOLEAN a4, PIRP Irp)
{
  if ( (qword_140D01450 & 0x400000) == 0 || (dword_140C29FC0 & 1) != 0 || (dword_140C29FC0 & 8) != 0 )
    return (PMDL)sub_14042A5E0(a1, a2);
  else
    return IoAllocateMdl(a1, a2, a3, a4, Irp);
}
