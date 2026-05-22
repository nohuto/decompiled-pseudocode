/*
 * XREFs of ?EnablePresentStatisticsKind@CPresentationManager@@UEAAJW4PresentStatisticsKind@@E@Z @ 0x1801AD640
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18000BE3C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall CPresentationManager::EnablePresentStatisticsKind(__int64 a1, int a2, unsigned __int8 a3)
{
  unsigned int v4; // esi
  int v6; // ebx
  int v7; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // edx
  int v10; // ecx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  v4 = a3;
  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
      {
        v8 = -2147024809;
        v9 = 489;
        v10 = -2147024809;
        goto LABEL_10;
      }
      v11 = 3LL;
    }
    else
    {
      v11 = 2LL;
    }
  }
  else
  {
    v11 = 1LL;
  }
  v12 = NtFlipObjectEnablePresentStatisticsType(*(_QWORD *)(a1 + 104), v11, v4);
  v13 = HRESULTFromNTSTATUS(v12);
  v8 = v13;
  if ( v13 >= 0 )
    goto LABEL_11;
  v9 = 495;
  v10 = v13;
LABEL_10:
  DoStackCaptureDirect(v10, v9);
LABEL_11:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
