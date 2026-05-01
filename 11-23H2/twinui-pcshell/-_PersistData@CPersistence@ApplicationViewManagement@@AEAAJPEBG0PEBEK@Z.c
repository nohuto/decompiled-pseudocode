/*
 * XREFs of ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x1800E0B68
 * Callers:
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_712fa0ba2d8bf27a4057fb1c931fbf13___ @ 0x18003EF40 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_712fa0ba2d8bf27a4057f.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_d38650e98aaa1c01633db47e65347927___ @ 0x1800E00C4 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_d38650e98aaa1c01633db.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___ @ 0x1803CD2DC (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_807778e6719fb664354e7.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall ApplicationViewManagement::CPersistence::_PersistData(
        HKEY *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int8 *a4,
        DWORD cbData)
{
  HKEY v5; // rcx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  HKEY v10; // rcx
  __int64 v12; // rdx
  int dwOptions; // [rsp+20h] [rbp-38h]
  unsigned int dwOptionsa; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  v5 = *this;
  if ( !v5 )
  {
    v9 = -2144927145;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
      (const char *)0x80270257LL,
      dwOptions);
    return v9;
  }
  hKey = 0LL;
  v8 = RegCreateKeyExW(v5, a2, 0, 0LL, 1u, 0x20006u, 0LL, &hKey, 0LL);
  if ( v8 )
  {
    v12 = 96LL;
  }
  else
  {
    v8 = RegSetValueExW(hKey, a3, 0, 3u, a4, cbData);
    if ( !v8 )
    {
      v9 = 0;
      goto LABEL_5;
    }
    v12 = 104LL;
  }
  v9 = wil::details::in1diag3::Return_Win32(
         retaddr,
         (void *)v12,
         (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
         (const char *)v8,
         dwOptionsa);
LABEL_5:
  v10 = hKey;
  hKey = 0LL;
  if ( v10 )
    RegCloseKey(v10);
  return v9;
}
