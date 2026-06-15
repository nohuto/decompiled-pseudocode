/*
 * XREFs of ?move_from_blob@SystemAudioStream@@SAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@0@Z @ 0x180042950
 * Callers:
 *     ?move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800427FC (-move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2PEAUIProcessSubmixProxy@@U8@PEAUSystemAudioStream@@@Z @ 0x18006CFA0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x18011BB94 (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 */

__int64 __fastcall SystemAudioStream::move_from_blob(
        struct CP_EVENT_METADATA_BLOB *a1,
        struct ICrossProcessEvent **a2,
        struct CP_EVENT_METADATA_BLOB *a3)
{
  struct CP_EVENT_METADATA_BLOB *v4; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm1
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)a1 != 1 )
  {
    v4 = a1;
    v5 = 2LL;
    do
    {
      *(_OWORD *)a3 = *(_OWORD *)v4;
      *((_OWORD *)a3 + 1) = *((_OWORD *)v4 + 1);
      *((_OWORD *)a3 + 2) = *((_OWORD *)v4 + 2);
      *((_OWORD *)a3 + 3) = *((_OWORD *)v4 + 3);
      *((_OWORD *)a3 + 4) = *((_OWORD *)v4 + 4);
      *((_OWORD *)a3 + 5) = *((_OWORD *)v4 + 5);
      *((_OWORD *)a3 + 6) = *((_OWORD *)v4 + 6);
      a3 = (struct CP_EVENT_METADATA_BLOB *)((char *)a3 + 128);
      v6 = *((_OWORD *)v4 + 7);
      v4 = (struct CP_EVENT_METADATA_BLOB *)((char *)v4 + 128);
      *((_OWORD *)a3 - 1) = v6;
      --v5;
    }
    while ( v5 );
    *(_OWORD *)a3 = *(_OWORD *)v4;
    *((_OWORD *)a3 + 1) = *((_OWORD *)v4 + 1);
    *((_QWORD *)a3 + 4) = *((_QWORD *)v4 + 4);
    goto LABEL_5;
  }
  v11 = *((_QWORD *)a1 + 1);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(a2, &v11, a3);
  v9 = v8;
  if ( v8 >= 0 )
  {
LABEL_5:
    *(_DWORD *)a1 = 0;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x62,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
