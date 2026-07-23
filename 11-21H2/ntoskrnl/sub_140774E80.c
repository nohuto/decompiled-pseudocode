/*
 * XREFs of sub_140774E80 @ 0x140774E80
 * Callers:
 *     sub_1407783C4 @ 0x1407783C4 (sub_1407783C4.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     sub_14077B6F4 @ 0x14077B6F4 (sub_14077B6F4.c)
 * Callees:
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140774E80(__int64 a1)
{
  int v2; // ecx
  __int64 result; // rax

  v2 = *(_DWORD *)a1 - 5;
  if ( v2 )
  {
    if ( v2 == 1 )
      sub_14077B394(*(PVOID *)(a1 + 16));
  }
  else
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0x5A706E50u);
  }
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
