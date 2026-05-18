/*
 * XREFs of sub_180047DD0 @ 0x180047DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180044E0C @ 0x180044E0C (sub_180044E0C.c)
 */

__int64 __fastcall sub_180047DD0(__int64 a1)
{
  void *v1; // rbx
  __int64 result; // rax

  v1 = *(void **)(a1 + 16);
  if ( v1 )
  {
    sub_180044E0C(*(_QWORD *)(a1 + 16));
    return sub_18000B998(v1);
  }
  return result;
}
