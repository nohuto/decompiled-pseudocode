/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140014BD0
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140012210 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400129B4 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140018F70 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001B690 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     _lambda_db866b10258e69c75444ed411b8b24bb_::operator() @ 0x1400591B0 (_lambda_db866b10258e69c75444ed411b8b24bb_--operator().c)
 *     ?APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z @ 0x14006CBD0 (-APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z.c)
 *     ?TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z @ 0x14006DAE0 (-TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140015388 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, unsigned int a2, char a3, char a4, __int64 a5, int a6)
{
  HRESULT Instance; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  LPVOID ppv[2]; // [rsp+38h] [rbp-10h] BYREF

  ppv[0] = 0LL;
  v14 = 0LL;
  if ( (unsigned int)GetClassFromEndpointId() == 3 )
  {
    Instance = 0;
  }
  else
  {
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 ppv);
    if ( Instance >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv[0] + 40LL))(ppv[0], a1, &v14);
      if ( Instance >= 0 )
      {
        LOBYTE(v12) = a4;
        LOBYTE(v11) = a3;
        Instance = TrackSystemEffectBehavior(v14, a2, v11, v12, a5, a6);
      }
    }
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v14);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)ppv);
  return (unsigned int)Instance;
}
