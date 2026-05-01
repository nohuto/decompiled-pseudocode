/*
 * XREFs of ?HampSystemBamQueryState@@YAJPEAU_HAM_SESSION@@PEBG1PEAK@Z @ 0x180056EC8
 * Callers:
 *     ?HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAK@Z @ 0x18007F7CC (-HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAK@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HampSystemBamQueryState(
        struct _HAM_SESSION *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        unsigned int *a4)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v7; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 14);
  v5 = 0;
  if ( v4 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, const unsigned __int16 *, int *))(*(_QWORD *)v4 + 224LL))(
           v4,
           a2,
           a3,
           &v9);
    if ( v7 < 0 )
      goto LABEL_6;
    *a4 = (v9 & 1) == 0;
  }
  else
  {
    *a4 = 1;
  }
  v7 = 0;
LABEL_6:
  if ( v7 < 0 )
    return v7 | 0xC0000000;
  return v5;
}
