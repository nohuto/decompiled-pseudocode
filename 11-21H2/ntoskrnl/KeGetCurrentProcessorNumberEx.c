/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x140355110
 * Callers:
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     sub_14037039C @ 0x14037039C (sub_14037039C.c)
 *     sub_1403D2700 @ 0x1403D2700 (sub_1403D2700.c)
 *     sub_140575CD8 @ 0x140575CD8 (sub_140575CD8.c)
 *     sub_14057C2F0 @ 0x14057C2F0 (sub_14057C2F0.c)
 *     sub_1405DBF90 @ 0x1405DBF90 (sub_1405DBF90.c)
 *     sub_140962218 @ 0x140962218 (sub_140962218.c)
 *     sub_140A5B2F8 @ 0x140A5B2F8 (sub_140A5B2F8.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcNumber)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( ProcNumber )
  {
    ProcNumber->Group = *((unsigned __int8 *)CurrentPrcb + 208);
    *(_WORD *)&ProcNumber->Number = *((unsigned __int8 *)CurrentPrcb + 209);
  }
  return *((_DWORD *)CurrentPrcb + 9);
}
