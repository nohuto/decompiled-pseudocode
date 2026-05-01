/*
 * XREFs of ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180495828
 * Callers:
 *     ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x1804948B0 (-CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1802D2954 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1802EB77A (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@PEBGPEBG@std@@@1@AEBV?$allocator@U?$pair@PEBGPEBG@std@@@1@@Z @ 0x1804946C0 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@V-$initialize.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall PWSLayoutPolicyManager::ValidateDefaultLayoutXML(
        PWSLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  __int64 v3; // r8
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v9[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-70h]
  __int64 v11; // [rsp+30h] [rbp-68h]
  int v12[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v13; // [rsp+48h] [rbp-50h]
  __int64 v14; // [rsp+50h] [rbp-48h]
  _QWORD v15[6]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v16; // [rsp+88h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v15[0] = L"http://schemas.microsoft.com/Start/2014/StartLayout";
  v15[1] = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::StartLayoutSchema;
  v15[2] = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
  v15[3] = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::TaskbarLayoutSchema;
  v15[4] = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
  v15[5] = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::FullDefaultLayoutSchema;
  *(_QWORD *)v9 = v15;
  v10 = &v16;
  std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
    v12,
    (__int64)v9);
  v3 = v14;
  v14 = 0LL;
  v4 = v13;
  v13 = 0LL;
  v5 = *(_QWORD *)v12;
  *(_QWORD *)v12 = 0LL;
  *(_QWORD *)v9 = v5;
  v10 = v4;
  v11 = v3;
  v6 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile((__int64)v9, a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    std::vector<Geometry::CRect>::_Tidy((__int64)v12);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x123,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v6);
    std::vector<Geometry::CRect>::_Tidy((__int64)v12);
    return v7;
  }
}
