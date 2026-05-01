/*
 * XREFs of ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18010FDA8
 * Callers:
 *     _anonymous_namespace_::GetDefaultVirtualDesktopName @ 0x1800353F4 (_anonymous_namespace_--GetDefaultVirtualDesktopName.c)
 *     ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ @ 0x18010F3E0 (-RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ.c)
 *     ?_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z @ 0x1804A9AF4 (-_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z.c)
 *     ?UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z @ 0x18052B5A0 (-UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z.c)
 *     ?UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@_K@Z @ 0x18052B720 (-UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@_K@Z.c)
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x18053BAF0 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x18008D040 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18008D0C0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18008D220 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z @ 0x18015C9D8 (-FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
        __int64 a1,
        HINSTANCE a2,
        unsigned int a3,
        ...)
{
  const unsigned __int16 *v4; // r14
  int v5; // ebx
  int v6; // eax
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int16 *v9; // rdi
  unsigned __int64 v11; // rax
  unsigned __int16 v12[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 *v13; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v14[5]; // [rsp+40h] [rbp-28h] BYREF
  va_list va; // [rsp+B8h] [rbp+50h] BYREF

  va_start(va, a3);
  v4 = 0LL;
  memset(v14, 0, 24);
  v5 = -2147467259;
  if ( Windows::Internal::ResourceString::FindAndSize(a2, a3, a3, (const unsigned __int16 **)&v13, v12) )
  {
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)v14,
           (__int64)v13,
           v12[0]);
    v4 = (const unsigned __int16 *)v14[0];
    v5 = v6;
  }
  if ( v5 >= 0 )
  {
    v7 = 32LL;
    while ( 1 )
    {
      v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
             (LPVOID *)a1,
             v7);
      if ( v5 < 0 )
        break;
      v8 = *(_QWORD *)(a1 + 16);
      v9 = *(unsigned __int16 **)a1;
      _o__set_errno(0LL);
      v5 = StringCchVPrintfW(v9, v8, v4, va);
      if ( v5 != -2147024774 )
        goto LABEL_7;
      _o__get_errno(v12);
      if ( *(_DWORD *)v12 == 22 )
      {
        v5 = -2147024809;
LABEL_7:
        if ( v5 >= 0 )
        {
          *(_QWORD *)(a1 + 8) = -1LL;
          goto LABEL_9;
        }
        break;
      }
      v11 = *(_QWORD *)(a1 + 16);
      v7 = v11 + 32;
      if ( v11 + 32 < v11 )
      {
        v5 = -2147024362;
        break;
      }
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
  }
LABEL_9:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v14);
  return (unsigned int)v5;
}
