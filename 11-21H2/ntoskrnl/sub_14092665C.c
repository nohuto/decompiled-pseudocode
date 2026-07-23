/*
 * XREFs of sub_14092665C @ 0x14092665C
 * Callers:
 *     sub_140692780 @ 0x140692780 (sub_140692780.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140690FEC @ 0x140690FEC (sub_140690FEC.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14092665C(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  int v6; // eax
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // ebx
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  _WORD *PoolWithQuotaTag; // rsi
  int v15; // edi
  void *Src[2]; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v18; // [rsp+50h] [rbp-20h] BYREF
  __int128 v19; // [rsp+60h] [rbp-10h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  *(_OWORD *)Src = 0LL;
  if ( a2 < 0x20 )
    return (unsigned int)-1073741811;
  v6 = *(unsigned __int16 *)(a1 + 8);
  if ( (v6 & 1) != 0 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned __int16 *)(a1 + 10);
  if ( (v7 & 1) != 0 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned __int16 *)(a1 + 12);
  if ( (v8 & 1) != 0 )
    return (unsigned int)-1073741811;
  v9 = 0;
  if ( !(_WORD)v6 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v7 )
    return (unsigned int)-1073741811;
  v10 = v6 + 24;
  v11 = v10 + v7;
  if ( v10 > v11 || v11 > v11 + v8 || a2 < v11 + v8 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( SeSinglePrivilegeCheck(stru_140D3CA58, a3) && SeSinglePrivilegeCheck(stru_140D3CA70, a3) )
  {
    v12 = *(unsigned __int16 *)(a1 + 8);
    Src[1] = (void *)(a1 + 24);
    WORD1(Src[0]) = v12;
    LOWORD(Src[0]) = v12;
    v13 = *(unsigned __int16 *)(a1 + 10);
    WORD1(v19) = v13;
    LOWORD(v19) = v13;
    *((_QWORD *)&v19 + 1) = a1 + 24 + 2 * (v12 >> 1);
    v18.Buffer = (wchar_t *)(*((_QWORD *)&v19 + 1) + 2 * (v13 >> 1));
    v18.MaximumLength = *(_WORD *)(a1 + 12);
    v18.Length = v18.MaximumLength;
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v12 + 10, 0x67655256u);
    if ( PoolWithQuotaTag )
    {
      PoolWithQuotaTag[4] = Src[0];
      memmove(PoolWithQuotaTag + 5, Src[1], LOWORD(Src[0]));
      v15 = sub_140690FEC(
              (PCUNICODE_STRING)Src,
              (__int64)&v19,
              &v18,
              *(_DWORD *)a1,
              *(_DWORD *)(a1 + 4) & 1,
              (*(_DWORD *)(a1 + 4) >> 1) & 1,
              0,
              *(void **)(a1 + 16));
      if ( v15 < 0 )
      {
        ExFreePoolWithTag(PoolWithQuotaTag, 0);
        return (unsigned int)v15;
      }
      else
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D01850, 0LL);
        *(_QWORD *)PoolWithQuotaTag = qword_140D01848;
        qword_140D01848 = (__int64)PoolWithQuotaTag;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D01850, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140D01850);
        sub_1402AFC00((ULONG_PTR)&qword_140D01850);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741727;
  }
  return v9;
}
