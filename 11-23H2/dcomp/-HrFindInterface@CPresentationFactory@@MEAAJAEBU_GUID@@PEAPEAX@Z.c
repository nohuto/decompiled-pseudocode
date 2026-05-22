/*
 * XREFs of ?HrFindInterface@CPresentationFactory@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AEFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPresentationFactory::HrFindInterface(CPresentationFactory *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_8fb37b58_1d74_4f64_a49c_1f97a80a2ec0.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_8fb37b58_1d74_4f64_a49c_1f97a80a2ec0.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_8fb37b58_1d74_4f64_a49c_1f97a80a2ec0.Data4;
  if ( v4 )
    return (unsigned int)-2147467262;
  else
    *a3 = this;
  return v3;
}
