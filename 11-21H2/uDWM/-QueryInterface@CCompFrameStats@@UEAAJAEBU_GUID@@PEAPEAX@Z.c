/*
 * XREFs of ?QueryInterface@CCompFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010AB90
 * Callers:
 *     ?QueryInterface@CAnimationFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010A950 (-QueryInterface@CAnimationFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompFrameStats::QueryInterface(CCompFrameStats *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4bd7ff08_2526_4385_835a_759e4f0fa8d3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4bd7ff08_2526_4385_835a_759e4f0fa8d3.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4bd7ff08_2526_4385_835a_759e4f0fa8d3.Data4;
    if ( !v4 )
      goto LABEL_8;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      *a3 = 0LL;
      return 2147500034LL;
    }
    else
    {
LABEL_8:
      *a3 = this;
      (*(void (__fastcall **)(CCompFrameStats *))(*(_QWORD *)this + 8LL))(this);
      return 0LL;
    }
  }
  return result;
}
