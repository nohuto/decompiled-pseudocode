/*
 * XREFs of ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180019288
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180006AA0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800080BC (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateScene@CProjectionBorderManager@@UEAAJXZ @ 0x18000A240 (-UpdateScene@CProjectionBorderManager@@UEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180019288 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001C720 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180029A50 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800BE8B0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180019288 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x1800193C0 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::Validate(CSecondaryWindowRepresentation *this)
{
  unsigned int v1; // eax
  unsigned int v2; // edi
  unsigned int v4; // ecx
  int updated; // eax
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // eax
  __int64 v11; // rdx
  __int64 v12; // rsi
  int v13; // eax

  v1 = *((_DWORD *)this + 6);
  v2 = 0;
  v4 = v1;
  if ( (v1 & 4) != 0 )
  {
    if ( *((_QWORD *)this + 6) )
    {
      updated = CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(this);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x2ACu);
        return v2;
      }
      v1 = *((_DWORD *)this + 6);
    }
    v1 &= ~4u;
    *((_DWORD *)this + 6) = v1;
    v4 = v1;
  }
  if ( (v1 & 0x10) != 0 )
  {
    v6 = v4;
    if ( (*((_BYTE *)this + 40) & 1) != 0 )
    {
      v11 = *((_QWORD *)this + 6);
      if ( v11 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 104LL))(*((_QWORD *)this + 6));
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7));
        v6 = *((_DWORD *)this + 6);
      }
    }
    v2 = 0;
    v1 = v6 & 0xFFFFFFEF;
    *((_DWORD *)this + 6) = v1;
  }
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x2BDu);
      return v2;
    }
    v1 = *((_DWORD *)this + 6);
  }
  v9 = v1 & 0xFFFFFFF7;
  *((_DWORD *)this + 6) = v9;
  if ( (v9 & 1) != 0 )
  {
    v12 = 0LL;
    if ( *((_DWORD *)this + 38) )
    {
      while ( 1 )
      {
        v13 = CSecondaryWindowRepresentation::Validate(*(CSecondaryWindowRepresentation **)(*((_QWORD *)this + 16)
                                                                                          + 8 * v12));
        v2 = v13;
        if ( v13 < 0 )
          break;
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= *((_DWORD *)this + 38) )
        {
          v9 = *((_DWORD *)this + 6);
          goto LABEL_20;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x2C9u);
    }
    else
    {
LABEL_20:
      *((_DWORD *)this + 6) = v9 & 0xFFFFFFFE;
    }
  }
  return v2;
}
