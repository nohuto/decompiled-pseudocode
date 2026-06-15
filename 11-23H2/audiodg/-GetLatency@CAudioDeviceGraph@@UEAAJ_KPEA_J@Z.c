/*
 * XREFs of ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x140007F70
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x140008118 (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x14000AE50 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetLatency(CAudioDeviceGraph *this, unsigned __int64 a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  CPipeInstance *PipeInstance; // rdi
  __int64 v8; // rsi
  int Latency; // eax
  unsigned int v10; // ebp
  unsigned int v12; // edi
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( !*((_DWORD *)this + 64) )
  {
    v12 = -2005139437;
    v13 = 503LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)v12,
      v14);
    if ( v3 )
      LeaveCriticalSection(v3);
    return v12;
  }
  if ( !a3 )
  {
    v12 = -2147467261;
    v13 = 506LL;
    goto LABEL_12;
  }
  PipeInstance = CAudioDeviceGraph::FindPipeInstance(this, a2);
  if ( !PipeInstance )
  {
    v12 = -2005139430;
    v13 = 510LL;
    goto LABEL_12;
  }
  v8 = 0LL;
  while ( 1 )
  {
    Latency = CPipeInstance::GetLatency(PipeInstance, &v16);
    v10 = Latency;
    if ( Latency < 0 )
      break;
    v8 += v16;
    PipeInstance = *(CPipeInstance **)PipeInstance;
    if ( !PipeInstance )
    {
      *a3 = v8;
      if ( v3 )
        LeaveCriticalSection(v3);
      return 0LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x205,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)(unsigned int)Latency,
    v14);
  if ( v3 )
    LeaveCriticalSection(v3);
  return v10;
}
