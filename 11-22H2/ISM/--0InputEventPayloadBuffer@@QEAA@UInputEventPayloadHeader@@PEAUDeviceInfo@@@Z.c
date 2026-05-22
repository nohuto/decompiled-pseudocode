/*
 * XREFs of ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z @ 0x18014E7B8
 * Callers:
 *     ?DeliverDeviceRemoval@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x18010E9E0 (-DeliverDeviceRemoval@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?DeliverDeviceUpdate@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x18010EB00 (-DeliverDeviceUpdate@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180058458 (--_U@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x1800793A0 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputEventPayloadBuffer::InputEventPayloadBuffer(__int64 a1, int a2, int *a3, const char *a4)
{
  size_t v7; // rsi
  void *v8; // rax
  void *v9; // rcx
  _DWORD *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)(a1 + 8) = 0LL;
  v7 = a3[2];
  if ( !(_DWORD)v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x26,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\lib\\helpers.cpp",
      a4);
  *(_DWORD *)a1 = v7 + 28;
  v8 = operator new[]((int)v7 + 28);
  v9 = *(void **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v8;
  if ( v9 )
    operator delete[](v9);
  v10 = *(_DWORD **)(a1 + 8);
  *v10 = a2;
  memcpy_0(v10 + 2, a3, v7);
  return a1;
}
