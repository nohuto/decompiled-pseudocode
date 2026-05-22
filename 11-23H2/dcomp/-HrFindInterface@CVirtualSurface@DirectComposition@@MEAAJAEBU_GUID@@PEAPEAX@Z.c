/*
 * XREFs of ?HrFindInterface@CVirtualSurface@DirectComposition@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVirtualSurface::HrFindInterface(
        DirectComposition::CVirtualSurface *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v12; // rcx

  v4 = 0;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ae471c51_5f53_4a24_8d3e_d0c39c30b3f0.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ae471c51_5f53_4a24_8d3e_d0c39c30b3f0.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ae471c51_5f53_4a24_8d3e_d0c39c30b3f0.Data4;
  if ( !v5 )
    goto LABEL_18;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_43390de3_ac87_4fc4_a8ee_be3a1f43ebdd.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_43390de3_ac87_4fc4_a8ee_be3a1f43ebdd.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_43390de3_ac87_4fc4_a8ee_be3a1f43ebdd.Data4;
  if ( !v6 )
  {
    v10 = (unsigned __int64)this + 64;
    goto LABEL_17;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_bb8a4953_2c99_4f5a_96f5_4819027fa3ac.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_bb8a4953_2c99_4f5a_96f5_4819027fa3ac.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_bb8a4953_2c99_4f5a_96f5_4819027fa3ac.Data4;
  if ( !v7 )
    goto LABEL_18;
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5680c979_14c8_48b5_8b92_3247379fd907.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5680c979_14c8_48b5_8b92_3247379fd907.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5680c979_14c8_48b5_8b92_3247379fd907.Data4;
  if ( !v8 )
  {
    v10 = (unsigned __int64)this + 72;
    goto LABEL_17;
  }
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_94ef25d8_74a2_4cfe_989f_6b0218e7e9f4.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_94ef25d8_74a2_4cfe_989f_6b0218e7e9f4.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_94ef25d8_74a2_4cfe_989f_6b0218e7e9f4.Data4;
  if ( !v9 )
  {
    v10 = (unsigned __int64)this + 80;
LABEL_17:
    this = (DirectComposition::CVirtualSurface *)(v10 & -(__int64)(this != 0LL));
    goto LABEL_18;
  }
  v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v12 )
    return (unsigned int)-2147467262;
LABEL_18:
  *a3 = this;
  return v4;
}
