/*
 * XREFs of ?HrFindInterface@CPresentationBuffer@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AF370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPresentationBuffer::HrFindInterface(CPresentationBuffer *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2e217d3a_5abb_4138_9a13_a775593c89ca.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2e217d3a_5abb_4138_9a13_a775593c89ca.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2e217d3a_5abb_4138_9a13_a775593c89ca.Data4;
  if ( v4 )
    return (unsigned int)-2147467262;
  else
    *a3 = this;
  return v3;
}
