/*
 * XREFs of ?TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z @ 0x180038F48
 * Callers:
 *     _lambda_9eab5fffffb4d5efa4b277bf7cba1fe6_::operator() @ 0x1800345E8 (_lambda_9eab5fffffb4d5efa4b277bf7cba1fe6_--operator().c)
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x1800383B4 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x180039758 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TsSessionMayBeDeleted(struct TSSession *a1)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)a1 + 8) && *((_DWORD *)a1 + 1) == 0xFFFF && !*((_QWORD *)a1 + 2) )
    return *((_QWORD *)a1 + 5) == 0LL;
  return result;
}
