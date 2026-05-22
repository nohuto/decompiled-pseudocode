/*
 * XREFs of ?FixViewIdForHitTestResult@MPCInputRouter@@AEAAXAEAUHitTestResult3D@@@Z @ 0x180117178
 * Callers:
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x180117F10 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001BA80 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001EA2C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 */

void __fastcall MPCInputRouter::FixViewIdForHitTestResult(MPCInputRouter *this, struct HitTestResult3D *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  int ViewIdFromWindowId; // eax
  LPARAM lParam; // [rsp+30h] [rbp+8h] BYREF

  lParam = (LPARAM)this;
  v2 = *((unsigned int *)a2 + 94);
  if ( !(_DWORD)v2 || v2 == *((_QWORD *)a2 + 5) )
  {
    v4 = *((_QWORD *)a2 + 5);
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v4);
    *((_DWORD *)a2 + 94) = ViewIdFromWindowId;
    if ( !ViewIdFromWindowId )
    {
      LODWORD(lParam) = 0;
      EnumChildWindows(
        (HWND)*((int *)a2 + 10),
        (WNDENUMPROC)lambda_98d8c15e91123ccd84ca1af9146cf167_::_lambda_invoker_cdecl_,
        (LPARAM)&lParam);
      *((_DWORD *)a2 + 94) = lParam;
    }
  }
}
