/*
 * XREFs of sub_1406E1100 @ 0x1406E1100
 * Callers:
 *     <none>
 * Callees:
 *     sub_140258040 @ 0x140258040 (sub_140258040.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1406E1214 @ 0x1406E1214 (sub_1406E1214.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_1406E1100(_QWORD *a1, ULONG_PTR a2, int a3)
{
  KPROCESSOR_MODE v5; // si
  __int64 v6; // rcx
  __int64 result; // rax
  PVOID v8; // rbx
  int v9; // edi
  _QWORD v10[3]; // [rsp+48h] [rbp-20h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v10[0] = 0LL;
  Object = 0LL;
  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v5 )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  if ( a3 )
    return 3221225713LL;
  result = sub_140258040(v5);
  if ( (int)result >= 0 )
  {
    result = sub_140732D40(a2, 0x63417350u, (__int64)&Object, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      v8 = Object;
      v9 = sub_1406E1214(Object, v10);
      if ( v9 >= 0 )
        *a1 = v10[0];
      ObfDereferenceObjectWithTag(v8, 0x63417350u);
      return (unsigned int)v9;
    }
  }
  return result;
}
