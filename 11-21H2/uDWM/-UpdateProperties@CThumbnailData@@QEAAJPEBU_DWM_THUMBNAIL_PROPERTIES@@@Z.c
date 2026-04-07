/*
 * XREFs of ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180018FF0
 * Callers:
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x18001D100 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x18006AF48 (-UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTI.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180106CF0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001CBFC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 */

__int64 __fastcall CThumbnailData::UpdateProperties(CThumbnailData *this, const struct _DWM_THUMBNAIL_PROPERTIES *a2)
{
  DWORD dwFlags; // r8d
  unsigned int v3; // r12d
  int v4; // ebp
  int *v7; // rsi
  int v8; // eax
  int *v9; // rcx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // ecx
  signed int v16; // r8d
  CThumbnailVisual *v17; // rcx
  int updated; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int *v23; // rcx
  int v24; // eax
  int v25; // eax

  dwFlags = a2->dwFlags;
  v3 = 0;
  v4 = 0;
  if ( (a2->dwFlags & 1) != 0 )
  {
    v7 = (int *)((char *)this + 36);
    if ( !EqualRect((const RECT *)((char *)this + 40), &a2->rcDestination) || (v8 = *v7, (*v7 & 1) == 0) )
    {
      v8 = *v7;
      v4 = 1;
    }
    *v7 = v8 | 1;
    *(RECT *)((char *)this + 40) = a2->rcDestination;
    dwFlags = a2->dwFlags;
  }
  else
  {
    v7 = (int *)((char *)this + 36);
  }
  if ( (dwFlags & 2) != 0 )
  {
    if ( !EqualRect((const RECT *)((char *)this + 56), &a2->rcSource) || (v21 = *v7, (*v7 & 2) == 0) )
    {
      v21 = *((_DWORD *)this + 9);
      v4 |= 2u;
    }
    *v7 = v21 | 2;
    *(RECT *)((char *)this + 56) = a2->rcSource;
    dwFlags = a2->dwFlags;
  }
  if ( (dwFlags & 4) != 0 )
  {
    if ( *((_BYTE *)this + 72) != a2->opacity || (v22 = *v7, v23 = v7, (*v7 & 4) == 0) )
    {
      v23 = (int *)((char *)this + 36);
      v4 |= 4u;
      v22 = *((_DWORD *)this + 9);
    }
    *v23 = v22 | 4;
    *((_BYTE *)this + 72) = a2->opacity;
    dwFlags = a2->dwFlags;
  }
  if ( (dwFlags & 8) != 0 )
  {
    if ( *(_DWORD *)((char *)this + 73) != a2->fVisible || (v10 = *v7, v9 = v7, (*v7 & 8) == 0) )
    {
      v9 = (int *)((char *)this + 36);
      v4 |= 8u;
      v10 = *((_DWORD *)this + 9);
    }
    *v9 = v10 | 8;
    *(_DWORD *)((char *)this + 73) = a2->fVisible;
    dwFlags = a2->dwFlags;
  }
  if ( (dwFlags & 0x10) != 0 )
  {
    if ( *(_DWORD *)((char *)this + 77) != a2->fSourceClientAreaOnly || (v20 = *v7, (*v7 & 0x10) == 0) )
    {
      v7 = (int *)((char *)this + 36);
      v4 |= 0x10u;
      v20 = *((_DWORD *)this + 9);
    }
    *v7 = v20 | 0x10;
    *(_DWORD *)((char *)this + 77) = a2->fSourceClientAreaOnly;
    dwFlags = a2->dwFlags;
  }
  v11 = v4 | 0x80000;
  if ( (dwFlags & 0x80000) == 0 )
    v11 = v4;
  v12 = v11;
  if ( (dwFlags & 0x400000) != 0 )
  {
    v24 = *((_DWORD *)this + 9);
    if ( (v24 & 0x400000) == 0 )
    {
      v12 = v11 | 0x400000;
      *((_DWORD *)this + 9) = v24 | 0x400000;
      dwFlags = a2->dwFlags;
    }
  }
  v13 = dwFlags & 0x30000 | v12;
  if ( (dwFlags & 0x100000) != 0 )
  {
    v13 |= 0x100000u;
    *((_DWORD *)this + 9) |= 0x100000u;
    dwFlags = a2->dwFlags;
  }
  if ( (dwFlags & 0x800000) != 0 )
  {
    v13 |= 0x800000u;
    *((_DWORD *)this + 9) |= 0x800000u;
    dwFlags = a2->dwFlags;
  }
  v14 = dwFlags & 0xC000000;
  if ( (dwFlags & 0xC000000) != 0 )
  {
    v13 |= v14;
    *((_DWORD *)this + 9) = v14 | *((_DWORD *)this + 9) & 0xF3FFFFFF;
    dwFlags = a2->dwFlags;
  }
  v15 = dwFlags & 0x30000000;
  if ( (dwFlags & 0x30000000) != 0 )
  {
    v13 |= v15;
    *((_DWORD *)this + 9) = v15 | *((_DWORD *)this + 9) & 0xCFFFFFFF;
    dwFlags = a2->dwFlags;
  }
  v16 = dwFlags & 0xC0000000;
  if ( v16 )
  {
    v13 |= v16;
    v25 = v16 | *((_DWORD *)this + 9) & 0x3FFFFFFF;
    *((_DWORD *)this + 9) = v25;
    if ( v16 < 0 )
      *((_DWORD *)this + 9) = v25 & 0xFFEFFFFF;
  }
  v17 = (CThumbnailVisual *)*((_QWORD *)this + 11);
  if ( v17 )
  {
    updated = CThumbnailVisual::UpdateProperties(v17, v13);
    v3 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x25C2u);
  }
  return v3;
}
