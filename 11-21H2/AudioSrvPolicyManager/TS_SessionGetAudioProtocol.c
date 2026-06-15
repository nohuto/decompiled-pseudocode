/*
 * XREFs of TS_SessionGetAudioProtocol @ 0x180031A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002CA4C (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x18002EE4C (-TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x1800410E8 (-GetTsAudioProtocol@@YAIK@Z.c)
 */

__int64 __fastcall TS_SessionGetAudioProtocol(void *a1, DWORD a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int v10; // esi
  __int64 v11; // rdx
  int AudioProtocol; // eax
  unsigned int v13[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD SessionId; // [rsp+50h] [rbp+18h] BYREF

  if ( !a3 )
  {
    v7 = 2267LL;
LABEL_3:
    v8 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)v8);
    return v8;
  }
  if ( !a4 )
  {
    v7 = 2268LL;
    goto LABEL_3;
  }
  *a3 = 0xFFFF;
  *a4 = 0;
  v10 = RpcClientProcessSessionId(a1, v13, &SessionId);
  if ( v10 < 0 )
  {
    v11 = 2276LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  if ( a2 == -1 )
    a2 = SessionId;
  if ( SessionId && a2 != SessionId )
  {
    v8 = -2147024891;
    v7 = 2286LL;
    goto LABEL_4;
  }
  if ( !a2 )
  {
    *a3 = 0;
LABEL_21:
    *a4 = 0;
    return 0LL;
  }
  AudioProtocol = TsSessionIdGetAudioProtocol(a2, a3, a4);
  v10 = AudioProtocol;
  if ( AudioProtocol < 0 )
  {
    if ( AudioProtocol != -2147023728 )
    {
      v11 = 2297LL;
      goto LABEL_9;
    }
    *a3 = GetTsAudioProtocol(a2);
    goto LABEL_21;
  }
  return 0LL;
}
