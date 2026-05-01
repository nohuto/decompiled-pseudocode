/*
 * XREFs of ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x18003A3F0
 * Callers:
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800224E0 (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18002C900 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180034C00 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
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
