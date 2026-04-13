/*
 * XREFs of ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x180079620
 * Callers:
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180037E94 (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 * Callees:
 *     ?GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180079738 (-GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180079A6C (-GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessPackageFullName(
        CallerIdentity *this,
        unsigned __int16 **a2,
        void **a3)
{
  int CallingProcessHandle; // ebx
  unsigned __int16 **v5; // r8
  char *v6; // rcx
  HANDLE hObject; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, (unsigned int)&hObject, a3);
  if ( CallingProcessHandle >= 0 )
    CallingProcessHandle = CallerIdentity::GetPackageFullNameFromProcess(hObject, this, v5);
  v6 = (char *)hObject;
  hObject = 0LL;
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  return (unsigned int)CallingProcessHandle;
}
