/*
 * XREFs of ?QueryInterface@CTableTransferEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F3540
 * Callers:
 *     ?QueryInterface@CTableTransferEffect@DirectComposition@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8E90 (-QueryInterface@CTableTransferEffect@DirectComposition@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueryInterface@CFilterEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8130 (-QueryInterface@CFilterEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CTableTransferEffect::QueryInterface(
        DirectComposition::CTableTransferEffect *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9b7e82e2_69c5_4eb4_a5f5_a7033f5132cd.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9b7e82e2_69c5_4eb4_a5f5_a7033f5132cd.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9b7e82e2_69c5_4eb4_a5f5_a7033f5132cd.Data4;
  if ( !v5 )
    goto LABEL_9;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_30c421d5_8cb2_4e9f_b133_37be270d4ac2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_30c421d5_8cb2_4e9f_b133_37be270d4ac2.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_30c421d5_8cb2_4e9f_b133_37be270d4ac2.Data4;
  if ( v6 )
  {
    return (unsigned int)DirectComposition::CFilterEffect::QueryInterface(
                           (DirectComposition::CTableTransferEffect *)((char *)this + 24),
                           a2,
                           a3);
  }
  else
  {
LABEL_9:
    *a3 = this;
    (*(void (__fastcall **)(DirectComposition::CTableTransferEffect *))(*(_QWORD *)this + 8LL))(this);
  }
  return v3;
}
