/*
 * XREFs of ?IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z @ 0x180060040
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18005E8FC (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 */

__int64 __fastcall ContentManagement::ContentManagementService::IsLockScreenEnabled(
        ContentManagement::ContentManagementService *this,
        unsigned __int8 *a2,
        bool *a3,
        bool *a4)
{
  int LockScreenEnabled; // eax
  unsigned int v7; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int16 v10; // [rsp+38h] [rbp+10h] BYREF
  bool v11; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  LOBYTE(v10) = 0;
  v11 = 0;
  LockScreenEnabled = CreativeFramework::LockScreenCreativeConfigHelpers::GetLockScreenEnabled(this, &v10, &v11, a4);
  v7 = LockScreenEnabled;
  if ( LockScreenEnabled >= 0 )
  {
    if ( a2 )
      *a2 = v10;
    if ( a3 )
      *a3 = v11;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x364,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)LockScreenEnabled);
    return v7;
  }
}
