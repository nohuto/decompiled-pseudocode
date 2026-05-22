/*
 * XREFs of ?QueryInterface@CAnimationBuilder@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnimationBuilder::QueryInterface(
        DirectComposition::CAnimationBuilder *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  result = 0LL;
  if ( !a3 )
    return 2147942487LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_aa869e19_9176_46f9_9d0c_bc98d6a23724.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_aa869e19_9176_46f9_9d0c_bc98d6a23724.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_aa869e19_9176_46f9_9d0c_bc98d6a23724.Data4;
  if ( !v5 )
    goto LABEL_18;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_cbfd91d9_51b2_45e4_b3de_d19ccfb863c5.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_cbfd91d9_51b2_45e4_b3de_d19ccfb863c5.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_cbfd91d9_51b2_45e4_b3de_d19ccfb863c5.Data4;
  if ( !v6 )
    goto LABEL_18;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_cadfc221_2187_4f55_b289_01544817b158.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_cadfc221_2187_4f55_b289_01544817b158.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_cadfc221_2187_4f55_b289_01544817b158.Data4;
  if ( !v7 )
    goto LABEL_18;
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0bca27ef_7885_4a7a_95b0_cc4079b194ad.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0bca27ef_7885_4a7a_95b0_cc4079b194ad.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0bca27ef_7885_4a7a_95b0_cc4079b194ad.Data4;
  if ( !v8 )
    goto LABEL_18;
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v9 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
LABEL_18:
    *a3 = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
  }
  return result;
}
