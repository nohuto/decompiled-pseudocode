/*
 * XREFs of ?HampInProcCreateActivity@@YAJPEAXPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@0PEA_K@Z @ 0x18004AED0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x18002F170 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 */

__int64 __fastcall HampInProcCreateActivity(
        signed __int64 a1,
        char *a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        void *a9,
        unsigned __int64 *a10)
{
  return HamSrvCreateActivity(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
