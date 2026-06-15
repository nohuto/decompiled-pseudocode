/*
 * XREFs of ?Add@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@PEAUIAudioStreamInfo@@PEAPEAU__POSITION@@@Z @ 0x180133AB0
 * Callers:
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180133DE4 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetKey@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@AEAAPEAUIAudioStreamInfo@@PEAU3@@Z @ 0x180046B0C (-GetKey@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@AEAAPEAUIAudioStreamInfo.c)
 *     ?Attach@?$ComPtr@UIAudioStreamInfo@@@WRL@Microsoft@@QEAAXPEAUIAudioStreamInfo@@@Z @ 0x180046B5C (-Attach@-$ComPtr@UIAudioStreamInfo@@@WRL@Microsoft@@QEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?GetNode@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUIAudioStreamInfo@@AEAI1AEAPEAV312@@Z @ 0x180049E64 (-GetNode@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudioStre.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetAt@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIAudioStreamInfo@@AEBVCStreamResource@Sarm@@@Z @ 0x1801367F4 (-SetAt@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudioStream.c)
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x18013965C (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::Add(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3)
{
  __int64 *v3; // r14
  __int64 v5; // rsi
  __int64 Key; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  ATL::CAtlException *v11; // rbx
  __int64 v12; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-98h] BYREF
  _OWORD v15[3]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v16; // [rsp+80h] [rbp-58h]
  __int64 v17; // [rsp+88h] [rbp-50h]
  __int64 v18; // [rsp+90h] [rbp-48h]
  __int64 v19; // [rsp+98h] [rbp-40h]
  __int64 v20; // [rsp+A0h] [rbp-38h]
  char v21; // [rsp+A8h] [rbp-30h]
  __int64 v22; // [rsp+B0h] [rbp-28h] BYREF
  ATL::CAtlException *v23; // [rsp+B8h] [rbp-20h] BYREF
  __int64 v25; // [rsp+F8h] [rbp+20h] BYREF

  v3 = a3;
  v5 = 0LL;
  v12 = 0LL;
  Key = util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::GetKey(a1, a2);
  Microsoft::WRL::ComPtr<IAudioStreamInfo>::Attach(&v12, Key);
  v7 = v12;
  if ( v12 )
  {
    v14 = v12;
    if ( !ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNode(
            a1,
            (unsigned int *)&v14,
            (int *)&v13,
            (unsigned int *)&v25,
            &v22) )
    {
      try
      {
        memset(v15, 0, sizeof(v15));
        v16 = 0LL;
        v17 = 0LL;
        v18 = 0LL;
        v19 = 0LL;
        v20 = 0LL;
        v21 = 0;
        v13 = 0LL;
        v25 = v7;
        v9 = ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::SetAt(
               a1,
               &v25,
               v15);
        v13 = v9;
      }
      catch ( ATL::CAtlException *v23 )
      {
        v11 = v23;
        if ( *(_DWORD *)v23 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v25) = *(_DWORD *)v11;
        v7 = v12;
        if ( (int)v25 < 0 )
        {
          v5 = 0LL;
LABEL_9:
          Sarm::CStreamResource::Reclaim((Sarm::CStreamResource *)v15);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v15);
          goto LABEL_10;
        }
        v3 = a3;
        v9 = v13;
      }
      v5 = v9 + 8;
      if ( v3 )
        *v3 = v9;
      goto LABEL_9;
    }
  }
LABEL_10:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v5;
}
