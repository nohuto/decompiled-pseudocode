/*
 * XREFs of sub_1406E9370 @ 0x1406E9370
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_140658008 @ 0x140658008 (sub_140658008.c)
 * Callees:
 *     sub_1406E93C0 @ 0x1406E93C0 (sub_1406E93C0.c)
 */

__int64 __fastcall sub_1406E9370(int a1, __int64 a2, int a3, char a4)
{
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0x100000008LL;
  BYTE5(v5) = a4;
  return sub_1406E93C0(a1, (unsigned int)sub_14091CDA0, (unsigned int)sub_14091CD70, a3, (__int64)&v5, a4, 1);
}
