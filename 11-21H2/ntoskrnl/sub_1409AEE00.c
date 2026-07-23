/*
 * XREFs of sub_1409AEE00 @ 0x1409AEE00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402EEA18 @ 0x1402EEA18 (sub_1402EEA18.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406E21F0 @ 0x1406E21F0 (sub_1406E21F0.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_1409AEE00(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  int v8; // edi
  char v9; // bl
  int v10; // edx
  int v11; // eax
  PVOID v12; // rcx
  struct _KTHREAD *CurrentThread; // r12
  _DWORD *v14; // rsi
  volatile signed __int64 *v15; // r15
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  PVOID v18; // [rsp+48h] [rbp-8h] BYREF

  Object = 0LL;
  v18 = 0LL;
  if ( a3 <= 1 )
  {
    if ( a5 )
      return (unsigned int)-1073741820;
    if ( a4 )
      return (unsigned int)-1073741811;
  }
  if ( a6 )
    return (unsigned int)-1073741811;
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  v8 = sub_140732D40(a1, 1, qword_140D06E10, v9, 0x63547350u, &v18, 0LL, 0LL);
  if ( v8 >= 0 )
  {
    v10 = 2;
    if ( a3 > 1 )
      v10 = 0;
    v11 = sub_140732D40(a2, v10, (__int64)PsThreadType, v9, 0x63547350u, &Object, 0LL, 0LL);
    v12 = Object;
    v8 = v11;
    if ( v11 >= 0 )
    {
      if ( *(PVOID *)v18 == Object )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        v14 = v18;
        v15 = (volatile signed __int64 *)((char *)v18 + 8);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v18 + 8, 0LL);
        if ( a3 )
        {
          if ( a3 == 1 )
          {
            if ( v14[4] )
            {
              v8 = sub_1402EEA18((__int64)Object, 0LL, 1u);
              if ( v8 >= 0 )
                --v14[4];
            }
            else
            {
              v8 = -1073741811;
            }
          }
        }
        else if ( v14[4] == 0x7FFFFFFF )
        {
          v8 = -1073741750;
        }
        else
        {
          v8 = sub_1406E21F0((__int64)Object, 0LL);
          if ( v8 >= 0 )
            ++v14[4];
        }
        if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v15);
        sub_1402AFC00((ULONG_PTR)v15);
        sub_1402F9540((__int64)CurrentThread);
        v12 = Object;
      }
      else
      {
        v8 = -1073741811;
      }
    }
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x63547350u);
  }
  if ( v18 )
    ObfDereferenceObjectWithTag(v18, 0x63547350u);
  return (unsigned int)v8;
}
