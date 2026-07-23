/*
 * XREFs of sub_140A92774 @ 0x140A92774
 * Callers:
 *     sub_1402DDEA0 @ 0x1402DDEA0 (sub_1402DDEA0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A921E0 @ 0x140A921E0 (sub_140A921E0.c)
 */

__int64 __fastcall sub_140A92774(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx

  result = sub_140A921E0(a1);
  if ( (_DWORD)result && (qword_140D01450 & 0x400000) == 0 )
  {
    v4 = 0LL;
    do
    {
      if ( *((_QWORD *)&unk_140D597A0 + 12 * v4) )
        sub_14042A5E0(a1, v3);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 <= 0x1B );
    result = qword_140D5A220;
    if ( qword_140D5A220 )
      return sub_14042A5E0(a1, v3);
  }
  return result;
}
