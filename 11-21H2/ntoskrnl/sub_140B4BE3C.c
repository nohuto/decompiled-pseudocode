/*
 * XREFs of sub_140B4BE3C @ 0x140B4BE3C
 * Callers:
 *     sub_140B1DD34 @ 0x140B1DD34 (sub_140B1DD34.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_140B1DE58 @ 0x140B1DE58 (sub_140B1DE58.c)
 */

__int64 __fastcall sub_140B4BE3C(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdi
  _SLIST_ENTRY *v7; // rax
  __int64 v8; // rax

  if ( ((unsigned __int8)&stru_140D01AD0 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  qword_140D01AE0 = 0LL;
  stru_140D01AD0 = 0LL;
  qword_140C5A868 = sub_1403B1F04(a1, 8LL * (unsigned int)a1);
  v4 = qword_140C5A868;
  if ( qword_140C5A868 )
  {
    v5 = 0;
    if ( a2 )
    {
      v6 = 0LL;
      do
      {
        v7 = (_SLIST_ENTRY *)sub_140B1DE58(v3);
        v4 = qword_140C5A868;
        *(_QWORD *)(v6 + qword_140C5A868) = v7;
        if ( !v7 )
          break;
        ExpInterlockedPushEntrySList(&stru_140D01AD0, v7);
        v4 = qword_140C5A868;
        ++v5;
        v8 = *(_QWORD *)(v6 + qword_140C5A868);
        v6 += 8LL;
        *(_DWORD *)(v8 + 28) = 1;
      }
      while ( v5 < a2 );
      if ( v5 )
      {
        dword_140D01AE8 = v5;
        return 0LL;
      }
    }
    sub_1403B1B5C(v3, v4);
  }
  return 3221225626LL;
}
