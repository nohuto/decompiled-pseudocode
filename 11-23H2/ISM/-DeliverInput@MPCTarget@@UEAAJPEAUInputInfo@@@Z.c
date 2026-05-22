/*
 * XREFs of ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18010D000
 * Callers:
 *     ?DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18010C170 (-DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800318B4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIMPCInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMPCInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18010C494 (--$As@UIMPCInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ??$MPCTarget_DeliverInput@PEAVMPCTarget@@AEAPEAULegacyInputInfo@@AEAJ@ISMTracing@@SAX$$QEAPEAVMPCTarget@@AEAPEAULegacyInputInfo@@AEAJ@Z @ 0x18010C5A0 (--$MPCTarget_DeliverInput@PEAVMPCTarget@@AEAPEAULegacyInputInfo@@AEAJ@ISMTracing@@SAX$$QEAPEAVMP.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18010CB6C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     GetHandEventType @ 0x18010D2BC (GetHandEventType.c)
 *     GetInputEventType @ 0x18010D320 (GetInputEventType.c)
 *     IsSubscribedForEventType @ 0x18010D3F0 (IsSubscribedForEventType.c)
 *     IsSubscribedForEventType_0 @ 0x18010D47C (IsSubscribedForEventType_0.c)
 */

__int64 __fastcall MPCTarget::DeliverInput(MPCTarget *this, struct InputInfo *a2, __int64 a3, const char *a4)
{
  bool v4; // zf
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdi
  const char *v11; // r9
  int v12; // eax
  __int64 v13; // rbx
  void (__fastcall *v14)(__int64, unsigned int *, _QWORD, char *, __int128 *); // rdi
  unsigned int HandEventType; // eax
  __int64 InputEventType; // rbx
  unsigned int v18; // [rsp+40h] [rbp-29h] BYREF
  __int64 v19; // [rsp+48h] [rbp-21h] BYREF
  __int64 v20; // [rsp+50h] [rbp-19h] BYREF
  struct LegacyInputInfo *v21; // [rsp+58h] [rbp-11h] BYREF
  struct IMPCTarget *v22; // [rsp+60h] [rbp-9h] BYREF
  __int128 v23; // [rsp+68h] [rbp-1h] BYREF
  __int128 v24; // [rsp+78h] [rbp+Fh]
  __int128 v25; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = (*(_DWORD *)a2 & 0x662600) == 0;
  v21 = a2;
  if ( v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x10F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
      a4);
  if ( (*(_DWORD *)a2 & 0x42600) == 0 )
    return 0LL;
  v7 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(MPCTarget *))(*(_QWORD *)this + 80LL))(this) )
  {
    if ( *((_BYTE *)a2 + 3002) )
      return 0LL;
  }
  v8 = *((_QWORD *)this + 4);
  if ( !v8 )
    v8 = *((_QWORD *)this + 3);
  wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v20, v8);
  v19 = 0LL;
  v9 = *(_QWORD *)(v20 + 488);
  v10 = *(_QWORD *)(v20 + 496);
  if ( v9 == v10 )
    goto LABEL_24;
  do
  {
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IMPCInputObjectProxy>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v9 + 8),
                &v19) >= 0 )
      break;
    v9 += 16LL;
  }
  while ( v9 != v10 );
  if ( !v19 )
  {
LABEL_24:
    v7 = -2147417853;
  }
  else
  {
    v12 = *((_DWORD *)a2 + 18);
    v23 = 0LL;
    v18 = v12;
    v24 = 0LL;
    v25 = 0LL;
    v23 = *(_OWORD *)((char *)a2 + 312);
    v24 = *(_OWORD *)((char *)a2 + 328);
    v25 = *(_OWORD *)((char *)a2 + 344);
    switch ( *(_DWORD *)a2 )
    {
      case 0x200:
        if ( (unsigned __int8)IsSubscribedForEventType_0(*((unsigned int *)a2 + 16)) )
        {
          if ( !*((_BYTE *)a2 + 928) )
          {
            v13 = v19;
            v14 = *(void (__fastcall **)(__int64, unsigned int *, _QWORD, char *, __int128 *))(*(_QWORD *)v19 + 24LL);
            HandEventType = GetHandEventType(*((unsigned int *)a2 + 16));
            v14(v13, &v18, HandEventType, (char *)a2 + 936, &v23);
          }
        }
        break;
      case 0x40000:
        if ( (unsigned __int8)IsSubscribedForEventType(4LL, v19) )
          (*(void (__fastcall **)(__int64, unsigned int *, char *, char *, __int128 *))(*(_QWORD *)v19 + 32LL))(
            v19,
            &v18,
            (char *)a2 + 2504,
            (char *)a2 + 2512,
            &v23);
        break;
      case 0x400:
      case 0x2000:
        InputEventType = (unsigned int)GetInputEventType(*((unsigned int *)a2 + 17));
        if ( (unsigned __int8)IsSubscribedForEventType(InputEventType, v19) )
          (*(void (__fastcall **)(__int64, unsigned int *, _QWORD, char *, _QWORD, __int128 *))(*(_QWORD *)v19 + 40LL))(
            v19,
            &v18,
            (unsigned int)InputEventType,
            (char *)a2 + 2256,
            *((_QWORD *)a2 + 2),
            &v23);
        break;
      default:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x171,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
          v11);
    }
  }
  v18 = v7;
  v22 = this;
  ISMTracing::MPCTarget_DeliverInput<MPCTarget *,LegacyInputInfo * &,long &>(&v22, &v21, (int *)&v18);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v19);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v20);
  return v7;
}
