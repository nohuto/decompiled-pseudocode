/*
 * XREFs of IoGetRequestorSessionId @ 0x14025E650
 * Callers:
 *     <none>
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 */

NTSTATUS __stdcall IoGetRequestorSessionId(PIRP Irp, PULONG pSessionId)
{
  PETHREAD Thread; // rcx
  ULONG v3; // ebx
  ULONG v5; // eax
  NTSTATUS result; // eax

  Thread = Irp->Tail.Overlay.Thread;
  v3 = 0;
  if ( Thread )
  {
    v5 = sub_140287F30(*((_QWORD *)Thread + 68));
    if ( v5 != -1 )
      v3 = v5;
    result = 0;
    *pSessionId = v3;
  }
  else
  {
    *pSessionId = -1;
    return -1073741823;
  }
  return result;
}
