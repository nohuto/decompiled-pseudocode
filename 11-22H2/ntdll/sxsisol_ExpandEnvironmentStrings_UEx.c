/*
 * XREFs of sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800E9BBC
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x18001D1D8 (sxsisol_SearchActCtxForDllName.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlExpandEnvironmentStrings_U @ 0x180059AD0 (RtlExpandEnvironmentStrings_U.c)
 *     RtlpEnsureBufferSize @ 0x18006EAF0 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall sxsisol_ExpandEnvironmentStrings_UEx(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  int v5; // ebx
  unsigned __int64 v6; // r8
  __int64 *v7; // rbx
  __int64 v8; // rcx
  unsigned __int16 v9; // cx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int16 *v12; // rbx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = a1;
  if ( a2 && a3 && a2 != a3 )
  {
    if ( *a2 )
    {
      v14 = 0LL;
      RtlEnterCriticalSection((__int64)&FastPebLock);
      v5 = RtlExpandEnvironmentStrings_U(0, a2, (__int64)&v14, &v15);
      if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741789 )
      {
        if ( (unsigned int)v15 > 0xFFFE || (v11 = (unsigned int)v15 + 4LL, v11 > 0xFFFE) )
        {
          v5 = -1073741562;
        }
        else
        {
          v12 = a3 + 16;
          if ( (a3 == (unsigned __int16 *)-16LL || v11 > *(_QWORD *)v12)
            && (int)RtlpEnsureBufferSize(0, (__int64)(a3 + 8), v11) < 0 )
          {
            v5 = -1073741801;
          }
          else
          {
            *((_QWORD *)a3 + 1) = *((_QWORD *)a3 + 2);
            a3[1] = *v12;
            v5 = RtlExpandEnvironmentStrings_U(0, a2, (__int64)a3, 0LL);
            if ( v5 >= 0 )
              v5 = 0;
          }
        }
      }
      RtlLeaveCriticalSection((__int64)&FastPebLock);
    }
    else
    {
      *a3 = 0;
      v6 = *a2 + 2LL;
      if ( v6 <= 0xFFFE )
      {
        v7 = (__int64 *)(a3 + 8);
        if ( (a3 == (unsigned __int16 *)-16LL || v6 > *((_QWORD *)a3 + 4))
          && (int)RtlpEnsureBufferSize(0, (__int64)(a3 + 8), v6) < 0 )
        {
          return (unsigned int)-1073741801;
        }
        else
        {
          v8 = *v7;
          *((_QWORD *)a3 + 1) = *v7;
          memmove((void *)(v8 + 2 * ((unsigned __int64)*a3 >> 1)), *((const void **)a2 + 1), *a2);
          v9 = *a3;
          a3[1] = *a2 + *a3 + 2;
          v10 = (unsigned __int16)(*a2 + v9);
          *a3 = v10;
          *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * (v10 >> 1)) = 0;
          return 0;
        }
      }
      else
      {
        return (unsigned int)-1073741562;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
