/*
 * XREFs of sub_1406CF5D0 @ 0x1406CF5D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AC790 @ 0x1402AC790 (sub_1402AC790.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1406CF67C @ 0x1406CF67C (sub_1406CF67C.c)
 */

NTSTATUS __fastcall sub_1406CF5D0(void *a1, __int64 a2, unsigned __int64 a3)
{
  KPROCESSOR_MODE v5; // r8
  __int64 v6; // rdx
  NTSTATUS result; // eax
  PVOID v8; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+68h] [rbp+20h]

  Object = 0LL;
  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v5 )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v6 = a3;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  result = sub_1402AC790(a1, 0, v5, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = Object;
    v10 = sub_1406CF67C(Object, a2);
    *(_DWORD *)a3 = v10;
    *(_QWORD *)(a3 + 8) = 0LL;
    ObfDereferenceObject(v8);
    return v10;
  }
  return result;
}
