/*
 * XREFs of ?FailFastForKernelBatchFailure@CDevice@DirectComposition@@AEAAXI@Z @ 0x1800F1CD8
 * Callers:
 *     ?ResourceSetHandleProperty@CDevice@DirectComposition@@QEAAJIIPEAX@Z @ 0x18001A2D4 (-ResourceSetHandleProperty@CDevice@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?_ProcessSupportedInteractionConfigurationChange@CInteractionProxy@DirectComposition@@AEAAJPEAUIDCompositionInteractionConfigurationPartner@@W4Enum@InteractionProperty@@@Z @ 0x180024118 (-_ProcessSupportedInteractionConfigurationChange@CInteractionProxy@DirectComposition@@AEAAJPEAUI.c)
 *     ?CommitToKernel@CDevice@DirectComposition@@AEAAJ_NPEAX@Z @ 0x180027090 (-CommitToKernel@CDevice@DirectComposition@@AEAAJ_NPEAX@Z.c)
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?ChannelOpenSharedResource@CDevice@DirectComposition@@QEAAJPEAXI_NPEAI@Z @ 0x18005B708 (-ChannelOpenSharedResource@CDevice@DirectComposition@@QEAAJPEAXI_NPEAI@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 *     ?SetScalarFloatProperty@CResourceProxy@DirectComposition@@QEAAJIM@Z @ 0x180076370 (-SetScalarFloatProperty@CResourceProxy@DirectComposition@@QEAAJIM@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x1800691D8 (--_U@YAPEAX_K@Z.c)
 *     memcpy_s_1 @ 0x1800F7440 (memcpy_s_1.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x180100534 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 */

void __fastcall __noreturn DirectComposition::CDevice::FailFastForKernelBatchFailure(
        DirectComposition::CDevice *this,
        unsigned int a2)
{
  int v3; // ebx
  unsigned int *v4; // rcx
  int v5; // r8d
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // eax
  const void *v9; // rdx
  void *v10; // rcx

  v3 = -2147418113;
  if ( !a2 )
    goto LABEL_18;
  v4 = (unsigned int *)*((_QWORD *)this + 21);
  v5 = 0;
  while ( 1 )
  {
    v6 = *v4;
    if ( *v4 > 0xA )
    {
      if ( v6 > 0x10 )
      {
        if ( v6 == 17 )
        {
          v7 = 20LL;
          goto LABEL_37;
        }
        if ( v6 == 18 )
        {
          v7 = 72LL;
          goto LABEL_37;
        }
        if ( v6 != 19 )
        {
          if ( v6 != 20 )
          {
LABEL_17:
            v3 = -2147483392;
            goto LABEL_18;
          }
LABEL_34:
          v7 = 12LL;
          goto LABEL_37;
        }
      }
      else if ( v6 != 16 )
      {
        if ( v6 == 11 )
        {
          v7 = 8LL * v4[3] + 16;
          goto LABEL_37;
        }
        if ( v6 == 12 )
        {
          v7 = ((v4[3] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL) + 16;
          goto LABEL_37;
        }
        if ( v6 != 13 )
        {
          v8 = v6 - 14;
          if ( v6 == 14 )
          {
            v7 = 4LL * v4[3] + 16;
            goto LABEL_37;
          }
LABEL_16:
          if ( v8 != 1 )
            goto LABEL_17;
        }
      }
LABEL_12:
      v7 = 16LL;
      goto LABEL_37;
    }
    if ( v6 != 10 )
    {
      if ( v6 > 5 )
      {
        if ( v6 == 6 )
          goto LABEL_12;
        if ( v6 == 7 )
          goto LABEL_34;
        v8 = v6 - 8;
        if ( v6 != 8 )
          goto LABEL_16;
      }
      else if ( v6 != 5 )
      {
        switch ( v6 )
        {
          case 0u:
            v3 = -2147483391;
LABEL_18:
            qword_180220CE0 = operator new[](*((unsigned int *)this + 44));
            if ( qword_180220CE0 )
              memcpy_s_1(
                v10,
                *((unsigned int *)this + 44),
                *((const void *const *)this + 21),
                *((unsigned int *)this + 44));
            MilFailFastForHR(v3, v9);
            __debugbreak();
          case 1u:
            goto LABEL_12;
          case 3u:
            v7 = 8LL;
            goto LABEL_37;
        }
      }
    }
    v7 = 24LL;
LABEL_37:
    v3 = v6 - 2147483632;
    v4 = (unsigned int *)((char *)v4 + v7);
    if ( ++v5 >= a2 )
      goto LABEL_18;
  }
}
