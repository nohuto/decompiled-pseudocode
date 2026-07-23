/*
 * XREFs of sub_140832B54 @ 0x140832B54
 * Callers:
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 * Callees:
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140832C70 @ 0x140832C70 (sub_140832C70.c)
 *     sub_140832CF4 @ 0x140832CF4 (sub_140832CF4.c)
 */

__int64 __fastcall sub_140832B54(void *Src, size_t Size, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // edi
  size_t v8; // r8
  ULONG_PTR v9; // rbx
  __int64 v10; // xmm1_8
  PVOID Object[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h]
  ULONG_PTR BugCheckParameter1[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h]

  v13 = 0LL;
  v15 = 0LL;
  *(_OWORD *)Object = 0LL;
  *(_OWORD *)BugCheckParameter1 = 0LL;
  v7 = sub_140832CF4(Size, a3, a4, Object);
  if ( v7 < 0 || (v7 = sub_140832C70(Object, BugCheckParameter1), v7 < 0) )
  {
    v9 = BugCheckParameter1[1];
  }
  else
  {
    v8 = Size;
    v9 = BugCheckParameter1[1];
    memmove((void *)BugCheckParameter1[1], Src, v8);
    v7 = 0;
    v10 = v13;
    *(_OWORD *)a5 = *(_OWORD *)Object;
    *(_QWORD *)(a5 + 16) = v10;
    *(_OWORD *)Object = 0LL;
  }
  if ( v9 )
    sub_14026D048(v9, 1);
  if ( Object[1] )
    ObfDereferenceObject(Object[1]);
  return (unsigned int)v7;
}
