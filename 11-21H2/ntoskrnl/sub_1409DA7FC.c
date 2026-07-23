/*
 * XREFs of sub_1409DA7FC @ 0x1409DA7FC
 * Callers:
 *     sub_14083FE80 @ 0x14083FE80 (sub_14083FE80.c)
 * Callees:
 *     sub_140815360 @ 0x140815360 (sub_140815360.c)
 */

PSLIST_ENTRY __fastcall sub_1409DA7FC(int a1)
{
  unsigned int i; // esi
  PSLIST_ENTRY result; // rax

  for ( i = a1; i < dword_140C18E80; ++i )
  {
    result = sub_140815360(2, (_SLIST_ENTRY *)qword_140C16E80[i]);
    qword_140C16E80[i] = 0LL;
  }
  dword_140C18E80 = a1;
  return result;
}
