/*
 * XREFs of sub_140A8D11C @ 0x140A8D11C
 * Callers:
 *     sub_140A802F0 @ 0x140A802F0 (sub_140A802F0.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A8C014 @ 0x140A8C014 (sub_140A8C014.c)
 */

__int64 __fastcall sub_140A8D11C(__int64 a1, PSLIST_ENTRY *a2)
{
  PSLIST_ENTRY v4; // rax
  unsigned int v5; // ebx

  v4 = sub_140202234((__int64)&unk_140D59040);
  *a2 = v4;
  v5 = 0;
  if ( v4 )
  {
    memset(v4, 0, 0xC0uLL);
    return 1LL;
  }
  else
  {
    LOBYTE(v5) = (unsigned int)sub_140A8C014(a1) == 0;
    return v5;
  }
}
