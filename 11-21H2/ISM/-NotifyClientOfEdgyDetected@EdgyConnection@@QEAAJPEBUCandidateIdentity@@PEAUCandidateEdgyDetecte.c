/*
 * XREFs of ?NotifyClientOfEdgyDetected@EdgyConnection@@QEAAJPEBUCandidateIdentity@@PEAUCandidateEdgyDetectedInfo@@PEBUEdgyPointerInfo@@2@Z @ 0x1801A99C0
 * Callers:
 *     ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x1801AD40C (-OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x18014C240 (-EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z.c)
 */

__int64 __fastcall EdgyConnection::NotifyClientOfEdgyDetected(
        EdgyConnection *this,
        const struct CandidateIdentity *a2,
        struct CandidateEdgyDetectedInfo *a3,
        const struct EdgyPointerInfo *a4,
        struct D2D_VECTOR_2F a5)
{
  bool v5; // zf
  struct D2D_VECTOR_2F v6; // rsi
  FLOAT v10; // xmm1_4
  int v11; // eax
  FLOAT v12; // xmm0_4
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v18; // [rsp+20h] [rbp-31h]
  __int64 v19; // [rsp+50h] [rbp-1h] BYREF
  int v20; // [rsp+58h] [rbp+7h]
  struct D2D_VECTOR_2F v21; // [rsp+5Ch] [rbp+Bh]
  __int64 v22; // [rsp+68h] [rbp+17h]
  struct D2D_VECTOR_2F v23; // [rsp+70h] [rbp+1Fh]
  __int64 v24; // [rsp+78h] [rbp+27h]
  int v25; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+57h]
  struct D2D_VECTOR_2F v27; // [rsp+C0h] [rbp+6Fh] BYREF

  v5 = *(_BYTE *)a3 == 0;
  v6 = a5;
  v10 = (float)*((int *)a4 + 4);
  v11 = *(_DWORD *)(*(_QWORD *)&a5 + 12LL);
  v27.x = (float)*((int *)a4 + 3);
  v12 = (float)v11;
  v13 = *(_DWORD *)(*(_QWORD *)&a5 + 16LL);
  v27.y = v10;
  a5.x = v12;
  a5.y = (float)v13;
  if ( !v5 )
  {
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(const struct CandidateIdentity **)a2;
    BamoEdgyControllerClientProxy::EdgyGestureDetected(
      (BamoEdgyControllerClientProxy *)(*((_QWORD *)a3 + 2) + 8LL),
      (const unsigned __int16 *)a2,
      *(_DWORD *)a4,
      &v27,
      *((_QWORD *)a4 + 3),
      &a5,
      *(_QWORD *)(*(_QWORD *)&v6 + 24LL),
      *((_DWORD *)a3 + 6),
      *((_DWORD *)a3 + 7));
  }
  if ( *((_BYTE *)a3 + 1) )
  {
    v14 = *((_QWORD *)this + 2);
    v19 = *((_QWORD *)a3 + 9);
    v20 = *(_DWORD *)a4;
    v22 = *((_QWORD *)a4 + 3);
    v15 = *(_QWORD *)(*(_QWORD *)&v6 + 24LL);
    v21 = v27;
    v24 = v15;
    v25 = *((_DWORD *)a3 + 12);
    v23 = a5;
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64))(*(_QWORD *)v14 + 184LL))(
            v14,
            *((_QWORD *)this + 7),
            &v19,
            56LL);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1A4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
        (const char *)(unsigned int)v16,
        v18);
  }
  return 0LL;
}
