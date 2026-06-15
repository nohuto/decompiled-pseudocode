/*
 * XREFs of ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x140092A3C
 * Callers:
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x140093A10 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14002DA28 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x140067BF4 (--4-$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x1400908EC (--$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@-$AtomicObjBase@UClockingSec.c)
 *     ??$make_unique@VSpatialBlock@@$$V$0A@@std@@YA?AV?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@0@XZ @ 0x140090A34 (--$make_unique@VSpatialBlock@@$$V$0A@@std@@YA-AV-$unique_ptr@VSpatialBlock@@U-$default_delete@VS.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x140090E64 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@A.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x1400921A4 (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 *     ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@@@Z @ 0x140093144 (-ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSpatialCrossProcessBaseEndpoint::MapCPMemory(
        CSpatialCrossProcessBaseEndpoint *this,
        struct ICrossProcessMemory *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  struct ControlData *v6; // r14
  volatile __int32 *v7; // rcx
  _OWORD *v8; // rcx
  _OWORD *v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rax
  int v12; // edi
  void *v13; // rcx
  void *v14; // rbx
  __int64 v15; // rdx
  void *v16; // rax
  void *Block; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v18[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  std::_Ref_count_base *v20; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v22; // [rsp+88h] [rbp+38h] BYREF
  char v23; // [rsp+90h] [rbp+40h] BYREF
  struct ControlData *v24; // [rsp+98h] [rbp+48h] BYREF

  v3 = (*(__int64 (__fastcall **)(struct ICrossProcessMemory *, char *, struct ControlData **))(*(_QWORD *)a2 + 32LL))(
         a2,
         &v23,
         &v24);
  if ( v3 < 0 )
  {
    v4 = 151LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = v24;
  v7 = (volatile __int32 *)((char *)v24 + 48);
  *((_QWORD *)this + 89) = (char *)v24 + 48;
  _InterlockedExchange(v7, 6);
  v3 = CSpatialCrossProcessBaseEndpoint::ValidateControlData(this, v6);
  if ( v3 < 0 )
  {
    v4 = 158LL;
    goto LABEL_3;
  }
  v8 = (_OWORD *)((char *)this + 156);
  v9 = (_OWORD *)((char *)v6 + 388);
  v10 = 3LL;
  do
  {
    *v8 = *v9;
    v8[1] = v9[1];
    v8[2] = v9[2];
    v8[3] = v9[3];
    v8[4] = v9[4];
    v8[5] = v9[5];
    v8[6] = v9[6];
    v8 += 8;
    *(v8 - 1) = v9[7];
    v9 += 8;
    --v10;
  }
  while ( v10 );
  *v8 = *v9;
  v8[1] = v9[1];
  *((_WORD *)v8 + 16) = *((_WORD *)v9 + 16);
  *(_OWORD *)v18 = 0LL;
  v11 = util::MakeAtomicObj<ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
          &v19,
          (__int64)v6 + 84);
  std::shared_ptr<CSerialWorkQueue>::operator=(v18, v11);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  if ( v18[0] )
  {
    v13 = (void *)*((_QWORD *)this + 163);
    if ( v13 )
      operator delete(v13);
    *((_QWORD *)this + 163) = 0LL;
    std::make_unique<SpatialBlock,,0>(&Block);
    v14 = Block;
    if ( Block )
    {
      v12 = SpatialBlock::Initialize((SpatialBlock *)Block, (unsigned __int8 *)v6 + 832, *((_DWORD *)v6 + 132) - 832);
      if ( v12 == -2005139387 )
      {
        v22 = 1;
        (**((void (__fastcall ***)(char *, __int64, int *))this + 142))((char *)this + 1136, 1LL, &v22);
      }
      else if ( v12 >= 0 )
      {
        *((_QWORD *)this + 162) = (char *)v6 + 8;
        std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=((__int64 *)this + 90, v18);
        v16 = v14;
        v14 = 0LL;
        *((_QWORD *)this + 163) = v16;
        v12 = 0;
LABEL_22:
        if ( v14 )
          operator delete(v14);
        goto LABEL_24;
      }
      v15 = 183LL;
    }
    else
    {
      v12 = -2147024882;
      v15 = 171LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_22;
  }
  v12 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA6,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
    (const char *)0x8007000ELL);
LABEL_24:
  if ( v18[1] )
    std::_Ref_count_base::_Decref(v18[1]);
  return (unsigned int)v12;
}
