/*
 * XREFs of ??$ndisDataPathExpandStackCallback@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAX@Z @ 0x1C005F550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisDataPathExpandStackCallback<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r10
  __int64 v3; // rax

  v1 = a1[3];
  v2 = a1[1];
  v3 = *a1;
  if ( ndisVerifierNdisDispatch && *(_BYTE *)v3 == 5 && *(_QWORD *)(v3 + 776) )
    (*((void (__fastcall **)(__int64, __int64, _QWORD))ndisVerifierNdisDispatch + 13))(
      v2,
      v1,
      *((unsigned int *)a1 + 8));
  else
    ((void (__fastcall *)(__int64, __int64, _QWORD))a1[2])(v2, v1, *((unsigned int *)a1 + 10));
}
