/*
 * XREFs of NVMePowerCleanUp @ 0x1C0019BC8
 * Callers:
 *     NVMeControllerRemove @ 0x1C0018DF8 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C00195A8 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMePowerCleanUp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // r8

  *(_DWORD *)(a1 + 1680) &= 0xFFFFFFF8;
  *(_WORD *)(a1 + 1686) = 0;
  v5 = *(_QWORD *)(a1 + 1672);
  if ( v5 )
  {
    StorPortExtendedFunction(1LL, a1, v5, a4);
    *(_QWORD *)(a1 + 1672) = 0LL;
  }
  result = StorPortExtendedFunction(34LL, a1, *(_QWORD *)(a1 + 1720), a4);
  v8 = *(_QWORD *)(a1 + 1664);
  if ( v8 )
  {
    result = StorPortExtendedFunction(1LL, a1, v8, v7);
    *(_QWORD *)(a1 + 1664) = 0LL;
  }
  return result;
}
