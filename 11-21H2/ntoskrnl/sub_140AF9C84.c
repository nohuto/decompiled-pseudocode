/*
 * XREFs of sub_140AF9C84 @ 0x140AF9C84
 * Callers:
 *     sub_140AF9508 @ 0x140AF9508 (sub_140AF9508.c)
 * Callees:
 *     sub_1403BF580 @ 0x1403BF580 (sub_1403BF580.c)
 */

__int64 sub_140AF9C84()
{
  __int64 v0; // rbx
  _BYTE *v1; // rax

  v0 = qword_140C54AA8 - 4096;
  v1 = (_BYTE *)sub_1403BF580(qword_140C54AA8 - 4096);
  if ( !v1 || (*v1 & 1) != 0 )
    return 0LL;
  qword_140C54AA8 = v0;
  return v0;
}
