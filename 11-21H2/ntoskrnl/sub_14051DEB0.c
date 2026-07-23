/*
 * XREFs of sub_14051DEB0 @ 0x14051DEB0
 * Callers:
 *     sub_1403B8644 @ 0x1403B8644 (sub_1403B8644.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 */

__int64 __fastcall sub_14051DEB0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *v4; // rax
  unsigned __int64 v5; // rax

  v2 = 0;
  if ( a1 )
  {
    *(_QWORD *)(a2 + 24) = a1;
    v5 = sub_1403BF3B8(a1, 1LL, 0, 0LL, 4u);
    *(_QWORD *)(a2 + 32) = v5;
    if ( v5 )
      return v2;
    return (unsigned int)-1073741670;
  }
  v4 = (void *)sub_1403BF104(4096, 0);
  *(_QWORD *)(a2 + 32) = v4;
  if ( !v4 )
    return (unsigned int)-1073741670;
  *(PHYSICAL_ADDRESS *)(a2 + 24) = MmGetPhysicalAddress(v4);
  return v2;
}
