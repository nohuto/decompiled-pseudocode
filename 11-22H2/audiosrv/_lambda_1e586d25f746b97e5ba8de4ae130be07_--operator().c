/*
 * XREFs of _lambda_1e586d25f746b97e5ba8de4ae130be07_::operator() @ 0x18006B118
 * Callers:
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9278 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_1e586d25f746b97e5ba8de4ae130be07_::operator()(_QWORD **a1)
{
  __int64 v2; // r8
  _QWORD *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)**a1 + 104LL))(**a1, a1[1] + 7);
  v2 = *a1[2];
  if ( v2 )
  {
    v3 = a1[1];
    *((_DWORD *)v3 + 15) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) + 16LL) + 18;
    v3[8] = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL);
  }
  else
  {
    v4 = *a1[3];
    v5 = *(_QWORD *)(v4 + 16);
    if ( v5 )
    {
      v6 = a1[1];
      *((_DWORD *)v6 + 15) = *(unsigned __int16 *)(v5 + 16) + 18;
      v6[8] = *(_QWORD *)(v4 + 16);
    }
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD, _QWORD))(*(_QWORD *)*a1[4] + 24LL))(
         *a1[4],
         a1[1],
         *a1[5],
         *a1[6]);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1[4] + 56LL))(*a1[4], **a1);
    v11 = v10;
    if ( v10 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC16,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC14,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
