/*
 * XREFs of sub_14050CE78 @ 0x14050CE78
 * Callers:
 *     sub_14050DBB0 @ 0x14050DBB0 (sub_14050DBB0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14050C520 @ 0x14050C520 (sub_14050C520.c)
 */

unsigned __int64 sub_14050CE78()
{
  unsigned __int64 result; // rax

  result = qword_140C4E480;
  if ( !qword_140C4E480 )
    KeBugCheckEx(0x5Cu, 0x1000uLL, qword_140C4E390, (ULONG_PTR)&qword_140C4E4E0, (unsigned int)dword_140C4E4FC);
  qword_140C4E390 = qword_140C4E480;
  if ( qword_140C4E500 )
  {
    result = sub_14050C520();
    qword_140C4E490 = result;
  }
  return result;
}
