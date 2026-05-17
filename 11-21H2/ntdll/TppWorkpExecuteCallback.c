/*
 * XREFs of TppWorkpExecuteCallback @ 0x180069E70
 * Callers:
 *     <none>
 * Callees:
 *     TppWorkCallbackPrologRelease @ 0x180022278 (TppWorkCallbackPrologRelease.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     TppETWCallbackDequeue @ 0x1801244E8 (TppETWCallbackDequeue.c)
 *     RtlpTpETWCallbackStart @ 0x180124620 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1801246BC (RtlpTpETWCallbackStop.c)
 */

struct _PEB *__fastcall TppWorkpExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  int v5; // ebp
  __int64 v7; // rdi
  _DWORD *SharedData; // r8
  __int64 v9; // rcx
  struct _PEB *result; // rax
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // rdx
  _DWORD *ThreadPoolData; // rcx
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // r9
  _QWORD *v20; // rsi
  _DWORD *v21; // rcx

  v4 = (_QWORD *)(a2 - 200);
  v5 = a2;
  v7 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v9 = 2147353478LL;
  if ( *(_BYTE *)v9 )
    TppETWCallbackDequeue(v4[18], a2, v4[10], v4[11], v4[13]);
  result = (struct _PEB *)TppWorkCallbackPrologRelease(a1, (__int64)v4, 0, a4);
  if ( (_DWORD)result )
  {
    v11 = NtCurrentPeb()->SharedData;
    if ( v11 && *v11 )
      v12 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v12 = 2147353478LL;
    if ( *(_BYTE *)v12 )
      RtlpTpETWCallbackStart(v4[18], v5, v4[10], v4[11], v4[13]);
    v13 = v4[13];
    v14 = v4[11];
    v15 = v4[10];
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      v17 = ThreadPoolData[3];
      ++*((_QWORD *)ThreadPoolData + 2);
      v18 = ((_BYTE)v17 - 1) & 1;
      ThreadPoolData[3] = v18;
      v19 = 8LL * v18;
      v20 = &ThreadPoolData[v19 + 8];
      *(_QWORD *)&ThreadPoolData[v19 + 10] = v14;
      *v20 = v15;
      *(_QWORD *)&ThreadPoolData[v19 + 12] = v13;
      *(_QWORD *)&ThreadPoolData[v19 + 14] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
      v15 = v4[10];
    }
    else
    {
      v20 = 0LL;
    }
    *(_QWORD *)(a1 + 88) = v15;
    *(_QWORD *)(a1 + 96) = v4[11];
    ((void (__fastcall *)(__int64, _QWORD, _QWORD *))v4[10])(a1, v4[11], v4);
    result = NtCurrentPeb();
    v21 = result->SharedData;
    if ( v21 && *v21 )
    {
      result = NtCurrentPeb();
      v7 = (__int64)result->SharedData + 556;
    }
    if ( *(_BYTE *)v7 )
      result = (struct _PEB *)RtlpTpETWCallbackStop(v4[18], v5, v4[10], v4[11], v4[13]);
    if ( v20 )
    {
      result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v20[3] )
      {
        result = (struct _PEB *)((char *)result - v20[3]);
        v20[3] = result;
      }
    }
  }
  return result;
}
