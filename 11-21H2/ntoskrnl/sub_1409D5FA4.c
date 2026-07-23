/*
 * XREFs of sub_1409D5FA4 @ 0x1409D5FA4
 * Callers:
 *     sub_1409D5C3C @ 0x1409D5C3C (sub_1409D5C3C.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140260C2C @ 0x140260C2C (sub_140260C2C.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405FD93C @ 0x1405FD93C (sub_1405FD93C.c)
 *     sub_1409D5DE0 @ 0x1409D5DE0 (sub_1409D5DE0.c)
 *     sub_1409D5E24 @ 0x1409D5E24 (sub_1409D5E24.c)
 */

__int64 __fastcall sub_1409D5FA4(ULONG_PTR BugCheckParameter2, _WORD *Src, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  PVOID v7; // rax
  __int64 v8; // rdi
  int v9; // esi
  void *v10; // rcx
  int v11; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  HANDLE v15; // r8
  __int64 v16; // rcx
  _WORD *v17; // rax
  __int16 v18; // cx
  UNICODE_STRING ValueName; // [rsp+20h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  KeyHandle = 0LL;
  v4 = -1LL;
  ValueName = 0LL;
  do
    ++v4;
  while ( Src[v4] );
  v7 = sub_140260C2C(a3 + 42 + 2 * (_DWORD)v4, 0x474B6D73u);
  v8 = (__int64)v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  memset(v7, 0, (unsigned int)(v3 + 42 + 2 * v4));
  *(_QWORD *)(v8 + 24) = v8 + 40;
  v10 = (void *)(v3 + v8 + 40);
  *(_DWORD *)(v8 + 32) = v3;
  *(_QWORD *)(v8 + 16) = v10;
  memmove(v10, Src, 2LL * (unsigned int)v4);
  if ( !*(_QWORD *)(BugCheckParameter2 + 32) )
    goto LABEL_8;
  v11 = sub_1409D5E24((UNICODE_STRING *)(BugCheckParameter2 + 24), v8, &KeyHandle);
  v9 = v11;
  if ( v11 >= 0 )
  {
LABEL_9:
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    if ( !sub_1409D5DE0(BugCheckParameter2, Src) )
    {
      v13 = (__int64 *)(BugCheckParameter2 + 8);
      v14 = *(_QWORD *)(BugCheckParameter2 + 8);
      if ( *(_QWORD *)(v14 + 8) != BugCheckParameter2 + 8 )
        __fastfail(3u);
      v15 = KeyHandle;
      *(_QWORD *)v8 = v14;
      *(_QWORD *)(v8 + 8) = v13;
      *(_QWORD *)(v14 + 8) = v8;
      *v13 = v8;
      if ( v15 )
      {
        if ( *(_QWORD *)(v8 + 16) )
        {
          v16 = 0x7FFFLL;
          v17 = *(_WORD **)(v8 + 16);
          while ( *v17 )
          {
            ++v17;
            if ( !--v16 )
              goto LABEL_19;
          }
          v18 = 2 * v16;
          ValueName.Buffer = *(wchar_t **)(v8 + 16);
          ValueName.Length = -2 - v18;
          ValueName.MaximumLength = -v18;
        }
LABEL_19:
        ZwDeleteValueKey(v15, &ValueName);
      }
      v8 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    sub_1402AFC00(BugCheckParameter2);
    KeLeaveCriticalRegion();
    v9 = 0;
    goto LABEL_24;
  }
  if ( v11 == -1073741772 )
  {
LABEL_8:
    v9 = sub_1405FD93C(*(_QWORD *)(v8 + 24));
    if ( v9 >= 0 )
      goto LABEL_9;
  }
LABEL_24:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v8 )
    SeFreePrivileges((PPRIVILEGE_SET)v8);
  return (unsigned int)v9;
}
