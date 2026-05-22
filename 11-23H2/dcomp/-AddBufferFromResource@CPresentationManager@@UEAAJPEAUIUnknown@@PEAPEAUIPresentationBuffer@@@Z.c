/*
 * XREFs of ?AddBufferFromResource@CPresentationManager@@UEAAJPEAUIUnknown@@PEAPEAUIPresentationBuffer@@@Z @ 0x1801AD190
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18000BE3C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CPresentationBuffer@@SAJPEAVCPresentationManager@@PEAUIUnknown@@_KPEAPEAV1@@Z @ 0x1801AF19C (-Create@CPresentationBuffer@@SAJPEAVCPresentationManager@@PEAUIUnknown@@_KPEAPEAV1@@Z.c)
 */

__int64 __fastcall CPresentationManager::AddBufferFromResource(
        CPresentationManager *this,
        struct IUnknown *a2,
        struct IPresentationBuffer **a3)
{
  unsigned __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  struct CPresentationBuffer *v9; // rcx
  struct CPresentationBuffer *v11; // [rsp+30h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp+20h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v6 = ++*((_QWORD *)this + 18);
  v11 = 0LL;
  v7 = CPresentationBuffer::Create(this, a2, v6, &v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    DoStackCaptureDirect(v7, 0x66u);
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
