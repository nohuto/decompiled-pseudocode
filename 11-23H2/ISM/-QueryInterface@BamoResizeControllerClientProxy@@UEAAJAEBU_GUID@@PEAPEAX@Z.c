/*
 * XREFs of ?QueryInterface@BamoResizeControllerClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18012F310
 * Callers:
 *     ?QueryInterface@BamoResizeControllerClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180067770 (-QueryInterface@BamoResizeControllerClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoResizeControllerClientProxy::QueryInterface(
        BamoResizeControllerClientProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rax
  void *v6; // rdx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  v4 = 0;
  if ( !v3 )
    goto LABEL_8;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_617b5d65_289b_4c69_246f_c27f8ae6d5de.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_617b5d65_289b_4c69_246f_c27f8ae6d5de.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_617b5d65_289b_4c69_246f_c27f8ae6d5de.Data4;
  if ( v5 )
  {
    *a3 = 0LL;
  }
  else
  {
LABEL_8:
    v6 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    *a3 = v6;
    if ( v6 )
    {
      (**(void (__fastcall ***)(BamoResizeControllerClientProxy *))this)(this);
      return v4;
    }
  }
  return (unsigned int)-2147467262;
}
