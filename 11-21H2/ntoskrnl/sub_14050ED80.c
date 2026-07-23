/*
 * XREFs of sub_14050ED80 @ 0x14050ED80
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140354420 @ 0x140354420 (sub_140354420.c)
 */

__int64 __fastcall sub_14050ED80(_QWORD *a1)
{
  __int64 v1; // rbx
  LARGE_INTEGER v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = qword_140C4E3E8;
  if ( a1 )
    *a1 = qword_140C4C6A0;
  if ( !v1 || !byte_140C4C6A8 )
    return 0LL;
  if ( dword_140C4E420 && qword_140C4C6B0 + 3000000000LL >= (unsigned __int64)KeQueryInterruptTimePrecise(&v3) )
    return sub_140354420(v1, 3u, qword_140C4C690, 1, (unsigned __int64 *)&v3.QuadPart);
  return 3221225473LL;
}
