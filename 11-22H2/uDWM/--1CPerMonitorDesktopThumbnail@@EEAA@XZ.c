/*
 * XREFs of ??1CPerMonitorDesktopThumbnail@@EEAA@XZ @ 0x1800B60E0
 * Callers:
 *     ??_GCPerMonitorDesktopThumbnail@@EEAAPEAXI@Z @ 0x1800B62C0 (--_GCPerMonitorDesktopThumbnail@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CPerMonitorDesktopThumbnail::~CPerMonitorDesktopThumbnail(CPerMonitorDesktopThumbnail *this)
{
  __int64 v1; // r9
  __int64 v3; // r8
  unsigned int v4; // ecx
  __int64 v5; // r10
  __int64 v6; // rcx
  CBaseObject *v7; // rcx

  v1 = *((_QWORD *)this + 8);
  *(_QWORD *)this = &CPerMonitorDesktopThumbnail::`vftable';
  v3 = 0LL;
  v4 = *(_DWORD *)(v1 + 312);
  v5 = *(_QWORD *)(v1 + 288);
  if ( v4 )
  {
    do
    {
      if ( this == *(CPerMonitorDesktopThumbnail **)(v5 + 8 * v3) )
        break;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < v4 );
  }
  if ( (unsigned int)v3 < v4 )
  {
    for ( ; (unsigned int)v3 < v4 - 1; v4 = *(_DWORD *)(v1 + 312) )
    {
      v6 = (unsigned int)v3;
      LODWORD(v3) = v3 + 1;
      *(_QWORD *)(v5 + 8 * v6) = *(_QWORD *)(v5 + 8LL * (unsigned int)v3);
    }
    *(_DWORD *)(v1 + 312) = v4 - 1;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 8);
  if ( v7 )
    CBaseObject::Release(v7);
  CDesktopThumbnailCVI::~CDesktopThumbnailCVI(this);
}
