/*
 * XREFs of ?OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180166720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800D1400 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?get@?$static_lazy@VTestCursorTraceLogging@@@details@wil@@QEAAPEAVTestCursorTraceLogging@@P6AXXZ@Z @ 0x180115ADC (-get@-$static_lazy@VTestCursorTraceLogging@@@details@wil@@QEAAPEAVTestCursorTraceLogging@@P6AXXZ.c)
 *     ??$StateChange@AEAY0L@$$CBG@TestCursorTraceLogging@@SAXAEAY0L@$$CBG@Z @ 0x180166350 (--$StateChange@AEAY0L@$$CBG@TestCursorTraceLogging@@SAXAEAY0L@$$CBG@Z.c)
 *     ??$StateChange@AEAY0O@$$CBG@TestCursorTraceLogging@@SAXAEAY0O@$$CBG@Z @ 0x18016639C (--$StateChange@AEAY0O@$$CBG@TestCursorTraceLogging@@SAXAEAY0O@$$CBG@Z.c)
 *     ?GetCursorSuppressionPolicyFromInputSites@CursorSuppressionProcessor@@QEAA?AW4SuppressionPolicy@Input@Internal@UI@Windows@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18016653C (-GetCursorSuppressionPolicyFromInputSites@CursorSuppressionProcessor@@QEAA-AW4SuppressionPolicy@.c)
 *     ?GetInputSiteForContainer@@YA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18016669C (-GetInputSiteForContainer@@YA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV-$vector@V-$ComPtr@VInp.c)
 *     ?SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z @ 0x180166AAC (-SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z.c)
 *     ?SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z @ 0x180166B68 (-SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorSuppressionProcessor::OnHitTest(
        CursorSuppressionProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  CursorSuppressionProcessor *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r15
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  struct tagPOINT Point; // [rsp+58h] [rbp+28h] BYREF

  v6 = this;
  *(_DWORD *)a4 = 0;
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    GetCursorPos(&Point);
    if ( *((_DWORD *)v6 + 20) != 1 )
    {
LABEL_6:
      *(struct tagPOINT *)((char *)v6 + 84) = Point;
      return 0LL;
    }
    if ( *((_DWORD *)v6 + 21) != Point.x || *((_DWORD *)v6 + 22) != Point.y )
    {
      CursorSuppressionProcessor::SuppressCursor((CursorSuppressionProcessor *)((char *)v6 - 8), 0);
      *((_DWORD *)v6 + 20) = 2;
      TestCursorTraceLogging::StateChange<unsigned short const (&)[14]>(v7);
      InputTraceLogging::Cursor::SetSuppressionState(*((unsigned int *)a2 + 1), *((unsigned int *)v6 + 20));
      goto LABEL_6;
    }
  }
  else if ( (*(_BYTE *)a2 & 0x18) != 0 )
  {
    if ( (*((_BYTE *)a2 + 32) & 6) != 0 )
    {
      v8 = *((_QWORD *)a3 + 22);
      if ( (*(_BYTE *)a2 & 0x10) == 0 )
        goto LABEL_30;
      v9 = *GetInputSiteForContainer((__int64 *)&Point, (__int64 **)(*(_QWORD *)(v8 + 104) - 24LL));
      this = (CursorSuppressionProcessor *)Point;
      if ( Point )
      {
        Point = 0LL;
        (*(void (__fastcall **)(CursorSuppressionProcessor *))(*(_QWORD *)this + 16LL))(this);
      }
      if ( v9 && (Point.x = 0, SystemParametersInfoW(0x201Eu, 0, &Point, 0)) && (Point.x & 0x20) != 0 )
      {
        *(_DWORD *)a4 = 3;
        if ( *((_DWORD *)v6 + 20) != 3 )
        {
          if ( *((_DWORD *)v6 + 20) != 2 )
            CursorSuppressionProcessor::SuppressCursor((CursorSuppressionProcessor *)((char *)v6 - 8), 0);
          *((_DWORD *)v6 + 20) = 3;
          v10 = (_DWORD *)wil::details::static_lazy<TestCursorTraceLogging>::get(
                            (__int64)this,
                            (void (__cdecl *)())_lambda_f8a530405e8d431733881e929c3e0226_::_lambda_invoker_cdecl_)[1];
          if ( *v10 > 4u )
          {
            Point = (struct tagPOINT)L"ShowingPenCursor";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
              (__int64)v10,
              (unsigned __int8 *)dword_18023569F,
              v11,
              v12,
              (const WCHAR **)&Point);
          }
          InputTraceLogging::Cursor::SetSuppressionState(*((unsigned int *)a2 + 1), *((unsigned int *)v6 + 20));
        }
      }
      else
      {
LABEL_30:
        if ( !(unsigned int)CursorSuppressionProcessor::GetCursorSuppressionPolicyFromInputSites(
                              (__int64)this,
                              (__int64 **)(*(_QWORD *)(v8 + 104) - 24LL)) )
        {
          if ( (*(_BYTE *)a2 & 0x10) != 0 && *((_DWORD *)v6 + 20) == 3 )
          {
            CursorSuppressionProcessor::SuppressCursor((CursorSuppressionProcessor *)((char *)v6 - 8), 1);
            *((_DWORD *)v6 + 20) = 0;
            TestCursorTraceLogging::StateChange<unsigned short const (&)[11]>(v13);
            InputTraceLogging::Cursor::SetSuppressionState(*((unsigned int *)a2 + 1), *((unsigned int *)v6 + 20));
          }
          *(_DWORD *)a4 = 3;
        }
      }
    }
    else
    {
      *(_DWORD *)a4 = 3;
    }
  }
  return 0LL;
}
