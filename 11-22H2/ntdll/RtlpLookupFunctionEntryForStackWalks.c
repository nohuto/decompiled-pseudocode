/*
 * XREFs of RtlpLookupFunctionEntryForStackWalks @ 0x18001E6D4
 * Callers:
 *     RtlpWalkFrameChain @ 0x18001E3CC (RtlpWalkFrameChain.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180020CE0 (RtlpxLookupFunctionTable.c)
 */

unsigned int *__fastcall RtlpLookupFunctionEntryForStackWalks(char *BaseAddress, __int64 a2)
{
  __int64 v4; // r10
  unsigned int v5; // r8d
  char *v6; // rdi
  unsigned int *v7; // rdx
  int v8; // r9d
  int v9; // r8d
  int v10; // r11d
  __int64 v11; // rax

  if ( (unsigned __int64)BaseAddress >= *(_QWORD *)(a2 + 8)
    && (unsigned __int64)BaseAddress < *(_QWORD *)(a2 + 8) + (unsigned __int64)*(unsigned int *)(a2 + 16) )
  {
    goto LABEL_3;
  }
  if ( (unsigned __int64)BaseAddress >= *((_QWORD *)&xmmword_180199520 + 1)
    && (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_180199520 + 1)
                                     + (unsigned __int64)(unsigned int)qword_180199530 )
  {
    *(_OWORD *)a2 = xmmword_180199520;
    *(_QWORD *)(a2 + 16) = qword_180199530;
LABEL_3:
    v4 = *(_QWORD *)a2;
    goto LABEL_4;
  }
  v4 = RtlpxLookupFunctionTable(BaseAddress);
LABEL_4:
  if ( v4 )
  {
    v5 = *(_DWORD *)(a2 + 20) / 0xCu;
    if ( !v5 )
      goto LABEL_19;
    v6 = &BaseAddress[-*(_QWORD *)(a2 + 8)];
    v7 = (unsigned int *)(v4 + 12LL * (v5 - 1));
    if ( (unsigned __int64)v6 < *v7 )
    {
      v8 = 0;
      v9 = v5 - 2;
      while ( v9 >= v8 )
      {
        v10 = (v9 + v8) >> 1;
        v7 = (unsigned int *)(v4 + 12LL * v10);
        if ( (unsigned __int64)v6 >= *v7 )
        {
          if ( (unsigned __int64)v6 < v7[3] )
            break;
          v8 = v10 + 1;
        }
        else
        {
          v9 = v10 - 1;
        }
      }
    }
    if ( (unsigned __int64)v6 < *v7 || (unsigned __int64)v6 >= v7[1] )
LABEL_19:
      v7 = 0LL;
    if ( v7 )
    {
      v11 = v7[2];
      if ( (v11 & 1) != 0 )
        return (unsigned int *)(v11 + *(_QWORD *)(a2 + 8) - 1LL);
    }
    return v7;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
    return 0LL;
  }
}
