/*
 * XREFs of EtwGetProviderIdFromHandle @ 0x140369614
 * Callers:
 *     WdiDispatchControl @ 0x1407E542C (WdiDispatchControl.c)
 *     EtwWriteEndScenario @ 0x1408439D0 (EtwWriteEndScenario.c)
 *     EtwWriteStartScenario @ 0x14085DC00 (EtwWriteStartScenario.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     EtwpReferenceGuidEntry @ 0x1406BF914 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406BF954 (EtwpUnreferenceGuidEntry.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall EtwGetProviderIdFromHandle(ULONG_PTR *a1, char a2, _OWORD *a3)
{
  NTSTATUS v3; // edi
  PVOID v6; // rcx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 )
  {
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
    if ( v3 >= 0 )
    {
      v6 = Object;
      *a3 = *(_OWORD *)(*((_QWORD *)Object + 4) + 40LL);
      ObfDereferenceObject(v6);
    }
    return (unsigned int)v3;
  }
  if ( a1 && (unsigned __int8)EtwpReferenceGuidEntry(a1[4]) )
  {
    *a3 = *(_OWORD *)(a1[4] + 40);
    EtwpUnreferenceGuidEntry(a1[4]);
    return (unsigned int)v3;
  }
  return 3221225480LL;
}
