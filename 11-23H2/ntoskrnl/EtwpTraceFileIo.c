/*
 * XREFs of EtwpTraceFileIo @ 0x14020BEC0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14020BFF0 (PsGetEffectiveServerSilo.c)
 *     EtwpLogKernelEvent @ 0x140233D70 (EtwpLogKernelEvent.c)
 *     EtwpFileProvTrace @ 0x140467B90 (EtwpFileProvTrace.c)
 */

__int64 __fastcall EtwpTraceFileIo(
        __int64 a1,
        struct _EVENT_DATA_DESCRIPTOR *a2,
        ULONG a3,
        unsigned int a4,
        __int16 a5)
{
  unsigned __int64 v5; // rdi
  __int64 EffectiveServerSilo; // rbp
  __int64 result; // rax
  unsigned int v10; // ebx
  bool i; // zf
  unsigned int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned int v16; // ebp
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx

  v5 = a4;
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 1624) == -3LL )
      EffectiveServerSilo = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 2160LL);
    else
      EffectiveServerSilo = PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 1624));
  }
  else
  {
    EffectiveServerSilo = 0LL;
  }
  if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4540) & 0x6000000) != 0 )
    EtwpFileProvTrace(a2, a3);
  result = 1102LL;
  if ( a5 != 1102 )
  {
    result = EtwpHostSiloState;
    v10 = *(_DWORD *)(EtwpHostSiloState + 4248);
    for ( i = !_BitScanForward(&v12, v10); !i; i = !_BitScanForward(&v12, v10) )
    {
      v10 &= v10 - 1;
      v13 = v12;
      result = 32LL * v12;
      v14 = result + EtwpHostSiloState + 4284;
      if ( v14 )
      {
        result = v5 >> 29;
        if ( ((unsigned int)v5 & *(_DWORD *)(v14 + 4 * (v5 >> 29)) & 0x1FFFFFFF) != 0 )
          result = EtwpLogKernelEvent(
                     (_DWORD)a2,
                     EtwpHostSiloState,
                     *(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4232),
                     a3,
                     a5,
                     5249283);
      }
    }
    if ( EffectiveServerSilo )
    {
      result = *(_QWORD *)(EffectiveServerSilo + 1488);
      v15 = *(_QWORD *)(result + 864);
      if ( v15 )
      {
        v16 = *(_DWORD *)(v15 + 4248);
        for ( i = !_BitScanForward(&v17, v16); !i; i = !_BitScanForward(&v17, v16) )
        {
          v18 = v17;
          v16 &= v16 - 1;
          result = 32LL * v17;
          v19 = result + v15 + 4284;
          if ( v19 )
          {
            result = v5 >> 29;
            if ( ((unsigned int)v5 & *(_DWORD *)(v19 + 4 * (v5 >> 29)) & 0x1FFFFFFF) != 0 )
              result = EtwpLogKernelEvent((_DWORD)a2, v15, *(unsigned __int8 *)(v15 + 2 * v18 + 4232), a3, a5, 5249283);
          }
        }
      }
    }
  }
  return result;
}
