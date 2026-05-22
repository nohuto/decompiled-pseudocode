/*
 * XREFs of ?CheckForDelayedDestructionObjects@CDevice@DirectComposition@@QEAAXXZ @ 0x1800356CC
 * Callers:
 *     ?ResourceSetHandleProperty@CDevice@DirectComposition@@QEAAJIIPEAX@Z @ 0x18001A2D4 (-ResourceSetHandleProperty@CDevice@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?_ProcessSupportedInteractionConfigurationChange@CInteractionProxy@DirectComposition@@AEAAJPEAUIDCompositionInteractionConfigurationPartner@@W4Enum@InteractionProperty@@@Z @ 0x180024118 (-_ProcessSupportedInteractionConfigurationChange@CInteractionProxy@DirectComposition@@AEAAJPEAUI.c)
 *     ?CommitToKernel@CDevice@DirectComposition@@AEAAJ_NPEAX@Z @ 0x180027090 (-CommitToKernel@CDevice@DirectComposition@@AEAAJ_NPEAX@Z.c)
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?ChannelOpenSharedResource@CDevice@DirectComposition@@QEAAJPEAXI_NPEAI@Z @ 0x18005B708 (-ChannelOpenSharedResource@CDevice@DirectComposition@@QEAAJPEAXI_NPEAI@Z.c)
 *     ??1CDevice@DirectComposition@@QEAA@XZ @ 0x18005E2D8 (--1CDevice@DirectComposition@@QEAA@XZ.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 *     ?SetScalarFloatProperty@CResourceProxy@DirectComposition@@QEAAJIM@Z @ 0x180076370 (-SetScalarFloatProperty@CResourceProxy@DirectComposition@@QEAAJIM@Z.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDevice::CheckForDelayedDestructionObjects(DirectComposition::CDevice *this)
{
  char v2; // si
  int v3; // ebp
  unsigned int v4; // ecx
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v9[8]; // [rsp+40h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 38) )
  {
    v2 = 0;
    (*(void (__fastcall **)(DirectComposition::CDevice *))(*(_QWORD *)this + 8LL))(this);
  }
  else
  {
    v2 = 1;
  }
  v8 = (_QWORD *)((char *)this + 96);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 96));
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *, unsigned int *))(**((_QWORD **)this + 20) + 128LL))(
         *((_QWORD *)this + 20),
         8LL,
         v9,
         &v7);
  if ( v3 >= 0 )
  {
    v4 = v7;
    do
    {
      if ( !v4 )
        break;
      v5 = 0LL;
      do
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9[v5] + 32LL))(v9[v5]);
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < v7 );
      if ( v7 == 8 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *, unsigned int *))(**((_QWORD **)this + 20) + 128LL))(
               *((_QWORD *)this + 20),
               8LL,
               v9,
               &v7);
        v4 = v7;
        v3 = v6;
      }
      else
      {
        v4 = 0;
        v7 = 0;
      }
    }
    while ( v3 >= 0 );
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v8);
  if ( !v2 )
    (*(void (__fastcall **)(DirectComposition::CDevice *))(*(_QWORD *)this + 16LL))(this);
}
