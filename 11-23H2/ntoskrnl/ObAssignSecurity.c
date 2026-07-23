/*
 * XREFs of ObAssignSecurity @ 0x1407BC9A0
 * Callers:
 *     <none>
 * Callees:
 *     ObpAssignSecurity @ 0x1407BC9C0 (ObpAssignSecurity.c)
 */

__int64 __fastcall ObAssignSecurity(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // [rsp+28h] [rbp-10h]

  v5 = 0;
  return ObpAssignSecurity(a1, a2, a3, a4, 0, v5);
}
