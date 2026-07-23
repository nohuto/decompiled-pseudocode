/*
 * XREFs of sub_140372B60 @ 0x140372B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_140372B60(_BYTE *a1, char a2)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *a1 = a2;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
}
