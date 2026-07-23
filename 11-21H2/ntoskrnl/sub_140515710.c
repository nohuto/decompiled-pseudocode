/*
 * XREFs of sub_140515710 @ 0x140515710
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B2614 @ 0x1403B2614 (sub_1403B2614.c)
 */

__int64 __fastcall sub_140515710(
        __int64 a1,
        PHYSICAL_ADDRESS *a2,
        PHYSICAL_ADDRESS *a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        int a7,
        PHYSICAL_ADDRESS *a8)
{
  PHYSICAL_ADDRESS *v8; // rdi
  ULONG_PTR v9; // rcx
  __int64 v10; // rbx
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v8 = a8;
  v9 = *(_QWORD *)(a1 + 504);
  v10 = 0LL;
  v12 = 0LL;
  if ( (int)sub_1403B2614(v9, a2, a3, a4, a5, a6, a7, a8, &v12) >= 0 )
    return v12;
  v8->QuadPart = 0LL;
  return v10;
}
