/*
 * XREFs of TppFastAlpcAdjustConcurrencyCount @ 0x18004F5E4
 * Callers:
 *     TpCallbackIndependent @ 0x18004F300 (TpCallbackIndependent.c)
 *     TppAlpcpExecuteCallback @ 0x18004F3F0 (TppAlpcpExecuteCallback.c)
 *     TppCallbackMayRunLongProlog @ 0x18004F8A8 (TppCallbackMayRunLongProlog.c)
 *     TpAlpcRegisterCompletionList @ 0x1800526C0 (TpAlpcRegisterCompletionList.c)
 * Callees:
 *     NtAlpcSetInformation @ 0x18009FF80 (NtAlpcSetInformation.c)
 */

__int64 __fastcall TppFastAlpcAdjustConcurrencyCount(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  signed __int32 v4; // r8d
  signed __int32 v5; // edx
  signed __int32 v6; // r9d
  void *v7; // rcx
  int PortInformation; // [rsp+30h] [rbp+8h] BYREF

  result = *(_DWORD *)(a1 + 288) & 3;
  if ( (*(_BYTE *)(a1 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(a1 + 216);
      v4 = *(_DWORD *)(a1 + 284);
      if ( !v3 || (result = *(unsigned int *)(v3 + 440), !(_DWORD)result) )
        result = MEMORY[0x7FFE03C0];
      v5 = result + *(_DWORD *)(*(_QWORD *)(a1 + 216) + 420LL);
      v6 = result + v5;
      if ( v4 >= v5 && v4 <= (int)result + v6 )
        break;
      if ( v4 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 284), v6, v4) )
      {
        v7 = *(void **)(a1 + 272);
        PortInformation = result + v5;
        NtAlpcSetInformation(v7, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
      }
    }
  }
  return result;
}
