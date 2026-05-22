/*
 * XREFs of ?QueryInterface@MPCTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F3C60
 * Callers:
 *     ?QueryInterface@MPCTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050040 (-QueryInterface@MPCTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCFocusTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2E00 (-QueryInterface@MPCFocusTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueryInterface@RefCountedObject@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007FC80 (-QueryInterface@RefCountedObject@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall MPCTarget::QueryInterface(MPCTarget *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  __int64 v6; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4;
  if ( v4 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5.Data4;
    if ( v6 )
      return RefCountedObject::QueryInterface((MPCTarget *)((char *)this + 8), a2, a3);
  }
  (*(void (__fastcall **)(MPCTarget *))(*(_QWORD *)this + 8LL))(this);
  *a3 = this;
  return 0LL;
}
