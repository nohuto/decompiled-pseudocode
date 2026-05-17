/*
 * XREFs of LdrpInitializeShimDllDependencies @ 0x180072B40
 * Callers:
 *     LdrpLoadShimEngine @ 0x180072888 (LdrpLoadShimEngine.c)
 * Callees:
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpInitializeGraphRecurse @ 0x18007322C (LdrpInitializeGraphRecurse.c)
 *     LdrpInitializationFailure @ 0x180091F40 (LdrpInitializationFailure.c)
 *     ZwTerminateProcess @ 0x1800A45F0 (ZwTerminateProcess.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 *LdrpInitializeShimDllDependencies()
{
  __int64 *v0; // rcx
  __int64 v1; // rbx
  int v2; // edx
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 *result; // rax
  int v9; // [rsp+30h] [rbp-D0h]
  _QWORD v10[25]; // [rsp+40h] [rbp-C0h] BYREF
  char v11; // [rsp+140h] [rbp+40h] BYREF
  int v12; // [rsp+148h] [rbp+48h] BYREF

  memset(v10, 0, sizeof(v10));
  v0 = (__int64 *)qword_18017A150;
  v10[5] = &v12;
  LODWORD(v10[4]) = 0x80000;
  while ( v0 != &qword_18017A150 )
  {
    if ( *(_DWORD *)(v0[19] + 56) == 7 && !v0[22] )
      v0[22] = (__int64)v10;
    v0 = (__int64 *)*v0;
  }
  v1 = qword_18017A150;
  v2 = 0;
  v12 = 0;
  v3 = 0LL;
  while ( 1 )
  {
    if ( (__int64 *)v1 == &qword_18017A150 )
      goto LABEL_16;
    v3 = v1;
    if ( (*(_DWORD *)(v1 + 104) & 0x100) != 0 )
    {
      v4 = *(_QWORD *)(v1 + 152);
      v5 = *(__int64 **)(v4 + 40);
      if ( v5 )
        break;
    }
LABEL_8:
    v1 = *(_QWORD *)v1;
  }
  v6 = *(__int64 **)(v4 + 40);
  while ( 1 )
  {
    v6 = (__int64 *)*v6;
    if ( (v6[3] & 1) == 0 )
    {
      v7 = v6[1];
      if ( *(_DWORD *)(v7 + 56) == 7 )
      {
        v11 = 0;
        v12 = LdrpInitializeGraphRecurse(v7, &v12, &v11);
        v2 = v12;
        if ( v12 < 0 )
          goto LABEL_16;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v7 + 56) == -4 )
        break;
    }
LABEL_14:
    if ( v6 == v5 )
      goto LABEL_8;
  }
  v2 = -1073741502;
  v12 = -1073741502;
LABEL_16:
  result = (__int64 *)qword_18017A150;
  if ( (__int64 *)qword_18017A150 != &qword_18017A150 )
  {
    do
    {
      v3 = (__int64)result;
      if ( (_QWORD *)result[22] == v10 )
        result[22] = 0LL;
      result = (__int64 *)*result;
    }
    while ( result != &qword_18017A150 );
    v2 = v12;
  }
  if ( v2 < 0 )
  {
    v9 = v2;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3212,
      (__int64)"LdrpInitializeShimDllDependencies",
      0,
      "Initializing a shim dependency \"%wZ\" failed with status 0x%08lx\n",
      v3 + 72,
      v9);
    LdrpInitializationFailure((unsigned int)v12);
    return (__int64 *)ZwTerminateProcess(-1LL, (unsigned int)v12);
  }
  return result;
}
