/*
 * XREFs of sub_140A9D128 @ 0x140A9D128
 * Callers:
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_140A8ACE8 @ 0x140A8ACE8 (sub_140A8ACE8.c)
 */

void __fastcall sub_140A9D128(__int64 a1, unsigned __int64 a2, PSLIST_ENTRY *a3)
{
  PSLIST_ENTRY v5; // rax

  if ( !*a3 && *(_BYTE *)(a1 + 64) == 1 && (unsigned int)sub_140A8ACE8(a2) && dword_140D575EC )
  {
    v5 = sub_140202234((__int64)&unk_140D58FC0);
    if ( v5 )
    {
      v5[1].Next = (_SLIST_ENTRY *)a1;
      *((_BYTE *)&v5[1].Next + 13) = *(_BYTE *)(a1 + 67);
      *((_BYTE *)&v5[1].Next + 12) = 0;
      *a3 = v5;
    }
  }
}
