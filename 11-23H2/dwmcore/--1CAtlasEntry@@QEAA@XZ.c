/*
 * XREFs of ??1CAtlasEntry@@QEAA@XZ @ 0x1800A40AC
 * Callers:
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x18002440C (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 *     ??1CAtlasBitmapResource@@MEAA@XZ @ 0x1800A40D0 (--1CAtlasBitmapResource@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasEntry::~CAtlasEntry(CAtlasEntry *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)(*(_QWORD *)(v1 + 16) + 8LL * (unsigned int)(*((_DWORD *)this + 4) - 1)) = -1LL;
    ++*(_DWORD *)(v1 + 32);
  }
}
