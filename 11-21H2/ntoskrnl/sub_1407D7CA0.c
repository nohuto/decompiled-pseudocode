/*
 * XREFs of sub_1407D7CA0 @ 0x1407D7CA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402EF5FC @ 0x1402EF5FC (sub_1402EF5FC.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406E3BE0 @ 0x1406E3BE0 (sub_1406E3BE0.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_14079F130 @ 0x14079F130 (sub_14079F130.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     sub_1407D7E94 @ 0x1407D7E94 (sub_1407D7E94.c)
 *     sub_1407E6274 @ 0x1407E6274 (sub_1407E6274.c)
 */

__int64 __fastcall sub_1407D7CA0(ULONG_PTR a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v4; // rbp
  char v5; // r12
  __int64 result; // rax
  PVOID v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  volatile signed __int64 *v10; // rdi
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  int v13; // [rsp+80h] [rbp+8h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  v4 = *((_QWORD *)CurrentThread + 23);
  v5 = *((_BYTE *)CurrentThread + 562);
  if ( a1 )
  {
    result = sub_140732D40(a1, 1, (__int64)PsProcessType, v5, 0x65547350u, &Object, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v7 = Object;
    v8 = *((_DWORD *)Object + 272);
    --*((_WORD *)CurrentThread + 242);
    v13 = v8;
    v9 = sub_1407D7E94((ULONG_PTR)v7);
    ObfDereferenceObjectWithTag(v7, 0x65547350u);
    if ( v7 == (PVOID)v4 )
    {
      if ( v5 == 1 || (*(_BYTE *)(v4 + 992) & 1) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)CurrentThread + 344, 1u);
        sub_1402EF5FC((__int64)CurrentThread);
        sub_1402AC800((__int64)CurrentThread);
        sub_1407A0088(a2);
        __debugbreak();
      }
    }
    else
    {
      sub_1406E3BE0(v13, v9);
    }
    goto LABEL_16;
  }
  if ( v5 != 1 && (*(_BYTE *)(v4 + 992) & 1) == 0 || (*(_DWORD *)(v4 + 2172) & 1) != 0 )
    return 3221225659LL;
  --*((_WORD *)CurrentThread + 242);
  v10 = (volatile signed __int64 *)(v4 + 1080);
  ExAcquirePushLockExclusiveEx(v4 + 1080, 0LL);
  _m_prefetchw((const void *)(v4 + 1124));
  v11 = *(_DWORD *)(v4 + 1124);
  do
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 1124), v11 | 0x40000000, v11);
  }
  while ( v12 != v11 );
  if ( (v11 & 0x40000008) == 0 )
  {
    *((_DWORD *)CurrentThread + 345) |= 0x40u;
    if ( *(_DWORD *)(v4 + 2004) == 259 )
      *(_DWORD *)(v4 + 2004) = a2;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4 + 1080);
    sub_1402AFC00(v4 + 1080);
    v9 = sub_1407E6274(v4);
LABEL_16:
    sub_1402F9540((__int64)CurrentThread);
    return v9;
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4 + 1080);
  sub_1402AFC00(v4 + 1080);
  sub_1402AC800((__int64)CurrentThread);
  sub_14079F130((__int64)CurrentThread, a2, 1);
  return 0LL;
}
