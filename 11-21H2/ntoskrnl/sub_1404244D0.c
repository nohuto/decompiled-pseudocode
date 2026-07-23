/*
 * XREFs of sub_1404244D0 @ 0x1404244D0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __noreturn sub_1404244D0()
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]
  __int64 v1; // [rsp+8h] [rbp+8h]

  if ( (_BYTE)dword_140D069F0 )
    __asm { stac }
  __writecr8(*((unsigned __int8 *)KeGetCurrentThread() + 390));
  sub_14042A5E0(v1, retaddr);
  KeBugCheck(0xEu);
}
