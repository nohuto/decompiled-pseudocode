/*
 * XREFs of ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18000B540
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x18000A990 (-FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioS.c)
 * Callees:
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x18000B600 (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x18000B684 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x1800194A4 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001CD18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSessionInstanceId::Copy(
        CAudioSessionInstanceId *this,
        const struct CAudioSessionInstanceId *a2)
{
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rdi
  __int64 v6; // r14

  if ( (int)CAudioEndpointId::Copy(this, a2) < 0
    || (*((_DWORD *)this + 14) = *((_DWORD *)a2 + 14),
        *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15),
        *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16),
        (int)CAppAudioSessionId::Copy(
               (CAudioSessionInstanceId *)((char *)this + 8),
               (const struct CAudioSessionInstanceId *)((char *)a2 + 8)) < 0) )
  {
    JUMPOUT(0x180086C04LL);
  }
  v4 = *((_QWORD *)a2 + 9);
  v5 = (volatile signed __int32 *)(*((_QWORD *)this + 9) - 24LL);
  if ( (volatile signed __int32 *)(v4 - 24) != v5 )
  {
    if ( *((int *)v5 + 4) >= 0 && *(_QWORD *)(v4 - 24) == *(_QWORD *)v5 )
    {
      v6 = ATL::CSimpleStringT<unsigned short,0>::CloneData();
      if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5, v5);
      *((_QWORD *)this + 9) = v6 + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 72, v4, *(unsigned int *)(v4 - 16));
    }
  }
  return 0LL;
}
