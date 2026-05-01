/*
 * XREFs of ?GetLastErrorFail@details@wil@@YGKPAXIPBD110@Z @ 0x10002B2E
 * Callers:
 *     ?GetLastErrorFailHr@details@wil@@YGJXZ @ 0x10002B6A (-GetLastErrorFailHr@details@wil@@YGJXZ.c)
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YGKPAXIPBD110@Z @ 0x10003358 (--$ReportFailure_GetLastError@$02@details@wil@@YGKPAXIPBD110@Z.c)
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YGJPAXIPBD110@Z @ 0x1000493A (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YGJPAXIPBD110@Z.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YGXPAXIPBD110J@Z @ 0x10004515 (--$ReportFailure_Hr@$01@details@wil@@YGXPAXIPBD110J@Z.c)
 */

DWORD __userpurge wil::details::GetLastErrorFail@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        wil::details *this,
        void *a4,
        unsigned int a5,
        const char *a6,
        const char *a7,
        const char *a8,
        void *a9)
{
  DWORD result; // eax

  result = GetLastError();
  if ( !result )
  {
    wil::details::ReportFailure_Hr<2>(a2, a1, this, 0, 0, a6, -2147024228);
    return 668;
  }
  return result;
}
