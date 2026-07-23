/*
 * XREFs of sub_14050FCE0 @ 0x14050FCE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14050DF10 @ 0x14050DF10 (sub_14050DF10.c)
 */

__int64 __fastcall sub_14050FCE0(int a1, unsigned int *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  int v8; // eax

  if ( a1 )
    return 3221225659LL;
  v4 = (unsigned __int8)byte_140C08AAC;
  v5 = *a2;
  v6 = HIDWORD(qword_14003A150[(unsigned __int8)byte_140C08AAC]);
  if ( *a2 < v6 )
  {
    *a2 = v6;
    v5 = v6;
  }
  v7 = qword_14003A150[v4];
  if ( v5 > v7 )
  {
    *a2 = v7;
    v5 = v7;
  }
  v8 = sub_14050DF10(v5);
  *a2 = v8;
  dword_140C08AA8 = v8;
  return 0LL;
}
