/*
 * XREFs of ?RedrawVisual@CButton@@AEAAJXZ @ 0x180032070
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180034BB0 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawStateW@CButton@@AEAAXPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x180005B0C (-DrawStateW@CButton@@AEAAXPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x180005CF4 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x180005D88 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x180006870 (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x18000E4C8 (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18000E99C (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18000ED0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180010FC0 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180021080 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180034CA0 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     floor @ 0x180060EC8 (floor.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::RedrawVisual(CButton *this)
{
  char v1; // al
  unsigned int v2; // r15d
  unsigned int v4; // r12d
  int v5; // eax
  unsigned int v6; // eax
  float v7; // xmm1_4
  float v8; // xmm0_4
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  char v16; // al
  int v17; // eax
  unsigned int *v18; // rdi
  char v19; // si
  struct CAtlasedImage *v20; // rdx
  CAtlasedRectsVisual *v21; // rcx
  __int64 v22; // rdi
  CBaseObject *v23; // rcx
  CBaseObject *v24; // rcx
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rsi
  int v28; // ecx
  unsigned __int8 v29; // di
  unsigned __int8 v30; // al
  int v31; // ebp
  __int64 v32; // rcx
  __int64 v33; // rbx
  int v34; // eax
  int v35; // edi
  __int64 result; // rax
  int inserted; // eax
  __int64 v38; // rcx
  __int64 v39; // rax
  float v40; // xmm5_4
  unsigned int v41; // ebx
  __int64 v42; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  float v46; // [rsp+80h] [rbp+8h] BYREF
  float v47; // [rsp+88h] [rbp+10h] BYREF

  v1 = *((_BYTE *)this + 288);
  v2 = *((_DWORD *)this + 94);
  v4 = 0;
  if ( (v1 & 1) != 0 )
  {
    if ( (v1 & 2) != 0 )
      v5 = ((v1 & 4) != 0) + 1;
    else
      v5 = 0;
    *((_DWORD *)this + 94) = v5;
  }
  else
  {
    *((_DWORD *)this + 94) = 3;
  }
  v6 = *((_DWORD *)this + 94);
  v7 = *((float *)this + 100);
  if ( v6 == 1 )
    v8 = FLOAT_1_0;
  else
    v8 = *((float *)this + 101);
  *((float *)this + 100) = v8;
  if ( v7 != v8 )
  {
    CVisual::SetDirtyFlags(this, 0x8000);
    v6 = *((_DWORD *)this + 94);
  }
  v9 = *((_QWORD *)this + 37);
  v10 = 0LL;
  v11 = 0LL;
  if ( v6 != 4 && *((_DWORD *)this + 84) >= 4u )
  {
    if ( (*((_BYTE *)this + 288) & 0x10) != 0 )
      v6 = 1;
    v10 = *(_QWORD *)(*((_QWORD *)this + 39) + 8LL * v6);
    if ( *((_DWORD *)this + 92) >= 4u )
      v11 = *(_QWORD *)(*((_QWORD *)this + 43) + 8LL * v6);
  }
  v12 = *(_QWORD *)(v9 + 72);
  if ( v12 != v10 )
  {
    if ( v12 && _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1LL);
    *(_QWORD *)(v9 + 72) = v10;
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    *(_DWORD *)(v9 + 96) |= 1u;
    v13 = *(_QWORD *)(v9 + 80);
    if ( v13 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, 0x2000LL);
  }
  v14 = *(_QWORD *)(v9 + 128);
  if ( v14 != v11
    || *(_DWORD *)(v9 + 136) != 1
    || (int)((double)*((int *)this + 102) * *((double *)CDesktopManager::s_pDesktopManagerInstance + 51)) != *(_DWORD *)(v9 + 140) )
  {
    *(_DWORD *)(v9 + 136) = 1;
    if ( v14 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v14)(v14, 1LL);
    *(_QWORD *)(v9 + 128) = v11;
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    *(_DWORD *)(v9 + 96) |= 1u;
    v15 = *(_QWORD *)(v9 + 80);
    if ( v15 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 24LL))(v15, 0x2000LL);
  }
  v16 = (*((_BYTE *)this + 288) & 0x20) != 0;
  if ( *(_BYTE *)(v9 + 144) != v16 )
  {
    v44 = *(_QWORD *)(v9 + 80);
    *(_BYTE *)(v9 + 144) = v16;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 24LL))(v44, 0x2000LL);
  }
  v17 = *((_DWORD *)this + 94);
  if ( v17 )
  {
    if ( v17 != 1 || v2 )
      goto LABEL_35;
  }
  else if ( v2 != 1 )
  {
LABEL_35:
    v18 = (unsigned int *)*((_QWORD *)this + 3);
    v19 = 0;
    goto LABEL_36;
  }
  v19 = 1;
  v18 = (unsigned int *)this;
LABEL_36:
  v20 = (struct CAtlasedImage *)*((_QWORD *)this + 37);
  v21 = (CAtlasedRectsVisual *)*((_QWORD *)v20 + 10);
  if ( v18 != (unsigned int *)v21 )
  {
    if ( v21 )
    {
      CAtlasedRectsVisual::RemoveAtlasImage(v21, v20);
      v20 = (struct CAtlasedImage *)*((_QWORD *)this + 37);
    }
    inserted = CAtlasedRectsVisual::InsertAtlasImageAtIndex((CAtlasedRectsVisual *)v18, v20, v18[68]);
    v4 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x131u);
      return v4;
    }
    CButton::UpdateAtlasPositionAndSize(this);
  }
  if ( !v19 )
  {
    if ( *((_QWORD *)this + 49) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0qp_EtwEventWriteTransfer((__int64)v21, (int)&UdwmAnimation_Stop, 7);
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
      v42 = *((_QWORD *)this + 49);
      if ( v42 )
      {
        if ( (*(_DWORD *)(v42 + 8))-- == 1 )
          CDesktopManager::s_fTimelineDirty = 1;
        *((_QWORD *)this + 49) = 0LL;
      }
    }
    v22 = *((_QWORD *)this + 38);
    v23 = *(CBaseObject **)(v22 + 72);
    if ( v23 )
    {
      CBaseObject::Release(v23);
      *(_QWORD *)(v22 + 72) = 0LL;
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v22, 1, 0x2000u);
    }
    v24 = *(CBaseObject **)(v22 + 128);
    if ( v24
      || *(_DWORD *)(v22 + 136) != 1
      || (int)((double)*((int *)this + 102) * *((double *)CDesktopManager::s_pDesktopManagerInstance + 51)) != *(_DWORD *)(v22 + 140) )
    {
      *(_DWORD *)(v22 + 136) = 1;
      if ( v24 )
        CBaseObject::Release(v24);
      *(_DWORD *)(v22 + 96) |= 1u;
      v25 = *(_QWORD *)(v22 + 80);
      *(_QWORD *)(v22 + 128) = 0LL;
      if ( v25 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 24LL))(v25, 0x2000LL);
    }
    v26 = (*((_BYTE *)this + 288) & 0x20) != 0;
    if ( *(_BYTE *)(v22 + 144) != v26 )
    {
      v45 = *(_QWORD *)(v22 + 80);
      *(_BYTE *)(v22 + 144) = v26;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v45 + 24LL))(v45, 0x2000LL);
    }
    v27 = *((_QWORD *)this + 37);
    v28 = (int)floor((float)(*((float *)this + 100) * 255.0) + 0.5);
    v29 = -1;
    if ( v28 > 255 )
    {
      v30 = -1;
    }
    else
    {
      v30 = 0;
      if ( v28 >= 0 )
        v30 = v28;
    }
    v31 = 16843009 * v30;
    if ( v31 != *(_DWORD *)(v27 + 68) )
    {
      *(_DWORD *)(v27 + 96) |= 2u;
      v32 = *(_QWORD *)(v27 + 80);
      if ( v32 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 24LL))(v32, 0x2000LL);
      *(_DWORD *)(v27 + 68) = v31;
    }
    v33 = *((_QWORD *)this + 38);
    v34 = (int)floor(0.5);
    if ( v34 <= 255 )
    {
      v29 = 0;
      if ( v34 >= 0 )
        v29 = v34;
    }
    v35 = 16843009 * v29;
    if ( v35 != *(_DWORD *)(v33 + 68) )
    {
      *(_DWORD *)(v33 + 96) |= 2u;
      v38 = *(_QWORD *)(v33 + 80);
      if ( v38 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 24LL))(v38, 0x2000LL);
      *(_DWORD *)(v33 + 68) = v35;
    }
    return v4;
  }
  v39 = *((_QWORD *)this + 49);
  if ( !v39 || *(_BYTE *)(v39 + 72) )
  {
    *((_DWORD *)this + 96) = *((_DWORD *)this + 100);
  }
  else
  {
    CButton::ComputeFadeValues(this, &v46, &v47);
    v40 = v46;
    *((float *)this + 95) = v47;
    *((float *)this + 96) = v40;
  }
  CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 37), *((float *)this + 95));
  CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 38), *((float *)this + 96));
  CButton::DrawStateW((__int64)this, *((_QWORD *)this + 38), v2);
  result = CButton::ActivateTimeline(this, (__int64 *)this + 49, 0.1599999964237213);
  v41 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, result, 0x149u);
    return v41;
  }
  return result;
}
