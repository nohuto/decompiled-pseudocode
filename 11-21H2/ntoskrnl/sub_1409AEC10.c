/*
 * XREFs of sub_1409AEC10 @ 0x1409AEC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140257280 @ 0x140257280 (sub_140257280.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406C03F0 @ 0x1406C03F0 (sub_1406C03F0.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_1409AEC10(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  int v8; // edi
  char v9; // bl
  int v10; // eax
  PVOID v11; // rcx
  struct _KTHREAD *CurrentThread; // r15
  _DWORD *v13; // rdi
  volatile signed __int64 *v14; // r14
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  PVOID v17; // [rsp+48h] [rbp-8h] BYREF

  Object = 0LL;
  v17 = 0LL;
  if ( a3 > 1 )
    return (unsigned int)-1073741821;
  if ( a5 )
    return (unsigned int)-1073741820;
  if ( a4 || a6 )
    return (unsigned int)-1073741811;
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  v8 = sub_140732D40(a1, 1, qword_140D06E08, v9, 0x63507350u, &v17, 0LL, 0LL);
  if ( v8 >= 0 )
  {
    v10 = sub_140732D40(a2, 2048, (__int64)PsProcessType, v9, 0x63507350u, &Object, 0LL, 0LL);
    v11 = Object;
    v8 = v10;
    if ( v10 < 0 )
      goto LABEL_25;
    if ( *(PVOID *)v17 != Object )
    {
      v8 = -1073741811;
LABEL_25:
      if ( v11 )
        ObfDereferenceObjectWithTag(v11, 0x63507350u);
      goto LABEL_27;
    }
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v13 = v17;
    v14 = (volatile signed __int64 *)((char *)v17 + 8);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v17 + 8, 0LL);
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        if ( !v13[4] )
        {
          v8 = -1073741811;
LABEL_22:
          if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v14);
          sub_1402AFC00((ULONG_PTR)v14);
          sub_1402F9540((__int64)CurrentThread);
          v11 = Object;
          goto LABEL_25;
        }
        sub_140257280((ULONG_PTR)Object, 0LL, 1u);
        --v13[4];
      }
    }
    else
    {
      if ( v13[4] == -1 )
      {
        v8 = -1073741750;
        goto LABEL_22;
      }
      if ( !sub_1406C03F0((ULONG_PTR)Object, 0) )
      {
        v8 = -1073741558;
        goto LABEL_22;
      }
      ++v13[4];
    }
    v8 = 0;
    goto LABEL_22;
  }
LABEL_27:
  if ( v17 )
    ObfDereferenceObjectWithTag(v17, 0x63507350u);
  return (unsigned int)v8;
}
