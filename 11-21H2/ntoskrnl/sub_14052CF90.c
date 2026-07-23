/*
 * XREFs of sub_14052CF90 @ 0x14052CF90
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14052CF90(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  if ( (unsigned int)BugCheckParameter2 >= (unsigned int)dword_140C4A0DC
    || (_mm_lfence(),
        result = *(unsigned int *)(*(_QWORD *)(qword_140C4ABF0 + 8LL * (unsigned int)BugCheckParameter2) + 24LL),
        (_DWORD)result == -1) )
  {
    KeBugCheckEx(0x1DAu, 3uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
  }
  return result;
}
