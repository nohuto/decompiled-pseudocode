/*
 * XREFs of ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x1400194D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14001962C (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140019B28 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetLatency(CAudioDeviceGraph *this, unsigned __int64 a2, __int64 *a3)
{
  char *v3; // rbx
  unsigned int v7; // ebx
  CPipeInstance *PipeInstance; // rsi
  __int64 v9; // rbp
  int Latency; // eax
  int v11; // edi
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  char *v18; // [rsp+58h] [rbp+20h] BYREF

  v3 = (char *)this + 264;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v18 = v3;
  v7 = 0;
  if ( *((_DWORD *)this + 64) )
  {
    if ( a3 )
    {
      PipeInstance = CAudioDeviceGraph::FindPipeInstance(this, a2);
      if ( PipeInstance )
      {
        v9 = 0LL;
        while ( 1 )
        {
          Latency = CPipeInstance::GetLatency(PipeInstance, &v17);
          v11 = Latency;
          if ( Latency < 0 )
            break;
          v9 += v17;
          PipeInstance = *(CPipeInstance **)PipeInstance;
          if ( !PipeInstance )
          {
            *a3 = v9;
            goto LABEL_8;
          }
        }
        v14 = (unsigned int)Latency;
        v13 = 514LL;
      }
      else
      {
        v11 = -2005139430;
        v13 = 507LL;
        v14 = 2289827866LL;
      }
    }
    else
    {
      v11 = -2147467261;
      v13 = 503LL;
      v14 = 2147500035LL;
    }
  }
  else
  {
    v11 = -2005139437;
    v13 = 500LL;
    v14 = 2289827859LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)v14,
    v15);
  v7 = v11;
LABEL_8:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v18);
  return v7;
}
