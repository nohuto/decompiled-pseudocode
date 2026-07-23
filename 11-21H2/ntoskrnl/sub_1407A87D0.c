/*
 * XREFs of sub_1407A87D0 @ 0x1407A87D0
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     PsGetThreadProcess @ 0x1402321F0 (PsGetThreadProcess.c)
 *     sub_14024BA7C @ 0x14024BA7C (sub_14024BA7C.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_140300B74 @ 0x140300B74 (sub_140300B74.c)
 *     sub_1407A8900 @ 0x1407A8900 (sub_1407A8900.c)
 */

__int64 __fastcall sub_1407A87D0(_QWORD *a1, PVOID *a2)
{
  PVOID *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v4; // rax
  struct _KTHREAD *v5; // rbx
  __int64 CurrentServerSilo; // rax
  int v7; // ebx
  bool v8; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp+8h]

  v2 = a2;
  CurrentThread = KeGetCurrentThread();
  v11 = qword_140D3CD00 ^ *a1;
  --*((_WORD *)CurrentThread + 243);
  LOBYTE(a2) = 6;
  v4 = (struct _KTHREAD *)sub_1407A8900((int)v11, a2);
  v5 = v4;
  if ( !v4 )
    goto LABEL_10;
  if ( PsGetThreadProcess(v4) == qword_140D06940 )
    goto LABEL_9;
  if ( (*((_DWORD *)v5 + 344) & 2) == 0 )
  {
    _InterlockedOr(v10, 0);
    if ( (*((_QWORD *)v5 + 170) & 1) != 0 )
      sub_14024BA7C((ULONG_PTR)v5 + 1360);
    if ( (*((_DWORD *)v5 + 344) & 2) == 0 )
      goto LABEL_9;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !sub_140300B74(*((_QWORD *)v5 + 68), CurrentServerSilo) )
  {
LABEL_9:
    ObfDereferenceObject(v5);
LABEL_10:
    v7 = -1073741813;
    goto LABEL_11;
  }
  *v2 = v5;
  v7 = 0;
LABEL_11:
  v8 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v8 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( *((_DWORD *)*v2 + 288) == HIDWORD(v11) )
    return 0LL;
  ObfDereferenceObject(*v2);
  return 3221226021LL;
}
