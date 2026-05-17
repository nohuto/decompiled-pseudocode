/*
 * XREFs of RtlpHpLfhOwnerListLockUnlock @ 0x180122B48
 * Callers:
 *     RtlpHpLfhOwnerLockUnlock @ 0x180122BB8 (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHpLfhOwnerListLockUnlock(__int64 a1, _QWORD **a2, char a3)
{
  _QWORD *v3; // rbx
  int v6; // edi
  volatile signed __int64 *v7; // rcx

  v3 = *a2;
  if ( *a2 != a2 )
  {
    v6 = a3 & 1;
    do
    {
      v7 = v3 + 3;
      if ( v6 )
      {
        if ( (a3 & 2) != 0 )
          *v7 = 1LL;
        RtlReleaseSRWLockExclusive(v7);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v7);
      }
      v3 = (_QWORD *)*v3;
    }
    while ( v3 != a2 );
  }
}
