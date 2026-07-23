/*
 * XREFs of PsGetEffectiveContainerId @ 0x140234210
 * Callers:
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F6220 @ 0x1402F6220 (sub_1402F6220.c)
 */

__int64 __fastcall PsGetEffectiveContainerId(int a1, __int64 a2, __int64 a3)
{
  __int64 v7; // rax
  void *v8; // r8
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rax
  int v12; // ebx
  __int128 v13; // xmm0
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0;
  if ( a1 >= 5 )
    return 3221225711LL;
  if ( a2 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_DWORD *)(a3 + 16) = 0;
    if ( (KeGetPcr()[36].Unused0[2] & 0x10001) != 0 && (struct _KTHREAD *)a2 == KeGetCurrentThread() )
      return 0LL;
    v7 = sub_1402F6220(a2, &v14);
    v8 = (void *)v7;
    if ( v7 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v7 + 544) + 1296LL);
      *(_DWORD *)(a3 + 16) |= 1u;
    }
    else
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 544) + 1296LL);
    }
    if ( !v9 )
    {
LABEL_13:
      if ( v14 )
        ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      return 0LL;
    }
    if ( a1 )
    {
      v10 = a1 - 2;
      if ( !v10 )
      {
        v11 = *(_QWORD *)(v9 + 1024);
LABEL_12:
        if ( !v11 )
          goto LABEL_13;
        v13 = *(_OWORD *)(v11 + 1432);
        goto LABEL_21;
      }
      v12 = v10 - 1;
      if ( !v12 )
      {
        v11 = *(_QWORD *)(v9 + 1032);
        goto LABEL_12;
      }
      if ( v12 != 1 )
        goto LABEL_13;
    }
    v13 = *(_OWORD *)(v9 + 1432);
LABEL_21:
    *(_OWORD *)a3 = v13;
    goto LABEL_13;
  }
  return 3221225712LL;
}
