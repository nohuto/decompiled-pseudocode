/*
 * XREFs of ??1ExternalResourceSet@ExecutionModel@@EEAA@XZ @ 0x180041AD8
 * Callers:
 *     ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x180041AA0 (--_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004F874 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::~ExternalResourceSet(ExecutionModel::ExternalResourceSet *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  __int64 **v4; // rdi
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rax

  *(_QWORD *)this = &ExecutionModel::ExternalResourceSet::`vftable';
  v2 = (char *)*((_QWORD *)this + 167);
  if ( v2 )
    RmpObjectRelease(v2);
  v3 = *((_QWORD *)this + 168);
  if ( v3 )
    TpReleaseTimer(v3);
  v4 = (__int64 **)((char *)this + 1312);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == (__int64 *)v4 )
      break;
    v6 = (__int64 *)v5[1];
    v7 = *v5;
    *v6 = *v5;
    *(_QWORD *)(v7 + 8) = v6;
    operator delete(v5);
  }
  *((_QWORD *)this + 166) = 0LL;
  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((char *)this + 40);
}
