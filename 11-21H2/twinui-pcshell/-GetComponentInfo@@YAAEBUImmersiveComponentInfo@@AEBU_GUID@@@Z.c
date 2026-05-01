/*
 * XREFs of ?GetComponentInfo@@YAAEBUImmersiveComponentInfo@@AEBU_GUID@@@Z @ 0x1803B030C
 * Callers:
 *     ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1803AEF1C (--$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88.c)
 *     ??R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBAXPEAUHKEY__@@PEBG@Z @ 0x1803AFD34 (--R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBAXPEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 */

GUID **__fastcall GetComponentInfo(const struct _GUID *a1)
{
  GUID **result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = (GUID **)&off_180628510;
  while ( 1 )
  {
    v3 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&(*result)->Data1;
    if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&(*result)->Data1 )
      v3 = *(_QWORD *)a1->Data4 - *(_QWORD *)(*result)->Data4;
    if ( !v3 )
      break;
    result += 3;
    if ( result == (GUID **)&PenWorkspaceDiscoverBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IWindowManagementInputUsageEvents>'} )
    {
      result = &off_1807A93D0;
      while ( 1 )
      {
        v4 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&(*result)->Data1;
        if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&(*result)->Data1 )
          v4 = *(_QWORD *)a1->Data4 - *(_QWORD *)(*result)->Data4;
        if ( !v4 )
          break;
        result += 3;
        if ( result == (GUID **)&off_1807A94A8 )
        {
          result = &off_1807A9398;
          while ( 1 )
          {
            v5 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&(*result)->Data1;
            if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&(*result)->Data1 )
              v5 = *(_QWORD *)a1->Data4 - *(_QWORD *)(*result)->Data4;
            if ( !v5 )
              break;
            result += 3;
            if ( result == (GUID **)&unk_1807A93C8 )
            {
              if ( dword_1807B750C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                 + (unsigned int)tls_index)
                                               + 16LL) )
              {
                Init_thread_header(&dword_1807B750C);
                if ( dword_1807B750C == -1 )
                {
                  xmmword_1807B38E0 = 0LL;
                  Init_thread_footer(&dword_1807B750C);
                }
              }
              return (GUID **)&off_1807AC0F8;
            }
          }
          return result;
        }
      }
      return result;
    }
  }
  return result;
}
