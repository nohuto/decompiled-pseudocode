/*
 * XREFs of sub_14099D180 @ 0x14099D180
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

__int64 __fastcall sub_14099D180(char *NotificationStructure, PVOID Context)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = 0;
  v3 = *(_QWORD *)(NotificationStructure + 20) - 0x4C401D20DEDAE202LL;
  if ( *(_QWORD *)(NotificationStructure + 20) == 0x4C401D20DEDAE202LL )
    v3 = *(_QWORD *)(NotificationStructure + 28) - 0x4FD519E39718F3A6LL;
  if ( v3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = *(_QWORD *)(NotificationStructure + 4) - 0x11D046F0CB3A4004LL;
    if ( *(_QWORD *)(NotificationStructure + 4) == 0x11D046F0CB3A4004LL )
      v4 = *(_QWORD *)(NotificationStructure + 12) - 0x3F05139760008FB0LL;
    if ( !v4 )
    {
      _m_prefetchw(&dword_140C1F210);
      if ( !_InterlockedOr(&dword_140C1F210, 2u) )
        ExQueueWorkItem(&stru_140C1F220, DelayedWorkQueue);
    }
  }
  return v2;
}
