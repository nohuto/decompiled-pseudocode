/*
 * XREFs of ??1UmfdClientSideFileViewMapper@@QEAA@XZ @ 0x1C029539C
 * Callers:
 *     bAddAllFlEntry @ 0x1C015E414 (bAddAllFlEntry.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C0011220 (EngUnmapFontFileFD.c)
 */

void __fastcall UmfdClientSideFileViewMapper::~UmfdClientSideFileViewMapper(UmfdClientSideFileViewMapper *this)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 4); i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(_DWORD *)(*(_QWORD *)this + 36LL) )
      break;
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 200LL) + 8 * i));
  }
}
