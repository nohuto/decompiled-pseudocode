/*
 * XREFs of ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x1801CB81C
 * Callers:
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1801CBA3C (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?NotifyClientOfEdgyDetected@EdgyConnection@@QEAAJPEBUCandidateIdentity@@PEAUCandidateEdgyDetectedInfo@@PEBUEdgyPointerInfo@@2@Z @ 0x1801C7D7C (-NotifyClientOfEdgyDetected@EdgyConnection@@QEAAJPEBUCandidateIdentity@@PEAUCandidateEdgyDetecte.c)
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1801CC800 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnEdgeGestureDetected(
        EdgyProcessorTarget *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  const struct CandidateIdentity *v8; // rdx
  int v9; // eax
  unsigned int v10; // esi
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rax
  int v15; // ebx
  __int16 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h]
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+70h] [rbp-10h]
  __int64 v23; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  if ( (unsigned int)(*((_DWORD *)this + 8) - 2) > 1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2AD,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
      a4);
  v5 = *((_QWORD *)this + 15);
  v6 = 0;
  v16 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  if ( EdgyImpl::GetCandidateEdgyDetectedInfo((EdgyImpl *)(v5 + 80), (struct CandidateEdgyDetectedInfo *)&v16) )
  {
    v7 = *((_QWORD *)this + 15);
    v8 = *(const struct CandidateIdentity **)(v7 + 88);
    if ( v8 )
    {
      v9 = EdgyConnection::NotifyClientOfEdgyDetected(
             *(EdgyConnection **)(v7 + 104),
             v8,
             (struct CandidateEdgyDetectedInfo *)&v16,
             (const struct EdgyPointerInfo *)(v7 + 24),
             (EdgyProcessorTarget *)((char *)this + 80));
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xCA,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
          (const char *)(unsigned int)v9);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B6,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
          (const char *)v10);
        return v10;
      }
    }
    v12 = *((_QWORD *)this + 14);
    v13 = v12 == 0;
    if ( !v12 )
    {
      v14 = v17;
      *((_QWORD *)this + 14) = v17;
      v13 = v14 == 0;
    }
    LOBYTE(v6) = !v13;
    v15 = v6 + 2;
  }
  else
  {
    v15 = 1;
  }
  *((_DWORD *)this + 8) = v15;
  return 0LL;
}
