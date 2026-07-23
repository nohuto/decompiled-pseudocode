/*
 * XREFs of sub_140B2F394 @ 0x140B2F394
 * Callers:
 *     sub_140AFF910 @ 0x140AFF910 (sub_140AFF910.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140B2F394()
{
  ULONG_PTR v0; // rsi
  unsigned int v1; // ebx
  __int64 Pool2; // rdi
  __int64 v3; // rax

  v0 = (unsigned int)dword_140D06884;
  v1 = 0;
  Pool2 = ExAllocatePool2(64LL, 24LL * (unsigned int)dword_140D06884, 0x61656857u);
  if ( !Pool2 )
  {
    LODWORD(qword_140C10C70) = qword_140C10C70 + 1;
    HIDWORD(qword_140C10C70) |= 0x10u;
    KeBugCheckEx(0x122u, 2uLL, v0, 0LL, 0LL);
  }
  if ( (_DWORD)v0 )
  {
    do
    {
      v3 = sub_140348800(v1++);
      *(_QWORD *)(v3 + 34464) = Pool2;
      Pool2 += 24LL;
    }
    while ( v1 < (unsigned int)v0 );
  }
  return 0LL;
}
