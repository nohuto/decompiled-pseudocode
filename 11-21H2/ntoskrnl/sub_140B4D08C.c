/*
 * XREFs of sub_140B4D08C @ 0x140B4D08C
 * Callers:
 *     sub_140B4D124 @ 0x140B4D124 (sub_140B4D124.c)
 * Callees:
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140B4CE34 @ 0x140B4CE34 (sub_140B4CE34.c)
 */

__int64 sub_140B4D08C()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  void *v2; // rax
  __int64 v3; // r8
  unsigned int v4; // edi
  char *v5; // rdx
  __int64 v6; // rcx
  bool v7; // cf

  v0 = 0;
  v1 = 8 * dword_140C4ADAC;
  v2 = (void *)sub_1403BF104(8 * dword_140C4ADAC, 1u);
  qword_140C4ABF0 = (__int64)v2;
  if ( !v2 )
    return (unsigned int)-1073741801;
  memset(v2, 0, v1);
  v4 = 0;
  if ( dword_140C4ADAC )
  {
    while ( 1 )
    {
      v5 = sub_140B4CE34(0LL, 0xEu, v3, 4, 0LL);
      if ( !v5 )
        break;
      v6 = v4++;
      v7 = v4 < dword_140C4ADAC;
      *(_QWORD *)(qword_140C4ABF0 + 8 * v6) = v5;
      if ( !v7 )
        return v0;
    }
    return (unsigned int)-1073741801;
  }
  return v0;
}
