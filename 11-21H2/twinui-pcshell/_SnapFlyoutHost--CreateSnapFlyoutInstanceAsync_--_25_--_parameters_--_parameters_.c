/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync_::_25_::_parameters_::_parameters_ @ 0x1805AE4C0
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_InitCoro$2 @ 0x1801BEEA8 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync_::_25_::_parameters_::_parameters_(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 24) = a5;
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 32) = *a6;
  *(_QWORD *)(a1 + 40) = a6[1];
  result = a1;
  *a6 = 0LL;
  a6[1] = 0LL;
  return result;
}
