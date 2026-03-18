/*
 * XREFs of PpmRegisterProfiles @ 0x140854E78
 * Callers:
 *     PdcPoPpmRegisterProfiles @ 0x140854E60 (PdcPoPpmRegisterProfiles.c)
 * Callees:
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     RtlStringCbLengthW @ 0x1402DCD64 (RtlStringCbLengthW.c)
 *     RtlStringCchCopyW @ 0x1402E0200 (RtlStringCchCopyW.c)
 *     RtlStringCchLengthW @ 0x1402E0AC4 (RtlStringCchLengthW.c)
 *     PpmResetProfileSettings @ 0x1403D6EC0 (PpmResetProfileSettings.c)
 *     PpmEventTraceProfiles @ 0x140855034 (PpmEventTraceProfiles.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmRegisterProfiles(unsigned __int8 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  NTSTATUS v5; // esi
  unsigned __int64 v6; // r11
  unsigned __int8 v7; // bl
  unsigned __int64 v8; // r12
  __int64 v9; // r11
  __int64 Pool2; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int8 v13; // r13
  __int64 v14; // r15
  __int64 v15; // r12
  unsigned __int64 v16; // rbp
  char v17; // al
  __int64 v18; // r11
  size_t pcbLength; // [rsp+70h] [rbp+18h] BYREF

  pcbLength = 0LL;
  v3 = a1;
  if ( a1 > 0x1Fu )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = a1;
    if ( is_mul_ok(a1, 0x21B0uLL) )
    {
      v5 = 0;
      v6 = (8624LL * a1 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
      v7 = 0;
      v8 = v6;
      if ( a1 )
      {
        while ( 1 )
        {
          v5 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(32LL * v7 + a2 + 8), 0x7FFFFFFFuLL, &pcbLength);
          if ( v5 < 0 )
            break;
          ++v7;
          v6 = pcbLength + 2 + v9;
          if ( v7 >= (unsigned __int8)v3 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        Pool2 = ExAllocatePool2(64LL, v6, 1716342864LL);
        v11 = Pool2;
        if ( Pool2 )
        {
          v12 = v8 + Pool2;
          v13 = 0;
          if ( (_BYTE)v3 )
          {
            v14 = a2 + 8;
            v15 = v11 + 32;
            v16 = v12;
            do
            {
              ++v13;
              *(_OWORD *)(v15 - 20) = *(_OWORD *)*(_QWORD *)(v14 - 8);
              v17 = *(_BYTE *)(v14 + 8);
              *(_QWORD *)(v15 + 8576) = -1LL;
              *(_BYTE *)v15 = v17;
              *(_QWORD *)(v15 - 32) = v16;
              *(_BYTE *)(v15 - 24) = v13;
              RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)v14, 0x7FFFFFFFuLL, &pcbLength);
              RtlStringCchCopyW(*(NTSTRSAFE_PWSTR *)(v15 - 32), pcbLength + 1, *(NTSTRSAFE_PCWSTR *)v14);
              *(_QWORD *)(v14 + 16) = v15 - 32;
              v16 += 2 * v18 + 2;
              v15 += 8624LL;
              v14 += 32LL;
            }
            while ( v13 < (unsigned __int8)v3 );
            v4 = v3;
          }
          PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
          PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
          PpmProfiles = v11;
          PpmProfileCount = v3;
          if ( (_BYTE)v3 )
          {
            do
            {
              PpmResetProfileSettings(v11);
              v11 += 8624LL;
              --v4;
            }
            while ( v4 );
          }
          PpmEventTraceProfiles(0LL);
          PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
          PpmReleaseLock(&PpmPerfPolicyLock);
          PpmProfileStatus |= 1u;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  return (unsigned int)v5;
}
