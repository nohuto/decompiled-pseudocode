/*
 * XREFs of ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000AA20
 * Callers:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000AE60 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14001C290 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14000ABB0 (-RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x140057448 (WPP_SF_q.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14005D5EC (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CPipeInstance::DeactivateAPOsAndRemoveConnections(struct IAudioProcessor **this)
{
  struct IAudioProcessor *v2; // rcx
  struct IAudioProcessor *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbx
  struct IAudioProcessor *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rbx
  CConnectionInstance *v9; // rcx
  unsigned __int64 v10; // r8
  struct IAudioProcessor *v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids, this);
  }
  if ( *((_DWORD *)this + 29) )
  {
    v2 = this[19];
    if ( v2 )
    {
      if ( (*(int (__fastcall **)(struct IAudioProcessor *, unsigned __int64 *))(*(_QWORD *)v2 + 32LL))(v2, &v13) >= 0 )
      {
        v3 = this[3];
        while ( v3 )
        {
          v4 = *((_QWORD *)v3 + 2);
          v3 = (struct IAudioProcessor *)*((_QWORD *)v3 + 1);
          if ( *(_DWORD *)(v4 + 40) == 2 )
          {
            v5 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 40LL);
            v14 = v5;
            if ( v5 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
            (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, __int64))(*(_QWORD *)this[19] + 64LL))(
              this[19],
              v13,
              v5);
            if ( v5 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
          }
        }
        v6 = this[8];
        while ( v6 )
        {
          v7 = (_QWORD *)*((_QWORD *)v6 + 2);
          v6 = *(struct IAudioProcessor **)v6;
          v8 = (_QWORD *)*v7;
          while ( v8 )
          {
            v9 = (CConnectionInstance *)v8[2];
            v8 = (_QWORD *)*v8;
            v10 = v13;
            v11 = this[19];
            *((_DWORD *)v9 + 1) = 0;
            v12 = *((_DWORD *)v9 + 4);
            if ( v12 )
            {
              if ( v12 == 1 )
                CConnectionInstance::RemoveCaptureConnection(v9, v11, v10);
            }
            else
            {
              CConnectionInstance::RemoveRenderConnection(v9, v11, v10);
            }
          }
        }
        if ( (*(int (__fastcall **)(struct IAudioProcessor *, unsigned __int64))(*(_QWORD *)this[19] + 40LL))(
               this[19],
               v13) >= 0 )
          *((_DWORD *)this + 29) = 0;
      }
    }
  }
}
