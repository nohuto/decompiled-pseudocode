/*
 * XREFs of ?Create@CBridgeToAPOProcessNode@@SAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14005D1AC
 * Callers:
 *     ?CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14005C1B4 (-CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateAudioMediaType @ 0x14002A2A4 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query_to_nothrow@UIApoAuxiliaryInputConfiguration@@AEAPEAUIAudioProcessingObject@@@wil@@YAJAEAPEAUIAudioProcessingObject@@PEAPEAUIApoAuxiliaryInputConfiguration@@@Z @ 0x14004EFD4 (--$com_query_to_nothrow@UIApoAuxiliaryInputConfiguration@@AEAPEAUIAudioProcessingObject@@@wil@@Y.c)
 *     ??1?$CAutoPtr@VCBridgeSinkProcessNode@@@ATL@@QEAA@XZ @ 0x14005BFF4 (--1-$CAutoPtr@VCBridgeSinkProcessNode@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CBridgeToAPOProcessNode::Create(
        struct BRIDGE_STREAM_DESCRIPTOR *a1,
        struct IAudioProcessingObject *a2,
        struct tWAVEFORMATEX *a3,
        struct IUnknown ***a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  HRESULT v9; // eax
  __int64 v10; // rax
  int v11; // esi
  IAudioMediaType *v12; // rbx
  __int64 *v13; // rax
  char v14; // di
  __int64 *v15; // rax
  struct IUnknown **v16; // rax
  struct IUnknown **v17; // rdi
  int v18; // edx
  IAudioMediaType *ppIAudioMediaType; // [rsp+20h] [rbp-40h] BYREF
  IAudioMediaType *v21; // [rsp+28h] [rbp-38h] BYREF
  IAudioMediaType *v22; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown **v23; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v24; // [rsp+40h] [rbp-20h] BYREF
  struct IUnknown **v25; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct IAudioProcessingObject *v29; // [rsp+98h] [rbp+38h] BYREF

  v29 = a2;
  LODWORD(ppIAudioMediaType) = 0;
  v24 = 0LL;
  v7 = wil::com_query_to_nothrow<IApoAuxiliaryInputConfiguration,IAudioProcessingObject * &>(&v29, (__int64)&v24);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31E,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_38;
  }
  ppIAudioMediaType = 0LL;
  v9 = CreateAudioMediaType(a3, a3->cbSize + 18, &ppIAudioMediaType);
  v8 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x321,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)v9);
LABEL_37:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
    goto LABEL_38;
  }
  v21 = 0LL;
  v10 = *v24;
  v21 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, IAudioMediaType *, IAudioMediaType **))(v10 + 40))(
          v24,
          ppIAudioMediaType,
          &v21);
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      v12 = v21;
      if ( v21 )
        ((void (__fastcall *)(IAudioMediaType *))v21->lpVtbl->AddRef)(v21);
      v15 = &v27;
      v14 = 10;
    }
    else
    {
      v15 = &v26;
      v12 = 0LL;
      v14 = 12;
    }
    *v15 = 0LL;
    v13 = (__int64 *)&v23;
  }
  else
  {
    v12 = ppIAudioMediaType;
    if ( ppIAudioMediaType )
      ((void (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->AddRef)(ppIAudioMediaType);
    v13 = (__int64 *)&v25;
    v14 = 1;
  }
  *v13 = 0LL;
  v22 = v12;
  if ( (v14 & 8) != 0 )
  {
    v14 &= ~8u;
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v23);
  }
  if ( (v14 & 4) != 0 )
  {
    v14 &= ~4u;
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v26);
  }
  if ( (v14 & 2) != 0 )
  {
    v14 &= ~2u;
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v27);
  }
  if ( (v14 & 1) != 0 )
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v25);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x327,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)v11);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v22);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v21);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
    v8 = v11;
    goto LABEL_38;
  }
  if ( !v12 )
  {
    v8 = -2005073917;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x328,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)0x887D0003LL);
LABEL_36:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v22);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v21);
    goto LABEL_37;
  }
  v16 = (struct IUnknown **)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v16;
  v25 = v16;
  if ( !v16 )
  {
    v23 = 0LL;
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32D,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)0x8007000ELL);
    ATL::CAutoPtr<CBridgeSinkProcessNode>::~CAutoPtr<CBridgeSinkProcessNode>((__int64 (__fastcall ****)(_QWORD, __int64))&v23);
    goto LABEL_36;
  }
  v18 = *(_DWORD *)a1;
  v16[1] = 0LL;
  v16[2] = 0LL;
  *((_DWORD *)v16 + 6) = v18 != 0;
  v16[4] = 0LL;
  *((_DWORD *)v16 + 10) = 5;
  v16[6] = 0LL;
  *((_DWORD *)v16 + 14) = 0;
  v16[8] = 0LL;
  *v16 = (struct IUnknown *)&CBridgeToAPOProcessNode::`vftable';
  v23 = v16;
  *((_DWORD *)v16 + 15) = *(_DWORD *)a1;
  if ( v16[6] != (struct IUnknown *)v12 )
    ATL::AtlComPtrAssign(v16 + 6, (struct IUnknown *)v12);
  if ( v17[1] != (struct IUnknown *)v12 )
    ATL::AtlComPtrAssign(v17 + 1, (struct IUnknown *)v12);
  if ( v17[2] != (struct IUnknown *)v12 )
    ATL::AtlComPtrAssign(v17 + 2, (struct IUnknown *)v12);
  *((_DWORD *)v17 + 14) = *((_DWORD *)a1 + 3);
  v17[8] = (struct IUnknown *)*((_QWORD *)a1 + 2);
  *a4 = v17;
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v22);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v21);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
  v8 = 0;
LABEL_38:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v24);
  return v8;
}
