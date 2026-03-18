/*
 * XREFs of ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1C016DBD4
 * Callers:
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C016DA3C (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C3330 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U6@U6@U6@U6@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@33333333AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@8888AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C001A178 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrappe.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00443CC (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ??1DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAA@XZ @ 0x1C016DF64 (--1DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAA@XZ.c)
 *     ?DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C01E0100 (-DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C01E5174 (-CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1C01E7E5C (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::DestroyAdapterInfo(DXGPROCESS *this, struct ADAPTER_RENDER **a2)
{
  struct ADAPTER_RENDER *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  char *v9; // r14
  __int64 v10; // rax
  char **v11; // rcx
  struct DXGPROCESS_RENDER_ADAPTER_INFO *v12; // rdi
  struct DXGPROCESS_RENDER_ADAPTER_INFO *v13; // r15
  __int64 v14; // r8
  unsigned int v15; // r9d
  __int64 v16; // r10
  void *v17; // r11
  struct ADAPTER_RENDER *v18; // rdx
  __int64 v19; // rcx
  __int128 v20; // xmm0
  bool v21; // al
  __int64 v22; // r9
  char v23; // [rsp+D0h] [rbp-80h] BYREF
  char v24; // [rsp+D1h] [rbp-7Fh] BYREF
  bool v25; // [rsp+D2h] [rbp-7Eh] BYREF
  bool v26; // [rsp+D3h] [rbp-7Dh] BYREF
  _BYTE v27[2]; // [rsp+D4h] [rbp-7Ch] BYREF
  __int16 v28; // [rsp+D6h] [rbp-7Ah] BYREF
  int v29; // [rsp+D8h] [rbp-78h] BYREF
  unsigned __int16 *v30; // [rsp+E0h] [rbp-70h] BYREF
  __int128 *v31; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-60h] BYREF
  void *v33; // [rsp+F8h] [rbp-58h] BYREF
  const CHAR *v34; // [rsp+100h] [rbp-50h] BYREF
  __int64 v35; // [rsp+108h] [rbp-48h] BYREF
  __int64 v36; // [rsp+110h] [rbp-40h] BYREF
  __int64 v37; // [rsp+118h] [rbp-38h] BYREF
  __int64 v38; // [rsp+120h] [rbp-30h] BYREF
  __int64 v39; // [rsp+128h] [rbp-28h] BYREF
  __int64 v40; // [rsp+130h] [rbp-20h] BYREF
  __int64 v41; // [rsp+138h] [rbp-18h] BYREF
  __int64 v42; // [rsp+140h] [rbp-10h] BYREF
  __int64 v43; // [rsp+148h] [rbp-8h] BYREF
  __int64 v44; // [rsp+150h] [rbp+0h] BYREF
  _QWORD v45[8]; // [rsp+160h] [rbp+10h] BYREF
  __int128 v46; // [rsp+1A0h] [rbp+50h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 2502LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapterInfo != nullptr", 2502LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_BYTE *)a2 + 77) )
  {
    DXGPROCESS_RENDER_ADAPTER_INFO::CloseVidMmAdapter((DXGPROCESS_RENDER_ADAPTER_INFO *)a2, this, a2[6]);
    v18 = a2[2];
    if ( v18 )
    {
      ADAPTER_RENDER::DdiDestroyProcess(a2[6], v18);
      a2[2] = 0LL;
    }
    DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate((DXGPROCESS_ADAPTER_INFO_PASID_DATA *)a2);
  }
  v4 = a2[6];
  v5 = *((_QWORD *)v4 + 2);
  memset(v45, 0, sizeof(v45));
  if ( !*(_BYTE *)(v5 + 209) )
  {
    v6 = *((_QWORD *)this + 8);
    v7 = *((_QWORD *)v4 + 78);
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)v7 - 1) + 16);
      if ( v8 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)(v7 + 8) + 1056LL))(
          *((_QWORD *)v4 + 79),
          v8,
          v45);
        v4 = a2[6];
      }
    }
  }
  if ( *((_DWORD *)a2 + 7) )
  {
    ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(v4);
    v4 = a2[6];
  }
  v9 = (char *)(a2 + 7);
  if ( *((struct _KTHREAD **)v4 + 10) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 4360LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_OpenAdapterLock.IsExclusiveOwner()",
      4360LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = *(_QWORD *)v9;
  if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || (v11 = (char **)a2[8], *v11 != v9) )
    __fastfail(3u);
  *v11 = (char *)v10;
  *(_QWORD *)(v10 + 8) = v11;
  --*((_DWORD *)v4 + 78);
  *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *(unsigned int *)(v5 + 240)) = 0LL;
  v12 = a2[13];
  while ( v12 != (struct DXGPROCESS_RENDER_ADAPTER_INFO *)(a2 + 13) )
  {
    v13 = v12;
    v12 = *(struct DXGPROCESS_RENDER_ADAPTER_INFO **)v12;
    if ( *((_QWORD *)v13 + 3)
      && (unsigned int)dword_1C012F918 > 5
      && tlgKeywordOn((__int64)&dword_1C012F918, 0x400000000010LL) )
    {
      v19 = *((_QWORD *)this + 8);
      v30 = *(unsigned __int16 **)(v5 + 1616);
      v31 = &v46;
      v20 = *(_OWORD *)((char *)this + 360);
      v33 = v17;
      v46 = v20;
      v23 = *(_BYTE *)(v19 + 130);
      v24 = *(_BYTE *)(v19 + 129);
      v25 = (v15 & 0x20) != 0;
      v21 = (v15 & 0x10) != 0;
      v22 = v15 >> 8;
      v26 = v21;
      LOBYTE(v22) = v22 & 1;
      v32 = *(_QWORD *)(v5 + 404);
      v27[0] = v22;
      v34 = *(const CHAR **)(v19 + 88);
      v35 = *(_QWORD *)(v19 + 80);
      v29 = *((_DWORD *)v13 + 4);
      v36 = v45[7];
      v37 = v45[5];
      v38 = v45[4];
      v39 = v45[3];
      v40 = v45[1];
      v41 = v45[0];
      v42 = v45[2];
      v28 = 7;
      v43 = v16;
      v44 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>>(
        v19,
        (int)&unk_1C00994B9,
        v14,
        v22,
        (__int64)&v44,
        (__int64)&v28,
        (__int64)&v43,
        (__int64)&v42,
        (__int64)&v41,
        (__int64)&v40,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v29,
        (__int64)&v35,
        &v34,
        &v33,
        (__int64)&v32,
        (__int64)v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64 *)&v31,
        &v30);
    }
    operator delete(v13);
  }
  DXGPROCESS_ADAPTER_INFO_PASID_DATA::~DXGPROCESS_ADAPTER_INFO_PASID_DATA((DXGPROCESS_ADAPTER_INFO_PASID_DATA *)a2);
  operator delete(a2);
}
