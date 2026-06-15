/*
 * XREFs of ?move_from_blob@SystemAudioStream@@SAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@0@Z @ 0x1800F0A24
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800F0C08 (-move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x1800ECD44 (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 */

__int64 __fastcall SystemAudioStream::move_from_blob(
        struct CP_EVENT_METADATA_BLOB *a1,
        struct ICrossProcessEvent **a2,
        struct CP_EVENT_METADATA_BLOB *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v7; // rcx
  struct CP_EVENT_METADATA_BLOB *v8; // rax
  __int128 v9; // xmm1
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  wil::details *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)a1 == 1 )
  {
    v11 = (wil::details *)*((_QWORD *)a1 + 1);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(a2, &v11);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
  }
  else
  {
    v7 = 2LL;
    v8 = a1;
    do
    {
      *(_OWORD *)a3 = *(_OWORD *)v8;
      *((_OWORD *)a3 + 1) = *((_OWORD *)v8 + 1);
      *((_OWORD *)a3 + 2) = *((_OWORD *)v8 + 2);
      *((_OWORD *)a3 + 3) = *((_OWORD *)v8 + 3);
      *((_OWORD *)a3 + 4) = *((_OWORD *)v8 + 4);
      *((_OWORD *)a3 + 5) = *((_OWORD *)v8 + 5);
      *((_OWORD *)a3 + 6) = *((_OWORD *)v8 + 6);
      a3 = (struct CP_EVENT_METADATA_BLOB *)((char *)a3 + 128);
      v9 = *((_OWORD *)v8 + 7);
      v8 = (struct CP_EVENT_METADATA_BLOB *)((char *)v8 + 128);
      *((_OWORD *)a3 - 1) = v9;
      --v7;
    }
    while ( v7 );
    *(_OWORD *)a3 = *(_OWORD *)v8;
    *((_OWORD *)a3 + 1) = *((_OWORD *)v8 + 1);
    *((_QWORD *)a3 + 4) = *((_QWORD *)v8 + 4);
  }
  *(_DWORD *)a1 = 0;
  return 0LL;
}
