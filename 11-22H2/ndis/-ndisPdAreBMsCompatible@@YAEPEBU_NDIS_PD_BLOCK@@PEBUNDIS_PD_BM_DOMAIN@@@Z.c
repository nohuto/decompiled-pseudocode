/*
 * XREFs of ?ndisPdAreBMsCompatible@@YAEPEBU_NDIS_PD_BLOCK@@PEBUNDIS_PD_BM_DOMAIN@@@Z @ 0x1C0134ED0
 * Callers:
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C0134718 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisPdAreBMsCompatible(
        const struct _NDIS_PD_BLOCK *a1,
        __int64 (__fastcall **a2)(const struct _NDIS_PD_BM_DOMAIN_PARAMETERS *, struct NDIS_PD_BM_DOMAIN_HANDLE__ **))
{
  char v2; // al
  char v3; // r8

  v2 = *((_BYTE *)a1 + 13);
  v3 = 1;
  if ( (v2 || a2[7] != NdisPDBMCreateDomain)
    && (v2 != 1
     || a2[7] != *(__int64 (__fastcall **)(const struct _NDIS_PD_BM_DOMAIN_PARAMETERS *, struct NDIS_PD_BM_DOMAIN_HANDLE__ **))(*(_QWORD *)(*(_QWORD *)a1 + 3760LL) + 1136LL)) )
  {
    return 0;
  }
  return v3;
}
