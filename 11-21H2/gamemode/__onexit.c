/*
 * XREFs of __onexit @ 0x10006EAA
 * Callers:
 *     _atexit @ 0x10006F53 (_atexit.c)
 * Callees:
 *     __onexit @ 0x10006EAA (__onexit.c)
 *     __SEH_prolog4 @ 0x100071E8 (__SEH_prolog4.c)
 *     __lock @ 0x1000727B (__lock.c)
 *     __unlock @ 0x10007287 (__unlock.c)
 *     ___dllonexit @ 0x10007293 (___dllonexit.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int (__cdecl *v2)(); // [esp+10h] [ebp-24h]
  int v3; // [esp+14h] [ebp-20h] BYREF
  void *v4; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v4 = __onexitbegin;
  if ( __onexitbegin == (void *)-1 )
    return __onexit(Func);
  _lock(8);
  ms_exc.registration.TryLevel = 0;
  v4 = __onexitbegin;
  v3 = __onexitend;
  v2 = (int (__cdecl *)())__dllonexit(Func, &v4, &v3);
  __onexitbegin = v4;
  __onexitend = v3;
  ms_exc.registration.TryLevel = -2;
  _unlock(8);
  return v2;
}
