/*
 * XREFs of ?QueryInterface@CVirtualSurface@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800886A0
 * Callers:
 *     ?QueryInterface@CVirtualSurface@DirectComposition@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A9290 (-QueryInterface@CVirtualSurface@DirectComposition@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CVirtualSurface@DirectComposition@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A92B0 (-QueryInterface@CVirtualSurface@DirectComposition@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CVirtualSurface@DirectComposition@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A92D0 (-QueryInterface@CVirtualSurface@DirectComposition@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::QueryInterface(
        DirectComposition::CVirtualSurface *this,
        const struct _GUID *a2,
        void **a3)
{
  int v5; // edi
  __int64 v6; // rax

  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v5 = (*(__int64 (__fastcall **)(DirectComposition::CVirtualSurface *))(*(_QWORD *)this + 96LL))(this);
      if ( v5 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v5;
      }
    }
    else
    {
      *a3 = this;
      v5 = 0;
    }
    CMILRefCountImpl::AddReference((DirectComposition::CVirtualSurface *)((char *)this + 8));
  }
  return (unsigned int)v5;
}
