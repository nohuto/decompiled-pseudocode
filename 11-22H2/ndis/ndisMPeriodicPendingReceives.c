/*
 * XREFs of ndisMPeriodicPendingReceives @ 0x1C003E4A6
 * Callers:
 *     ndisMQueueReceiveNetBufferLists @ 0x1C003E616 (ndisMQueueReceiveNetBufferLists.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisMPeriodicPendingReceives(__int64 a1, __int64 *a2, int a3, unsigned int a4, char a5, _QWORD *a6)
{
  KSPIN_LOCK *v6; // rbp
  KIRQL v7; // r13
  __int64 v8; // r14
  __int64 *v9; // r15
  bool v10; // si
  KSPIN_LOCK *v13; // rcx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 *i; // rax
  bool result; // al

  v6 = (KSPIN_LOCK *)(a1 + 3176);
  v7 = 0;
  v8 = a4;
  v9 = 0LL;
  v10 = 0;
  v13 = (KSPIN_LOCK *)(a1 + 3176);
  if ( (a5 & 1) != 0 )
    KeAcquireSpinLockAtDpcLevel(v13);
  else
    v7 = KeAcquireSpinLockRaiseToDpc(v13);
  *(_QWORD *)(a1 + 3184) = KeGetCurrentThread();
  v14 = v8 + *(int *)(a1 + 3192);
  if ( *(_DWORD *)(a1 + 3168) == 1 && v14 < 0x3E8 )
  {
    *(_DWORD *)(a1 + 3240) += v8;
    v10 = 1;
    v15 = *(_QWORD **)(a1 + 3208);
    if ( v15 )
      *v15 = a2;
    else
      *(_QWORD *)(a1 + 3200) = a2;
    for ( i = a2; a2; a2 = (__int64 *)*a2 )
    {
      i = a2;
      *((_DWORD *)a2 + 16) = a3;
    }
    *(_DWORD *)(a1 + 3228) += v8;
    *(_DWORD *)(a1 + 3192) += v8;
    *(_QWORD *)(a1 + 3208) = i;
  }
  else
  {
    if ( !HIDWORD(v14) )
      v10 = (unsigned int)v14 >= 0x3E8;
    v9 = a2;
  }
  *(_QWORD *)(a1 + 3184) = 0LL;
  if ( (a5 & 1) != 0 )
    KeReleaseSpinLockFromDpcLevel(v6);
  else
    KeReleaseSpinLock(v6, v7);
  result = v10;
  *a6 = v9;
  return result;
}
