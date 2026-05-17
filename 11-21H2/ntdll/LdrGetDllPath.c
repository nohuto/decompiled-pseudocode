/*
 * XREFs of LdrGetDllPath @ 0x18001DBD0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetDllPath @ 0x18001DBFC (LdrpGetDllPath.c)
 */

__int64 __fastcall LdrGetDllPath(int a1, int a2, int a3, __int64 a4)
{
  return LdrpGetDllPath(a1, a2, a3, 0, 0LL, 0LL, a4);
}
