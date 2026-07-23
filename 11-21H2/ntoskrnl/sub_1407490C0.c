/*
 * XREFs of sub_1407490C0 @ 0x1407490C0
 * Callers:
 *     sub_1407491FC @ 0x1407491FC (sub_1407491FC.c)
 *     sub_140766C3C @ 0x140766C3C (sub_140766C3C.c)
 *     sub_140774F24 @ 0x140774F24 (sub_140774F24.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407490C0(__int64 a1, __int64 a2)
{
  int v2; // r15d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // rbx
  _QWORD *v9; // r14
  _QWORD *v10; // rbp
  void *v11; // r14
  _QWORD *v12; // rbp
  void *v13; // r12

  v2 = a2;
  if ( (_DWORD)a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    KeWaitForSingleObject(&Semaphore, DelayExecution, 0, 0, 0LL);
  }
  if ( a1 )
    v5 = *(_QWORD **)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = v5 + 61;
  v7 = (_QWORD *)v5[61];
  while ( v7 != v6 )
  {
    v10 = (_QWORD *)v7[3];
    v11 = v7;
    if ( v10 )
    {
      sub_14042A5E0(v10[1], a2);
      ExFreePoolWithTag(v10, 0);
    }
    v7 = (_QWORD *)*v7;
    ExFreePoolWithTag(v11, 0);
  }
  v8 = v5 + 63;
  v9 = (_QWORD *)v5[63];
  while ( v9 != v8 )
  {
    v12 = (_QWORD *)v9[3];
    v13 = v9;
    if ( v12 )
    {
      sub_14042A5E0(v12[1], a2);
      ExFreePoolWithTag(v12, 0);
    }
    v9 = (_QWORD *)*v9;
    ExFreePoolWithTag(v13, 0);
  }
  v5[62] = v5 + 61;
  *v6 = v6;
  v5[64] = v5 + 63;
  *v8 = v8;
  v5[65] = 0LL;
  if ( v2 )
  {
    KeReleaseSemaphore(&Semaphore, 0, 1, 0);
    KeLeaveCriticalRegion();
  }
}
