/*
 * XREFs of EtwpFindRegistration @ 0x18005ED8C
 * Callers:
 *     EtwDeliverDataBlock @ 0x18005E7E0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     EtwpRegistrationCompare @ 0x18006DE80 (EtwpRegistrationCompare.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007A2F0 (RtlTryAcquireSRWLockShared.c)
 */

_QWORD *__fastcall EtwpFindRegistration(__int64 a1, __int16 a2)
{
  unsigned __int64 v2; // rbx
  int v3; // esi
  _QWORD *i; // rdi
  int v5; // eax
  unsigned __int64 v6; // rax
  _QWORD **v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int16 v12; // [rsp+28h] [rbp-10h]

  v11 = a1;
  v12 = a2;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v2 = EtwpRegistrationTable;
  if ( (qword_180188290 & 1) != 0 && EtwpRegistrationTable )
    v2 = (unsigned __int64)&EtwpRegistrationTable ^ EtwpRegistrationTable;
  v3 = qword_180188290 & 1;
  i = 0LL;
  while ( v2 )
  {
    v5 = EtwpRegistrationCompare(&v11, v2);
    if ( v5 < 0 )
      goto LABEL_10;
    if ( v5 <= 0 )
    {
      i = (_QWORD *)v2;
LABEL_10:
      v6 = *(_QWORD *)v2;
      goto LABEL_11;
    }
    v6 = *(_QWORD *)(v2 + 8);
LABEL_11:
    if ( v3 && v6 )
      v2 ^= v6;
    else
      v2 = v6;
  }
  if ( i )
  {
    while ( !(unsigned __int8)RtlTryAcquireSRWLockShared(i + 9) )
    {
      v8 = (_QWORD **)i[1];
      v9 = i;
      if ( v8 )
      {
        v10 = *v8;
        for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
          i = v10;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v9 )
            break;
          v9 = i;
        }
      }
      if ( !i || (unsigned int)EtwpRegistrationCompare(&v11, i) )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    i = 0LL;
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return i;
}
