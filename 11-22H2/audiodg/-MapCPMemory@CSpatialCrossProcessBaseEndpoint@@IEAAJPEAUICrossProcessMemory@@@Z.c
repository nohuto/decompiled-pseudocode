/*
 * XREFs of ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14009E6C8
 * Callers:
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x14009F2F0 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14003833E (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14003B338 (--4-$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x14003B376 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@A.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140064CBC (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x14009CA58 (--$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@-$AtomicObjBase@UClockingSec.c)
 *     ??$make_unique@VSpatialBlock@@$$V$0A@@std@@YA?AV?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@0@XZ @ 0x14009CBB0 (--$make_unique@VSpatialBlock@@$$V$0A@@std@@YA-AV-$unique_ptr@VSpatialBlock@@U-$default_delete@VS.c)
 *     ??1?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ @ 0x14009CE60 (--1-$unique_ptr@VSpatialBlock@@U-$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14009DE28 (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 *     ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@@@Z @ 0x14009EBC0 (-ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSpatialCrossProcessBaseEndpoint::MapCPMemory(
        CSpatialCrossProcessBaseEndpoint *this,
        struct ICrossProcessMemory *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  struct ControlData *v6; // rsi
  volatile __int32 *v7; // rcx
  _OWORD *v8; // rcx
  _OWORD *v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rax
  void *v12; // rcx
  SpatialBlock *v13; // r14
  __int64 v14; // rdx
  struct ControlData *v15; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v16[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  std::_Ref_count_base *v18; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v20; // [rsp+88h] [rbp+38h] BYREF
  char v21; // [rsp+90h] [rbp+40h] BYREF
  SpatialBlock *v22; // [rsp+98h] [rbp+48h] BYREF

  v3 = (*(__int64 (__fastcall **)(struct ICrossProcessMemory *, char *, struct ControlData **))(*(_QWORD *)a2 + 32LL))(
         a2,
         &v21,
         &v15);
  if ( v3 < 0 )
  {
    v4 = 151LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = v15;
  v7 = (volatile __int32 *)((char *)v15 + 48);
  *((_QWORD *)this + 89) = (char *)v15 + 48;
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
  *(_OWORD *)v16 = 0LL;
  v11 = util::MakeAtomicObj<ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
          &v17,
          (__int64)v6 + 84);
  std::shared_ptr<CSerialWorkQueue>::operator=(v16, v11);
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  if ( !v16[0] )
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)0x8007000ELL);
LABEL_13:
    wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)v16);
    return (unsigned int)v3;
  }
  v12 = (void *)*((_QWORD *)this + 163);
  if ( v12 )
    operator delete(v12);
  *((_QWORD *)this + 163) = 0LL;
  std::make_unique<SpatialBlock,,0>(&v22);
  v13 = v22;
  if ( !v22 )
  {
    v3 = -2147024882;
    v14 = 171LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)(unsigned int)v3);
    std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>((void **)&v22);
    goto LABEL_13;
  }
  v3 = SpatialBlock::Initialize(v22, (unsigned __int8 *)v6 + 832, *((_DWORD *)v6 + 132) - 832);
  if ( v3 == -2005139387 )
  {
    v20 = 1;
    (**((void (__fastcall ***)(char *, __int64, int *))this + 142))((char *)this + 1136, 1LL, &v20);
LABEL_21:
    v14 = 183LL;
    goto LABEL_22;
  }
  if ( v3 < 0 )
    goto LABEL_21;
  *((_QWORD *)this + 162) = (char *)v6 + 8;
  std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=((__int64 *)this + 90, v16);
  *((_QWORD *)this + 163) = v13;
  if ( v16[1] )
    std::_Ref_count_base::_Decref(v16[1]);
  return 0LL;
}
