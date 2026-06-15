/*
 * XREFs of ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18002624C
 * Callers:
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800263A8 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800264D4 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180013EB0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 */

__int64 __fastcall CHostedAppInteractivity::CreateInstance(
        const unsigned __int16 *a1,
        __int64 a2,
        int a3,
        struct CHostedAppInteractivity **a4)
{
  HANDLE ProcessHeap; // rax
  struct CHostedAppInteractivity *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct CHostedAppInteractivity *v12; // rbx
  unsigned __int64 v13; // r9
  int v14; // edi
  __int64 v16; // [rsp+20h] [rbp-38h]

  ProcessHeap = GetProcessHeap();
  v9 = (struct CHostedAppInteractivity *)HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v12 = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = -1;
    *(_QWORD *)v9 = 0LL;
    *((_DWORD *)v9 + 3) = 0;
    *((_DWORD *)v9 + 2) = a3;
    v13 = -1LL;
    *((_QWORD *)v9 + 2) = a2;
    do
      ++v13;
    while ( a1[v13] );
    v14 = _AllocStringWorker<CTCoAllocPolicy>(v11, v10, a1, v13, v16, (unsigned __int16 **)v9);
    if ( v14 >= 0 )
    {
      *a4 = v12;
      return (unsigned int)v14;
    }
    if ( *(_QWORD *)v12 )
    {
      CoTaskMemFree(*(LPVOID *)v12);
      *(_QWORD *)v12 = 0LL;
    }
    operator delete(v12);
  }
  else
  {
    v14 = -2147024882;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, &WPP_1c004e7844a83aef02453228989ecd61_Traceguids, v14);
  }
  AudPolicyLogError("CHostedAppInteractivity::CreateInstance", 322, v14);
  return (unsigned int)v14;
}
