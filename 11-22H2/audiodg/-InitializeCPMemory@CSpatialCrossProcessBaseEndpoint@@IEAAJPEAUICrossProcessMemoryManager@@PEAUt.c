/*
 * XREFs of ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14009DF4C
 * Callers:
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x1400A0510 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002BBC (-reset@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProcessMemory@@@Z @ 0x14001A7DC (--4-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProc.c)
 *     ??$copy_to@UICrossProcessMemory@@@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICrossProcessMemory@@@Z @ 0x14001AC50 (--$copy_to@UICrossProcessMemory@@@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140020820 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     memcpy_0 @ 0x14002A5CF (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14003833E (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14003B338 (--4-$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x14003B376 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@A.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x14009CA58 (--$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@-$AtomicObjBase@UClockingSec.c)
 *     ??$make_unique@VSpatialBlock@@$$V$0A@@std@@YA?AV?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@0@XZ @ 0x14009CBB0 (--$make_unique@VSpatialBlock@@$$V$0A@@std@@YA-AV-$unique_ptr@VSpatialBlock@@U-$default_delete@VS.c)
 *     ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x14009D390 (-Create@SpatialBlock@@QEAAJPEAEIIIII@Z.c)
 *     ?GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z @ 0x14009D8DC (-GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z.c)
 *     ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@@@Z @ 0x14009EBC0 (-ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSpatialCrossProcessBaseEndpoint::InitializeCPMemory(
        CSpatialCrossProcessBaseEndpoint *this,
        struct ICrossProcessMemoryManager *a2,
        struct tWAVEFORMATEX *a3,
        size_t *a4,
        unsigned int a5,
        unsigned int a6,
        DWORD a7,
        unsigned int a8,
        unsigned int a9,
        struct ICrossProcessMemory **a10)
{
  unsigned int v11; // r15d
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  unsigned __int64 v14; // rsi
  int MemoryRequirement; // eax
  unsigned int v16; // ebx
  __int64 result; // rax
  DWORD v18; // r14d
  __int64 (__fastcall *v19)(struct ICrossProcessMemoryManager *, _QWORD, __int64 *); // rbx
  int v20; // eax
  unsigned int v21; // ebx
  const char *v22; // r9
  int v23; // eax
  unsigned int v24; // ebx
  int v25; // eax
  unsigned int v26; // ebx
  char *v27; // rsi
  volatile __int32 *v28; // rcx
  __int64 *v29; // rax
  _OWORD *v30; // r11
  HRESULT v31; // eax
  _OWORD *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  void *v35; // rax
  __int64 v36; // [rsp+40h] [rbp-78h] BYREF
  void *Block; // [rsp+48h] [rbp-70h] BYREF
  PVOID pvAddress; // [rsp+50h] [rbp-68h] BYREF
  std::_Ref_count_base *v39[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v40; // [rsp+68h] [rbp-50h] BYREF
  std::_Ref_count_base *v41; // [rsp+70h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v11 = a6;
  v12 = a7;
  v13 = a6 + a7;
  if ( a6 + a7 < a6 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)0x80070216LL);
    return 2147942934LL;
  }
  v14 = 4LL * a5;
  if ( v14 > 0xFFFFFFFF )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)0x80070216LL);
    return 2147942934LL;
  }
  MemoryRequirement = SpatialBlock::GetMemoryRequirement(v14, a8, a9, v13, &a6);
  v16 = MemoryRequirement;
  if ( MemoryRequirement < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)(unsigned int)MemoryRequirement);
    return v16;
  }
  v18 = a6 + 832;
  if ( a6 >= 0xFFFFFCC0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)0x80070216LL);
    return 2147942934LL;
  }
  v36 = 0LL;
  v19 = *(__int64 (__fastcall **)(struct ICrossProcessMemoryManager *, _QWORD, __int64 *))(*(_QWORD *)a2 + 32LL);
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::reset(&v36);
  try
  {
    v20 = v19(a2, v18, &v36);
    v21 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)(unsigned int)v20);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v36);
      return v21;
    }
    v23 = (*(__int64 (__fastcall **)(__int64, DWORD *, PVOID *))(*(_QWORD *)v36 + 32LL))(v36, &a7, &pvAddress);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)(unsigned int)v23);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v36);
      return v24;
    }
    if ( a7 < v18 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)0x8007000ELL);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v36);
      return 2147942414LL;
    }
    std::make_unique<SpatialBlock,,0>(&Block);
    if ( !Block )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)0x8007000ELL);
      if ( !Block )
      {
LABEL_16:
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v36);
        return 2147942414LL;
      }
LABEL_15:
      operator delete(Block);
      goto LABEL_16;
    }
    v25 = SpatialBlock::Create((SpatialBlock *)Block, (unsigned __int8 *)pvAddress + 832, a6, v14, a8, a9, v13);
    v26 = v25;
    if ( v25 >= 0 )
    {
      v27 = (char *)pvAddress;
      *((_QWORD *)this + 162) = (char *)pvAddress + 8;
      *(_DWORD *)v27 = 806;
      *((_DWORD *)v27 + 1) = 1396785988;
      memset_0(*((void **)this + 162), 0, 0x4CuLL);
      v28 = (volatile __int32 *)(*((_QWORD *)this + 162) + 40LL);
      *((_QWORD *)this + 89) = v28;
      _InterlockedExchange(v28, 6);
      *(_OWORD *)v39 = 0LL;
      v29 = util::MakeAtomicObj<ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
              &v40,
              (__int64)(v27 + 84));
      std::shared_ptr<CSerialWorkQueue>::operator=(v39, v29);
      if ( v41 )
        std::_Ref_count_base::_Decref(v41);
      if ( !v39[0] )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x60,
          (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
          (const char *)0x8007000ELL);
        if ( v39[1] )
          std::_Ref_count_base::_Decref(v39[1]);
        if ( !Block )
          goto LABEL_16;
        goto LABEL_15;
      }
      if ( a3->cbSize > 0x100u )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x63,
          (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
          (const char *)0x80070057LL);
        if ( v39[1] )
          std::_Ref_count_base::_Decref(v39[1]);
        if ( Block )
          operator delete(Block);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v36);
        return 2147942487LL;
      }
      memcpy_0((char *)this + 300, a3, a3->cbSize + 18LL);
      *((_DWORD *)this + 71) = a5;
      *((_DWORD *)this + 72) = v11;
      *((_DWORD *)this + 73) = v12;
      *((_DWORD *)this + 74) = v18;
      v30 = (_OWORD *)((char *)this + 156);
      if ( a4 && (v31 = StringCchCopyW((unsigned __int16 *)this + 78, 0x40uLL, a4), v26 = v31, v31 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6E,
          (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
          (const char *)(unsigned int)v31);
        if ( v39[1] )
          std::_Ref_count_base::_Decref(v39[1]);
        if ( !Block )
          goto LABEL_46;
      }
      else
      {
        v32 = v27 + 388;
        v33 = 3LL;
        do
        {
          *v32 = *v30;
          v32[1] = v30[1];
          v32[2] = v30[2];
          v32[3] = v30[3];
          v32[4] = v30[4];
          v32[5] = v30[5];
          v32[6] = v30[6];
          v32 += 8;
          *(v32 - 1) = v30[7];
          v30 += 8;
          --v33;
        }
        while ( v33 );
        *v32 = *v30;
        v32[1] = v30[1];
        *((_WORD *)v32 + 16) = *((_WORD *)v30 + 16);
        v34 = CSpatialCrossProcessBaseEndpoint::ValidateControlData(this, (const struct ControlData *)v27);
        v26 = v34;
        if ( v34 >= 0 )
        {
          WerRegisterMemoryBlock(v27, v18);
          wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::operator=((__int64 *)this + 11, v36);
          v35 = Block;
          Block = 0LL;
          *((_QWORD *)this + 163) = v35;
          std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=((__int64 *)this + 90, v39);
          wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::copy_to<ICrossProcessMemory>(&v36, a10);
          if ( v39[1] )
            std::_Ref_count_base::_Decref(v39[1]);
          if ( Block )
            operator delete(Block);
          wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v36);
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x73,
          (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
          (const char *)(unsigned int)v34);
        if ( v39[1] )
          std::_Ref_count_base::_Decref(v39[1]);
        if ( !Block )
          goto LABEL_46;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)(unsigned int)v25);
      if ( !Block )
      {
LABEL_46:
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v36);
        return v26;
      }
    }
    operator delete(Block);
    goto LABEL_46;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x88,
                           (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
                           v22);
  }
  return result;
}
