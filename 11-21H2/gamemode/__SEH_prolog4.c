/*
 * XREFs of __SEH_prolog4 @ 0x100071E8
 * Callers:
 *     __DllMainCRTStartup @ 0x10006A52 (__DllMainCRTStartup.c)
 *     __onexit @ 0x10006EAA (__onexit.c)
 * Callees:
 *     <none>
 */

_DWORD *__cdecl _SEH_prolog4(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-18h] [ebp-18h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = _except_handler4;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}
