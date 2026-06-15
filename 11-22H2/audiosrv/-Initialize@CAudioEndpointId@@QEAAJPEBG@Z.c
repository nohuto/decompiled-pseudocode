/*
 * XREFs of ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x18003EF38
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x18003EEA0 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18004FB64 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180082BAC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001CD18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioEndpointId::Initialize(CAudioEndpointId *this, const unsigned __int16 *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rcx

  v3 = 0;
  if ( a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    v3 = v4;
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)this, a2, v3);
  return 0LL;
}
