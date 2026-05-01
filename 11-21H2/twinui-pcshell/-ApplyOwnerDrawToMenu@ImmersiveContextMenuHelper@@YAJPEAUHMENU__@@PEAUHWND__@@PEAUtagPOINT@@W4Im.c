/*
 * XREFs of ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1805F70B8
 * Callers:
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x1804CF664 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1805F70B8 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 *     ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1805F75D8 (-HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x18023A78C (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??_GContextMenuRenderingData@@QEAAPEAXI@Z @ 0x1804CED24 (--_GContextMenuRenderingData@@QEAAPEAXI@Z.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1805F70B8 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 *     ?CanApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YA_NPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1805F7480 (-CanApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YA_NPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1805F75D8 (-HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveContextMenuOptions@@@Z @ 0x1805F777C (-OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveCont.c)
 *     ?RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1805F78C0 (-RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?ShouldUseDarkTheme@ImmersiveContextMenuHelper@@YA_NW4ImmersiveContextMenuOptions@@@Z @ 0x1805F799C (-ShouldUseDarkTheme@ImmersiveContextMenuHelper@@YA_NW4ImmersiveContextMenuOptions@@@Z.c)
 *     ?StoreContextMenuDataForItem@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@_KIPEAUContextMenuRenderingData@@@Z @ 0x1805F7AA8 (-StoreContextMenuDataForItem@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@_KIPEAUContextMenuRender.c)
 *     ?_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagMENUITEMINFOW@@PEBGPEAUtagPOINT@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@PEAUContextMenuRenderingData@@W4ImmersiveContextMenuOptions@@PEAPEAU7@@Z @ 0x1805F7BAC (-_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagME.c)
 *     ?_StoreParentArrayOnWindow@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@PEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1805F7F14 (-_StoreParentArrayOnWindow@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@PEAV-$CSimplePointerArrayN.c)
 */

__int64 __fastcall ImmersiveContextMenuHelper::ApplyOwnerDrawToMenu(
        HMENU a1,
        HWND a2,
        HWND a3,
        unsigned int a4,
        _QWORD *hData)
{
  int Error; // ebx
  char ShouldUseDarkTheme; // al
  HWND v10; // r8
  _DWORD *v11; // rdi
  INPUT_MESSAGE_DEVICE_TYPE i; // esi
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rax
  HWND v14; // rsi
  __int64 v15; // rdx
  HWND *v16; // rdx
  HWND dwItemData; // rdx
  bool v19; // [rsp+40h] [rbp-C0h]
  INPUT_MESSAGE_SOURCE inputMessageSource; // [rsp+48h] [rbp-B8h] BYREF
  int pvParam; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+54h] [rbp-ACh]
  int v23[2]; // [rsp+58h] [rbp-A8h]
  struct tagMENUITEMINFOW mii; // [rsp+60h] [rbp-A0h] BYREF
  HWND v25; // [rsp+B0h] [rbp-50h]
  MENUITEMINFOW v26; // [rsp+C0h] [rbp-40h] BYREF
  struct tagMENUITEMINFOW v27; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v28[528]; // [rsp+160h] [rbp+60h] BYREF

  *(_QWORD *)v23 = a3;
  v22 = a4 & 2;
  Error = 1;
  if ( (a4 & 2) == 0 && !ImmersiveContextMenuHelper::CanApplyOwnerDrawToMenu(a1, (HMENU)a2, a3) )
    return (unsigned int)Error;
  v19 = (a4 & 4) == 0
     && GetCurrentInputMessageSource(&inputMessageSource)
     && inputMessageSource.deviceType == IMDT_TOUCH
     || (GetMessageExtraInfo() & 0xFF515780LL) == 0xFF515780LL;
  Error = ImmersiveContextMenuHelper::_StoreParentArrayOnWindow(a2, hData);
  ShouldUseDarkTheme = ImmersiveContextMenuHelper::ShouldUseDarkTheme(a4);
  pvParam = 0;
  byte_1807B6F58 = ShouldUseDarkTheme;
  SystemParametersInfoW(0x100Au, 0, &pvParam, 0);
  v11 = 0LL;
  for ( i = IMDT_UNAVAILABLE; ; ++i )
  {
    inputMessageSource.deviceType = i;
    if ( Error < 0 )
      break;
    memset_0(&mii, 0, sizeof(mii));
    mii.cbSize = 80;
    mii.fMask = 495;
    memset_0(v28, 0, 0x208uLL);
    mii.cch = 260;
    mii.dwTypeData = (LPWSTR)v28;
    if ( GetMenuItemInfoW(a1, i, 1, &mii) )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
        continue;
    }
    ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(a2, (HWND)mii.dwItemData, mii.wID);
    v11 = ContextMenuDataForItem;
    if ( (mii.fType & 0x100) != 0 && mii.dwItemData )
      goto LABEL_37;
    if ( !ContextMenuDataForItem || v19 != ((*((_DWORD *)ContextMenuDataForItem + 14) & 4) != 0) )
    {
      v27 = mii;
      Error = ImmersiveContextMenuHelper::_GetRenderingDataForMenuItem(a4 & 1, &v27, v28, *(_QWORD *)v23);
      if ( Error >= 0 )
      {
        v14 = v25;
        Error = 0;
        *((_DWORD *)v25 + 18) = pvParam;
        v15 = hData[1];
        if ( v15 != hData[3]
          || (Error = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                        (__int64)hData,
                        v15 + 1,
                        v10),
              Error >= 0) )
        {
          v16 = (HWND *)(*hData + 8 * hData[1]++);
          if ( v16 )
            *v16 = v14;
        }
        if ( Error < 0 )
        {
          ContextMenuRenderingData::`scalar deleting destructor'((ContextMenuRenderingData *)v14);
        }
        else
        {
          memset_0(&v26, 0, sizeof(v26));
          v26.hbmpItem = 0LL;
          dwItemData = (HWND)mii.dwItemData;
          v26.hbmpChecked = mii.hbmpChecked;
          v26.hbmpUnchecked = mii.hbmpUnchecked;
          v26.cbSize = 80;
          v26.fMask = 392;
          v26.fType = mii.fType | 0x100;
          if ( !mii.dwItemData )
          {
            v26.fMask = 424;
            dwItemData = v14;
            v26.dwItemData = (ULONG_PTR)v14;
          }
          Error = ImmersiveContextMenuHelper::StoreContextMenuDataForItem(
                    a2,
                    dwItemData,
                    mii.wID,
                    (unsigned int)v14,
                    (struct ContextMenuRenderingData *)hData);
          if ( Error >= 0 )
          {
            if ( SetMenuItemInfoW(a1, inputMessageSource.deviceType, 1, &v26) )
            {
              Error = 0;
LABEL_29:
              if ( mii.hSubMenu )
              {
                if ( v22 )
                  ImmersiveContextMenuHelper::HandleMergedMenus(
                    (ImmersiveContextMenuHelper *)mii.hSubMenu,
                    (HMENU)a2,
                    v10);
                else
                  ImmersiveContextMenuHelper::ApplyOwnerDrawToMenu((int)mii.hSubMenu, (int)a2, v23[0], a4 | 0x10, hData);
              }
            }
            else
            {
              Error = ResultFromKnownLastError();
              if ( Error >= 0 )
                goto LABEL_29;
            }
          }
          v11 = v14;
          *((_QWORD *)v14 + 10) = hData;
          if ( v19 )
            *((_DWORD *)v14 + 14) |= 4u;
        }
        i = inputMessageSource.deviceType;
      }
LABEL_37:
      if ( !v11 )
        continue;
    }
    if ( i )
      v11[14] &= ~1u;
    else
      v11[14] |= 1u;
    v11[14] &= ~2u;
  }
  if ( Error == -2147023440 && hData[1] )
  {
    Error = 0;
    if ( v11 )
      v11[14] |= 2u;
    if ( (a4 & 0x10) == 0 )
      ImmersiveContextMenuHelper::OverrideBackgroundColor(a1, a2, a4);
  }
  else
  {
    ImmersiveContextMenuHelper::RemoveOwnerDrawFromMenu(a1, (HMENU)a2, v10);
  }
  return (unsigned int)Error;
}
