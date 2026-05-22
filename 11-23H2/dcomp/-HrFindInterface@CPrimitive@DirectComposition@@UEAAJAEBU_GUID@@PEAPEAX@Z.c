/*
 * XREFs of ?HrFindInterface@CPrimitive@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F9290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitive::HrFindInterface(
        DirectComposition::CPrimitive *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_accde4a4_5fe5_4819_b9c4_fefda1d1d348.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_accde4a4_5fe5_4819_b9c4_fefda1d1d348.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_accde4a4_5fe5_4819_b9c4_fefda1d1d348.Data4;
  if ( v4 )
    return (unsigned int)-2147467262;
  else
    *a3 = this;
  return v3;
}
