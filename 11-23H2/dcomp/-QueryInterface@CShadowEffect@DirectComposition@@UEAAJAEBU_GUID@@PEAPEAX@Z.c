/*
 * XREFs of ?QueryInterface@CShadowEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F33F0
 * Callers:
 *     ?QueryInterface@CShadowEffect@DirectComposition@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8E70 (-QueryInterface@CShadowEffect@DirectComposition@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?QueryInterface@CFilterEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8130 (-QueryInterface@CFilterEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CShadowEffect::QueryInterface(
        DirectComposition::CShadowEffect *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4ad18ac0_cfd2_4c2f_bb62_96e54fdb6879.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4ad18ac0_cfd2_4c2f_bb62_96e54fdb6879.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4ad18ac0_cfd2_4c2f_bb62_96e54fdb6879.Data4;
  if ( !v5 )
    goto LABEL_9;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_30c421d5_8cb2_4e9f_b133_37be270d4ac2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_30c421d5_8cb2_4e9f_b133_37be270d4ac2.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_30c421d5_8cb2_4e9f_b133_37be270d4ac2.Data4;
  if ( v6 )
  {
    return (unsigned int)DirectComposition::CFilterEffect::QueryInterface(
                           (DirectComposition::CShadowEffect *)((char *)this + 24),
                           a2,
                           a3);
  }
  else
  {
LABEL_9:
    *a3 = this;
    CMILRefCountImpl::AddReference((DirectComposition::CShadowEffect *)((char *)this + 16));
  }
  return v3;
}
