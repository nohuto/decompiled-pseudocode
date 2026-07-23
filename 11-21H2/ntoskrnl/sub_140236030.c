/*
 * XREFs of sub_140236030 @ 0x140236030
 * Callers:
 *     <none>
 * Callees:
 *     sub_14023A0BC @ 0x14023A0BC (sub_14023A0BC.c)
 */

char sub_140236030()
{
  __int64 v0; // rdx
  char v1; // al
  char v2; // cl
  bool v3; // zf

  v0 = qword_140D06970;
  v1 = 0;
  v2 = 1;
  if ( (__int64 *)qword_140D06970 == &qword_140D06970 )
    goto LABEL_6;
  do
  {
    v3 = *(_BYTE *)(v0 + 990) == 0;
    v0 = *(_QWORD *)v0;
    if ( !v3 )
      v1 = 1;
  }
  while ( (__int64 *)v0 != &qword_140D06970 );
  if ( v1 )
    return sub_14023A0BC(qword_140C23B40);
LABEL_6:
  dword_140C20394 += 2;
  return v2;
}
