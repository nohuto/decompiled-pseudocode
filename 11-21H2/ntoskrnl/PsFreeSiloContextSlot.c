/*
 * XREFs of PsFreeSiloContextSlot @ 0x1409AB6D0
 * Callers:
 *     sub_140926260 @ 0x140926260 (sub_140926260.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14068A6A0 @ 0x14068A6A0 (sub_14068A6A0.c)
 *     sub_14070F57C @ 0x14070F57C (sub_14070F57C.c)
 *     sub_1409B4AD0 @ 0x1409B4AD0 (sub_1409B4AD0.c)
 */

__int64 __fastcall PsFreeSiloContextSlot(unsigned int a1)
{
  ULONG_PTR *i; // rcx
  __int64 v3; // rcx
  ULONG_PTR *v4; // rax
  ULONG_PTR *v5; // rbx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  Object = 0LL;
  for ( i = 0LL; ; i = v5 )
  {
    v4 = (ULONG_PTR *)sub_14068A6A0(i, 0);
    v5 = v4;
    if ( !v4 )
      break;
    v3 = v4[187];
    if ( v3 && (int)sub_14070F57C(v3, a1, (unsigned __int64 *)&Object) >= 0 )
    {
      ObfDereferenceObject(Object);
      KeBugCheckEx(0x199u, v5[187], 0LL, 0LL, 0LL);
    }
  }
  return sub_1409B4AD0(a1);
}
