/*
 * XREFs of ?_ClearClones@CDesktopThumbnailBase@@IEAAXXZ @ 0x1800B3760
 * Callers:
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x1800B1BD8 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800B3224 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDesktopThumbnailBase::_ClearClones(CDesktopThumbnailBase *this)
{
  unsigned int i; // ebx
  __int64 v3; // rax
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  for ( i = 0; i < *((_DWORD *)this + 68); ++i )
  {
    v3 = *((_QWORD *)this + 31);
    v4 = *(CBaseObject **)(v3 + 16LL * i + 8);
    if ( v4 )
    {
      CBaseObject::Release(v4);
      v3 = *((_QWORD *)this + 31);
    }
    v5 = *(CBaseObject **)(v3 + 16LL * i);
    if ( v5 )
      CBaseObject::Release(v5);
  }
}
