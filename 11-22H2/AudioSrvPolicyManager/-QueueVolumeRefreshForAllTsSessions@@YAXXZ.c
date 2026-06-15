/*
 * XREFs of ?QueueVolumeRefreshForAllTsSessions@@YAXXZ @ 0x180036774
 * Callers:
 *     _lambda_7af2eb194479c71b10cc30af6f218930_::operator() @ 0x18003473C (_lambda_7af2eb194479c71b10cc30af6f218930_--operator().c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180038190 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180002610 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180023594 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void QueueVolumeRefreshForAllTsSessions(void)
{
  int v0; // eax
  __int64 v1[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1[0] = (__int64)off_18004FFA0;
  v1[7] = (__int64)v1;
  v0 = QueueGenericWorkItem(v1);
  if ( v0 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1454LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v0);
}
