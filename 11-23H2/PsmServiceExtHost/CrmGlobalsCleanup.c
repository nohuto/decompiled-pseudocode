/*
 * XREFs of CrmGlobalsCleanup @ 0x18006CCCC
 * Callers:
 *     PsmCrmCleanup @ 0x18006C030 (PsmCrmCleanup.c)
 * Callees:
 *     CrmRegistrationCleanup @ 0x180012170 (CrmRegistrationCleanup.c)
 *     CrmGlobalsRegistrationRemoveAll @ 0x18006CE10 (CrmGlobalsRegistrationRemoveAll.c)
 */

__int64 CrmGlobalsCleanup()
{
  _QWORD *v0; // rdx
  __int64 v1; // rbx
  RPC_BINDING_VECTOR *BindingVector; // [rsp+30h] [rbp+8h] BYREF

  BindingVector = ::BindingVector;
  if ( ::BindingVector )
  {
    RpcEpUnregister(&unk_1800A21C0, ::BindingVector, 0LL);
    RpcBindingVectorFree(&BindingVector);
    RpcServerUnregisterIf(&unk_1800A21C0, 0LL, 0);
  }
  v0 = P;
  if ( P )
  {
    v1 = 0LL;
    if ( dword_1800DC208 )
    {
      while ( 1 )
      {
        CrmRegistrationCleanup(&v0[18 * v1], 1);
        v1 = (unsigned int)(v1 + 1);
        if ( (unsigned int)v1 >= dword_1800DC208 )
          break;
        v0 = P;
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  if ( qword_1800DC210 )
  {
    CrmRegistrationCleanup(qword_1800DC210, 1);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, qword_1800DC210);
  }
  CrmGlobalsRegistrationRemoveAll();
  return TlgUnregisterAggregateProvider();
}
