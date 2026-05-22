/*
 * XREFs of ?AllocateLuidForHandle@Compositor@Composition@UI@Windows@@QEAAJPEAXPEA_K@Z @ 0x18010E6D4
 * Callers:
 *     ?AllocateVisualId@CompositionIsland@Composition@UI@Windows@@QEAAJXZ @ 0x18008D0B4 (-AllocateVisualId@CompositionIsland@Composition@UI@Windows@@QEAAJXZ.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_21b91f8ed7e4c7f4d9826ebf89a77415___ @ 0x1800A1DC4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_21b91f8ed7e4c7f4d9826ebf89a77415.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::AllocateLuidForHandle(
        Windows::UI::Composition::Compositor *this,
        void *a2,
        unsigned __int64 *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  const char *v6; // [rsp+28h] [rbp-30h]
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v9; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 *v10; // [rsp+70h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  *a3 = 0LL;
  if ( (*((_BYTE *)this + 32) & 2) != 0 )
  {
    v7[0] = this;
    v7[1] = &v9;
    v7[2] = &v10;
    CurrentThreadId = GetCurrentThreadId();
    return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_21b91f8ed7e4c7f4d9826ebf89a77415___(
             v5,
             CurrentThreadId,
             (__int64)v7);
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x10B,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)0x80070057LL,
      (int)"The compositor is disposed.",
      v6);
    return 2147942487LL;
  }
}
