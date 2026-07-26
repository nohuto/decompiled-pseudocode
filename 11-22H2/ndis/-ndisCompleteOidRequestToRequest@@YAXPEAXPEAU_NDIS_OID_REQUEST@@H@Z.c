/*
 * XREFs of ?ndisCompleteOidRequestToRequest@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C009F4E0
 * Callers:
 *     ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x1C009FBD0 (-ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisCompleteOidRequestToRequest(
        void (__fastcall **a1)(_QWORD, _QWORD, _QWORD),
        struct _NDIS_OID_REQUEST *a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // eax
  unsigned int v5; // esi
  KIRQL v7; // bl

  v3 = *(_QWORD *)&a2->NdisReserved[24];
  v4 = 0;
  v5 = a3;
  if ( *(_DWORD *)(v3 + 32) == 1 )
  {
    if ( a3 != -1071448017 )
      v4 = a3;
    v5 = v4;
  }
  *(_QWORD *)(v3 + 60) = *(_QWORD *)&a2->DATA.METHOD_INFORMATION.OutputBufferLength;
  ExFreePoolWithTag(a2, 0);
  v7 = KfRaiseIrql(2u);
  a1[19](a1[4], v3, v5);
  KeLowerIrql(v7);
}
