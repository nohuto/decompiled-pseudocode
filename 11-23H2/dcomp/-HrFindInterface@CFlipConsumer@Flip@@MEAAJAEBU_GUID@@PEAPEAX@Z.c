/*
 * XREFs of ?HrFindInterface@CFlipConsumer@Flip@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AB370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Flip::CFlipConsumer::HrFindInterface(Flip::CFlipConsumer *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3123239b_c2d8_476c_8bbc_ae33deb1d5ef.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3123239b_c2d8_476c_8bbc_ae33deb1d5ef.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3123239b_c2d8_476c_8bbc_ae33deb1d5ef.Data4;
  if ( v4 )
    return (unsigned int)-2147467262;
  else
    *a3 = this;
  return v3;
}
