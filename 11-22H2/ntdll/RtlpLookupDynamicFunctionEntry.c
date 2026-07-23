/*
 * XREFs of RtlpLookupDynamicFunctionEntry @ 0x18006D7E8
 * Callers:
 *     RtlLookupFunctionEntry @ 0x180020960 (RtlLookupFunctionEntry.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpLookupDynamicFunctionEntry(unsigned __int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  int v5; // ebx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  unsigned int *v9; // r14
  __int64 v10; // rbp
  int v11; // edx
  unsigned __int64 v12; // rsi
  unsigned int *v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 result; // rax
  __int64 (__fastcall *v16)(unsigned __int64, __int64); // rdi
  __int64 v17; // rbx
  _QWORD *v18; // rax
  unsigned int v19; // edx
  unsigned __int64 v20; // rsi
  int v21; // r8d
  int i; // r9d
  int v23; // edx

  RtlAcquireSRWLockShared(&RtlpDynamicFunctionTableLock);
  v4 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  v5 = 0;
  while ( v4 )
  {
    if ( a1 < *(v4 - 7) )
    {
      v4 = (_QWORD *)*v4;
    }
    else
    {
      if ( a1 < *(v4 - 6) )
        break;
      v4 = (_QWORD *)v4[1];
    }
  }
  v6 = v4 - 11;
  if ( !v4 )
  {
    v7 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
    while ( v7 )
    {
      if ( a1 < *(v7 - 10) )
      {
        v7 = (_QWORD *)*v7;
      }
      else
      {
        if ( a1 < *(v7 - 9) )
          break;
        v7 = (_QWORD *)v7[1];
      }
    }
    v6 = v7 - 14;
    if ( !v7 )
    {
      v8 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
      while ( v8 )
      {
        if ( a1 < *(v8 - 7) )
        {
          v8 = (_QWORD *)*v8;
        }
        else
        {
          if ( a1 < *(v8 - 6) )
            break;
          v8 = (_QWORD *)v8[1];
        }
      }
      v6 = v8 - 11;
      if ( !v8 )
      {
        v18 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
        while ( v18 )
        {
          if ( a1 >= *(v18 - 10) )
          {
            if ( a1 < *(v18 - 9) )
              break;
            v18 = (_QWORD *)v18[1];
          }
          else
          {
            v18 = (_QWORD *)*v18;
          }
        }
        v6 = v18 - 14;
        if ( !v18 )
        {
LABEL_41:
          RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
          return 0LL;
        }
      }
    }
  }
  v9 = (unsigned int *)v6[2];
  v10 = v6[6];
  if ( *((_DWORD *)v6 + 20) == 3 || !*((_DWORD *)v6 + 20) )
  {
    v11 = *((_DWORD *)v6 + 21);
    if ( !v11 )
      goto LABEL_33;
    v12 = a1 - v10;
    v13 = &v9[3 * (v11 - 1)];
    v14 = *v13;
    if ( v12 < v14 )
    {
      v21 = v11 - 2;
      for ( i = 0; v21 >= i; LODWORD(v14) = *v13 )
      {
        v23 = (v21 + i) >> 1;
        v13 = &v9[3 * v23];
        if ( v12 >= *v13 )
        {
          LODWORD(v14) = *v13;
          if ( v12 < v13[3] )
            break;
          i = v23 + 1;
        }
        else
        {
          v21 = v23 - 1;
        }
      }
    }
    if ( v12 < (unsigned int)v14 || v12 >= v13[1] )
LABEL_33:
      v13 = 0LL;
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    if ( v13 )
      *a2 = v10;
    return (__int64)v13;
  }
  else
  {
    if ( *((_DWORD *)v6 + 20) != 1 )
    {
      v16 = (__int64 (__fastcall *)(unsigned __int64, __int64))v6[7];
      v17 = v6[8];
      RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
      *a2 = v10;
      return v16(a1, v17);
    }
    v19 = *((_DWORD *)v6 + 21);
    v20 = a1 - v10;
    if ( !v19 )
      goto LABEL_41;
    while ( v20 < *v9 || v20 >= v9[1] )
    {
      v9 += 3;
      if ( ++v5 >= v19 )
        goto LABEL_41;
    }
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    result = (__int64)v9;
    *a2 = v10;
  }
  return result;
}
