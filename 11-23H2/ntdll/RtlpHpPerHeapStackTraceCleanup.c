/*
 * XREFs of RtlpHpPerHeapStackTraceCleanup @ 0x180116A70
 * Callers:
 *     RtlpHpStackTraceHeapDestroy @ 0x180049850 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpHpStackTraceHeapDisable @ 0x1801177F0 (RtlpHpStackTraceHeapDisable.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x180060E90 (RtlRunOnceBeginInitialize.c)
 *     RtlpHpMetadataFree @ 0x180064720 (RtlpHpMetadataFree.c)
 *     RtlStackDbStackRemove @ 0x18012DCF4 (RtlStackDbStackRemove.c)
 */

__int64 __fastcall RtlpHpPerHeapStackTraceCleanup(volatile signed __int64 *a1, int a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // rbp
  _QWORD **v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rsi
  _QWORD *i; // rcx
  __int128 v13[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  result = RtlRunOnceBeginInitialize(a1, 1, &v15);
  if ( (int)result >= 0 )
  {
    v6 = v15;
    v7 = *(_QWORD ***)(v15 + 24);
    v8 = v7;
    while ( v8 )
    {
      v8 = (_QWORD *)*v8;
      if ( ((unsigned __int8)v8 & 1) != 0 )
        break;
LABEL_14:
      result = (__int64)v8;
      if ( !v8 )
        goto LABEL_9;
      v11 = (__int64)v8;
      for ( i = v7; (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( (_QWORD *)*i == v8 )
        {
          *i = *v8;
          --*(_DWORD *)(v6 + 16);
          *v8 |= 0x8000000000000002uLL;
          v8 = i;
          goto LABEL_21;
        }
      }
      v11 = 0LL;
LABEL_21:
      RtlStackDbStackRemove(&qword_1801881F0, *(_QWORD *)(v11 + 16));
      v13[0] = RtlpHpEnvHandle;
      RtlpHpMetadataFree(v11, v13);
    }
    ++v7;
    result = *(_QWORD *)(v6 + 24);
    while ( (unsigned __int64)v7 < result + 8 * ((unsigned __int64)*(unsigned int *)(v6 + 20) >> 5) )
    {
      v8 = *v7;
      if ( ((unsigned __int8)*v7 & 1) == 0 )
        goto LABEL_14;
      ++v7;
    }
LABEL_9:
    v9 = v15;
    v10 = *(_QWORD *)(v15 + 24);
    if ( v10 )
    {
      v13[0] = RtlpHpEnvHandle;
      result = RtlpHpMetadataFree(v10, v13);
    }
    if ( a2 )
    {
      *(_QWORD *)(v9 + 16) = 0LL;
      *(_QWORD *)(v9 + 24) = 0LL;
    }
    else
    {
      v13[0] = RtlpHpEnvHandle;
      result = RtlpHpMetadataFree(v9, v13);
      if ( a3 )
        *a1 = 0LL;
    }
  }
  return result;
}
