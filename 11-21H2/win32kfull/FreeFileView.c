/*
 * XREFs of FreeFileView @ 0x1C000D068
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C000CDEC (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C000D7F0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C000F3E4 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00228A4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     vUnmapRemoteFonts @ 0x1C0287B80 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall FreeFileView(struct _FILEVIEW **a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned __int64 v4; // rsi
  struct _FILEVIEW **j; // rdi
  struct _FILEVIEW **v7; // rsi
  struct _FILEVIEW **i; // rdi
  char v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v9, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  if ( UmfdFileviewLookup )
  {
    v7 = &a1[v2];
    for ( i = a1; i < v7; ++i )
    {
      v10 = *((_DWORD *)*i + 16);
      NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v10, &v10);
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v9);
  v4 = (unsigned __int64)&a1[v2];
  for ( j = a1; (unsigned __int64)j < v4; ++j )
  {
    if ( *((_QWORD *)*j + 11) )
      vUnmapRemoteFonts();
    else
      vUnreferenceFileviewSection(*j);
  }
  return Win32FreePool(a1);
}
