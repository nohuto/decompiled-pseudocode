/*
 * XREFs of ?QueryInterface@BamoDataProviderRegistrarProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037FE0
 * Callers:
 *     ?QueryInterface@BamoDataProviderRegistrarProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050080 (-QueryInterface@BamoDataProviderRegistrarProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoDataProviderRegistrarProxy::QueryInterface(
        BamoDataProviderRegistrarProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rax
  void *v7; // rdx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  v4 = 0;
  if ( !v3 )
    goto LABEL_10;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a9fa7235_98d0_fd42_aad0_f9b4ffe7b130.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a9fa7235_98d0_fd42_aad0_f9b4ffe7b130.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a9fa7235_98d0_fd42_aad0_f9b4ffe7b130.Data4;
  if ( v5 )
  {
    *a3 = 0LL;
  }
  else
  {
LABEL_10:
    v7 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    *a3 = v7;
    if ( v7 )
    {
      (**(void (__fastcall ***)(BamoDataProviderRegistrarProxy *))this)(this);
      return v4;
    }
  }
  return (unsigned int)-2147467262;
}
