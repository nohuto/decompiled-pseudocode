/*
 * XREFs of ?Thunk_MarkProxyReady_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18000AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_MarkProxyReady_5(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2;
  v3 = a1;
  v4 = *(unsigned int *)(a1 + 36);
  v5 = 0LL;
  v14 = 0LL;
  v6 = *v2;
  if ( (_DWORD)v6 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 32LL) + 64LL);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 **))(*(_QWORD *)v7 + 56LL))(v7, v4, v6, &v14);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x461,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v8,
        v12);
    v5 = v14;
  }
  v9 = *v5;
  *((_BYTE *)v5 + 28) = 1;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v9 + 56))(v5, v4, v6, v3);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL))(v10);
  return 0LL;
}
