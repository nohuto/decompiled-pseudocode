/*
 * XREFs of ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180006B78
 * Callers:
 *     ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180006250 (-WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180006890 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180006B78 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180030A20 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180035720 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180006228 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180006B78 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x180006CEC (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180006D20 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x180006DD4 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180007BB8 (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008108 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D634 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800369CC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowData::SnapshotWindow(CWindowData *this, __int64 a2, bool a3)
{
  unsigned int v3; // edi
  CWindowData *v5; // rsi
  int IdealWindowRepresentationType; // eax
  struct CTopLevelWindow *v7; // rcx
  int v8; // eax
  char v9; // dl
  __int64 v10; // rsi
  __int64 v11; // rax
  CWindowData *v12; // rbp
  CWindowSnapshot *v14; // r8
  _DWORD *v15; // r9
  int v16; // eax
  int v17; // eax
  __int64 v18; // rbp
  CWindowData *v19; // r14

  v3 = 0;
  if ( (*((_BYTE *)this + 672) & 0x40) != 0 )
    return v3;
  CWindowData::ClearSnapshot(this, 0, a3, 0);
  v5 = 0LL;
  IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(this);
  if ( IdealWindowRepresentationType == 1 )
  {
    v5 = this;
    goto LABEL_4;
  }
  if ( !IdealWindowRepresentationType && (*((_BYTE *)this + 676) & 8) == 0 )
  {
    v18 = 0LL;
    if ( *((_DWORD *)this + 158) )
    {
      while ( 1 )
      {
        v19 = *(CWindowData **)(*((_QWORD *)this + 76) + 8 * v18);
        if ( (unsigned int)CWindowData::GetIdealWindowRepresentationType(v19) == 1 )
          break;
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= *((_DWORD *)this + 158) )
          goto LABEL_9;
      }
      v5 = v19;
LABEL_4:
      if ( v5 )
      {
        if ( CWindowData::IsImmersiveWindow(v5) || !CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
        {
          v7 = (struct CTopLevelWindow *)*((_QWORD *)v5 + 55);
          if ( v7 )
          {
            v8 = CWindowSnapshot::Create(v7, (struct CWindowSnapshot **)this + 60);
            v3 = v8;
            if ( v8 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x5F0u, 0LL);
              return v3;
            }
            *((_BYTE *)this + 676) &= ~0x10u;
          }
        }
        else
        {
          v5 = 0LL;
        }
      }
    }
  }
LABEL_9:
  CWindowData::NotifyRepresentationChanged(this);
  v9 = *((_BYTE *)this + 676);
  if ( (v9 & 8) != 0 )
  {
    if ( !*((_QWORD *)this + 60)
      || (*((_DWORD *)v5 + 43) & 0x400) != 0
      || CAccent::s_IsPolicyActive((CWindowData *)((char *)v5 + 168)) && *v15 != 5 )
    {
      *((_BYTE *)this + 676) = v9 | 0x10;
    }
    else
    {
      v16 = CWindowSnapshot::ProcessFreezeSnapshotAndRelease(v14, v5);
      v3 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x5FAu, 0LL);
    }
  }
  else
  {
    v10 = 0LL;
    if ( *((_DWORD *)this + 158) )
    {
      while ( 1 )
      {
        v11 = *((_QWORD *)this + 76);
        v12 = *(CWindowData **)(v11 + 8 * v10);
        if ( (*((_BYTE *)v12 + 678) & 0x10) == 0
          && (unsigned int)CWindowData::GetIdealWindowRepresentationType(*(_QWORD *)(v11 + 8 * v10)) == 1 )
        {
          v17 = CWindowData::SnapshotWindow(v12);
          v3 = v17;
          if ( v17 < 0 )
            break;
        }
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= *((_DWORD *)this + 158) )
          return v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x60Du, 0LL);
    }
  }
  return v3;
}
