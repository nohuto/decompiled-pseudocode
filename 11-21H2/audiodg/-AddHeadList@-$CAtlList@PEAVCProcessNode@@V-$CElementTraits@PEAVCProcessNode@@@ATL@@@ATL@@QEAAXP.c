/*
 * XREFs of ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x140009F88
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000B1F4 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000B748 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14001327C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14005944C (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140059894 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140011930 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rbp
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  struct ATL::CAtlPlex *v8; // rax
  int v9; // r8d
  _QWORD *i; // rdx

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v4 = *(_QWORD **)a1;
    do
    {
      v5 = v3;
      v3 = *(_QWORD *)(v3 + 8);
      if ( !*(_QWORD *)(a1 + 32) )
      {
        v8 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24), *(unsigned int *)(a1 + 40), 0x18uLL);
        if ( !v8 )
          ATL::AtlThrowImpl(-2147024882);
        v9 = *(_DWORD *)(a1 + 40);
        for ( i = (_QWORD *)((char *)v8 + 16 * (v9 - 1) + 8 * (unsigned int)(v9 - 1) + 8); --v9 >= 0; i -= 3 )
        {
          *i = *(_QWORD *)(a1 + 32);
          *(_QWORD *)(a1 + 32) = i;
        }
      }
      v6 = *(_QWORD **)(a1 + 32);
      v7 = *v6;
      v6[2] = *(_QWORD *)(v5 + 16);
      *(_QWORD *)(a1 + 32) = v7;
      v6[1] = 0LL;
      *v6 = v4;
      ++*(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)a1 )
        *(_QWORD *)(*(_QWORD *)a1 + 8LL) = v6;
      else
        *(_QWORD *)(a1 + 8) = v6;
      *(_QWORD *)a1 = v6;
      v4 = v6;
    }
    while ( v3 );
  }
}
