/*
 * XREFs of ?_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z @ 0x18075D484
 * Callers:
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18075A570 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA?AV?$unique_ptr@VCBackupLocationManager@@U?$default_delete@VCBackupLocationManager@@@wistd@@@wistd@@XZ @ 0x180751544 (--$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA-AV-$unique_ptr@VCBackupLocationManag.c)
 *     ??_GCBackupLocationManager@@QEAAPEAXI@Z @ 0x180751ED8 (--_GCBackupLocationManager@@QEAAPEAXI@Z.c)
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180753208 (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z @ 0x180756F04 (-ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarWin32RestorePlaceholders@@@details@wil@@QEAA_NXZ @ 0x18075EEDC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarWin32RestorePlaceholders@@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPinList::_CreateTombstone(
        CPinList *this,
        struct CPinnedList *a2,
        const unsigned __int16 *a3,
        LPCITEMIDLIST *a4)
{
  char v7; // r14
  LPWSTR *v8; // rbx
  int v9; // edi
  __int64 v10; // r9
  __int64 v11; // rdx
  HRESULT v12; // eax
  char v13; // di
  void *v14; // rcx
  void *v15; // rax
  void *v16; // rcx
  __int64 v17; // rdx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rax
  void *v21; // rcx
  const ITEMIDLIST *v22; // rax
  void *v23; // rcx
  void *v24; // rcx
  LPVOID *p_pv; // [rsp+20h] [rbp-E0h]
  struct _ITEMIDLIST *v27; // [rsp+28h] [rbp-D8h] BYREF
  char v28; // [rsp+30h] [rbp-D0h]
  int v29; // [rsp+38h] [rbp-C8h]
  LPVOID pv; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v31; // [rsp+48h] [rbp-B8h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v33[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _FILETIME v34; // [rsp+60h] [rbp-A0h]
  LPWSTR *ppwsz; // [rsp+68h] [rbp-98h] BYREF
  WCHAR psz[264]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  v7 = 0;
  v29 = 0;
  wil::make_unique_nothrow<CBackupLocationManager,>(&ppwsz);
  v8 = ppwsz;
  if ( !ppwsz )
  {
    v9 = -2147024882;
    v10 = 2147942414LL;
    v11 = 3018LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)v10);
    goto LABEL_44;
  }
  v12 = (*(__int64 (__fastcall **)(struct CPinnedList *, WCHAR *, __int64))(*(_QWORD *)a2 + 104LL))(a2, psz, 260LL);
  v9 = v12;
  if ( v12 < 0 )
  {
    v11 = 3021LL;
LABEL_7:
    v10 = (unsigned int)v12;
    goto LABEL_8;
  }
  v12 = SHStrDupW(psz, v8);
  v9 = v12;
  if ( v12 < 0 )
  {
    v11 = 3022LL;
    goto LABEL_7;
  }
  pv = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarWin32RestorePlaceholders>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TaskbarWin32RestorePlaceholders>::GetImpl'::`2'::impl) )
  {
    if ( !*a3
      || (p_pv = &pv,
          v27 = 0LL,
          v28 = 1,
          v7 = 1,
          v29 = 1,
          v13 = 0,
          (int)CBackupLocationManager::CreateTombstoneLnk((CBackupLocationManager *)v8, *a4, &v27) < 0) )
    {
      v13 = 1;
    }
    if ( (v7 & 1) != 0 )
    {
      if ( v28 )
      {
        v14 = *p_pv;
        *p_pv = v27;
        if ( v14 )
          CoTaskMemFree(v14);
      }
    }
    if ( v13 )
    {
      v15 = ILClone(*a4);
      v16 = pv;
      pv = v15;
      if ( v16 )
      {
        CoTaskMemFree(v16);
        v15 = pv;
      }
      if ( !v15 )
      {
        v17 = 3031LL;
LABEL_30:
        v9 = -2147024882;
        goto LABEL_31;
      }
    }
    goto LABEL_32;
  }
  if ( !*a3 )
  {
    pv = ILClone(*a4);
    if ( !pv )
    {
      v17 = 3043LL;
      goto LABEL_30;
    }
LABEL_32:
    SystemTimeAsFileTime = 0LL;
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v33[0] = 16;
    v33[1] = -1091633108;
    v34 = SystemTimeAsFileTime;
    v31 = 0LL;
    v27 = 0LL;
    v28 = 1;
    v9 = ILCloneWithHiddenID((const struct _ITEMIDLIST *)pv, (const struct _HIDDENITEMID *)v33, &v27);
    if ( v28 )
    {
      v19 = v31;
      v31 = v27;
      if ( v19 )
        CoTaskMemFree(v19);
    }
    if ( v9 >= 0 )
    {
      v20 = v31;
      v31 = 0LL;
      v21 = pv;
      pv = v20;
      if ( v21 )
        CoTaskMemFree(v21);
      ILFree((LPITEMIDLIST)*a4);
      v22 = (const ITEMIDLIST *)pv;
      pv = 0LL;
      *a4 = v22;
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBEC,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v9);
    }
    v23 = v31;
    v31 = 0LL;
    if ( v23 )
      CoTaskMemFree(v23);
    goto LABEL_42;
  }
  v27 = 0LL;
  v28 = 1;
  v9 = CBackupLocationManager::CreateTombstoneLnk((CBackupLocationManager *)v8, *a4, &v27);
  if ( v28 )
  {
    v18 = pv;
    pv = v27;
    if ( v18 )
      CoTaskMemFree(v18);
  }
  if ( v9 >= 0 )
    goto LABEL_32;
  v17 = 3038LL;
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
    (const char *)(unsigned int)v9);
LABEL_42:
  v24 = pv;
  pv = 0LL;
  if ( v24 )
    CoTaskMemFree(v24);
LABEL_44:
  if ( v8 )
    CBackupLocationManager::`scalar deleting destructor'((LPVOID *)v8);
  return (unsigned int)v9;
}
