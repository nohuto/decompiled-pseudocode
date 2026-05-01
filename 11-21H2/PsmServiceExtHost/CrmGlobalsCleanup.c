/*
 * XREFs of CrmGlobalsCleanup @ 0x18006D798
 * Callers:
 *     PsmCrmCleanup @ 0x18006C860 (PsmCrmCleanup.c)
 * Callees:
 *     CrmRegistrationCleanup @ 0x18003D540 (CrmRegistrationCleanup.c)
 *     CrmGlobalsRegistrationRemoveAll @ 0x18006D89C (CrmGlobalsRegistrationRemoveAll.c)
 */

__int64 CrmGlobalsCleanup()
{
  _QWORD *v0; // rdx
  __int64 v1; // rbx
  RPC_BINDING_VECTOR *BindingVector; // [rsp+30h] [rbp+8h] BYREF

  BindingVector = ::BindingVector;
  if ( ::BindingVector )
  {
    RpcEpUnregister(&unk_1800AF5C0, ::BindingVector, 0LL);
    RpcBindingVectorFree(&BindingVector);
    RpcServerUnregisterIf(&unk_1800AF5C0, 0LL, 0);
  }
  v0 = P;
  if ( P )
  {
    v1 = 0LL;
    if ( dword_1800DD1C8 )
    {
      while ( 1 )
      {
        CrmRegistrationCleanup(&v0[18 * v1], 1);
        v1 = (unsigned int)(v1 + 1);
        if ( (unsigned int)v1 >= dword_1800DD1C8 )
          break;
        v0 = P;
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  if ( qword_1800DD1D0 )
  {
    CrmRegistrationCleanup(qword_1800DD1D0, 1);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, qword_1800DD1D0);
  }
  CrmGlobalsRegistrationRemoveAll();
  return TlgUnregisterAggregateProvider();
}
