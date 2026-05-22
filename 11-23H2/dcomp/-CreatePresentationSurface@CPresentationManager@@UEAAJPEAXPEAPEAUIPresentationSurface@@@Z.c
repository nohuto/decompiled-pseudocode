/*
 * XREFs of ?CreatePresentationSurface@CPresentationManager@@UEAAJPEAXPEAPEAUIPresentationSurface@@@Z @ 0x1801AD590
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18000BE3C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CPresentationSurface@@SAJPEAVCPresentationManager@@_KPEAXPEAPEAV1@@Z @ 0x1801AFE0C (-Create@CPresentationSurface@@SAJPEAVCPresentationManager@@_KPEAXPEAPEAV1@@Z.c)
 */

__int64 __fastcall CPresentationManager::CreatePresentationSurface(
        CPresentationManager *this,
        void *a2,
        struct IPresentationSurface **a3)
{
  unsigned __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  struct CPresentationSurface *v9; // rcx
  struct CPresentationSurface *v11; // [rsp+30h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp+20h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v6 = ++*((_QWORD *)this + 18);
  v11 = 0LL;
  v7 = CPresentationSurface::Create(this, v6, a2, &v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    DoStackCaptureDirect(v7, 0x77u);
  }
  else
  {
    v9 = v11;
    v11 = 0LL;
    *a3 = v9;
  }
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v11);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
