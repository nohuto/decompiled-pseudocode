/*
 * XREFs of sub_140510080 @ 0x140510080
 * Callers:
 *     sub_14050A93C @ 0x14050A93C (sub_14050A93C.c)
 *     sub_14050AABC @ 0x14050AABC (sub_14050AABC.c)
 * Callees:
 *     sub_140456C2C @ 0x140456C2C (sub_140456C2C.c)
 *     sub_140456C50 @ 0x140456C50 (sub_140456C50.c)
 *     sub_140456C76 @ 0x140456C76 (sub_140456C76.c)
 */

__int64 sub_140510080()
{
  __int64 result; // rax
  unsigned int v1; // r10d
  __int16 v2; // [rsp+20h] [rbp-8h]

  result = (__int64)off_140E00010;
  if ( off_140E00010 && off_140E00010[2] )
  {
    _disable();
    sub_140456C50(&dword_140C4C19C);
    sub_140456C50(&dword_140C4C18C);
    sub_140456C76(4u);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))off_140E00010[2])(v1, 0LL, 0LL, 0LL);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFB);
    sub_140456C2C(&dword_140C4C18C);
    sub_140456C2C(&dword_140C4C19C);
    result = 512LL;
    if ( (v2 & 0x200) != 0 )
      _enable();
  }
  return result;
}
