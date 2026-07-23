/*
 * XREFs of sub_1406DC690 @ 0x1406DC690
 * Callers:
 *     sub_140715FA8 @ 0x140715FA8 (sub_140715FA8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

char __fastcall sub_1406DC690(__int64 a1)
{
  unsigned int v2; // ecx
  void *v3; // rax
  void *v4; // rdi

  v2 = *(_DWORD *)(a1 + 1872);
  if ( v2 >= *(_DWORD *)(a1 + 1876) )
    goto LABEL_4;
  v3 = (void *)sub_14042A5E0(16 * v2, 0LL);
  v4 = v3;
  if ( v3 )
  {
    memmove(v3, *(const void **)(a1 + 1888), 16LL * *(unsigned int *)(a1 + 1872));
    sub_14042A5E0(*(_QWORD *)(a1 + 1888), (unsigned int)(16 * *(_DWORD *)(a1 + 1876)));
    *(_DWORD *)(a1 + 1876) = *(_DWORD *)(a1 + 1872);
    *(_QWORD *)(a1 + 1888) = v4;
LABEL_4:
    LOBYTE(v3) = 1;
  }
  return (char)v3;
}
