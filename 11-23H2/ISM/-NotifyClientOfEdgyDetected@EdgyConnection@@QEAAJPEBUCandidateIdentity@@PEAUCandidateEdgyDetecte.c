/*
 * XREFs of ?NotifyClientOfEdgyDetected@EdgyConnection@@QEAAJPEBUCandidateIdentity@@PEAUCandidateEdgyDetectedInfo@@PEBUEdgyPointerInfo@@2@Z @ 0x1801C7D7C
 * Callers:
 *     ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x1801CB81C (-OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x18016AA80 (-EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z.c)
 */

__int64 __fastcall EdgyConnection::NotifyClientOfEdgyDetected(
        EdgyConnection *this,
        const struct CandidateIdentity *a2,
        struct CandidateEdgyDetectedInfo *a3,
        const struct EdgyPointerInfo *a4,
        const struct EdgyPointerInfo *a5)
{
  bool v5; // zf
  const unsigned __int16 *v6; // r10
  unsigned __int64 *v10; // rsi
  FLOAT v11; // xmm1_4
  int v12; // eax
  float v13; // xmm0_4
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  int v17; // eax
  int v19; // [rsp+28h] [rbp-31h]
  __int64 v20; // [rsp+58h] [rbp-1h] BYREF
  int v21; // [rsp+60h] [rbp+7h]
  struct D2D_VECTOR_2F v22; // [rsp+64h] [rbp+Bh]
  __int64 v23; // [rsp+70h] [rbp+17h]
  const struct EdgyPointerInfo *v24; // [rsp+78h] [rbp+1Fh]
  unsigned __int64 v25; // [rsp+80h] [rbp+27h]
  int v26; // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]
  struct D2D_VECTOR_2F v28; // [rsp+C8h] [rbp+6Fh] BYREF

  v5 = *(_BYTE *)a3 == 0;
  v6 = (const unsigned __int16 *)a2;
  v10 = (unsigned __int64 *)((char *)a5 + 24);
  v11 = (float)*((int *)a4 + 4);
  v12 = *((_DWORD *)a5 + 3);
  v28.x = (float)*((int *)a4 + 3);
  v13 = (float)v12;
  v14 = *((_DWORD *)a5 + 4);
  v28.y = v11;
  *(float *)&a5 = v13;
  *((float *)&a5 + 1) = (float)v14;
  if ( !v5 )
  {
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      v6 = *(const unsigned __int16 **)a2;
    BamoEdgyControllerClientProxy::EdgyGestureDetected(
      (BamoEdgyControllerClientProxy *)(*((_QWORD *)a3 + 2) + 8LL),
      v6,
      *(_DWORD *)a4,
      &v28,
      *((_QWORD *)a4 + 3),
      (const struct D2D_VECTOR_2F *)&a5,
      *v10,
      *((_DWORD *)a3 + 6),
      *((_DWORD *)a3 + 7));
  }
  if ( *((_BYTE *)a3 + 1) )
  {
    v15 = *((_QWORD *)this + 2);
    v20 = *((_QWORD *)a3 + 9);
    v21 = *(_DWORD *)a4;
    v23 = *((_QWORD *)a4 + 3);
    v16 = *v10;
    v22 = v28;
    v25 = v16;
    v26 = *((_DWORD *)a3 + 12);
    v24 = a5;
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64))(*(_QWORD *)v15 + 184LL))(
            v15,
            *((_QWORD *)this + 7),
            &v20,
            56LL);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1A4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
        (const char *)(unsigned int)v17,
        v19);
  }
  return 0LL;
}
