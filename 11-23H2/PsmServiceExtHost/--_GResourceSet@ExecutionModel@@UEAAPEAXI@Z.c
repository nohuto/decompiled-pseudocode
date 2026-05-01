/*
 * XREFs of ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180014B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ @ 0x180013CF4 (--1-$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032500 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180048F50 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004AA1C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

ExecutionModel::ResourceSet *__fastcall ExecutionModel::ResourceSet::`scalar deleting destructor'(
        ExecutionModel::ResourceSet *this,
        char a2)
{
  struct _RM_OBJECT_HEADER *v4; // rcx
  __int64 v5; // rcx
  __int64 **v6; // rdi
  __int64 *v7; // rsi
  __int64 *v9; // rdx
  __int64 v10; // rax

  *(_QWORD *)this = &ExecutionModel::ResourceSet::`vftable';
  v4 = (struct _RM_OBJECT_HEADER *)*((_QWORD *)this + 165);
  if ( v4 )
    RmpObjectRelease(v4);
  v5 = *((_QWORD *)this + 214);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  v6 = (__int64 **)((char *)this + 40);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (__int64 *)v6 )
      break;
    v9 = (__int64 *)v7[1];
    v10 = *v7;
    *v9 = *v7;
    *(_QWORD *)(v10 + 8) = v9;
    ATL::CComPtrBase<IModernResourceEnforcerCallback>::~CComPtrBase<IModernResourceEnforcerCallback>(v7 + 2);
    operator delete(v7);
  }
  *((_QWORD *)this + 7) = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
