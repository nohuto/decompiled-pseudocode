/*
 * XREFs of ?_EnumerateAndBuildShutdownMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DBA18
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1801D8C10 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18008D220 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180180FFC (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipCo.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$CreateRefCountedObj@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@XZ @ 0x1805D6EA0 (--$CreateRefCountedObj@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@$$V@@YA-AV-$ComP.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CLauncherTipContextMenu::_EnumerateAndBuildShutdownMenu(CLauncherTipContextMenu *this)
{
  HMENU i; // rcx
  int v3; // ebx
  LPVOID v4; // rbx
  __int64 (__fastcall *v5)(LPVOID, __int64 *); // rdi
  int v6; // r15d
  _DWORD *v7; // rdi
  void *v8; // r8
  __int64 v9; // rdx
  __int64 *v10; // rcx
  LPVOID ppv; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v16; // [rsp+50h] [rbp-B8h] BYREF
  WCHAR NewItem[264]; // [rsp+58h] [rbp-B0h] BYREF

  for ( i = (HMENU)*((_QWORD *)this + 42); GetMenuItemCount(i) > 0; i = (HMENU)*((_QWORD *)this + 42) )
    DeleteMenu(*((HMENU *)this + 42), 0, 0x400u);
  CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)this + 208);
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  v3 = CoCreateInstance(&CLSID_AuthUIShutdownChoices, 0LL, 1u, &GUID_bfdc5e2f_3402_49b3_8740_91d6dc5dbb15, &ppv);
  if ( v3 >= 0 )
  {
    (*(void (__fastcall **)(LPVOID, int *))(*(_QWORD *)ppv + 48LL))(ppv, &v13);
    v13 |= 1u;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 32LL))(ppv);
    v15 = 0LL;
    v4 = ppv;
    v5 = *(__int64 (__fastcall **)(LPVOID, __int64 *))(*(_QWORD *)ppv + 64LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
    v3 = v5(v4, &v15);
    if ( v3 >= 0 )
    {
      v6 = 4000;
      do
      {
        if ( (*(unsigned int (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v15 + 24LL))(v15, 1LL, &v14) )
          break;
        v3 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, WCHAR *, int))(*(_QWORD *)ppv + 88LL))(
               ppv,
               v14,
               1LL,
               NewItem,
               260);
        if ( v3 >= 0 )
        {
          CreateRefCountedObj<CLauncherTipContextMenu::LauncherTipShutdownMenuCommand,>((__int64 *)&v16);
          v7 = v16;
          if ( !v16 )
            goto LABEL_17;
          v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                 (__int64)(v16 + 4),
                 (__int64)NewItem,
                 0xFFFFFFFFFFFFFFFFuLL);
          if ( v3 >= 0 )
            v7[2] = v14;
          v9 = *((_QWORD *)this + 27);
          if ( v9 != *((_QWORD *)this + 29)
            || (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      (__int64)this + 208,
                      v9 + 1,
                      v8) >= 0 )
          {
            v10 = (__int64 *)(*((_QWORD *)this + 26) + 8 * (*((_QWORD *)this + 27))++);
            if ( v10 )
            {
              *v10 = (__int64)v7;
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
            }
          }
          if ( v3 >= 0 )
LABEL_17:
            AppendMenuW(*((HMENU *)this + 42), 0, v6, NewItem);
          if ( v7 )
          {
            v16 = 0LL;
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
          }
        }
        ++v6;
      }
      while ( v3 >= 0 );
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v3;
}
