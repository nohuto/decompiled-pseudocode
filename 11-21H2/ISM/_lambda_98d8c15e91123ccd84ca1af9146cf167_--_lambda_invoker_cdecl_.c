/*
 * XREFs of _lambda_98d8c15e91123ccd84ca1af9146cf167_::_lambda_invoker_cdecl_ @ 0x1800EE820
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001ADC0 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001AF74 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 */

_BOOL8 __fastcall lambda_98d8c15e91123ccd84ca1af9146cf167_::_lambda_invoker_cdecl_(HWND a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  int ViewIdFromWindowId; // eax

  v3 = (unsigned int)a1;
  ViewHierarchy = ISMStatics::GetViewHierarchy();
  ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v3);
  *a2 = ViewIdFromWindowId;
  return ViewIdFromWindowId == 0;
}
