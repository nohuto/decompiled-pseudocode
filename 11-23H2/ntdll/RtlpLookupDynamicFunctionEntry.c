/*
 * XREFs of RtlpLookupDynamicFunctionEntry @ 0x18006D7E8
 * Callers:
 *     RtlLookupFunctionEntry @ 0x180020780 (RtlLookupFunctionEntry.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpLookupDynamicFunctionEntry(
        unsigned __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _QWORD *v6; // rax
  int v7; // ebx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  unsigned int *v11; // r14
  __int64 v12; // rbp
  int v13; // edx
  unsigned __int64 v14; // rsi
  unsigned int *v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 result; // rax
  __int64 (__fastcall *v18)(unsigned __int64, __int64); // rdi
  __int64 v19; // rbx
  _QWORD *v20; // rax
  unsigned int v21; // edx
  unsigned __int64 v22; // rsi
  int v23; // r8d
  int i; // r9d
  int v25; // edx

  RtlAcquireSRWLockShared(&RtlpDynamicFunctionTableLock, (unsigned __int64)a2, a3, a4);
  v6 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  v7 = 0;
  while ( v6 )
  {
    if ( a1 < *(v6 - 7) )
    {
      v6 = (_QWORD *)*v6;
    }
    else
    {
      if ( a1 < *(v6 - 6) )
        break;
      v6 = (_QWORD *)v6[1];
    }
  }
  v8 = v6 - 11;
  if ( !v6 )
  {
    v9 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
    while ( v9 )
    {
      if ( a1 < *(v9 - 10) )
      {
        v9 = (_QWORD *)*v9;
      }
      else
      {
        if ( a1 < *(v9 - 9) )
          break;
        v9 = (_QWORD *)v9[1];
      }
    }
    v8 = v9 - 14;
    if ( !v9 )
    {
      v10 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
      while ( v10 )
      {
        if ( a1 < *(v10 - 7) )
        {
          v10 = (_QWORD *)*v10;
        }
        else
        {
          if ( a1 < *(v10 - 6) )
            break;
          v10 = (_QWORD *)v10[1];
        }
      }
      v8 = v10 - 11;
      if ( !v10 )
      {
        v20 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
        while ( v20 )
        {
          if ( a1 >= *(v20 - 10) )
          {
            if ( a1 < *(v20 - 9) )
              break;
            v20 = (_QWORD *)v20[1];
          }
          else
          {
            v20 = (_QWORD *)*v20;
          }
        }
        v8 = v20 - 14;
        if ( !v20 )
        {
LABEL_41:
          RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
          return 0LL;
        }
      }
    }
  }
  v11 = (unsigned int *)v8[2];
  v12 = v8[6];
  if ( *((_DWORD *)v8 + 20) == 3 || !*((_DWORD *)v8 + 20) )
  {
    v13 = *((_DWORD *)v8 + 21);
    if ( !v13 )
      goto LABEL_33;
    v14 = a1 - v12;
    v15 = &v11[3 * (v13 - 1)];
    v16 = *v15;
    if ( v14 < v16 )
    {
      v23 = v13 - 2;
      for ( i = 0; v23 >= i; LODWORD(v16) = *v15 )
      {
        v25 = (v23 + i) >> 1;
        v15 = &v11[3 * v25];
        if ( v14 >= *v15 )
        {
          LODWORD(v16) = *v15;
          if ( v14 < v15[3] )
            break;
          i = v25 + 1;
        }
        else
        {
          v23 = v25 - 1;
        }
      }
    }
    if ( v14 < (unsigned int)v16 || v14 >= v15[1] )
LABEL_33:
      v15 = 0LL;
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    if ( v15 )
      *a2 = v12;
    return (__int64)v15;
  }
  else
  {
    if ( *((_DWORD *)v8 + 20) != 1 )
    {
      v18 = (__int64 (__fastcall *)(unsigned __int64, __int64))v8[7];
      v19 = v8[8];
      RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
      *a2 = v12;
      return v18(a1, v19);
    }
    v21 = *((_DWORD *)v8 + 21);
    v22 = a1 - v12;
    if ( !v21 )
      goto LABEL_41;
    while ( v22 < *v11 || v22 >= v11[1] )
    {
      v11 += 3;
      if ( ++v7 >= v21 )
        goto LABEL_41;
    }
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    result = (__int64)v11;
    *a2 = v12;
  }
  return result;
}
