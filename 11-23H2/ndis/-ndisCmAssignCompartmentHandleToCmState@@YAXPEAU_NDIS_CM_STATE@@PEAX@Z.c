/*
 * XREFs of ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C00BA974
 * Callers:
 *     ndisCmSetThreadState @ 0x1C00258B0 (ndisCmSetThreadState.c)
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x1C013DE1C (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C00B8B6C (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x1C00B8DB4 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 */

void __fastcall ndisCmAssignCompartmentHandleToCmState(struct _NDIS_CM_STATE *a1, _DWORD *a2)
{
  _DWORD *v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_DWORD *)*((_QWORD *)a1 + 1);
  if ( a2 != v4 )
  {
    if ( v4 )
      ndisIfDereferenceCompartmentForUser(v4);
    *((_QWORD *)a1 + 1) = a2;
    if ( a2 )
    {
      v5 = a2;
      ndisIfReferenceCompartmentForUser(0LL, 0, (struct _NDIS_IF_COMPARTMENT_BLOCK **)&v5);
    }
  }
}
