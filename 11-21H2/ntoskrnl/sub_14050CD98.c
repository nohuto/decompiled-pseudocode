/*
 * XREFs of sub_14050CD98 @ 0x14050CD98
 * Callers:
 *     sub_14050CE60 @ 0x14050CE60 (sub_14050CE60.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14050BFD0 @ 0x14050BFD0 (sub_14050BFD0.c)
 *     sub_14050C764 @ 0x14050C764 (sub_14050C764.c)
 *     sub_14050CF80 @ 0x14050CF80 (sub_14050CF80.c)
 *     sub_14050DDD8 @ 0x14050DDD8 (sub_14050DDD8.c)
 */

__int64 __fastcall sub_14050CD98(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  char v2; // di
  __int64 result; // rax

  v2 = a2;
  if ( (_BYTE)a2 )
  {
    *(_DWORD *)(BugCheckParameter3 + 184) &= ~0x80u;
  }
  else if ( (*(_DWORD *)(BugCheckParameter3 + 224) & 0x8000) != 0 )
  {
    KeBugCheckEx(0x5Cu, 0x113uLL, 0x20uLL, BugCheckParameter3, 0LL);
  }
  if ( BugCheckParameter3 == qword_140C4E4B0 )
    result = sub_14050BFD0(BugCheckParameter3, a2);
  if ( BugCheckParameter3 == qword_140C4E390 || BugCheckParameter3 == qword_140C4E378 )
    result = (__int64)sub_14050C764(BugCheckParameter3, v2);
  if ( BugCheckParameter3 == qword_140C4E4C0 || BugCheckParameter3 == qword_140C4E488 )
    result = sub_14050CF80(BugCheckParameter3);
  if ( BugCheckParameter3 == qword_140C4E380 )
  {
    LOBYTE(a2) = v2;
    result = sub_14050DDD8(BugCheckParameter3, a2);
  }
  if ( !v2 )
    *(_DWORD *)(BugCheckParameter3 + 184) |= 0x80u;
  return result;
}
