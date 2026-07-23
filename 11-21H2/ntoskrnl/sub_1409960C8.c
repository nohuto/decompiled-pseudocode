/*
 * XREFs of sub_1409960C8 @ 0x1409960C8
 * Callers:
 *     sub_140828E20 @ 0x140828E20 (sub_140828E20.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_1409960C8()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  __int64 v2; // rdx

  v0 = dword_140C20B60;
  v1 = 0;
  if ( !BYTE1(qword_140C20B40) && dword_140C20B60 == 1 )
    v0 = 2;
  if ( HIDWORD(qword_140C20B40) == v0 )
  {
    sub_1402935D0((ULONG_PTR)&xmmword_140C20B50);
  }
  else
  {
    HIDWORD(qword_140C20B40) = v0;
    sub_1402935D0((ULONG_PTR)&xmmword_140C20B50);
    v1 = -1073741822;
    if ( qword_140C5ADF0 )
      return (unsigned int)sub_14042A5E0(v0, v2);
  }
  return v1;
}
