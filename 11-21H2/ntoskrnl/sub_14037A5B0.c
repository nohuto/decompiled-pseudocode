/*
 * XREFs of sub_14037A5B0 @ 0x14037A5B0
 * Callers:
 *     sub_14037AA7C @ 0x14037AA7C (sub_14037AA7C.c)
 *     sub_14037CFB8 @ 0x14037CFB8 (sub_14037CFB8.c)
 *     sub_14037D1B0 @ 0x14037D1B0 (sub_14037D1B0.c)
 *     sub_14037D8B8 @ 0x14037D8B8 (sub_14037D8B8.c)
 *     sub_140393778 @ 0x140393778 (sub_140393778.c)
 * Callees:
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14037A5B0(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( (*a2 & 7) == 1 )
  {
    v3 = a1 + 1424;
    goto LABEL_4;
  }
  if ( (*a2 & 7) == 2 )
  {
    v3 = a1 + 1536;
LABEL_4:
    sub_14037AE58(v3, 1LL, a3, a2);
    return;
  }
  ExFreePoolWithTag(a2, 0);
}
