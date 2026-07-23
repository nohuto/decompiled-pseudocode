/*
 * XREFs of sub_1408536D4 @ 0x1408536D4
 * Callers:
 *     sub_1406DC120 @ 0x1406DC120 (sub_1406DC120.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1403A55A0 @ 0x1403A55A0 (sub_1403A55A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlDowncaseUnicodeString @ 0x1406B4AE0 (RtlDowncaseUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140A6F300 @ 0x140A6F300 (sub_140A6F300.c)
 */

__int64 __fastcall sub_1408536D4(_OWORD *a1)
{
  char v1; // dl
  int v2; // r14d
  PVOID PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbx
  int v7; // r12d
  char *v8; // rsi
  int v9; // ebx
  int v10; // edi
  int v11; // eax
  struct _KTHREAD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  int v18; // r12d
  int v19; // ebx
  int v20; // esi
  int v21; // eax
  int v22; // esi
  int v23; // r14d
  int v24; // ebx
  __int64 v25; // rbx
  char v26; // r13
  SIZE_T v27; // rdx
  _DWORD *v28; // rbx
  PVOID P[2]; // [rsp+28h] [rbp-A0h] BYREF
  void *Src[2]; // [rsp+38h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-80h] BYREF
  _QWORD Buf1[4]; // [rsp+70h] [rbp-58h] BYREF

  *(_OWORD *)P = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)Src = 0LL;
  v1 = *((_BYTE *)KeGetCurrentThread() + 562);
  *(_OWORD *)Src = *a1;
  if ( v1 == 1 )
  {
    if ( ((__int64)Src[1] & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)Src[1] + 2 > 0x7FFFFFFF0000LL || (char *)Src[1] + 2 < Src[1] )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v2 = 0;
  if ( !LOWORD(Src[0]) || ((__int64)Src[0] & 1) != 0 || (BYTE2(Src[0]) & 1) != 0 || WORD1(Src[0]) < LOWORD(Src[0]) )
    return 3221225485LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]), 0x46644B55u);
  P[1] = PoolWithTag;
  if ( PoolWithTag )
  {
    LOWORD(P[0]) = Src[0];
    WORD1(P[0]) = Src[0];
    memmove(PoolWithTag, Src[1], LOWORD(Src[0]));
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]), 0x46644B55u);
    if ( DestinationString.Buffer )
    {
      *(_DWORD *)&DestinationString.Length = P[0];
      RtlDowncaseUnicodeString(&DestinationString, (PCUNICODE_STRING)P, 0);
      sub_1403A55A0((__int64)DestinationString.Buffer, DestinationString.Length, (__int64)Buf1);
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( !qword_140C158A8 )
        goto LABEL_28;
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v6 = sub_140347C10((__int64)&qword_140C158B0, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C158B0, 17LL, 0LL) )
        sub_14029F350((signed __int64 *)&qword_140C158B0, 0, v6, (__int64)&qword_140C158B0);
      if ( v6 )
        *(_BYTE *)(v6 + 18) = 1;
      v7 = 0;
      v8 = (char *)qword_140C158A8;
      if ( qword_140C158A8 )
      {
        v9 = *(_DWORD *)qword_140C158A8 - 1;
        if ( v9 < 0 )
        {
LABEL_24:
          v2 = 0;
          goto LABEL_25;
        }
        while ( 1 )
        {
          v10 = (v2 + v9) >> 1;
          v11 = memcmp(Buf1, &v8[8 * v10 + 8], 8uLL);
          if ( v11 >= 0 )
          {
            v2 = 0;
            if ( v11 <= 0 )
            {
              v7 = 1;
              break;
            }
            v2 = v10 + 1;
          }
          else
          {
            if ( !v10 )
              goto LABEL_24;
            v9 = v10 - 1;
          }
          if ( v9 < v2 )
            goto LABEL_24;
        }
      }
LABEL_25:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C158B0, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140C158B0);
      sub_1402AFC00((ULONG_PTR)&qword_140C158B0);
      sub_1402F9540((__int64)KeGetCurrentThread());
      if ( !v7 )
      {
LABEL_28:
        v12 = KeGetCurrentThread();
        --*((_WORD *)v12 + 242);
        v13 = sub_140347C10((__int64)&qword_140C158B0, 0LL);
        v14 = v13;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C158B0, 0LL) )
          sub_14029F120(&qword_140C158B0, v13, (__int64)&qword_140C158B0);
        if ( v14 )
          *(_BYTE *)(v14 + 18) = 1;
        v16 = -1LL;
        if ( qword_140C158A8 )
        {
          if ( *(int *)qword_140C158A8 >= 0x1FFFFFFF )
            goto LABEL_81;
          v17 = *((int *)qword_140C158A8 + 1);
          if ( *(_DWORD *)qword_140C158A8 != (_DWORD)v17 )
          {
LABEL_35:
            if ( v16 )
            {
              if ( v16 == -1 )
              {
                v16 = (__int64)qword_140C158A8;
              }
              else
              {
                *(_DWORD *)v16 = 0;
                *(_DWORD *)(v16 + 4) = 2048;
                v28 = qword_140C158A8;
                if ( qword_140C158A8 )
                {
                  memmove((void *)v16, qword_140C158A8, 8LL * *(int *)qword_140C158A8 + 16);
                  *(_DWORD *)(v16 + 4) = 2 * v28[1];
                  ExFreePoolWithTag(v28, 0);
                }
                qword_140C158A8 = (PVOID)v16;
              }
              v18 = 0;
              v19 = *(_DWORD *)v16 - 1;
              if ( v19 >= 0 )
              {
                do
                {
                  v20 = (v18 + v19) >> 1;
                  v21 = memcmp(Buf1, (const void *)(v16 + 8 * (v20 + 1LL)), 8uLL);
                  if ( v21 >= 0 )
                  {
                    if ( v21 <= 0 )
                    {
                      v2 = 1;
                      break;
                    }
                    v18 = v20 + 1;
                  }
                  else
                  {
                    if ( !v20 )
                      break;
                    v19 = v20 - 1;
                  }
                }
                while ( v19 >= v18 );
              }
              if ( v2 )
              {
                v22 = 255;
              }
              else
              {
                v22 = sub_140A6F300(P);
                if ( v22 < 0
                  || (DbgPrintEx(0x66u, 2u, "ExpKdPullRemoteFileForUser: Pulled %wZ from kd\n", P), dword_140C10D38) )
                {
                  if ( v19 < v18 )
                  {
                    v18 = 0;
                    v19 = *(_DWORD *)v16 - 1;
                    if ( !*(_DWORD *)v16 )
                    {
                      *(_QWORD *)(v16 + 8) = Buf1[0];
                      *(_DWORD *)v16 = 1;
                      v16 = 0LL;
                    }
                  }
                  if ( v16 )
                  {
                    v23 = 0;
                    if ( v18 >= 0 )
                      v23 = v18;
                    v24 = v19 + 1;
                    while ( v23 < v24 && memcmp(Buf1, (const void *)(v16 + 8 * (v23 + 1LL)), 8uLL) >= 0 )
                      ++v23;
                    v25 = v16 + 8LL * v23;
                    memmove((void *)(v16 + 8 * (v23 + 1 + 1LL)), (const void *)(v25 + 8), 8LL * (*(_DWORD *)v16 - v23));
                    ++*(_DWORD *)v16;
                    *(_QWORD *)(v25 + 8) = Buf1[0];
                  }
                }
              }
              goto LABEL_51;
            }
LABEL_81:
            v22 = -1073741670;
LABEL_51:
            v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C158B0, 0xFFFFFFFFFFFFFFFFuLL);
            if ( (v26 & 2) != 0 && (v26 & 4) == 0 )
              ExfTryToWakePushLock(&qword_140C158B0);
            sub_1402AFC00((ULONG_PTR)&qword_140C158B0);
            sub_1402F9540((__int64)KeGetCurrentThread());
            goto LABEL_53;
          }
          v27 = 16 * (v17 + 1);
        }
        else
        {
          v27 = 16400LL;
        }
        v16 = (__int64)ExAllocatePoolWithTag(PagedPool, v27, 0x66644B55u);
        goto LABEL_35;
      }
      v22 = 255;
    }
    else
    {
      v22 = -1073741670;
    }
LABEL_53:
    ExFreePoolWithTag(P[1], 0);
    return (unsigned int)v22;
  }
  return 3221225626LL;
}
