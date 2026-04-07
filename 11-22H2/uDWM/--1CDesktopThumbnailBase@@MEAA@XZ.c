/*
 * XREFs of ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x1800033D0
 * Callers:
 *     ??_ECVirtualDesktopThumbnail@@UEAAPEAXI@Z @ 0x180002100 (--_ECVirtualDesktopThumbnail@@UEAAPEAXI@Z.c)
 *     ??1CDesktopThumbnail@@MEAA@XZ @ 0x1800B60A4 (--1CDesktopThumbnail@@MEAA@XZ.c)
 *     ??_ECDesktopThumbnailBase@@MEAAPEAXI@Z @ 0x1800B61F0 (--_ECDesktopThumbnailBase@@MEAAPEAXI@Z.c)
 *     ??_ECDCompDesktopThumbnail@@UEAAPEAXI@Z @ 0x180107E90 (--_ECDCompDesktopThumbnail@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_ClearClones@CDesktopThumbnailBase@@IEAAXXZ @ 0x18000215C (-_ClearClones@CDesktopThumbnailBase@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CDesktopThumbnailBase::~CDesktopThumbnailBase(CDesktopThumbnailBase *this)
{
  CDesktopManager *v1; // r9
  __int64 v2; // r8
  unsigned int v4; // edx
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rax

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  *(_QWORD *)this = &CDesktopThumbnailBase::`vftable';
  v2 = 0LL;
  v4 = *((_DWORD *)v1 + 188);
  v5 = *((_QWORD *)v1 + 91);
  if ( v4 )
  {
    do
    {
      if ( this == *(CDesktopThumbnailBase **)(v5 + 8 * v2) )
        break;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v4 );
  }
  if ( (unsigned int)v2 < v4 )
  {
    while ( (unsigned int)v2 < v4 - 1 )
    {
      v6 = (unsigned int)v2;
      v7 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v2 + 1));
      LODWORD(v2) = v2 + 1;
      *(_QWORD *)(v5 + 8 * v6) = v7;
      v4 = *((_DWORD *)v1 + 188);
    }
    *((_DWORD *)v1 + 188) = v4 - 1;
  }
  CDesktopThumbnailBase::_ClearClones(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 248);
  CVisual::~CVisual(this);
}
