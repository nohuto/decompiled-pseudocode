/*
 * XREFs of sub_18001CCD0 @ 0x18001CCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180059BA0 @ 0x180059BA0 (sub_180059BA0.c)
 */

__int64 __fastcall sub_18001CCD0(__int64 a1)
{
  void *v1; // rbx
  __int64 result; // rax

  v1 = *(void **)(a1 + 16);
  if ( v1 )
  {
    sub_180059BA0(*(_QWORD *)(a1 + 16));
    return sub_18000B998(v1);
  }
  return result;
}
