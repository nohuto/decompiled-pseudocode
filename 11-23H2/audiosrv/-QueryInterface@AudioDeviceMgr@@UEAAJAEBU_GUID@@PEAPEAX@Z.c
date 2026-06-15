/*
 * XREFs of ?QueryInterface@AudioDeviceMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180059240
 * Callers:
 *     ?QueryInterface@AudioDeviceMgr@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077DB0 (-QueryInterface@AudioDeviceMgr@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AudioDeviceMgr@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077DD0 (-QueryInterface@AudioDeviceMgr@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E5110 (-QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AudioDeviceMgr::QueryInterface(AudioDeviceMgr *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v6; // rax

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_495a7fca_552f_402a_8e78_78bf3ea87971.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_495a7fca_552f_402a_8e78_78bf3ea87971.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_495a7fca_552f_402a_8e78_78bf3ea87971.Data4;
  if ( !v4 )
  {
    *a3 = this;
    (*(void (__fastcall **)(AudioDeviceMgr *))(*(_QWORD *)this + 8LL))(this);
    return v3;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6e074d6a_f67a_46cf_9b4c_3f638638afb2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6e074d6a_f67a_46cf_9b4c_3f638638afb2.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6e074d6a_f67a_46cf_9b4c_3f638638afb2.Data4;
  if ( !v6 )
  {
    *a3 = (void *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    (*(void (__fastcall **)(AudioDeviceMgr *))(*(_QWORD *)this + 8LL))(this);
    return v3;
  }
  return CUnknown::QueryInterface((AudioDeviceMgr *)((char *)this + 16), a2, a3);
}
