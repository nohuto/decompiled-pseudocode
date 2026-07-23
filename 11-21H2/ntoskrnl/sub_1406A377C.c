/*
 * XREFs of sub_1406A377C @ 0x1406A377C
 * Callers:
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 *     sub_1406A36D0 @ 0x1406A36D0 (sub_1406A36D0.c)
 *     sub_1406FD4A0 @ 0x1406FD4A0 (sub_1406FD4A0.c)
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 * Callees:
 *     sub_14022C984 @ 0x14022C984 (sub_14022C984.c)
 *     sub_14022CA54 @ 0x14022CA54 (sub_14022CA54.c)
 *     sub_14022CB60 @ 0x14022CB60 (sub_14022CB60.c)
 *     sub_14022CE0C @ 0x14022CE0C (sub_14022CE0C.c)
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140597BA8 @ 0x140597BA8 (sub_140597BA8.c)
 *     sub_140597C48 @ 0x140597C48 (sub_140597C48.c)
 *     sub_1406A3A68 @ 0x1406A3A68 (sub_1406A3A68.c)
 *     sub_1406A443C @ 0x1406A443C (sub_1406A443C.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 */

__int64 __fastcall sub_1406A377C(__int64 a1, LARGE_INTEGER *a2, int a3)
{
  ULONG_PTR v6; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r12
  NTSTATUS v11; // esi
  __int64 v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  int v15; // eax
  unsigned __int64 v17; // rax
  struct _FILE_OBJECT *v18; // r14
  int v19; // eax
  struct _KTHREAD *CurrentThread; // rsi
  LARGE_INTEGER *v21; // rcx
  bool v22; // zf
  unsigned __int64 v23; // rax
  _OWORD v24[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]
  LARGE_INTEGER FileSize; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp+58h] BYREF

  FileSize.QuadPart = 0LL;
  memset(v24, 0, sizeof(v24));
  v25 = 0LL;
  v6 = sub_140287970(a1);
  v7 = v6;
  if ( (*(_DWORD *)(v6 + 56) & 0x420) != 0 || !*(_QWORD *)(v6 + 64) )
    return 3221225607LL;
  if ( a2->QuadPart <= 0x3FFFFFFFFFF000uLL )
  {
    v8 = *(_QWORD *)v6;
    v9 = a2->QuadPart + 4095;
    DWORD2(v24[0]) = 16;
    v10 = v9 >> 12;
    sub_14022CA54(v6, (__int64)v24);
    if ( (*(_DWORD *)(v7 + 56) & 0x8000) == 0 )
    {
      v23 = *(_QWORD *)(a1 + 48);
      if ( a2->QuadPart <= v23 )
      {
        a2->QuadPart = v23;
        sub_14022C984(v7, (__int64)v24);
        return 0LL;
      }
    }
    if ( a3 )
      goto LABEL_6;
    sub_14022C984(v7, (__int64)v24);
    v17 = sub_140281750(v7);
    DWORD2(v24[0]) = 32;
    v18 = (struct _FILE_OBJECT *)v17;
    sub_14022CA54(v7, (__int64)v24);
    v11 = FsRtlGetFileSize(v18, &FileSize);
    if ( v11 >= 0 )
    {
      if ( a2->QuadPart <= (unsigned __int64)FileSize.QuadPart )
      {
LABEL_20:
        if ( *(_QWORD *)(v8 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          --*((_WORD *)CurrentThread + 243);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F110, 0LL);
          v21 = *(LARGE_INTEGER **)(v8 + 32);
          if ( v21 )
            *v21 = FileSize;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_140C4F110);
          sub_1402AFC00((ULONG_PTR)&qword_140C4F110);
          v22 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
          if ( v22 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
            KiCheckForKernelApcDelivery();
        }
        sub_14022C984(v7, (__int64)v24);
        sub_140280D08(v7, (unsigned __int64)v18);
        DWORD2(v24[0]) = 16;
        sub_14022CA54(v7, (__int64)v24);
LABEL_6:
        v11 = 0;
        BugCheckParameter2 = 0LL;
        v12 = sub_14022CB60(v7, 0);
        v13 = *(unsigned int *)(v8 + 8) | ((unsigned __int64)(*(_WORD *)(v8 + 12) & 0x3FF) << 32);
        if ( v10 <= v13 )
        {
          *(LARGE_INTEGER *)(a1 + 48) = *a2;
          if ( (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), -1LL, -1LL) < a2->QuadPart )
          {
            _InterlockedExchange64((volatile __int64 *)(v8 + 24), a2->QuadPart);
            sub_14022CE0C(v12, a2, 0);
          }
        }
        else
        {
          v14 = v10 - v13;
          if ( v14 <= (*(_DWORD *)(v12 + 52) & 0x3FFFFFFFu) )
          {
            if ( (*(_BYTE *)(v7 + 62) & 0xC) != 0 && *(_QWORD *)(v12 + 8) )
            {
              sub_140597BA8((_DWORD *)v12);
              BugCheckParameter2 = v12;
            }
            v15 = sub_14022CE0C(v12, a2, v14);
          }
          else
          {
            v15 = sub_1406A3A68(
                    v12,
                    (_DWORD)a2,
                    *(_DWORD *)(v12 + 52) & 0x3FFFFFFF,
                    (unsigned int)v14 - (*(_DWORD *)(v12 + 52) & 0x3FFFFFFF),
                    (__int64)&BugCheckParameter2);
          }
          v11 = v15;
          if ( v15 >= 0 )
          {
            v11 = 0;
            _InterlockedExchange64((volatile __int64 *)(v8 + 24), a2->QuadPart);
            *(LARGE_INTEGER *)(a1 + 48) = *a2;
          }
        }
        sub_14022C984(v7, (__int64)v24);
        if ( BugCheckParameter2 )
          return (unsigned int)sub_140597C48((_QWORD *)BugCheckParameter2);
        return (unsigned int)v11;
      }
      if ( (*(_DWORD *)(a1 + 60) & 0x44) != 0 )
      {
        FileSize = *a2;
        v19 = sub_1406A443C(v18);
        if ( v19 >= 0 )
          goto LABEL_20;
        v11 = v19;
      }
      else
      {
        v11 = -1073741689;
      }
    }
    sub_14022C984(v7, (__int64)v24);
    sub_140280D08(v7, (unsigned __int64)v18);
    return (unsigned int)v11;
  }
  return 3221225536LL;
}
