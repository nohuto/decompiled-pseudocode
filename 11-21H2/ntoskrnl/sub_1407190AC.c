/*
 * XREFs of sub_1407190AC @ 0x1407190AC
 * Callers:
 *     sub_1406CEBA0 @ 0x1406CEBA0 (sub_1406CEBA0.c)
 *     sub_140719010 @ 0x140719010 (sub_140719010.c)
 *     sub_14071A400 @ 0x14071A400 (sub_14071A400.c)
 *     sub_14071C288 @ 0x14071C288 (sub_14071C288.c)
 *     sub_14079FD44 @ 0x14079FD44 (sub_14079FD44.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 *     sub_1407E5600 @ 0x1407E5600 (sub_1407E5600.c)
 *     sub_1407E5F70 @ 0x1407E5F70 (sub_1407E5F70.c)
 *     sub_140910210 @ 0x140910210 (sub_140910210.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407190AC(PVOID P)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)P + 6);
  if ( v2 )
  {
    ObDereferenceObjectDeferDelete(*(PVOID *)(v2 + 16));
    ExFreePoolWithTag(*((PVOID *)P + 6), 0);
  }
  if ( (*((_DWORD *)P + 14) & 0x10000) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 8), 0);
  ExFreePoolWithTag(P, 0);
}
