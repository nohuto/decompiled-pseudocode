/*
 * XREFs of sub_1405B809C @ 0x1405B809C
 * Callers:
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

void sub_1405B809C()
{
  _SLIST_ENTRY *v0; // rax

  while ( LOWORD(stru_140C52E60.Alignment) < 0x40u )
  {
    v0 = (_SLIST_ENTRY *)sub_1402828F0(64, 0x90uLL, 0x6C486D4Du);
    if ( !v0 )
    {
      _InterlockedExchange(&dword_140C52E70, 32);
      return;
    }
    *((_DWORD *)&v0->Next + 2) = 16;
    ExpInterlockedPushEntrySList(&stru_140C52E60, v0);
  }
}
