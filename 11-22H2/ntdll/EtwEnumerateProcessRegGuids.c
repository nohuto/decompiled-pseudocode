/*
 * XREFs of EtwEnumerateProcessRegGuids @ 0x1801238E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     EtwpGetNextRegistration @ 0x180061A44 (EtwpGetNextRegistration.c)
 */

__int64 __fastcall EtwEnumerateProcessRegGuids(__int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 result; // rax
  unsigned __int64 NextRegistration; // rcx
  unsigned int v9; // r9d
  unsigned int i; // eax
  __int64 v11; // r8
  __int64 v12; // rdx

  v5 = a2 >> 4;
  v6 = 0;
  if ( !a1 && a2 )
    return 87LL;
  NextRegistration = 0LL;
LABEL_5:
  while ( 1 )
  {
    NextRegistration = EtwpGetNextRegistration(NextRegistration);
    if ( !NextRegistration )
      break;
    v9 = v6;
    if ( v6 >= v5 )
      v9 = v5;
    for ( i = 0; i < v9; ++i )
    {
      v11 = 16LL * i;
      v12 = *(_QWORD *)(NextRegistration + 32) - *(_QWORD *)(v11 + a1);
      if ( !v12 )
        v12 = *(_QWORD *)(NextRegistration + 40) - *(_QWORD *)(v11 + a1 + 8);
      if ( !v12 )
        goto LABEL_5;
    }
    if ( v6 < v5 )
      *(_OWORD *)(16LL * v6 + a1) = *(_OWORD *)(NextRegistration + 32);
    ++v6;
  }
  result = v5 < v6 ? 0x7A : 0;
  *a3 = 16 * v6;
  return result;
}
