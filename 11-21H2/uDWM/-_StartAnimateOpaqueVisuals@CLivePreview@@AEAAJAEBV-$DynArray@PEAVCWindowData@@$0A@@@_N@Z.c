/*
 * XREFs of ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x1800C4A10
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C2D14 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x18000EDA0 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800350F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?_ContainsWindow@CLivePreview@@AEAA_NAEBV?$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z @ 0x1800C39E4 (-_ContainsWindow@CLivePreview@@AEAA_NAEBV-$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x1800C4894 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800E6248 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180103BFC (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLivePreview::_StartAnimateOpaqueVisuals(__int64 this, __int64 a2, char a3)
{
  __int64 v5; // r15
  unsigned int v6; // edi
  unsigned int v7; // ebx
  __int64 i; // rsi
  struct CWindowData *MDIOwner; // r8
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rbx
  int updated; // eax
  __int64 v17; // r14
  __int64 v18; // r8
  __int64 v19; // r8
  int v20; // eax
  int started; // eax
  __int128 v23; // [rsp+30h] [rbp-20h] BYREF
  int v24; // [rsp+40h] [rbp-10h]
  unsigned int v25; // [rsp+44h] [rbp-Ch]
  unsigned int v26; // [rsp+48h] [rbp-8h]
  __int64 *v27; // [rsp+90h] [rbp+40h] BYREF
  struct CWindowData *v28; // [rsp+98h] [rbp+48h] BYREF

  v5 = this;
  v6 = 0;
  v23 = 0LL;
  v24 = 0;
  v25 = 0;
  v7 = 0;
  v26 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 24); i = (unsigned int)(i + 1) )
  {
    MDIOwner = CWindowData::GetMDIOwner(*(CWindowData **)(*(_QWORD *)a2 + 8 * i));
    v28 = MDIOwner;
    if ( MDIOwner )
    {
      v10 = v7 + 1;
      if ( v7 + 1 >= v7 )
      {
        if ( v10 > v25 )
        {
          v27 = (__int64 *)&v28;
          v11 = DynArrayImpl<0>::Grow((char **)&v23, 8u, 1, 0, (unsigned __int64 *)&v27);
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xC0u);
            v7 = v26;
          }
          else
          {
            v12 = v26;
            this = *v27;
            *(_QWORD *)(8 * v26 + (_QWORD)v23) = *v27;
            v7 = v12 + 1;
            v26 = v7;
          }
        }
        else
        {
          this = v7;
          *(_QWORD *)(v23 + 8LL * v7++) = MDIOwner;
          v26 = v10;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
    }
  }
  v13 = *(_DWORD *)(v5 + 368) - 1;
  v14 = v13;
  if ( v13 >= 0 )
  {
    v15 = 48LL * v13;
    do
    {
      if ( !a3 || (this = *(_QWORD *)(v5 + 344), *(_DWORD *)(v15 + this + 40)) )
      {
        v17 = *(_QWORD *)(v5 + 344);
        if ( CLivePreview::_ContainsWindow(this, a2, *(_QWORD *)(v15 + v17 + 24))
          || CLivePreview::_ContainsWindow(this, (__int64)&v23, v18)
          || CLivePreview::_ContainsWindow(this, a2, *(_QWORD *)(v15 + v17 + 32))
          || CLivePreview::_ContainsWindow(this, (__int64)&v23, v19) )
        {
          if ( *(_DWORD *)(v15 + v17 + 40) == 1 )
          {
            started = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v15 + v17), 4LL);
            v6 = started;
            if ( started < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x1FDu);
              goto LABEL_30;
            }
            *(_DWORD *)(v15 + *(_QWORD *)(v5 + 344) + 40) = 0;
          }
        }
        else if ( !*(_DWORD *)(v15 + v17 + 40) )
        {
          v20 = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v15 + v17), 3LL);
          v6 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x206u);
            goto LABEL_30;
          }
          *(_DWORD *)(v15 + *(_QWORD *)(v5 + 344) + 40) = 1;
        }
      }
      else
      {
        updated = CVisual::UpdateOpacity(*(CVisual **)(v15 + this));
        v6 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1F1u);
          goto LABEL_30;
        }
      }
      v15 -= 48LL;
      --v14;
    }
    while ( v14 >= 0 );
  }
  CLivePreview::_ShowHideImmersiveBackground((CLivePreview *)v5);
LABEL_30:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v23);
  return v6;
}
