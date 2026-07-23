/*
 * XREFs of sub_140564C24 @ 0x140564C24
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_140564990 @ 0x140564990 (sub_140564990.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 *     sub_14095A02C @ 0x14095A02C (sub_14095A02C.c)
 */

__int64 __fastcall sub_140564C24(__int64 a1)
{
  _QWORD *v2; // rcx
  _DWORD *v3; // rbx
  char v4; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // r9
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
    v3 = *(_DWORD **)(v2[39] + 40LL);
  else
    v3 = qword_140C46278;
  v4 = *(_BYTE *)(a1 + 32);
  if ( (unsigned int)(v3[75] - 789) <= 1 )
  {
    ObfDereferenceObject(v2);
    return 3221225558LL;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 28) && v4 && sub_140564990(a1) )
      v3 = qword_140C46278;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    KeWaitForSingleObject(&Semaphore, DelayExecution, 0, 0, 0LL);
    LOBYTE(v6) = v4;
    v7 = sub_14095A02C(v3, 0LL, 0LL, v6);
    sub_14035AD70(&Semaphore.Header.Lock, 0LL, 1LL, v8, 0);
    KeLeaveCriticalRegion();
    if ( v7 >= 0 )
    {
      LODWORD(v10) = 3;
      BYTE4(v10) = byte_140C4629A;
      ObfReferenceObjectWithTag(*((PVOID *)qword_140C46278 + 4), 0x746C6644u);
      return (unsigned int)sub_140777578((_DWORD)qword_140C46278, a1, (unsigned int)&v10, 0, 0, 1, 0);
    }
    return (unsigned int)v7;
  }
}
