/*
 * XREFs of ?CancelPresentsFrom@CPresentationManager@@UEAAJ_K@Z @ 0x1801AD2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18000BE3C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall CPresentationManager::CancelPresentsFrom(CPresentationManager *this, __int64 a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v3 = NtFlipObjectPresentCancel(*((_QWORD *)this + 13), &v9);
  v4 = HRESULTFromNTSTATUS(v3);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 413;
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 19) + 32LL))(
           *((_QWORD *)this + 19),
           *((_QWORD *)this + 16),
           *((_QWORD *)this + 17),
           v9);
    v5 = v4;
    if ( v4 >= 0 )
      goto LABEL_6;
    v6 = 418;
  }
  DoStackCaptureDirect(v4, v6);
LABEL_6:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
