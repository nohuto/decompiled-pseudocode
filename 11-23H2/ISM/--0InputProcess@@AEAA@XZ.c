/*
 * XREFs of ??0InputProcess@@AEAA@XZ @ 0x1800CA6F8
 * Callers:
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x180096EB4 (--0DeviceInputHost@@AEAA@XZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18001F2F0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VInputProcess@@@WRL@Microsoft@@IEAAKXZ @ 0x1800972B0 (-InternalRelease@-$ComPtr@VInputProcess@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18009EF4C (-InternalRelease@-$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A0190 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0BamoInputProcessPrincipal@@QEAA@PEAVBamoInputProcessPrincipalOwner@@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800CA66C (--0BamoInputProcessPrincipal@@QEAA@PEAVBamoInputProcessPrincipalOwner@@PEAVBamoConnection@ISMBam.c)
 *     ?InternalAddRef@?$ComPtr@VInputProcess@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CAD28 (-InternalAddRef@-$ComPtr@VInputProcess@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?DeferUntilBootstrapped@InputSystemInternalClientConnection@@QEAAXV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@Z @ 0x18013C17C (-DeferUntilBootstrapped@InputSystemInternalClientConnection@@QEAAXV-$function@$$A6AXAEAV-$ComPtr.c)
 *     ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x18013C284 (-GetForCurrentThread@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClie.c)
 */

// Hidden C++ exception states: #wind=6
InputProcess *__fastcall InputProcess::InputProcess(InputProcess *this)
{
  __int64 v2; // rcx
  Microsoft::Bamo::BaseBamoConnection **v3; // rax
  Microsoft::Bamo::BaseBamoConnection *v4; // rcx
  const char *v5; // r9
  BamoInputProcessPrincipal *v6; // rbx
  __int64 v7; // rcx
  struct Microsoft::Bamo::BaseBamoConnection *v8; // rbx
  Microsoft::Bamo::BaseBamoConnection *v10; // [rsp+30h] [rbp-29h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v11[2]; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v12[8]; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+88h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v11[1] = this;
  *(_QWORD *)this = &BamoInputProcessPrincipalOwner::`vftable';
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &InputProcess::`vftable'{for `BamoInputProcessPrincipalOwner'};
  *((_QWORD *)this + 1) = &InputProcess::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v2 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     (__int64)this,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v2 > 4u
    && (*(_DWORD *)(v2 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v2 + 24) & 0x200LL) == *(_QWORD *)(v2 + 24) )
  {
    tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_180222F5A, 0LL, 0LL, 2u, &v13);
  }
  v3 = (Microsoft::Bamo::BaseBamoConnection **)InputSystemInternalClientConnection::GetForCurrentThread(v11);
  v4 = 0LL;
  if ( &v10 != v3 )
  {
    v4 = *v3;
    *v3 = 0LL;
  }
  v10 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v4;
  Microsoft::WRL::ComPtr<InputSystemInternalClientConnection>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<InputSystemInternalClientConnection>::InternalRelease(v11);
  if ( !*((_QWORD *)this + 4) )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      14LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocess\\lib\\inputprocess.cpp",
      v5);
  v11[0] = (Microsoft::Bamo::BaseBamoConnection *)operator new(0x40uLL);
  v6 = BamoInputProcessPrincipal::BamoInputProcessPrincipal(
         v11[0],
         this,
         *((struct ISMBamos_AutoBamos::BamoConnection **)this + 4));
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *((_QWORD *)this + 3) = v6;
  v11[0] = this;
  Microsoft::WRL::ComPtr<InputProcess>::InternalAddRef(v11);
  v8 = (struct Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 4);
  v10 = this;
  Microsoft::WRL::ComPtr<InputProcess>::InternalAddRef(&v10);
  v12[0] = off_1801FD3C8;
  v12[1] = this;
  v10 = 0LL;
  v12[7] = v12;
  Microsoft::WRL::ComPtr<InputProcess>::InternalRelease((__int64 *)&v10);
  InputSystemInternalClientConnection::DeferUntilBootstrapped(v8);
  Microsoft::WRL::ComPtr<InputProcess>::InternalRelease((__int64 *)v11);
  return this;
}
