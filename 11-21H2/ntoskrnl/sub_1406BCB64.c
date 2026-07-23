/*
 * XREFs of sub_1406BCB64 @ 0x1406BCB64
 * Callers:
 *     sub_1407AB790 @ 0x1407AB790 (sub_1407AB790.c)
 * Callees:
 *     PsGetThreadProcess @ 0x1402321F0 (PsGetThreadProcess.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     sub_1402F61F8 @ 0x1402F61F8 (sub_1402F61F8.c)
 *     sub_1402F6220 @ 0x1402F6220 (sub_1402F6220.c)
 */

__int64 __fastcall sub_1406BCB64(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rax
  void *v4; // rbx
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v8 = 0LL;
  v3 = sub_1402F6220((__int64)CurrentThread, &v7);
  v4 = v3;
  if ( v3 )
  {
    v5 = (__int64)v3;
    goto LABEL_5;
  }
  if ( *((_QWORD *)PsGetThreadProcess(CurrentThread) + 299) || (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    v5 = (__int64)CurrentThread;
LABEL_5:
    sub_1402F61F8(v5, &v8);
  }
  if ( v7 )
    ObfDereferenceObject(v4);
  *(_QWORD *)(a1 + 64) = v8;
  return 0LL;
}
