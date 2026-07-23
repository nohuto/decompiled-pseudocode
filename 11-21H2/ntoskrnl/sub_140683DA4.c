/*
 * XREFs of sub_140683DA4 @ 0x140683DA4
 * Callers:
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 * Callees:
 *     sub_140683DF0 @ 0x140683DF0 (sub_140683DF0.c)
 */

__int64 __fastcall sub_140683DA4(__int64 a1)
{
  struct _KEVENT *i; // rbx
  __int64 result; // rax

  _interlockedbittestandset((volatile signed __int32 *)(a1 + 1120), 0xBu);
  for ( i = *(struct _KEVENT **)(a1 + 1296); i; i = (struct _KEVENT *)i[52].Header.WaitListHead.Blink )
    result = sub_140683DF0(i);
  return result;
}
