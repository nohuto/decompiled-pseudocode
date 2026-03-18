/*
 * XREFs of AlpcpCaptureIdMessage @ 0x14071D040
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x14071AA10 (NtAlpcQueryInformationMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14071CBA0 (NtAlpcImpersonateClientOfPort.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140978AA0 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A00B60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpCaptureIdMessage(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  char PreviousMode; // r10
  __int64 result; // rax

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && (a1 & 3) != 0 )
    goto LABEL_8;
  if ( _bittest16((const signed __int16 *)(a1 + 4), 0xCu) )
  {
    *a2 = *(_DWORD *)(a1 + 16);
    result = *(unsigned int *)(a1 + 20);
    goto LABEL_7;
  }
  if ( PreviousMode && (a1 & 3) != 0 )
LABEL_8:
    ExRaiseDatatypeMisalignment();
  *a2 = *(_DWORD *)(a1 + 24);
  result = *(unsigned int *)(a1 + 32);
LABEL_7:
  *a3 = result;
  return result;
}
