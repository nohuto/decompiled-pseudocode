/*
 * XREFs of ?GetRealTimeWorkQueue@CAPOServiceProvider@@UEAAJPEAK@Z @ 0x14006F340
 * Callers:
 *     <none>
 * Callees:
 *     _Init_thread_footer @ 0x140028758 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1400287C0 (_Init_thread_header.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ @ 0x14006F278 (-GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ.c)
 */

__int64 __fastcall CAPOServiceProvider::GetRealTimeWorkQueue(CAPOServiceProvider *this, unsigned int *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( dword_1400CFBD8 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
    {
      Init_thread_header(&dword_1400CFBD8);
      if ( dword_1400CFBD8 == -1 )
      {
        dword_1400CFBDC = CAPOServiceProvider::GetApoWorkQueueId((CAPOServiceProvider *)((char *)this - 16));
        Init_thread_footer(&dword_1400CFBD8);
      }
    }
    *a2 = dword_1400CFBDC;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
