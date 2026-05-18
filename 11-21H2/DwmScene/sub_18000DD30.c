/*
 * XREFs of sub_18000DD30 @ 0x18000DD30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001032C @ 0x18001032C (sub_18001032C.c)
 */

BOOL __fastcall sub_18000DD30(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = CloseHandle(a1);
  if ( !result )
    sub_18001032C(retaddr, 2345LL);
  return result;
}
