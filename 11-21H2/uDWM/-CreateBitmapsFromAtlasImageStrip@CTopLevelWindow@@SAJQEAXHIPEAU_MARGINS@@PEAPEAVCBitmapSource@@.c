/*
 * XREFs of ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180050FB0
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x18004F984 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18004FBF0 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x1800509DC (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x1800511C0 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
        void *const a1,
        int iPartId,
        unsigned int a3,
        struct _MARGINS *a4,
        struct CBitmapSource **a5)
{
  HRESULT ThemeRect; // eax
  int v11; // r15d
  unsigned int v12; // ebx
  unsigned int v13; // eax
  LONG top; // r8d
  unsigned int v15; // esi
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rbx
  CBaseObject *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  int v24; // r9d
  unsigned int pRect; // [rsp+20h] [rbp-51h]
  int v26; // [rsp+40h] [rbp-31h]
  struct CBitmapSource *AtlasImageFromTheme; // [rsp+48h] [rbp-29h]
  struct tagRECT rc; // [rsp+58h] [rbp-19h] BYREF
  struct tagRECT v29; // [rsp+68h] [rbp-9h] BYREF

  ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &v29);
  v11 = 0;
  v12 = ThemeRect;
  if ( ThemeRect < 0 )
  {
    pRect = 885;
    goto LABEL_23;
  }
  if ( a4 )
  {
    ThemeRect = GetThemeMargins(a1, 0LL, iPartId, 0, 3601, 0LL, a4);
    v12 = ThemeRect;
    if ( ThemeRect < 0 )
    {
      pRect = 889;
LABEL_23:
      v24 = ThemeRect;
      goto LABEL_25;
    }
  }
  v13 = 0;
  top = v29.top;
  v15 = 0;
  if ( v29.bottom - v29.top >= 0 )
    v13 = v29.bottom - v29.top;
  v26 = v13 / a3;
  v16 = v13 / a3;
  while ( 1 )
  {
    rc.right = v29.right;
    rc.top = v11 + top;
    rc.left = v29.left;
    rc.bottom = v16 + v11 + top;
    InflateRect(&rc, -1, -1);
    AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(a1);
    v17 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            104LL);
    v18 = v17;
    if ( !v17 )
      break;
    *(_DWORD *)(v17 + 8) = 1;
    *(_QWORD *)v17 = &CBitmapSource::`vftable';
    *(_QWORD *)(v17 + 16) = 0LL;
    *(_QWORD *)(v17 + 96) = 0LL;
    *(_DWORD *)(v17 + 80) = 0x80000000;
    *(_DWORD *)(v17 + 88) = 0x80000000;
    *(_DWORD *)(v17 + 84) = 0x80000000;
    *(_DWORD *)(v17 + 92) = 0x80000000;
    v19 = *(CBaseObject **)(v17 + 16);
    v20 = *((_QWORD *)AtlasImageFromTheme + 2);
    *(_QWORD *)(v18 + 16) = v20;
    if ( v20 )
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    if ( v19 )
      CBaseObject::Release(v19);
    v21 = 0;
    *(struct tagRECT *)(v18 + 80) = rc;
    if ( *(_DWORD *)(v18 + 88) - *(_DWORD *)(v18 + 80) >= 0 )
      v21 = *(_DWORD *)(v18 + 88) - *(_DWORD *)(v18 + 80);
    *(_DWORD *)(v18 + 24) = v21;
    v22 = 0;
    if ( *(_DWORD *)(v18 + 92) - *(_DWORD *)(v18 + 84) >= 0 )
      v22 = *(_DWORD *)(v18 + 92) - *(_DWORD *)(v18 + 84);
    *(_DWORD *)(v18 + 28) = v22;
    if ( a4 )
      *(struct _MARGINS *)(v18 + 32) = *a4;
    *a5 = (struct CBitmapSource *)v18;
    v16 = v26;
    v12 = 0;
    v11 += v26;
    ++v15;
    ++a5;
    if ( v15 >= a3 )
      return v12;
    top = v29.top;
  }
  v12 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xABu);
  v24 = -2147024882;
  pRect = 912;
LABEL_25:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A4A8, 1LL, v24, pRect);
  return v12;
}
