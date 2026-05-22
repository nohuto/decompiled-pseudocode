/*
 * XREFs of ?HrFindInterface@CYCbCrSurface@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FEFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CYCbCrSurface::HrFindInterface(
        DirectComposition::CYCbCrSurface *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4cb01d9b_2c08_4bc9_bf7c_cd5a59096747.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4cb01d9b_2c08_4bc9_bf7c_cd5a59096747.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4cb01d9b_2c08_4bc9_bf7c_cd5a59096747.Data4;
  if ( !v4 )
    goto LABEL_7;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_bd083f4c_9f2f_403e_92ff_547238e51fec.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_bd083f4c_9f2f_403e_92ff_547238e51fec.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_bd083f4c_9f2f_403e_92ff_547238e51fec.Data4;
  if ( v5 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_94ef25d8_74a2_4cfe_989f_6b0218e7e9f4.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_94ef25d8_74a2_4cfe_989f_6b0218e7e9f4.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_94ef25d8_74a2_4cfe_989f_6b0218e7e9f4.Data4;
    if ( v6 )
      return (unsigned int)-2147467262;
    else
      *a3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
  }
  else
  {
LABEL_7:
    *a3 = this;
  }
  return v3;
}
