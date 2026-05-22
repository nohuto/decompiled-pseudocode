/*
 * XREFs of ?HrFindInterface@CCompositionFramePresentStatistics@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B0DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionFramePresentStatistics::HrFindInterface(
        CCompositionFramePresentStatistics *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b44b8bda_7282_495d_9dd7_ceadd8b4bb86.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b44b8bda_7282_495d_9dd7_ceadd8b4bb86.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b44b8bda_7282_495d_9dd7_ceadd8b4bb86.Data4;
  if ( !v4 )
    goto LABEL_7;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ab41d127_c101_4c0a_911d_f9f2e9d08e64.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ab41d127_c101_4c0a_911d_f9f2e9d08e64.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ab41d127_c101_4c0a_911d_f9f2e9d08e64.Data4;
  if ( v5 )
    return (unsigned int)-2147467262;
  else
LABEL_7:
    *a3 = this;
  return v3;
}
