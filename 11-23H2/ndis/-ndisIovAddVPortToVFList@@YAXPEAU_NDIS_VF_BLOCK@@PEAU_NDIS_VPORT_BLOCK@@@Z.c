/*
 * XREFs of ?ndisIovAddVPortToVFList@@YAXPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C0074CC8
 * Callers:
 *     ?ndisOidPostIovCreateVPort@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0076E50 (-ndisOidPostIovCreateVPort@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIovAddVPortToVFList(struct _NDIS_VF_BLOCK *a1, struct _NDIS_VPORT_BLOCK *a2)
{
  __int64 *i; // rax
  _LIST_ENTRY *p_FunctionLink; // rcx
  _LIST_ENTRY *v5; // rdx
  _LIST_ENTRY *Flink; // rax

  for ( i = (__int64 *)*((_QWORD *)a1 + 10); i != (__int64 *)((char *)a1 + 80); i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 19) > a2->VPortParams.VPortId )
      break;
  }
  p_FunctionLink = &a2->FunctionLink;
  v5 = (_LIST_ENTRY *)i[1];
  Flink = v5->Flink;
  if ( v5->Flink->Blink != v5 )
    __fastfail(3u);
  p_FunctionLink->Flink = Flink;
  p_FunctionLink->Blink = v5;
  Flink->Blink = p_FunctionLink;
  v5->Flink = p_FunctionLink;
  ++*((_DWORD *)a1 + 19);
}
