/*
 * XREFs of ?QueryInterface@CCompositeEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2A80
 * Callers:
 *     ?QueryInterface@CCompositeEffect@DirectComposition@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8C70 (-QueryInterface@CCompositeEffect@DirectComposition@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?QueryInterface@CFilterEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8130 (-QueryInterface@CFilterEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositeEffect::QueryInterface(
        DirectComposition::CCompositeEffect *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_576616c0_a231_494d_a38d_00fd5ec4db46.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_576616c0_a231_494d_a38d_00fd5ec4db46.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_576616c0_a231_494d_a38d_00fd5ec4db46.Data4;
  if ( !v5 )
    goto LABEL_9;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_30c421d5_8cb2_4e9f_b133_37be270d4ac2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_30c421d5_8cb2_4e9f_b133_37be270d4ac2.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_30c421d5_8cb2_4e9f_b133_37be270d4ac2.Data4;
  if ( v6 )
  {
    return (unsigned int)DirectComposition::CFilterEffect::QueryInterface(
                           (DirectComposition::CCompositeEffect *)((char *)this + 24),
                           a2,
                           a3);
  }
  else
  {
LABEL_9:
    *a3 = this;
    CMILRefCountImpl::AddReference((DirectComposition::CCompositeEffect *)((char *)this + 16));
  }
  return v3;
}
