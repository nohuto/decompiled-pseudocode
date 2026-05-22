/*
 * XREFs of ?HrFindInterface@CTileClump@DirectComposition@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FD390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTileClump::HrFindInterface(
        DirectComposition::CTileClump *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_43390de3_ac87_4fc4_a8ee_be3a1f43ebdd.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_43390de3_ac87_4fc4_a8ee_be3a1f43ebdd.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_43390de3_ac87_4fc4_a8ee_be3a1f43ebdd.Data4;
  if ( v4 )
    return (unsigned int)-2147467262;
  else
    *a3 = this;
  return v3;
}
