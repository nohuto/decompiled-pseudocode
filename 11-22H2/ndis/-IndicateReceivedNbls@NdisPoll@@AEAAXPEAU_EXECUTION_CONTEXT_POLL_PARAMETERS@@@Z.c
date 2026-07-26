/*
 * XREFs of ?IndicateReceivedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x1C00C53A0
 * Callers:
 *     ?EvtIndicateReceivedNbls@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x1C00C5320 (-EvtIndicateReceivedNbls@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 * Callees:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0013730 (NdisMIndicateReceiveNetBufferLists.c)
 */

void __fastcall NdisPoll::IndicateReceivedNbls(NdisPoll *this, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *a2)
{
  ULONG v2; // edi
  _QWORD *v5; // rax
  int v6; // ecx
  struct _NET_BUFFER_LIST *v7; // rdx

  v2 = *((_DWORD *)this + 60);
  if ( v2 == -1 )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 29);
    v2 = 0;
    while ( v5 )
    {
      v5 = (_QWORD *)*v5;
      ++v2;
    }
  }
  else if ( v2 > *((_DWORD *)this + 54) )
  {
    NT_ASSERT("numberOfIndicatedNbls <= m_pollData.Receive.MaxNblsToIndicate");
  }
  v6 = *((_DWORD *)this + 62);
  if ( (v6 & 0xFFFF20FF) != 0 )
    NT_ASSERT(
      "(static_cast<decltype((m_pollData.Receive.Flags) & (~allowedReceiveFlags))>(static_cast<::wil::integral_from_enum<"
      "decltype(m_pollData.Receive.Flags)>>(m_pollData.Receive.Flags) & static_cast<::wil::integral_from_enum<decltype(~a"
      "llowedReceiveFlags)>>(~allowedReceiveFlags)) == static_cast<decltype((m_pollData.Receive.Flags) & (~allowedReceiveFlags))>(0))");
  v7 = (struct _NET_BUFFER_LIST *)*((_QWORD *)this + 29);
  if ( v7 )
    NdisMIndicateReceiveNetBufferLists(*((NDIS_HANDLE *)this + 71), v7, 0, v2, v6 | (*(_BYTE *)a2 == 2));
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 0;
  *((_DWORD *)a2 + 1) = v2;
}
