/*
 * XREFs of ?CompleteTransmittedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x1C00C5284
 * Callers:
 *     ?EvtCompleteTransmittedNbls@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x1C00C5320 (-EvtCompleteTransmittedNbls@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 * Callees:
 *     NdisMSendNetBufferListsComplete @ 0x1C0013430 (NdisMSendNetBufferListsComplete.c)
 */

void __fastcall NdisPoll::CompleteTransmittedNbls(NdisPoll *this, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  struct _NET_BUFFER_LIST *v6; // rdx

  v2 = *((_DWORD *)this + 42);
  if ( v2 != -1 && v2 > *((_DWORD *)this + 36) )
    NT_ASSERT("numberOfCompletedNbls <= m_pollData.Transmit.MaxNblsToComplete");
  v5 = *((_DWORD *)this + 44);
  if ( (v5 & 0xFFFFFFF9) != 0 )
    NT_ASSERT(
      "(static_cast<decltype((m_pollData.Transmit.SendCompleteFlags) & (~allowedSendCompleteFlags))>(static_cast<::wil::i"
      "ntegral_from_enum<decltype(m_pollData.Transmit.SendCompleteFlags)>>(m_pollData.Transmit.SendCompleteFlags) & stati"
      "c_cast<::wil::integral_from_enum<decltype(~allowedSendCompleteFlags)>>(~allowedSendCompleteFlags)) == static_cast<"
      "decltype((m_pollData.Transmit.SendCompleteFlags) & (~allowedSendCompleteFlags))>(0))");
  v6 = (struct _NET_BUFFER_LIST *)*((_QWORD *)this + 20);
  if ( v6 )
    NdisMSendNetBufferListsComplete(*((NDIS_HANDLE *)this + 71), v6, v5 | (*(_BYTE *)a2 == 2));
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)a2 + 1) = v2;
}
