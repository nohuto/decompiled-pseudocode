/*
 * XREFs of ?HrFindInterface@CFlipConsumerMessage@Flip@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AC910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Flip::CFlipConsumerMessage::HrFindInterface(
        Flip::CFlipConsumerMessage *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_290843b7_fdd3_47c5_818f_39713c9c5c70.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_290843b7_fdd3_47c5_818f_39713c9c5c70.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_290843b7_fdd3_47c5_818f_39713c9c5c70.Data4;
  if ( v4 )
    return (unsigned int)-2147467262;
  else
    *a3 = this;
  return v3;
}
