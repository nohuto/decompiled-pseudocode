/*
 * XREFs of SshpDereferenceBlocker @ 0x1407A850C
 * Callers:
 *     SleepstudyHelperSetBlockerParentHandle @ 0x14036B890 (SleepstudyHelperSetBlockerParentHandle.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x1407A8480 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpSendSessionData @ 0x14087846C (SshpSendSessionData.c)
 *     SleepstudyHelperDestroyLibrary @ 0x1409A2090 (SleepstudyHelperDestroyLibrary.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14022CFE4 (CmpFreeTransientPoolWithTag.c)
 */

void __fastcall SshpDereferenceBlocker(_QWORD *a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rdi
  void *v4; // rcx
  __int64 v5; // rbx
  void *v6; // rcx
  void *v7; // rcx

  do
  {
    v2 = (_QWORD *)a1[36];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1[37] + 112LL), 0xFFFFFFFF) != 1 )
      break;
    v3 = (_QWORD *)a1[37];
    v4 = (void *)v3[11];
    v5 = v3[4];
    if ( v4 )
      CmpFreeTransientPoolWithTag(v4, *(_DWORD *)(v5 + 24));
    v6 = (void *)v3[12];
    if ( v6 )
      CmpFreeTransientPoolWithTag(v6, *(_DWORD *)(v5 + 24));
    v7 = (void *)v3[13];
    if ( v7 )
      CmpFreeTransientPoolWithTag(v7, *(_DWORD *)(v5 + 24));
    CmpFreeTransientPoolWithTag(v3, *(_DWORD *)(v5 + 24));
    CmpFreeTransientPoolWithTag(a1, *(_DWORD *)(v5 + 24));
    a1 = v2;
  }
  while ( v2 );
}
