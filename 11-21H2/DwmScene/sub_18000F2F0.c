/*
 * XREFs of sub_18000F2F0 @ 0x18000F2F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001032C @ 0x18001032C (sub_18001032C.c)
 */

BOOL __fastcall sub_18000F2F0(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = ReleaseMutex(a1);
  if ( !result )
    sub_18001032C(retaddr, 2355LL);
  return result;
}
