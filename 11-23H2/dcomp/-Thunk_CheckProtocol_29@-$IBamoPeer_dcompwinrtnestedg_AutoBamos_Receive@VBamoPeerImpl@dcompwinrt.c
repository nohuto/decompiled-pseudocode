/*
 * XREFs of ?Thunk_CheckProtocol_29@?$IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive@VBamoPeerImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016E7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18016EC24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive<BamoImpl::dcompwinrtnestedg_AutoBamos::BamoPeerImpl>::Thunk_CheckProtocol_29(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  int v6; // edx
  unsigned int v7; // r8d
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a2;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 16LL);
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  v8 = *v5 - *v3;
  if ( *v5 == *v3 )
    v8 = v5[1] - v3[1];
  if ( v8 )
  {
    v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL),
           v6,
           v7);
    v10 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1435,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\objfre\\amd64\\dcompwinrtnestedg.bamo.h",
        (const char *)(unsigned int)v9);
  }
  else
  {
    return 0;
  }
  return v10;
}
