/*
 * XREFs of sub_1406D6228 @ 0x1406D6228
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlLockBootStatusData @ 0x1406D6540 (RtlLockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x1406D66F0 (RtlGetSetBootStatusData.c)
 *     sub_1406D6A3C @ 0x1406D6A3C (sub_1406D6A3C.c)
 *     RtlUnlockBootStatusData @ 0x1406D6AD0 (RtlUnlockBootStatusData.c)
 *     sub_1406D6C24 @ 0x1406D6C24 (sub_1406D6C24.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406D6228(__int64 a1, __int64 a2)
{
  char *Pool2; // r14
  char v4; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  NTSTATUS SetBootStatusData; // esi
  __int64 j; // r15
  __int64 v10; // r11
  char *v11; // rsi
  unsigned __int64 v12; // rcx
  size_t v13; // r15
  size_t v14; // rax
  __int64 i; // rdx
  char *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  ULONG Size; // [rsp+30h] [rbp-58h] BYREF
  int Size_4; // [rsp+34h] [rbp-54h]
  unsigned int v22; // [rsp+38h] [rbp-50h] BYREF
  ULONG ReturnLength; // [rsp+3Ch] [rbp-4Ch] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-48h] BYREF
  char *v25; // [rsp+48h] [rbp-40h]
  RTL_BSD_ITEM_TYPE *v26; // [rsp+50h] [rbp-38h]
  __int64 v27; // [rsp+58h] [rbp-30h]
  char v29; // [rsp+A8h] [rbp+20h]

  ReturnLength = 0;
  v22 = 0;
  Size = 0;
  Pool2 = 0LL;
  FileHandle = 0LL;
  v29 = 0;
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v4 )
  {
    v12 = *(unsigned int *)(a1 + 8);
    v27 = (v12 * (unsigned __int128)0x18uLL) >> 64;
    v13 = 24 * v12;
    if ( is_mul_ok(v12, 0x18uLL) )
    {
      SetBootStatusData = 0;
    }
    else
    {
      v13 = -1LL;
      SetBootStatusData = -1073741675;
    }
    if ( SetBootStatusData < 0 )
      goto LABEL_7;
    Pool2 = (char *)ExAllocatePool2(256LL, v13, 544040269LL);
    v25 = Pool2;
    if ( !Pool2 )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_7;
    }
    if ( v13 )
    {
      v14 = *(_QWORD *)(a1 + 16);
      if ( (v14 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v14 + v13 > 0x7FFFFFFF0000LL || v14 + v13 < v14 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(Pool2, *(const void **)(a1 + 16), v13);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      Size_4 = i;
      if ( (unsigned int)i >= *(_DWORD *)(a1 + 8) )
        break;
      v16 = &Pool2[24 * i];
      v26 = (RTL_BSD_ITEM_TYPE *)v16;
      v17 = *((unsigned int *)v16 + 4);
      if ( (_DWORD)v17 )
      {
        v18 = *((_QWORD *)v16 + 1);
        v19 = v18 + v17;
        if ( v19 > 0x7FFFFFFF0000LL || v19 < v18 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    Pool2 = *(char **)(a1 + 16);
    v25 = Pool2;
  }
  v29 = 1;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1F610, 0LL);
  SetBootStatusData = RtlLockBootStatusData(&FileHandle);
  if ( SetBootStatusData >= 0 )
  {
    if ( !v4 || (LOBYTE(v6) = v4, SetBootStatusData = sub_1406D6C24(FileHandle, v6, 2LL), SetBootStatusData >= 0) )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        Size_4 = j;
        if ( (unsigned int)j >= *(_DWORD *)(a1 + 8) )
          break;
        v26 = (RTL_BSD_ITEM_TYPE *)&Pool2[24 * j];
        SetBootStatusData = sub_1406D6A3C(*(unsigned int *)v26, &v22, &Size);
        if ( SetBootStatusData < 0 )
          break;
        if ( *(_DWORD *)(v10 + 16) < Size )
        {
          SetBootStatusData = -1073741811;
          break;
        }
        v11 = (char *)&unk_140CE2080 + v22;
        memmove(v11, *(const void **)(v10 + 8), Size);
        SetBootStatusData = RtlGetSetBootStatusData(FileHandle, 0, *v26, v11, Size, &ReturnLength);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength;
      }
    }
  }
LABEL_7:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v29 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1F610, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C1F610);
    sub_1402AFC00((ULONG_PTR)&qword_140C1F610);
    KeLeaveCriticalRegion();
  }
  if ( v4 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)SetBootStatusData;
}
