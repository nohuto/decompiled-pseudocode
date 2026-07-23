/*
 * XREFs of RtlpHpPerHeapStackTraceCleanup @ 0x180116A40
 * Callers:
 *     RtlpHpStackTraceHeapDestroy @ 0x180049850 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpHpStackTraceHeapDisable @ 0x1801177C0 (RtlpHpStackTraceHeapDisable.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x180060E90 (RtlRunOnceBeginInitialize.c)
 *     RtlpHpMetadataFree @ 0x180064720 (RtlpHpMetadataFree.c)
 *     RtlStackDbStackRemove @ 0x18012DD20 (RtlStackDbStackRemove.c)
 */

int __fastcall RtlpHpPerHeapStackTraceCleanup(_RTL_RUN_ONCE *a1, int a2, int a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rbp
  _QWORD **v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rsi
  _QWORD *i; // rcx
  __int128 v14[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v16; // [rsp+88h] [rbp+20h] BYREF

  LODWORD(v5) = RtlRunOnceBeginInitialize(a1, 1u, (PVOID *)&v16);
  if ( (int)v5 >= 0 )
  {
    v6 = v16;
    v7 = (_QWORD **)v16[3];
    v8 = v7;
    while ( v8 )
    {
      v8 = (_QWORD *)*v8;
      if ( ((unsigned __int8)v8 & 1) != 0 )
        break;
LABEL_14:
      LODWORD(v5) = (_DWORD)v8;
      if ( !v8 )
        goto LABEL_9;
      v11 = (__int64)v8;
      for ( i = v7; (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( (_QWORD *)*i == v8 )
        {
          *i = *v8;
          --*((_DWORD *)v6 + 4);
          *v8 |= 0x8000000000000002uLL;
          v8 = i;
          goto LABEL_21;
        }
      }
      v11 = 0LL;
LABEL_21:
      RtlStackDbStackRemove(&qword_1801881F0, *(_QWORD *)(v11 + 16));
      v14[0] = RtlpHpEnvHandle;
      RtlpHpMetadataFree(v11, v14);
    }
    ++v7;
    v5 = v6[3];
    while ( (unsigned __int64)v7 < v5 + 8 * ((unsigned __int64)*((unsigned int *)v6 + 5) >> 5) )
    {
      v8 = *v7;
      if ( ((unsigned __int8)*v7 & 1) == 0 )
        goto LABEL_14;
      ++v7;
    }
LABEL_9:
    v9 = v16;
    v10 = v16[3];
    if ( v10 )
    {
      v14[0] = RtlpHpEnvHandle;
      LODWORD(v5) = RtlpHpMetadataFree(v10, v14);
    }
    if ( a2 )
    {
      v9[2] = 0LL;
      v9[3] = 0LL;
    }
    else
    {
      v14[0] = RtlpHpEnvHandle;
      LODWORD(v5) = RtlpHpMetadataFree((__int64)v9, v14);
      if ( a3 )
        a1->Value = 0LL;
    }
  }
  return v5;
}
