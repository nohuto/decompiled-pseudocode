/*
 * XREFs of ??1CPresentationResource@@IEAA@XZ @ 0x1801AFC18
 * Callers:
 *     ??1CPresentationSurface@@MEAA@XZ @ 0x1801AFCA4 (--1CPresentationSurface@@MEAA@XZ.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18000BE3C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 */

void __fastcall CPresentationResource::~CPresentationResource(CPresentationResource *this)
{
  __int64 v1; // rbx
  CPresentationResource **i; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 1);
  *(_QWORD *)this = &CPresentationResource::`vftable';
  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(v1 + 24));
  for ( i = *(CPresentationResource ***)(v1 + 64); i != *(CPresentationResource ***)(v1 + 72); ++i )
  {
    if ( *i == this )
    {
      memmove_0(i, i + 1, *(_QWORD *)(v1 + 72) - (_QWORD)(i + 1));
      *(_QWORD *)(v1 + 72) -= 8LL;
      break;
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 1);
}
