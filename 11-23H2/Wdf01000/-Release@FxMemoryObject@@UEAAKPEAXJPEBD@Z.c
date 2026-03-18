/*
 * XREFs of ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C0006970
 * Callers:
 *     ?Release@FxMemoryObject@@WGI@EAAKPEAXJPEBD@Z @ 0x1C000B3F0 (-Release@FxMemoryObject@@WGI@EAAKPEAXJPEBD@Z.c)
 * Callees:
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0006410 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 */

__int64 __fastcall FxMemoryObject::Release(FxMemoryObject *this, void *Tag, int Line, const char *File)
{
  return FxObject::Release(this, Tag, Line, File);
}
