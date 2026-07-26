/*
 * XREFs of WPP_RECORDER_SF_qddS @ 0x1C007D698
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C0131930 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C0132050 (-NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qddS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const wchar_t *a9)
{
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  const wchar_t *v15; // rax
  int v17; // [rsp+20h] [rbp-68h]

  v9 = (__int64)a9;
  v10 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a9 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a9[v13] );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = a9;
    if ( !a9 )
      v15 = L"NULL";
    ndisWppFastTraceMessage(
      &WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
      a4,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      4LL,
      v15,
      v14,
      0LL);
  }
  if ( v9 )
  {
    do
      ++v10;
    while ( *(_WORD *)(v9 + 2 * v10) );
  }
  LOWORD(v17) = a4;
  return WppAutoLogTrace(a1, 4LL, 29LL, &WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids, v17, &a6);
}
