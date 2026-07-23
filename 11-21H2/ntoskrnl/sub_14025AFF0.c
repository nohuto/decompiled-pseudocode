/*
 * XREFs of sub_14025AFF0 @ 0x14025AFF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025B0B8 @ 0x14025B0B8 (sub_14025B0B8.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     sub_1403639F0 @ 0x1403639F0 (sub_1403639F0.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 */

__int64 __fastcall sub_14025AFF0(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v8; // edi
  PVOID v9; // rbx
  __int64 v10; // rbx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h] BYREF

  v13 = 0LL;
  Object = 0LL;
  v8 = sub_1403639F0(a1, &v13, &Object);
  if ( v8 >= 0 )
  {
    v9 = Object;
    if ( (unsigned __int8)ObReferenceObjectSafeWithTag(Object, 1953261124LL) )
    {
      sub_14025B0B8((_DWORD)v9, a2, a3, a4, a5);
      v8 = 0;
      ObfDereferenceObjectWithTag(v9, 0x746C6644u);
    }
    else
    {
      v8 = -1073741431;
    }
  }
  v10 = v13;
  if ( v13 )
  {
    sub_1402AD030(v13 + 168);
    sub_140366814(v10);
  }
  return (unsigned int)v8;
}
