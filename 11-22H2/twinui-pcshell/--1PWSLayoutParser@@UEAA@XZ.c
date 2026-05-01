/*
 * XREFs of ??1PWSLayoutParser@@UEAA@XZ @ 0x1804963EC
 * Callers:
 *     ??_EPWSLayoutParser@@UEAAPEAXI@Z @ 0x180496580 (--_EPWSLayoutParser@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x1803E98E8 (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 */

void __fastcall PWSLayoutParser::~PWSLayoutParser(PWSLayoutParser *this)
{
  OLECHAR *v2; // rcx
  OLECHAR *v3; // rcx
  OLECHAR *v4; // rcx

  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 144);
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((PWSLayoutParser *)((char *)this + 40));
  v2 = (OLECHAR *)*((_QWORD *)this + 4);
  if ( v2 )
    SysFreeString(v2);
  v3 = (OLECHAR *)*((_QWORD *)this + 3);
  if ( v3 )
    SysFreeString(v3);
  v4 = (OLECHAR *)*((_QWORD *)this + 2);
  if ( v4 )
    SysFreeString(v4);
  *((_DWORD *)this + 3) = -1073741823;
}
