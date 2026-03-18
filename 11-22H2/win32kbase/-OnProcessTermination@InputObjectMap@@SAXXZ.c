/*
 * XREFs of ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1C0065FE8
 * Callers:
 *     DestroyProcessInfo @ 0x1C00C5EA0 (DestroyProcessInfo.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00660CC (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

void __fastcall InputObjectMap::OnProcessTermination(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  PVOID *v6; // rsi
  _QWORD *i; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v8, (struct _EX_PUSH_LOCK *)&InputObjectMap::s_hashTableLock);
  v4 = Buffer;
  v5 = Buffer;
  while ( v5 )
  {
    v5 = (_QWORD *)*v5;
    if ( ((unsigned __int8)v5 & 1) != 0 )
      break;
LABEL_9:
    v6 = (PVOID *)v5;
    if ( !v5 )
      goto LABEL_7;
    if ( *(_QWORD *)(v5[3] + 56LL) == CurrentProcess )
    {
      for ( i = v4; (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( (_QWORD *)*i == v5 )
        {
          *i = *v5;
          --InputObjectMap::s_hashTable;
          *v5 |= 0x8000000000000002uLL;
          v5 = i;
          break;
        }
      }
      ObfDereferenceObject(v6[3]);
      ExFreePoolWithTag(v6, 0);
    }
  }
  for ( ++v4; v4 < (_QWORD *)((char *)Buffer + 8 * ((unsigned __int64)*(&InputObjectMap::s_hashTable + 1) >> 5)); ++v4 )
  {
    v5 = (_QWORD *)*v4;
    if ( (*v4 & 1) == 0 )
      goto LABEL_9;
  }
LABEL_7:
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
}
