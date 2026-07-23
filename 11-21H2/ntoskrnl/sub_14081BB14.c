/*
 * XREFs of sub_14081BB14 @ 0x14081BB14
 * Callers:
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 *     sub_1407D7634 @ 0x1407D7634 (sub_1407D7634.c)
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x140287F00 (PsGetCurrentProcessSessionId.c)
 *     sub_1402A1770 @ 0x1402A1770 (sub_1402A1770.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlGetActiveConsoleId @ 0x1402DEB60 (RtlGetActiveConsoleId.c)
 *     sub_140986F94 @ 0x140986F94 (sub_140986F94.c)
 *     sub_140A49250 @ 0x140A49250 (sub_140A49250.c)
 *     sub_140A540E0 @ 0x140A540E0 (sub_140A540E0.c)
 *     sub_140A6AACC @ 0x140A6AACC (sub_140A6AACC.c)
 */

__int64 __fastcall sub_14081BB14(_DWORD *a1, char a2)
{
  int v3; // ecx
  unsigned int v4; // edi
  int v6; // ecx
  ULONG ActiveConsoleId; // ebx
  int v8; // ecx
  ULONG v9; // ebx
  unsigned int v10; // ebx
  void *v11; // rcx
  void *v12; // rax

  if ( *a1 != 4 )
    return (unsigned int)-1073741811;
  v3 = a1[1];
  if ( (unsigned int)(v3 - 1) > 4 )
    return (unsigned int)-1073741701;
  if ( v3 <= 2 )
    goto LABEL_4;
  if ( v3 != 3 )
  {
    if ( v3 == 4 )
    {
      v6 = a1[2];
      v4 = 0;
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( (unsigned int)PsGetCurrentProcessSessionId() == ActiveConsoleId )
          {
            sub_140A540E0((ULONG_PTR)&qword_140C54520);
            if ( dword_140C4EB78 < (unsigned int)dword_140C4EB7C )
              sub_140986F94(5, 2, 3, dword_140C54554, 1);
          }
        }
        return v4;
      }
LABEL_16:
      sub_140A540E0((ULONG_PTR)&qword_140C54520);
      return v4;
    }
    if ( v3 == 5 )
    {
LABEL_4:
      v4 = 0;
      if ( a2 )
        return (unsigned int)-1073741790;
      else
        sub_140A49250((unsigned int)a1[2]);
      return v4;
    }
    return (unsigned int)-1073741811;
  }
  v8 = a1[2];
  v4 = 0;
  if ( v8 )
  {
    if ( v8 != 1 || dword_140C54550 != 3 )
      return v4;
    sub_140A6AACC((ULONG_PTR)&qword_140C54520);
    sub_140986F94(3, 0, 0, dword_140C54554, 0);
    goto LABEL_16;
  }
  v9 = RtlGetActiveConsoleId();
  if ( (unsigned int)PsGetCurrentProcessSessionId() == v9 && dword_140C4EB78 < (unsigned int)dword_140C4EB7C )
  {
    v10 = 0;
    v11 = 0LL;
    while ( 1 )
    {
      v12 = (void *)sub_1402A1770(v11);
      if ( !v12 )
        break;
      ++v10;
      v11 = v12;
      if ( v10 >= 3 )
      {
        ObfDereferenceObject(v12);
        goto LABEL_16;
      }
    }
  }
  return v4;
}
