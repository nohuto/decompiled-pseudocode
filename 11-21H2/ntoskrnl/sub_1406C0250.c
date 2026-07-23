/*
 * XREFs of sub_1406C0250 @ 0x1406C0250
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406C0298 @ 0x1406C0298 (sub_1406C0298.c)
 */

__int64 sub_1406C0250()
{
  char *v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax

  sub_1406C0298(&qword_140C22420);
  v0 = (char *)&unk_140C223E0;
  v1 = 2LL;
  do
  {
    result = sub_1406C0298(v0);
    v0 += 16;
    --v1;
  }
  while ( v1 );
  return result;
}
