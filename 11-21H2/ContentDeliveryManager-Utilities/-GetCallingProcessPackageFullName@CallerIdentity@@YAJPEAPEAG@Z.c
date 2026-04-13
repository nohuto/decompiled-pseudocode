/*
 * XREFs of ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x18008468C
 * Callers:
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x18003A55C (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 * Callees:
 *     ?GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800846F8 (-GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180084A3C (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessPackageFullName(CallerIdentity *this, unsigned __int16 **a2)
{
  int CallingProcessHandle; // ebx
  unsigned __int16 **v4; // r8
  char *v5; // rcx
  HANDLE hObject; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, &hObject);
  if ( CallingProcessHandle >= 0 )
    CallingProcessHandle = CallerIdentity::GetPackageFullNameFromProcess(hObject, this, v4);
  v5 = (char *)hObject;
  hObject = 0LL;
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  return (unsigned int)CallingProcessHandle;
}
