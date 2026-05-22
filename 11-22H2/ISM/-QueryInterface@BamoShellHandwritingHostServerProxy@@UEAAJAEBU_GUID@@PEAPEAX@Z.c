/*
 * XREFs of ?QueryInterface@BamoShellHandwritingHostServerProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006FBF0
 * Callers:
 *     ?QueryInterface@BamoShellHandwritingHostServerProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007B2D0 (-QueryInterface@BamoShellHandwritingHostServerProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoShellHandwritingHostServerProxy::QueryInterface(
        BamoShellHandwritingHostServerProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  void *v4; // rdx

  if ( (*(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
     || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4)
    && (*(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_9b72a2d4_b131_113f_fac4_b6cba99c4037.Data1
     || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_9b72a2d4_b131_113f_fac4_b6cba99c4037.Data4) )
  {
    *a3 = 0LL;
    return (unsigned int)-2147467262;
  }
  v3 = 0;
  v4 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  *a3 = v4;
  if ( !v4 )
    return (unsigned int)-2147467262;
  (**(void (__fastcall ***)(BamoShellHandwritingHostServerProxy *))this)(this);
  return v3;
}
