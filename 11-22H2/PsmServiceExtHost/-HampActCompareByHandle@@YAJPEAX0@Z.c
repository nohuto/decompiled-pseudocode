/*
 * XREFs of ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x1800102F0
 * Callers:
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800296C0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampActCompareByHandle(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8

  v2 = a2[5];
  if ( *a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > v2;
}
