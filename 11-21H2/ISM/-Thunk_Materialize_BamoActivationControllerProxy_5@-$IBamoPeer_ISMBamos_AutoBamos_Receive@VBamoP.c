/*
 * XREFs of ?Thunk_Materialize_BamoActivationControllerProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180005570
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x1800059D0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005A70 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_Materialize_BamoActivationControllerProxy_5(
        __int64 a1,
        unsigned int **a2,
        __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-38h]
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v13; // [rsp+60h] [rbp+8h]

  v4 = **a2;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v11,
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL),
    a3,
    0LL);
  v13 = operator new(0x50uLL);
  memset_0(v13, 0, 0x50uLL);
  *((_DWORD *)v13 + 6) = 0;
  *((_QWORD *)v13 + 4) = 0LL;
  *((_DWORD *)v13 + 10) = 0;
  *((_DWORD *)v13 + 11) = 0;
  *((_QWORD *)v13 + 2) = &BamoImpl::BamoActivationControllerProxyImpl::`vftable';
  *((_BYTE *)v13 + 48) = 0;
  *((_QWORD *)v13 + 7) = 0LL;
  *((_QWORD *)v13 + 8) = 0LL;
  *((_QWORD *)v13 + 9) = 0LL;
  *(_QWORD *)v13 = &ActivationControllerBamoProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v13 + 1) = &ActivationControllerBamoProxy::`vftable'{for `IActivationControllerProxy'};
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(v11);
  v5 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v13 + 56LL))(v13);
  v6 = *(_QWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = a1;
  (**(void (__fastcall ***)(__int64))a1)(a1);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  *(_DWORD *)(v5 + 24) = v4;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 64LL);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v7 + 40LL))(
         v7,
         *(unsigned int *)(a1 + 36),
         v4,
         v5);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x763,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v10);
  return 0LL;
}
