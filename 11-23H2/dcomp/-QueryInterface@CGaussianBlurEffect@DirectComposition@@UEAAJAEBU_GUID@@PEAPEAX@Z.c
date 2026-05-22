/*
 * XREFs of ?QueryInterface@CGaussianBlurEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2C70
 * Callers:
 *     ?QueryInterface@CGaussianBlurEffect@DirectComposition@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8DD0 (-QueryInterface@CGaussianBlurEffect@DirectComposition@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueryInterface@CFilterEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8130 (-QueryInterface@CFilterEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CGaussianBlurEffect::QueryInterface(
        DirectComposition::CGaussianBlurEffect *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_45d4d0b7_1bd4_454e_8894_2bfa68443033.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_45d4d0b7_1bd4_454e_8894_2bfa68443033.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_45d4d0b7_1bd4_454e_8894_2bfa68443033.Data4;
  if ( !v5 )
    goto LABEL_9;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_30c421d5_8cb2_4e9f_b133_37be270d4ac2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_30c421d5_8cb2_4e9f_b133_37be270d4ac2.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_30c421d5_8cb2_4e9f_b133_37be270d4ac2.Data4;
  if ( v6 )
  {
    return (unsigned int)DirectComposition::CFilterEffect::QueryInterface(
                           (DirectComposition::CGaussianBlurEffect *)((char *)this + 24),
                           a2,
                           a3);
  }
  else
  {
LABEL_9:
    *a3 = this;
    (*(void (__fastcall **)(DirectComposition::CGaussianBlurEffect *))(*(_QWORD *)this + 8LL))(this);
  }
  return v3;
}
