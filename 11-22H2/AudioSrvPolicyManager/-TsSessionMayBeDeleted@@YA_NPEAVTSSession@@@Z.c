/*
 * XREFs of ?TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z @ 0x180039BF8
 * Callers:
 *     _lambda_4d96e95c7f1dfdf18ba3c0829eb40359_::operator() @ 0x180034630 (_lambda_4d96e95c7f1dfdf18ba3c0829eb40359_--operator().c)
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180039058 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x18003A408 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z.c)
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
