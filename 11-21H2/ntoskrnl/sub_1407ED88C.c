/*
 * XREFs of sub_1407ED88C @ 0x1407ED88C
 * Callers:
 *     <none>
 * Callees:
 *     sub_140369B48 @ 0x140369B48 (sub_140369B48.c)
 *     sub_1407EC2C8 @ 0x1407EC2C8 (sub_1407EC2C8.c)
 *     sub_1407ED644 @ 0x1407ED644 (sub_1407ED644.c)
 *     sub_1407EF098 @ 0x1407EF098 (sub_1407EF098.c)
 *     sub_1407EF120 @ 0x1407EF120 (sub_1407EF120.c)
 */

__int64 __fastcall sub_1407ED88C(__int64 a1, char *a2, __int64 a3)
{
  char v3; // bl
  unsigned int v4; // edi
  char v5; // bp
  const char *v7; // rax
  const char *v8; // r8

  v3 = *a2;
  v4 = a1;
  v5 = a2[1];
  LOBYTE(a1) = 1;
  sub_1407EF098(a1, a2);
  v7 = "Connected";
  if ( !v3 )
    v7 = "Disconnected";
  v8 = "Console";
  if ( !v5 )
    v8 = "Remote";
  sub_140369B48(3LL, (__int64)"PopAdaptive:>>>>>%s session %u is %s\n", v8, v4, v7);
  if ( v3 )
    sub_1407ED644(v4, v5, a3);
  else
    sub_1407EC2C8(v4, a3);
  return sub_1407EF120();
}
