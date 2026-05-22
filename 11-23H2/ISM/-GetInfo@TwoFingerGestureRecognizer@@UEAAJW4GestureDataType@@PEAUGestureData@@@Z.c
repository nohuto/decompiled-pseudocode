/*
 * XREFs of ?GetInfo@TwoFingerGestureRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x1801D61A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TwoFingerGestureRecognizer::GetInfo(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // ebx

  v6 = 0;
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 40LL))(a1 + 16) >= 0 )
    return 0LL;
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(a1 + 88) + 40LL))(a1 + 88, a2, a3) < 0 )
    return (unsigned int)-2147024809;
  return v6;
}
