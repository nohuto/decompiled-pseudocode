/*
 * XREFs of ?QueryInterface@BamoDropTargetClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021A60
 * Callers:
 *     ?QueryInterface@BamoDropTargetClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180067510 (-QueryInterface@BamoDropTargetClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoDropTargetClientProxy::QueryInterface(
        BamoDropTargetClientProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2997278b_3edd_8da0_6daf_809840cbb7ae.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2997278b_3edd_8da0_6daf_809840cbb7ae.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2997278b_3edd_8da0_6daf_809840cbb7ae.Data4;
    if ( v4 )
      goto LABEL_7;
  }
  if ( !this )
  {
LABEL_7:
    *a3 = 0LL;
    return 2147500034LL;
  }
  *a3 = (char *)this + 8;
  if ( this == (BamoDropTargetClientProxy *)-8LL )
    return 2147500034LL;
  (**(void (__fastcall ***)(BamoDropTargetClientProxy *))this)(this);
  return 0LL;
}
