/*
 * XREFs of ?GetInfo@DragRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x1801D5A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DragRecognizer::GetInfo(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // [rsp+40h] [rbp+18h]

  if ( *(_DWORD *)a3 != 24 || a2 != 5 || (*(_BYTE *)(a1 + 30) & 8) == 0 )
    return 2147942487LL;
  *(_QWORD *)(a3 + 4) = *(_QWORD *)(a1 + 56);
  LODWORD(v4) = *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 64);
  HIDWORD(v4) = *(_DWORD *)(a1 + 60) - *(_DWORD *)(a1 + 68);
  *(_QWORD *)(a3 + 12) = v4;
  *(_BYTE *)(a3 + 20) = (*(_BYTE *)(a1 + 30) & 1) == 0;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, 0xFFFFFFFFLL);
  return 0LL;
}
