/*
 * XREFs of ?OnVerticalDrag@EdgyProcessorTarget@@AEAAJXZ @ 0x1801ADAB4
 * Callers:
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1801AD62C (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x1801AD7F0 (-OnSwipe@EdgyProcessorTarget@@AEAA-AW4State@1@_NH@Z.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnVerticalDrag(EdgyProcessorTarget *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[6]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5[0] = 24;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 19) + 88LL))(
         *((_QWORD *)this + 19),
         5LL,
         v5);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *((_DWORD *)this + 8) = EdgyProcessorTarget::OnSwipe((__int64)this, 0, v5[4]);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E4,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
