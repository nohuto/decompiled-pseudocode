/*
 * XREFs of ExpPlProcessNotifications @ 0x140608A00
 * Callers:
 *     <none>
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     RtlpInterlockedFlushSList @ 0x140428870 (RtlpInterlockedFlushSList.c)
 */

int ExpPlProcessNotifications()
{
  PSLIST_ENTRY v0; // rax
  _QWORD *p_Next; // rbx
  const WNF_STATE_NAME *v2; // rdx
  unsigned int Buffer; // [rsp+58h] [rbp+10h] BYREF

  dword_140CF8270 = 0;
  v0 = RtlpInterlockedFlushSList(&stru_140CF8260);
  p_Next = &v0->Next;
  if ( v0 )
  {
    do
    {
      v2 = (const WNF_STATE_NAME *)p_Next;
      p_Next = (_QWORD *)*p_Next;
      v2[2].Data[0] = 0;
      Buffer = v2[-9].Data[0];
      LODWORD(v0) = ZwUpdateWnfStateData(v2 - 2, &Buffer, 4u, 0LL, 0LL, 0, 0);
    }
    while ( p_Next );
  }
  return (int)v0;
}
