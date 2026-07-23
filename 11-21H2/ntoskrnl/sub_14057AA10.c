/*
 * XREFs of sub_14057AA10 @ 0x14057AA10
 * Callers:
 *     sub_140308240 @ 0x140308240 (sub_140308240.c)
 *     sub_14056A60C @ 0x14056A60C (sub_14056A60C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14057AA10(unsigned __int64 a1, _BYTE *a2, _BYTE *a3)
{
  unsigned __int64 v3; // rax
  char v4; // cl
  __int64 result; // rax

  if ( a1 < qword_140C2B930 )
    return 0LL;
  if ( (qword_140C2B928 & 1) != 0 )
  {
    if ( qword_140C2B928 == 1 )
      v3 = 0LL;
    else
      v3 = qword_140C2B928 ^ ((unsigned __int64)&unk_140C2B920 + 1);
  }
  else
  {
    v3 = qword_140C2B928;
  }
  *a2 = *(_BYTE *)(v3 - 46);
  v4 = *(_BYTE *)(v3 - 45);
  result = 1LL;
  *a3 = v4;
  return result;
}
