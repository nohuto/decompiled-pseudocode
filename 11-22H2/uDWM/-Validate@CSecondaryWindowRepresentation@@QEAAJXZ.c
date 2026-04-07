/*
 * XREFs of ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001CC7C
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008108 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180009440 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800153B4 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001CC7C (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18002B800 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?UpdateScene@CProjectionBorderManager@@UEAAJXZ @ 0x18004F660 (-UpdateScene@CProjectionBorderManager@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800C2C10 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001CC7C (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18001D3C4 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::Validate(CSecondaryWindowRepresentation *this)
{
  int v1; // eax
  _QWORD *v2; // rsi
  unsigned int v3; // edi
  int updated; // eax
  int v6; // eax
  __int64 v8; // rsi
  int v9; // eax

  v1 = *((_DWORD *)this + 6);
  v2 = (_QWORD *)((char *)this + 48);
  v3 = 0;
  if ( (v1 & 4) != 0 )
  {
    if ( *v2 )
    {
      updated = CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(this);
      v3 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x2ACu, 0LL);
        return v3;
      }
    }
    *((_DWORD *)this + 6) &= ~4u;
    v1 = *((_DWORD *)this + 6);
  }
  if ( (v1 & 0x10) != 0 )
  {
    if ( (*((_BYTE *)this + 40) & 1) != 0 && *v2 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 112LL))(*v2);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 112LL))(*((_QWORD *)this + 7));
    }
    v3 = 0;
    *((_DWORD *)this + 6) &= ~0x10u;
  }
  if ( *v2 && (v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 64LL))(*v2), v3 = v6, v6 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x2BDu, 0LL);
  }
  else
  {
    *((_DWORD *)this + 6) &= ~8u;
    if ( (*((_BYTE *)this + 24) & 1) != 0 )
    {
      v8 = 0LL;
      if ( *((_DWORD *)this + 38) )
      {
        while ( 1 )
        {
          v9 = CSecondaryWindowRepresentation::Validate(*(CSecondaryWindowRepresentation **)(*((_QWORD *)this + 16)
                                                                                           + 8 * v8));
          v3 = v9;
          if ( v9 < 0 )
            break;
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *((_DWORD *)this + 38) )
            goto LABEL_17;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2C9u, 0LL);
      }
      else
      {
LABEL_17:
        *((_DWORD *)this + 6) &= ~1u;
      }
    }
  }
  return v3;
}
