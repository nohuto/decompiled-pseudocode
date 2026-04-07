/*
 * XREFs of ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x1800206E8
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18000EE60 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800133C0 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001C460 (-WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001FC80 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x1800206E8 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180006AA0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180011F7C (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18001BDD8 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001F880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x1800206E8 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x18002089C (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18002254C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180047C2C (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 */

__int64 __fastcall CWindowData::SnapshotWindow(CWindowData *this, __int64 a2, bool a3)
{
  unsigned int v3; // esi
  CWindowData *v5; // rdi
  int IdealWindowRepresentationType; // eax
  struct CTopLevelWindow *v7; // rcx
  int v8; // eax
  char v9; // dl
  __int64 v10; // rdi
  __int64 v11; // rax
  CWindowData *v12; // rbp
  __int64 v14; // rbp
  CWindowData *v15; // r14
  int v16; // eax
  _DWORD *v17; // rcx
  CWindowSnapshot *v18; // r8
  int v19; // eax

  v3 = 0;
  if ( (*((_BYTE *)this + 664) & 0x40) != 0 )
    return v3;
  CWindowData::ClearSnapshot(this, 0, a3, 0);
  v5 = 0LL;
  IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(this);
  if ( IdealWindowRepresentationType == 1 )
  {
    v5 = this;
    goto LABEL_4;
  }
  if ( !IdealWindowRepresentationType && (*((_BYTE *)this + 668) & 8) == 0 )
  {
    v14 = 0LL;
    if ( *((_DWORD *)this + 158) )
    {
      while ( 1 )
      {
        v15 = *(CWindowData **)(*((_QWORD *)this + 76) + 8 * v14);
        if ( (unsigned int)CWindowData::GetIdealWindowRepresentationType(v15) == 1 )
          break;
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= *((_DWORD *)this + 158) )
          goto LABEL_10;
      }
      v5 = v15;
LABEL_4:
      if ( v5 )
      {
        if ( !CWindowData::IsImmersiveWindow(v5) && CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
        {
          v5 = 0LL;
        }
        else
        {
          v7 = (struct CTopLevelWindow *)*((_QWORD *)v5 + 55);
          if ( v7 )
          {
            v8 = CWindowSnapshot::Create(v7, (struct CWindowSnapshot **)this + 60);
            v3 = v8;
            if ( v8 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x241Fu);
              return v3;
            }
            *((_BYTE *)this + 668) &= ~0x10u;
          }
        }
      }
    }
  }
LABEL_10:
  CWindowData::NotifyRepresentationChanged(this);
  v9 = *((_BYTE *)this + 668);
  if ( (v9 & 8) != 0 )
  {
    if ( !*((_QWORD *)this + 60)
      || (*((_DWORD *)v5 + 43) & 0x400) != 0
      || CAccent::s_IsPolicyActive((CWindowData *)((char *)v5 + 168)) && *v17 != 5 )
    {
      *((_BYTE *)this + 668) = v9 | 0x10;
    }
    else
    {
      v19 = CWindowSnapshot::ProcessFreezeSnapshotAndRelease(v18, v5);
      v3 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x2429u);
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
        if ( (*((_BYTE *)v12 + 670) & 8) == 0
          && (unsigned int)CWindowData::GetIdealWindowRepresentationType(*(_QWORD *)(v11 + 8 * v10)) == 1 )
        {
          v16 = CWindowData::SnapshotWindow(v12);
          v3 = v16;
          if ( v16 < 0 )
            break;
        }
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= *((_DWORD *)this + 158) )
          return v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x243Cu);
    }
  }
  return v3;
}
