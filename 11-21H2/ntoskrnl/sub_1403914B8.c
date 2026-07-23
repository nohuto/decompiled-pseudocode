/*
 * XREFs of sub_1403914B8 @ 0x1403914B8
 * Callers:
 *     sub_140A500C0 @ 0x140A500C0 (sub_140A500C0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

unsigned __int64 __fastcall sub_1403914B8(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  LODWORD(a2) = HIDWORD(KeGetPcr()[1].LockArray);
  result = qword_140C4E400;
  if ( qword_140C4C488 )
  {
    if ( !(_DWORD)a2 && byte_140C4E498 )
    {
      result = qword_140C4C648;
      if ( qword_140C4C648 )
        return sub_14042A5E0((unsigned int)dword_140C4E360, qword_140C4E370);
    }
  }
  else
  {
    result = *(_QWORD *)(qword_140C4E400 + 8 * a2);
    __writemsr(0x10u, result);
  }
  return result;
}
