/*
 * XREFs of sub_140AA6E1C @ 0x140AA6E1C
 * Callers:
 *     sub_140AA6D70 @ 0x140AA6D70 (sub_140AA6D70.c)
 * Callees:
 *     sub_140A819C8 @ 0x140A819C8 (sub_140A819C8.c)
 */

int __fastcall sub_140AA6E1C(int a1, unsigned __int64 a2)
{
  _DWORD *v2; // rax
  unsigned int v3; // r8d
  unsigned int v4; // edi
  ULONG v5; // ebx

  LODWORD(v2) = qword_140C1A7F8;
  v3 = 0;
  v4 = dword_140C1A7F0;
  if ( qword_140C18EB0 < (unsigned __int64)qword_140C1A7F8 && a2 <= 0xFE0 )
  {
    LODWORD(v2) = dword_140C0D9F0 - 1;
    if ( (unsigned int)(dword_140C0D9F0 - 1) <= 9 )
    {
      v2 = &unk_140D01548;
      while ( *v2 != a1 )
      {
        ++v3;
        ++v2;
        if ( v3 >= dword_140C0D9F0 )
          return (int)v2;
      }
    }
    if ( dword_140C1A7F0 == 1
      || (v5 = sub_140A819C8(1u, dword_140C1A7F0), LODWORD(v2) = sub_140A819C8(1u, v4), v5 == (_DWORD)v2) )
    {
      byte_140C1A8C0 = 1;
    }
  }
  return (int)v2;
}
