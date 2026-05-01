/*
 * XREFs of ?InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerProxy@@@Z @ 0x180049484
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180048C40 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F7E8 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall InitializeResourceManagerServerProxy(
        struct _RM_SERVICE_GLOBALS *a1,
        struct ResourceManagerServerProxy **a2)
{
  _DWORD *v4; // r8
  __int64 result; // rax

  v4 = operator new(0x18uLL);
  result = 0LL;
  if ( !v4 )
    return 3221225495LL;
  *(_QWORD *)v4 = &ResourceManagerServerProxy::`vftable';
  v4[2] = 1;
  *((_QWORD *)v4 + 2) = a1;
  *a2 = (struct ResourceManagerServerProxy *)v4;
  return result;
}
