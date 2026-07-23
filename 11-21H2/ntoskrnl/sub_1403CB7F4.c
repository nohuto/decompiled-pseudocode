/*
 * XREFs of sub_1403CB7F4 @ 0x1403CB7F4
 * Callers:
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     sub_1403CBB10 @ 0x1403CBB10 (sub_1403CBB10.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140B1A508 @ 0x140B1A508 (sub_140B1A508.c)
 *     sub_140B5197C @ 0x140B5197C (sub_140B5197C.c)
 */

char sub_1403CB7F4()
{
  int v0; // ebp
  char v1; // si
  unsigned int v2; // edi
  __int64 v3; // rcx
  char result; // al
  int v5; // eax
  _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  PreviousAffinity = 0LL;
  if ( (qword_140D06AE0 & 3) != 0 )
  {
    if ( (qword_140D06AE0 & 2) != 0 )
    {
      v5 = 2;
    }
    else if ( MEMORY[0xFFFFF780000002EC] )
    {
      v5 = 1;
    }
    else
    {
      v5 = dword_140D06A2C & 1;
    }
    dword_140D06A2C = v5;
  }
  else
  {
    dword_140D06A2C = 0;
  }
  v0 = 0;
  v1 = 0;
  v2 = 0;
  if ( (_DWORD)dword_140D06884 )
  {
    while ( 1 )
    {
      if ( v0 )
      {
        sub_1403CBB10(v2, 0LL);
      }
      else
      {
        sub_1403CBB10(v2, &PreviousAffinity);
        v0 = 1;
      }
      if ( v2 == (_DWORD)dword_140D06884 - 1 )
        v1 = 1;
      if ( (qword_140D06AE0 & 3) != 0 )
      {
        LOBYTE(v3) = v1;
        result = sub_140B5197C(v3);
        if ( !result )
          break;
      }
      LOBYTE(v3) = v1;
      sub_140B1A508(v3);
      if ( (qword_140D068D8 & 0x400000) != 0 )
        __writemsr(0x1A0u, __readmsr(0x1A0u) | 0x8000000);
      if ( ++v2 >= (unsigned int)dword_140D06884 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    if ( *((_BYTE *)KeGetCurrentPrcb() + 141) == 2 )
      qword_140D06FF8 = __readmsr(0x1A0u);
    if ( v0 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    stru_140C2A7E0.Count = 1;
    stru_140C2A7E0.Owner = 0LL;
    stru_140C2A7E0.Contention = 0;
    LOWORD(stru_140C2A7E0.Event.Header.Lock) = 1;
    stru_140C2A7E0.Event.Header.Size = 6;
    stru_140C2A7E0.Event.Header.SignalState = 0;
    stru_140C2A7E0.Event.Header.WaitListHead.Blink = &stru_140C2A7E0.Event.Header.WaitListHead;
    stru_140C2A7E0.Event.Header.WaitListHead.Flink = &stru_140C2A7E0.Event.Header.WaitListHead;
    memset(&stru_140C2A740, 0, 0x80uLL);
    stru_140C2A740.Blink = &stru_140C2A740;
    *(&stru_140C2A758 + 3) = (ULONG_PTR)sub_14057C2D0;
    result = 1;
    stru_140C2A740.Flink = &stru_140C2A740;
    stru_140C2A798.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14057C370;
    qword_140C2A7B8 = (__int64)sub_14057C1C0;
    qword_140C2A750 = 0LL;
    LODWORD(stru_140C2A758) = 275;
    *(&stru_140C2A758 + 4) = (ULONG_PTR)&stru_140C2A740;
    *(&stru_140C2A758 + 7) = 0LL;
    *(&stru_140C2A758 + 2) = 0LL;
    stru_140C2A798.Parameter = &stru_140C2A740;
    stru_140C2A798.List.Flink = 0LL;
    byte_140C54EE8 = 1;
  }
  return result;
}
