/*
 * XREFs of sub_14025A19C @ 0x14025A19C
 * Callers:
 *     sub_1406E6A28 @ 0x1406E6A28 (sub_1406E6A28.c)
 *     EtwWriteStartScenario @ 0x14081C9F0 (EtwWriteStartScenario.c)
 *     EtwWriteEndScenario @ 0x14081CDA0 (EtwWriteEndScenario.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140796B04 @ 0x140796B04 (sub_140796B04.c)
 *     sub_140796BF4 @ 0x140796BF4 (sub_140796BF4.c)
 */

__int64 __fastcall sub_14025A19C(PVOID *a1, char a2, _OWORD *a3)
{
  NTSTATUS v3; // edi
  PVOID v6; // rcx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 )
  {
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(a1, 0x800u, qword_140D06AE8, 1, &Object, 0LL);
    if ( v3 >= 0 )
    {
      v6 = Object;
      *a3 = *(_OWORD *)(*((_QWORD *)Object + 4) + 40LL);
      ObfDereferenceObject(v6);
    }
    return (unsigned int)v3;
  }
  if ( a1 && (unsigned __int8)sub_140796BF4((ULONG_PTR)a1[4]) )
  {
    *a3 = *(_OWORD *)((char *)a1[4] + 40);
    sub_140796B04(a1[4]);
    return (unsigned int)v3;
  }
  return 3221225480LL;
}
