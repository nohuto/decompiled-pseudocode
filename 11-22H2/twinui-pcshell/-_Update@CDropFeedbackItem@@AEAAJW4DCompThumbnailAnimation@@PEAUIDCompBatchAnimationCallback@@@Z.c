/*
 * XREFs of ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1805F4274
 * Callers:
 *     ?Show@CDropFeedbackItem@@UEAAXXZ @ 0x1805F3F60 (-Show@CDropFeedbackItem@@UEAAXXZ.c)
 *     ?Update@CDropFeedbackItem@@UEAAJPEAUIDCompBatchAnimationCallback@@@Z @ 0x1805F3FC0 (-Update@CDropFeedbackItem@@UEAAJPEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___ @ 0x1805F238C (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564_ea_1805F238C.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___ @ 0x1805F250C (DCompThumbnailHelpers--DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x1805F25B4 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df3.c)
 *     ?_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z @ 0x1805F497C (-_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z.c)
 *     McTemplateU0ddz_EventWriteTransfer @ 0x1805F4BCC (McTemplateU0ddz_EventWriteTransfer.c)
 *     McTemplateU0qdddd_EventWriteTransfer @ 0x1805F4C6C (McTemplateU0qdddd_EventWriteTransfer.c)
 */

__int64 __fastcall CDropFeedbackItem::_Update(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // esi
  int v5; // ecx
  unsigned int v8; // r15d
  int v9; // ecx
  int v10; // ecx
  HWND v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // eax
  HWND v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rbx
  __int64 *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // r9d
  int v24; // r8d
  int v25; // r10d
  __int128 v26; // xmm0
  int v27; // eax
  int v28; // r8d
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // ecx
  bool v34; // [rsp+40h] [rbp-39h] BYREF
  __int64 v35; // [rsp+48h] [rbp-31h] BYREF
  __int128 v36; // [rsp+50h] [rbp-29h] BYREF
  __int64 v37; // [rsp+60h] [rbp-19h] BYREF
  int v38; // [rsp+68h] [rbp-11h]
  struct tagPOINT Points[2]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v40; // [rsp+80h] [rbp+7h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(a1 + 68);
  v8 = 0;
  if ( !v5 )
  {
    v34 = 0;
    *((_QWORD *)&v36 + 1) = &v34;
    *(_QWORD *)&v36 = a1;
    if ( a2 == 6 )
    {
      *(_QWORD *)&v40 = 0LL;
      v35 = a1;
      Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef(&v35);
      v19 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v40, Points);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v19);
      v37 = a1;
      Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef(&v37);
      *(_QWORD *)&v36 = a1;
      *((_QWORD *)&v36 + 1) = &v34;
      if ( (int)DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___(
                  (__int64)&v36,
                  &v37,
                  a3,
                  v19) >= 0 )
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 184) + 128LL))(
          *(_QWORD *)(a1 + 184),
          6LL,
          v40);
      v20 = &v35;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x80000) == 0 )
      {
        v23 = *(_DWORD *)(a1 + 144);
        v24 = *(_DWORD *)(a1 + 128);
        v25 = *(_DWORD *)(a1 + 140);
        v26 = *(_OWORD *)(a1 + 124);
        v27 = (*(_DWORD *)(a1 + 152) - v23) / 2;
        *(_OWORD *)&Points[0].x = 0LL;
        v28 = v27 - (*(_DWORD *)(a1 + 136) - v24) / 2 - v24 + v23;
        v29 = v25
            + (*(_DWORD *)(a1 + 148) - v25) / 2
            - (*(_DWORD *)(a1 + 132) - *(_DWORD *)(a1 + 124)) / 2
            - *(_DWORD *)(a1 + 124);
        *(_OWORD *)(a1 + 140) = v26;
        v34 = v28 * v28 + v29 * v29 < 10;
        CDropFeedbackItem::_ZoomRect(a1, 1LL, Points);
        v30 = (unsigned int)(Points[1].y - Points[0].y);
        if ( *(_DWORD *)(a1 + 132) - *(_DWORD *)(a1 + 124) != Points[1].x - Points[0].x
          || *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128) != (_DWORD)v30 )
        {
          v3 = 1;
        }
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 184) + 32LL))(
          *(_QWORD *)(a1 + 184),
          v30,
          a2,
          0LL);
        v35 = a1;
        Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef(&v35);
        v37 = a1;
        Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef(&v37);
        v31 = *(_QWORD *)(a1 + 184);
        v38 = v3;
        DCompThumbnailHelpers::DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___(
          v31,
          (int)Points,
          a2,
          &v36,
          &v37,
          a3);
        v40 = 0LL;
        CDropFeedbackItem::_ZoomRect(a1, 0LL, &v40);
        (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD))(**(_QWORD **)(a1 + 184) + 40LL))(
          *(_QWORD *)(a1 + 184),
          &v40,
          a2,
          0LL);
        *(_BYTE *)(a1 + 157) = 1;
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          McTemplateU0qdddd_EventWriteTransfer(
            v32,
            (unsigned int)&DropFeedbackItem_Update_Info,
            *(_DWORD *)(a1 + 32),
            Points[0].x,
            Points[0].y,
            Points[1].x,
            Points[1].y);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v35);
        return v8;
      }
      *(_QWORD *)&v40 = 0LL;
      v37 = a1;
      Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef(&v37);
      v35 = a1;
      Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef(&v35);
      v21 = *(_QWORD *)(a1 + 184);
      *((_QWORD *)&v36 + 1) = &v34;
      *(_QWORD *)&v36 = a1;
      DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___(
        v21,
        v22,
        a2,
        &v36,
        &v35,
        a3);
      v20 = &v37;
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v20);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v40);
    return v8;
  }
  v9 = v5 - 1;
  if ( !v9 )
    goto LABEL_10;
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v11 = *(HWND *)(a1 + 192);
      *(_OWORD *)&Points[0].x = *(_OWORD *)(a1 + 76);
      MapWindowPoints(0LL, v11, Points, 2u);
      v12 = *(__int64 **)(a1 + 184);
      v13 = *v12;
      if ( (*(_DWORD *)(a1 + 72) & 0x80000) == 0 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64 *, struct tagPOINT *, _QWORD, _QWORD))(v13 + 24))(v12, Points, a2, 0LL);
        goto LABEL_9;
      }
      v8 = (*(__int64 (__fastcall **)(__int64 *, struct tagPOINT *, _QWORD, _QWORD))(v13 + 24))(v12, Points, 0LL, 0LL);
      if ( (v8 & 0x80000000) == 0 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 184) + 32LL))(
                *(_QWORD *)(a1 + 184),
                v14,
                a2,
                0LL);
LABEL_9:
        v8 = v15;
      }
LABEL_10:
      *(_BYTE *)(a1 + 157) = 1;
    }
  }
  else
  {
    v16 = *(HWND *)(a1 + 192);
    *(_OWORD *)&Points[0].x = *(_OWORD *)(a1 + 76);
    MapWindowPoints(0LL, v16, Points, 2u);
    (*(void (__fastcall **)(_QWORD, struct tagPOINT *, _QWORD, _QWORD))(**(_QWORD **)(a1 + 184) + 24LL))(
      *(_QWORD *)(a1 + 184),
      Points,
      0LL,
      0LL);
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0ddz_EventWriteTransfer(v18, v17, *(unsigned int *)(a1 + 76), *(unsigned int *)(a1 + 80));
  }
  return v8;
}
