/*
 * XREFs of RtlpHpPerHeapStackTraceCleanup @ 0x1801151E0
 * Callers:
 *     RtlpHpStackTraceHeapDestroy @ 0x180057304 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpHpStackTraceHeapDisable @ 0x180115F50 (RtlpHpStackTraceHeapDisable.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x180056AB0 (RtlpHpMetadataFree.c)
 *     RtlRunOnceBeginInitialize @ 0x180059A60 (RtlRunOnceBeginInitialize.c)
 *     RtlStackDbStackRemove @ 0x180127BBC (RtlStackDbStackRemove.c)
 */

__int64 __fastcall RtlpHpPerHeapStackTraceCleanup(volatile signed __int64 *a1, int a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  _QWORD **v7; // rsi
  __int64 v8; // rbx
  __int64 *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbp
  _QWORD *i; // rcx
  __int128 v14[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  result = RtlRunOnceBeginInitialize(a1, 1, &v16);
  if ( (int)result >= 0 )
  {
    v6 = v16;
    v7 = *(_QWORD ***)(v16 + 24);
    v8 = (__int64)v7;
    while ( 1 )
    {
      v9 = (__int64 *)v8;
      if ( !v8 )
        break;
      v8 = *(_QWORD *)v8;
      if ( (v8 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v8 = *v9;
      if ( (v8 & 1) != 0 )
        break;
LABEL_16:
      result = v8;
      if ( !v8 )
        goto LABEL_11;
      v12 = v8;
      for ( i = v7; (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( *i == v8 )
        {
          *i = *(_QWORD *)v8;
          --*(_DWORD *)(v6 + 16);
          *(_QWORD *)v8 |= 0x8000000000000002uLL;
          v8 = (__int64)i;
          goto LABEL_23;
        }
      }
      v12 = 0LL;
LABEL_23:
      RtlStackDbStackRemove(&qword_18017AEA0, *(_QWORD *)(v12 + 16));
      v14[0] = RtlpHpEnvHandle;
      RtlpHpMetadataFree(v12, v14);
    }
    ++v7;
    result = *(_QWORD *)(v6 + 24);
    while ( (unsigned __int64)v7 < result + 8 * ((unsigned __int64)*(unsigned int *)(v6 + 20) >> 5) )
    {
      v8 = (__int64)*v7;
      if ( ((unsigned __int8)*v7 & 1) == 0 )
        goto LABEL_16;
      ++v7;
    }
LABEL_11:
    v10 = v16;
    v11 = *(_QWORD *)(v16 + 24);
    if ( v11 )
    {
      v14[0] = RtlpHpEnvHandle;
      result = RtlpHpMetadataFree(v11, v14);
    }
    if ( a2 )
    {
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 24) = 0LL;
    }
    else
    {
      v14[0] = RtlpHpEnvHandle;
      result = RtlpHpMetadataFree(v10, v14);
      if ( a3 )
        *a1 = 0LL;
    }
  }
  return result;
}
