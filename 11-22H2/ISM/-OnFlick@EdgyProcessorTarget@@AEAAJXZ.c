/*
 * XREFs of ?OnFlick@EdgyProcessorTarget@@AEAAJXZ @ 0x1801D91B0
 * Callers:
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1801D92AC (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _o_atan2f_0 @ 0x18005734C (_o_atan2f_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x1801D9470 (-OnSwipe@EdgyProcessorTarget@@AEAA-AW4State@1@_NH@Z.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnFlick(EdgyProcessorTarget *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v5; // ebx
  float v6; // xmm0_4
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+24h] [rbp-24h]
  int v11; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = 12;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 19) + 88LL))(
         *((_QWORD *)this + 19),
         7LL,
         &v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = v11;
    if ( v10 || v11 )
    {
      v6 = (float)v11;
      o_atan2f_0();
      if ( (v6 < 0.78539819 || v6 > 2.3561945) && (v6 < -2.3561945 || v6 > -0.78539819) )
      {
        v8 = v10;
        LOBYTE(v7) = 1;
      }
      else
      {
        v8 = v5;
        v7 = 0LL;
      }
      *((_DWORD *)this + 8) = EdgyProcessorTarget::OnSwipe(this, v7, v8);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
