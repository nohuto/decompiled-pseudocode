/*
 * XREFs of ?AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800EA06C
 * Callers:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x1800EF85C (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PE.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 */

char __fastcall CTransitionVisualController::AllowSnapshotForSWR(HWND hWnd)
{
  char v2; // di
  int ClassNameW; // eax
  int v4; // ecx
  WCHAR *v5; // rax
  signed __int64 v6; // r8
  WCHAR v7; // dx
  WCHAR ClassName[264]; // [rsp+20h] [rbp-228h] BYREF

  v2 = 1;
  memset_0(ClassName, 0, 0x208uLL);
  ClassNameW = GetClassNameW(hWnd, ClassName, 260);
  v4 = 0;
  if ( ClassNameW )
  {
    v5 = ClassName;
    v6 = (char *)L"ImmersiveAppTitleBar" - (char *)ClassName;
    while ( 1 )
    {
      v7 = *v5;
      if ( *v5 != *(WCHAR *)((char *)v5 + v6) )
        break;
      ++v5;
      if ( !v7 )
        return v4 != 0;
    }
    v4 = v7 < *(WCHAR *)((char *)v5 + v6) ? -1 : 1;
    return v4 != 0;
  }
  return v2;
}
