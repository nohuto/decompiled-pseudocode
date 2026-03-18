/*
 * XREFs of ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C022D4FC
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C022D700 (xxxHandleMenuMessages.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C00A4B4C (xxxInternalGetMessage.c)
 */

__int64 __fastcall xxxMNRemoveMessage(int a1, int a2)
{
  _QWORD v5[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v5, 0, 48);
  if ( !(unsigned int)xxxInternalGetMessage(v5, 0LL, 0, 0, 2, 0) || LODWORD(v5[1]) != a1 && LODWORD(v5[1]) != a2 )
    return 0LL;
  xxxInternalGetMessage(v5, 0LL, v5[1], v5[1], 1, 0);
  return 1LL;
}
