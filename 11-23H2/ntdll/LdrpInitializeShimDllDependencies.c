/*
 * XREFs of LdrpInitializeShimDllDependencies @ 0x18007A070
 * Callers:
 *     LdrpLoadShimEngine @ 0x180079E58 (LdrpLoadShimEngine.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     LdrpInitializeGraphRecurse @ 0x18006D42C (LdrpInitializeGraphRecurse.c)
 *     LdrpInitializationFailure @ 0x18008ACF0 (LdrpInitializationFailure.c)
 *     ZwTerminateProcess @ 0x1800A1430 (ZwTerminateProcess.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

int LdrpInitializeShimDllDependencies()
{
  __int64 *v0; // rcx
  __int64 v1; // rbx
  NTSTATUS v2; // edx
  __int64 v3; // r14
  __int64 *v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rsi
  __int64 *v7; // rdi
  __int64 v8; // rax
  NTSTATUS v10; // [rsp+30h] [rbp-D0h]
  _BYTE v11[32]; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+60h] [rbp-A0h]
  NTSTATUS *p_ExitStatus; // [rsp+68h] [rbp-98h]
  char v14; // [rsp+140h] [rbp+40h] BYREF
  NTSTATUS ExitStatus; // [rsp+148h] [rbp+48h] BYREF

  memset_thunk_772440563353939046(v11, 0, 0xC8uLL);
  v0 = (__int64 *)qword_180187450;
  p_ExitStatus = &ExitStatus;
  v12 = 0x80000;
  while ( v0 != &qword_180187450 )
  {
    if ( *(_DWORD *)(v0[19] + 56) == 7 && !v0[22] )
      v0[22] = (__int64)v11;
    v0 = (__int64 *)*v0;
  }
  v1 = qword_180187450;
  v2 = 0;
  ExitStatus = 0;
  v3 = 0LL;
  while ( 1 )
  {
    if ( (__int64 *)v1 == &qword_180187450 )
      goto LABEL_9;
    v3 = v1;
    if ( (*(_DWORD *)(v1 + 104) & 0x100) != 0 )
    {
      v5 = *(_QWORD *)(v1 + 152);
      v6 = *(__int64 **)(v5 + 40);
      if ( v6 )
        break;
    }
LABEL_8:
    v1 = *(_QWORD *)v1;
  }
  v7 = *(__int64 **)(v5 + 40);
  while ( 1 )
  {
    v7 = (__int64 *)*v7;
    if ( (v7[3] & 1) == 0 )
    {
      v8 = v7[1];
      if ( *(_DWORD *)(v8 + 56) == 7 )
      {
        v14 = 0;
        ExitStatus = LdrpInitializeGraphRecurse((__int64 *)v8, (__int64)&ExitStatus, &v14);
        v2 = ExitStatus;
        if ( ExitStatus < 0 )
          goto LABEL_9;
        goto LABEL_23;
      }
      if ( *(_DWORD *)(v8 + 56) == -4 )
        break;
    }
LABEL_23:
    if ( v7 == v6 )
      goto LABEL_8;
  }
  v2 = -1073741502;
  ExitStatus = -1073741502;
LABEL_9:
  v4 = (__int64 *)qword_180187450;
  if ( (__int64 *)qword_180187450 != &qword_180187450 )
  {
    do
    {
      v3 = (__int64)v4;
      if ( (_BYTE *)v4[22] == v11 )
        v4[22] = 0LL;
      v4 = (__int64 *)*v4;
    }
    while ( v4 != &qword_180187450 );
    v2 = ExitStatus;
  }
  if ( v2 < 0 )
  {
    v10 = v2;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3228,
      (__int64)"LdrpInitializeShimDllDependencies",
      0,
      "Initializing a shim dependency \"%wZ\" failed with status 0x%08lx\n",
      v3 + 72,
      v10);
    LdrpInitializationFailure((unsigned int)ExitStatus);
    LODWORD(v4) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
  }
  return (int)v4;
}
