/*
 * XREFs of ??0?$VariableSizedPayloadStorage@UGazeInputInfo@@@@QEAA@_K@Z @ 0x1800F4F90
 * Callers:
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800F52B4 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180058458 (--_U@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall VariableSizedPayloadStorage<GazeInputInfo>::VariableSizedPayloadStorage<GazeInputInfo>(
        __int64 a1,
        size_t a2,
        __int64 a3,
        const char *a4)
{
  void *v6; // rax
  void *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)a1 = 0LL;
  if ( a2 < 0x60 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1F5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\inc\\rawinput.h",
      a4);
  v6 = operator new[](a2);
  v7 = *(void **)a1;
  *(_QWORD *)a1 = v6;
  if ( v7 )
    operator delete[](v7);
  *(_DWORD *)(a1 + 8) = a2;
  memset_0(*(void **)a1, 0, a2);
  *(_DWORD *)(*(_QWORD *)a1 + 24LL) = a2;
  return a1;
}
