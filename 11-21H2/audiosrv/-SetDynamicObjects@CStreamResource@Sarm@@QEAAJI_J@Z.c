/*
 * XREFs of ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x18012BEB0
 * Callers:
 *     ?GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180126FF8 (-GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180128974 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ @ 0x18012B618 (-GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ.c)
 *     ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x18012BC18 (-ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18012A420 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?RemoveFromDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x18012AB00 (-RemoveFromDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@5535@Z @ 0x18012AFB8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@U1@U.c)
 *     ?IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x18012B96C (-IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z.c)
 *     ?NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x18012BAF8 (-NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z.c)
 */

__int64 __fastcall Sarm::CStreamResource::SetDynamicObjects(
        Sarm::CStreamResource *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rsi
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r14d
  unsigned int v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edi
  int v18; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h] BYREF
  __int64 v21; // [rsp+78h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  int v23; // [rsp+B0h] [rbp+30h] BYREF
  int v24; // [rsp+B8h] [rbp+38h] BYREF
  int v25; // [rsp+C8h] [rbp+48h] BYREF

  v6 = a3;
  SarmTraceLoggingTracer("Sarm::CStreamResource::SetDynamicObjects", 300, a3, a4);
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    if ( a2 == *((_DWORD *)this + 20) )
    {
      v6 = 0LL;
      goto LABEL_12;
    }
  }
  else if ( !v6 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x130,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0106LL);
    return 2289828102LL;
  }
  v8 = Sarm::CStreamResource::IssueGrantToASAR((__int64 **)this, a2, v6);
  v11 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x139,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v8);
    return v11;
  }
  v12 = *((_DWORD *)this + 20);
  if ( a2 >= v12 )
  {
    Sarm::CEndpointResourcePool::RemoveFromDynamicPool(*((Sarm::CEndpointResourcePool **)this + 1), a2 - v12, v9, v10);
    v12 = *((_DWORD *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 21) = v12 - a2;
  }
  *((_DWORD *)this + 19) = v12;
  *((_DWORD *)this + 20) = a2;
LABEL_12:
  v13 = Sarm::CStreamResource::NotifyClientOfGrant(this, a2, v6);
  v17 = v13;
  if ( v13 >= 0 )
  {
    if ( (unsigned int)dword_1801C0178 > 5 )
    {
      v24 = *((_DWORD *)this + 13);
      v23 = *((_DWORD *)this + 20);
      v25 = *((_DWORD *)this + 19);
      v18 = *((_DWORD *)this + 21);
      v20 = (__int64)this + 16;
      v21 = *((_QWORD *)this + 5);
      v19 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v14,
        byte_18018BD3E,
        v15,
        v16,
        (__int64)&v21,
        &v20,
        (__int64)&v18,
        (__int64)&v25,
        (__int64)&v23,
        (__int64)&v19,
        (__int64)&v24);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v13);
    return v17;
  }
}
