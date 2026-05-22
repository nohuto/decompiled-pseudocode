/*
 * XREFs of ?Thunk_MarkProxyReady_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18000E830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_MarkProxyReady_5(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int *v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v14; // eax
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2;
  v3 = 0;
  v4 = *(unsigned int *)(a1 + 36);
  v17 = 0LL;
  v5 = *v2;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = 0LL;
  v8 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v6 + 32);
  if ( (_DWORD)v5 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64 *))(**((_QWORD **)v8 + 8) + 56LL))(
           *((_QWORD **)v8 + 8),
           v4,
           v5,
           &v17);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x48A,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)v9,
        v15);
    v7 = v17;
  }
  if ( v7 && (v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, v4)) != 0 )
  {
    v11 = *(_QWORD *)v10;
    *(_BYTE *)(v10 + 28) = 1;
    v12 = (*(__int64 (__fastcall **)(__int64))(v11 + 56))(v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 64LL))(v12);
  }
  else
  {
    v14 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v8, -2018375668, 0);
    v3 = v14;
    if ( v14 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A7,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v14,
        v15);
  }
  return v3;
}
