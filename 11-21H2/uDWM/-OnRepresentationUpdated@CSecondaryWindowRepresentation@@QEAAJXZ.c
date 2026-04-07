/*
 * XREFs of ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002130C
 * Callers:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001F880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180020A60 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F9E0 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001A200 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x18002089C (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180020E74 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180020FD8 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18002190C (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x1800222C8 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180022F34 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x1800C0208 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnRepresentationUpdated(
        CSecondaryWindowRepresentation *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v6; // r15d
  __int128 v7; // xmm0
  int v8; // r14d
  int v9; // r14d
  int v10; // eax
  char v11; // r14
  unsigned int v12; // esi
  char *v13; // rdi
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  char v19; // bp
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rdi
  CWindowData *v25; // rcx
  CWindowData *v26; // rdi
  __int64 v27; // rcx
  int v28; // eax
  bool v29; // zf
  char v30; // al
  int v31; // eax
  void (__fastcall ***v32)(_QWORD, CSecondaryWindowRepresentation *); // rcx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rdi
  CBaseObject *v38; // rcx
  unsigned int v39; // esi
  CWindowData *v40; // r12
  int IdealWindowRepresentationType; // eax
  CBaseObject *v42; // rcx
  int v43; // eax
  __int128 v44; // [rsp+30h] [rbp-38h] BYREF

  v4 = *((_QWORD *)this + 4);
  v6 = 0;
  if ( !v4 || *((_BYTE *)this + 161) )
    return v6;
  v7 = *((_OWORD *)this + 4);
  v8 = *((_DWORD *)this + 10);
  *((_QWORD *)this + 8) = v4;
  v44 = v7;
  if ( (v8 & 0x800) != 0 )
  {
    *((_DWORD *)this + 18) = 3;
  }
  else
  {
    v9 = v8 & 0x20;
    *((_DWORD *)this + 18) = 0;
    if ( (*(_BYTE *)(v4 + 665) & 1) == 0 || v9 )
    {
      if ( *(_QWORD *)(v4 + 480) )
      {
        *((_DWORD *)this + 18) = 2;
      }
      else if ( CWindowData::HasNonTrivialRepresentation((CWindowData *)v4) )
      {
        *((_DWORD *)this + 18) = 1;
      }
      else
      {
        *((_DWORD *)this + 18) = 0;
        if ( !v9 && (*(_BYTE *)(v4 + 668) & 8) == 0 && !CWindowData::IsImmersiveWindow((CWindowData *)v4) )
        {
          v39 = 0;
          if ( *(_DWORD *)(v4 + 632) )
          {
            while ( 1 )
            {
              v40 = *(CWindowData **)(*(_QWORD *)(v4 + 608) + 8LL * v39);
              IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(v40);
              *((_DWORD *)this + 18) = IdealWindowRepresentationType;
              if ( IdealWindowRepresentationType )
                break;
              if ( ++v39 >= *(_DWORD *)(v4 + 632) )
                goto LABEL_9;
            }
            *((_QWORD *)this + 8) = v40;
          }
        }
      }
    }
    else
    {
      *((_DWORD *)this + 18) = 3;
    }
LABEL_9:
    v10 = *((_DWORD *)this + 18);
    if ( !v10 )
    {
      *((_DWORD *)this + 18) = 3;
      v10 = 3;
    }
    if ( v9 && v10 == 3 )
      *((_DWORD *)this + 18) = 1;
  }
  v11 = 0;
  if ( (_QWORD)v44 != *((_QWORD *)this + 8) || (v18 = *((_DWORD *)this + 18), DWORD2(v44) != v18) )
  {
    v12 = 0;
    v13 = (char *)this + 184;
    do
    {
      v14 = (CBaseObject *)*((_QWORD *)v13 - 1);
      if ( v14 )
      {
        CBaseObject::Release(v14);
        *((_QWORD *)v13 - 1) = 0LL;
      }
      if ( *(_QWORD *)v13 )
      {
        CBaseObject::Release(*(CBaseObject **)v13);
        *(_QWORD *)v13 = 0LL;
      }
      v15 = (CBaseObject *)*((_QWORD *)v13 + 1);
      if ( v15 )
      {
        CBaseObject::Release(v15);
        *((_QWORD *)v13 + 1) = 0LL;
      }
      v13[16] = 0;
      ++v12;
      v13 += 32;
    }
    while ( v12 < 5 );
    v11 = 1;
    if ( *((_DWORD *)this + 18) == 3 && CWindowData::IsImmersiveWindow(*((CWindowData **)this + 4)) )
    {
      v42 = (CBaseObject *)*((_QWORD *)this + 47);
      if ( v42 )
      {
        CBaseObject::Release(v42);
        *((_QWORD *)this + 47) = 0LL;
      }
      v43 = CImmersiveWindowIconic::Create(
              *((struct CWindowData **)this + 4),
              *((_DWORD *)this + 41),
              (enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 30),
              (*((_DWORD *)this + 10) & 0x1000) != 0,
              (struct CImmersiveWindowIconic **)this + 47);
      v6 = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, 0x1C6u);
        return v6;
      }
    }
    v16 = CWindowData::ChangeSecondaryWindowRepresentation(*((CWindowData **)this + 4), this, (CWindowData **)&v44, a4);
    v6 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x1C9u);
      return v6;
    }
    v17 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(this);
    v6 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x1CAu);
      return v6;
    }
    v18 = *((_DWORD *)this + 18);
  }
  v19 = *((_BYTE *)this + 336);
  v20 = 0LL;
  v21 = *((_QWORD *)this + 8);
  v22 = v18 - 1;
  if ( !v22 )
    goto LABEL_57;
  v23 = v22 - 1;
  if ( !v23 )
  {
    v24 = *(_QWORD *)(v21 + 480);
    if ( v24 )
    {
      v20 = *(_QWORD *)(v24 + 32);
      goto LABEL_31;
    }
    goto LABEL_57;
  }
  if ( v23 == 1 )
  {
    if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(v21 + 488) + 80LL);
      goto LABEL_31;
    }
LABEL_57:
    v20 = v21;
  }
LABEL_31:
  if ( (*(_BYTE *)(v20 + 665) & 0x10) == 0
    && (*(_BYTE *)(v20 + 667) & 0x20) == 0
    && !*(_DWORD *)(v20 + 560)
    && (!*(_QWORD *)(v20 + 424)
     || *(HWND *)(v20 + 40) == CWindowList::GetShellWindowForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 52)))
    && !*((_QWORD *)this + 6) )
  {
    v25 = 0LL;
    v26 = (CWindowData *)*((_QWORD *)this + 8);
    if ( *((_DWORD *)this + 18) != 1 )
    {
      if ( *((_DWORD *)this + 18) == 2 )
      {
        v27 = *((_QWORD *)v26 + 60);
        if ( v27 )
        {
          v25 = *(CWindowData **)(v27 + 32);
          goto LABEL_40;
        }
        goto LABEL_65;
      }
      if ( *((_DWORD *)this + 18) != 3 )
      {
LABEL_40:
        v28 = *((_DWORD *)v25 + 33);
        if ( v28 < 8 || v28 > 11 )
        {
          v29 = !CWindowData::IsShellManaged(v25);
          v30 = 1;
          if ( v29 )
            goto LABEL_42;
        }
        goto LABEL_64;
      }
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
      {
        v25 = *(CWindowData **)(*((_QWORD *)v26 + 61) + 80LL);
        goto LABEL_40;
      }
    }
LABEL_65:
    v25 = v26;
    goto LABEL_40;
  }
LABEL_64:
  v30 = 0;
LABEL_42:
  *((_BYTE *)this + 336) = v30;
  if ( !v11 )
  {
    if ( !v19 && !v30 )
      return v6;
    v38 = (CBaseObject *)*((_QWORD *)this + 38);
    if ( v38 )
    {
      CBaseObject::Release(v38);
      *((_QWORD *)this + 38) = 0LL;
    }
  }
  if ( (*((_BYTE *)this + 40) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD, CSecondaryWindowRepresentation *))(**((_QWORD **)this + 21) + 16LL))(
      *((_QWORD *)this + 21),
      this);
  v31 = *((_DWORD *)this + 6);
  if ( (v31 & 4) == 0 )
  {
    v32 = (void (__fastcall ***)(_QWORD, CSecondaryWindowRepresentation *))*((_QWORD *)this + 21);
    *((_DWORD *)this + 6) = v31 | 4;
    (**v32)(v32, this);
  }
  v33 = 0LL;
  v34 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) == 1 )
    goto LABEL_63;
  if ( *((_DWORD *)this + 18) != 2 )
  {
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_51;
    if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
    {
      v33 = *(_QWORD *)(*(_QWORD *)(v34 + 488) + 80LL);
      goto LABEL_51;
    }
    goto LABEL_63;
  }
  v35 = *(_QWORD *)(v34 + 480);
  if ( !v35 )
  {
LABEL_63:
    v33 = v34;
    goto LABEL_51;
  }
  v33 = *(_QWORD *)(v35 + 32);
LABEL_51:
  v36 = *(_QWORD *)(v33 + 440);
  if ( v36 )
  {
    while ( 1 )
    {
      v36 = *(_QWORD *)(v36 + 24);
      if ( !v36 || (*(_BYTE *)(v36 + 88) & 1) != 0 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
    }
  }
  CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(this);
  return v6;
}
