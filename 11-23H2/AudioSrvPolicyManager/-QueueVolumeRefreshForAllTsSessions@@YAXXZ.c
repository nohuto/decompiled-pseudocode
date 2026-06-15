/*
 * XREFs of ?QueueVolumeRefreshForAllTsSessions@@YAXXZ @ 0x180035E4C
 * Callers:
 *     _lambda_ab72ab04c21953f372991cfef701d912_::operator() @ 0x1800346F4 (_lambda_ab72ab04c21953f372991cfef701d912_--operator().c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180037500 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800025C0 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800233A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void QueueVolumeRefreshForAllTsSessions(void)
{
  int v0; // eax
  __int64 v1[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1[0] = (__int64)off_18004EFA0;
  v1[7] = (__int64)v1;
  v0 = QueueGenericWorkItem(v1);
  if ( v0 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1453LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v0);
}
