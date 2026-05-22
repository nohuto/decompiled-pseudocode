/*
 * XREFs of ?QueryInterface@MPCInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180012010
 * Callers:
 *     ?QueryInterface@MPCInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FC00 (-QueryInterface@MPCInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FC20 (-QueryInterface@MPCInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FC40 (-QueryInterface@MPCInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FC60 (-QueryInterface@MPCInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FC80 (-QueryInterface@MPCInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FCA0 (-QueryInterface@MPCInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WDAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FCC0 (-QueryInterface@MPCInputRouter@@WDAA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WDAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FCE0 (-QueryInterface@MPCInputRouter@@WDAI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FD00 (-QueryInterface@MPCInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FD20 (-QueryInterface@MPCInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FD40 (-QueryInterface@MPCInputRouter@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QueryInterface@DWMInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180012080 (-QueryInterface@DWMInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputRouter::QueryInterface(MPCInputRouter *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1c93908d_d1c5_4ac5_9269_0398fe8ab53e.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1c93908d_d1c5_4ac5_9269_0398fe8ab53e.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1c93908d_d1c5_4ac5_9269_0398fe8ab53e.Data4;
  if ( v6 )
  {
    return (unsigned int)DWMInputRouter::QueryInterface(this, a2, a3);
  }
  else
  {
    (*(void (__fastcall **)(MPCInputRouter *))(*(_QWORD *)this + 8LL))(this);
    *a3 = (char *)this + 768;
  }
  return v3;
}
