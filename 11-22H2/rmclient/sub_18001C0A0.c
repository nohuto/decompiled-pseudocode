/*
 * XREFs of sub_18001C0A0 @ 0x18001C0A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180004DB0 @ 0x180004DB0 (sub_180004DB0.c)
 *     sub_18001C284 @ 0x18001C284 (sub_18001C284.c)
 */

__int64 __fastcall sub_18001C0A0(__int64 a1, __int64 a2, char *a3)
{
  char v3; // bl
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v7 = 0;
  if ( a3 )
  {
    if ( (int)sub_180004DB0() >= 0 )
      sub_18001C284(qword_180032C78, a2, &v7);
    if ( v7 )
      v3 = 1;
  }
  result = 0LL;
  *a3 = v3;
  return result;
}
