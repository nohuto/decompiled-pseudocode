/*
 * XREFs of ?QueryInterface@BamoSystemButtonEventControllerProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180020DD0
 * Callers:
 *     ?QueryInterface@BamoSystemButtonEventControllerProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180068330 (-QueryInterface@BamoSystemButtonEventControllerProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoSystemButtonEventControllerProxy::QueryInterface(
        BamoSystemButtonEventControllerProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  char *v6; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v3 )
    goto LABEL_10;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3abcaa47_97ef_219f_1cd4_34fcffef35a7.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3abcaa47_97ef_219f_1cd4_34fcffef35a7.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3abcaa47_97ef_219f_1cd4_34fcffef35a7.Data4;
  if ( v4 )
  {
    *a3 = 0LL;
  }
  else
  {
LABEL_10:
    v6 = (char *)this + 8;
    if ( !this )
      v6 = 0LL;
    *a3 = v6;
    if ( v6 )
    {
      (**(void (__fastcall ***)(BamoSystemButtonEventControllerProxy *))this)(this);
      return 0LL;
    }
  }
  return 2147500034LL;
}
