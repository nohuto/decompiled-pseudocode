/*
 * XREFs of LdrGetDllHandle @ 0x18002B290
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetDllHandleEx @ 0x18002A3F0 (LdrGetDllHandleEx.c)
 */

__int64 __fastcall LdrGetDllHandle(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  return LdrGetDllHandleEx(1, a1, a2, a3, a4);
}
