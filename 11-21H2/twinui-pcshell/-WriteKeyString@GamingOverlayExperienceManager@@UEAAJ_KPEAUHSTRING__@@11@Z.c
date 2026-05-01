/*
 * XREFs of ?WriteKeyString@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@11@Z @ 0x18033B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WriteKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEBEKK@Z @ 0x18033B774 (-WriteKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEBEKK@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::WriteKeyString(
        GamingOverlayExperienceManager *this,
        HKEY a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string)
{
  GamingOverlayExperienceManager *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  BYTE v12[24]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  UINT32 v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+64h] [rbp+Ch]

  v15 = HIDWORD(this);
  v14 = 0;
  *(_QWORD *)v12 = WindowsGetStringRawBuffer(string, &v14);
  v9 = GamingOverlayExperienceManager::WriteKey(v8, a2, a3, a4, v12, 2 * v14, 1u);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8D6,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
