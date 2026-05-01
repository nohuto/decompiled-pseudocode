/*
 * XREFs of ?GetComponentInfo@@YAAEBUImmersiveComponentInfo@@AEBU_GUID@@@Z @ 0x18048A48C
 * Callers:
 *     ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1804893EC (--$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88.c)
 *     ??R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z @ 0x18048A1A4 (--R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 */

GUID **__fastcall GetComponentInfo(const struct _GUID *a1)
{
  GUID **result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = (GUID **)&off_1807BAE60;
  while ( 1 )
  {
    v3 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&(*result)->Data1;
    if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&(*result)->Data1 )
      v3 = *(_QWORD *)a1->Data4 - *(_QWORD *)(*result)->Data4;
    if ( !v3 )
      break;
    result += 4;
    if ( result == (GUID **)&ShellPositionerProxy::`vftable' )
    {
      result = &off_180985560;
      while ( 1 )
      {
        v4 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&(*result)->Data1;
        if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&(*result)->Data1 )
          v4 = *(_QWORD *)a1->Data4 - *(_QWORD *)(*result)->Data4;
        if ( !v4 )
          break;
        result += 4;
        if ( result == (GUID **)&off_180985680 )
        {
          result = &off_180985520;
          while ( 1 )
          {
            v5 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&(*result)->Data1;
            if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&(*result)->Data1 )
              v5 = *(_QWORD *)a1->Data4 - *(_QWORD *)(*result)->Data4;
            if ( !v5 )
              break;
            result += 4;
            if ( result == &off_180985560 )
            {
              if ( dword_180992A08 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                 + (unsigned int)tls_index)
                                               + 16LL) )
              {
                Init_thread_header(&dword_180992A08);
                if ( dword_180992A08 == -1 )
                {
                  xmmword_18098D518 = 0LL;
                  Init_thread_footer(&dword_180992A08);
                }
              }
              return (GUID **)&off_180987060;
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
