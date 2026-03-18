/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x1406BE544
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x1406BE3A0 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x1407D7178 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402284C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     RtlRbRemoveNode @ 0x14024B930 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14024CCC0 (RtlRbInsertNodeEx.c)
 *     RtlUIntAdd @ 0x1402504DC (RtlUIntAdd.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     strnlen @ 0x1403DB5C0 (strnlen.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1406BE7AC (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BE810 (EtwpAddRegEntryToGroup.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1406C01C0 (EtwpReleaseProviderTraitsReference.c)
 *     TraitsCompare @ 0x1407BCB5C (TraitsCompare.c)
 *     AddDecodeGuidToSessions @ 0x1407E9A20 (AddDecodeGuidToSessions.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const char *P,
        unsigned int a6,
        PFAST_MUTEX FastMutex,
        __int64 a8)
{
  _DWORD *v8; // rsi
  char v9; // r14
  char *v11; // r13
  __int16 v12; // r12
  NTSTATUS v13; // ebx
  __int64 v14; // rcx
  bool v15; // zf
  unsigned int v16; // edx
  bool v17; // bl
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // eax
  unsigned __int64 v21; // rax
  _OWORD *ProviderGroupFromTraits; // rax
  UINT puResult; // [rsp+30h] [rbp-78h] BYREF
  int v25; // [rsp+34h] [rbp-74h]
  __int64 v26; // [rsp+38h] [rbp-70h]
  __int64 v27; // [rsp+40h] [rbp-68h]
  PKGUARDED_MUTEX Mutex[2]; // [rsp+48h] [rbp-60h] BYREF

  v8 = P;
  v9 = 0;
  v11 = (char *)P;
  v12 = 0;
  v26 = a3;
  v25 = a2;
  v27 = a1;
  Mutex[0] = FastMutex;
  puResult = 0;
  if ( a6 < 3 )
    goto LABEL_2;
  if ( *((unsigned __int16 *)P + 14) != a6 )
    goto LABEL_2;
  v14 = (unsigned int)strnlen(P + 30, a6 - 2) + 3;
  v15 = (_DWORD)v14 == a6;
  if ( (unsigned int)v14 > a6 )
    goto LABEL_2;
  if ( (unsigned int)v14 < a6 )
  {
    while ( (int)v14 + 2 <= a6 )
    {
      v16 = *(unsigned __int16 *)&P[v14 + 28];
      if ( v16 < 3 )
        break;
      v14 = v16 + (unsigned int)v14;
      v15 = (_DWORD)v14 == a6;
      if ( (unsigned int)v14 >= a6 )
        goto LABEL_9;
    }
LABEL_2:
    v13 = -1073741566;
    goto LABEL_40;
  }
LABEL_9:
  if ( !v15 )
    goto LABEL_2;
  *(_OWORD *)P = 0LL;
  *((_QWORD *)P + 2) = 0LL;
  v17 = 1;
  *((_DWORD *)P + 6) = 1;
  ExAcquireFastMutex(FastMutex);
  if ( (*(_BYTE *)(a8 + 8) & 1) != 0 )
  {
    v18 = *(_QWORD *)a8;
    if ( !*(_QWORD *)a8 )
    {
LABEL_15:
      v18 = 0LL;
      v17 = 0;
      goto LABEL_27;
    }
    v19 = a8 ^ v18;
  }
  else
  {
    v19 = *(_QWORD *)a8;
    v18 = *(_QWORD *)a8;
  }
  if ( !v19 )
    goto LABEL_15;
  if ( v18 )
  {
    while ( 1 )
    {
      v20 = TraitsCompare(P, v18);
      if ( v20 <= 0 )
      {
        if ( v20 >= 0 )
        {
          v9 = 1;
          v8 = (_DWORD *)v18;
          v13 = RtlUIntAdd(*(_DWORD *)(v18 + 24), 1u, &puResult);
          if ( v13 >= 0 )
          {
            *(_DWORD *)(v18 + 24) = puResult;
            goto LABEL_28;
          }
          KeReleaseGuardedMutex(Mutex[0]);
          goto LABEL_40;
        }
        v21 = *(_QWORD *)v18;
        if ( !*(_QWORD *)v18 )
          break;
      }
      else
      {
        v21 = *(_QWORD *)(v18 + 8);
        if ( !v21 )
          goto LABEL_27;
      }
      v18 = v21;
    }
  }
  v17 = 0;
LABEL_27:
  RtlRbInsertNodeEx((unsigned __int64 *)a8, v18, v17, (unsigned __int64)P);
  v11 = 0LL;
LABEL_28:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), (signed __int64)v8, 0LL) )
  {
    if ( v9 )
    {
      --v8[6];
    }
    else
    {
      RtlRbRemoveNode((unsigned __int64 *)a8, (unsigned __int64)v8);
      v11 = (char *)v8;
    }
    v13 = -1073741823;
  }
  else
  {
    v13 = 0;
  }
  KeReleaseGuardedMutex(Mutex[0]);
  if ( !v13 )
  {
    if ( *((_WORD *)v8 + 14) == 22 && *(_DWORD *)((char *)v8 + 30) == 33559296 )
    {
      if ( (unsigned __int8)AddDecodeGuidToSessions(a4) )
        v12 = 1024;
    }
    else if ( !*(_QWORD *)(a4 + 40) )
    {
      *(_OWORD *)Mutex = 0LL;
      ProviderGroupFromTraits = (_OWORD *)EtwpGetProviderGroupFromTraits();
      if ( ProviderGroupFromTraits )
      {
        *(_OWORD *)Mutex = *ProviderGroupFromTraits;
        v13 = EtwpAddRegEntryToGroup(a4, (unsigned int)Mutex, v27, v25, v26);
        if ( v13 )
        {
          EtwpReleaseProviderTraitsReference(a4);
          goto LABEL_40;
        }
      }
    }
    _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v12 | 0x200);
  }
LABEL_40:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v13;
}
