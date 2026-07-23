/*
 * XREFs of sub_140354380 @ 0x140354380
 * Callers:
 *     sub_14050C138 @ 0x14050C138 (sub_14050C138.c)
 * Callees:
 *     sub_140354420 @ 0x140354420 (sub_140354420.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14050C138 @ 0x14050C138 (sub_14050C138.c)
 */

__int64 __fastcall sub_140354380(int a1, ULONG_PTR a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  int v5; // ebx
  ULONG_PTR v6; // rdi
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = a2;
  v6 = qword_140C4E4B0;
  if ( a2 > qword_140C54B78 )
    KeBugCheckEx(0x5Cu, 0x113uLL, 0x25uLL, a2, 0LL);
  if ( (*((_BYTE *)CurrentPrcb + 34) & 2) != 0 )
    sub_14050C138(0LL);
  result = sub_140354420(v6, 3 - (unsigned int)(a1 != 1), v5, 1, a3);
  byte_140C4E842 = a1 != 1;
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x110uLL, v6, dword_140C4E844, (int)result);
  return result;
}
