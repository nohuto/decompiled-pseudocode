/*
 * XREFs of sub_140864500 @ 0x140864500
 * Callers:
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_140864500()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0;
  if ( ((unsigned __int8)&stru_140C5A690 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  dword_140C5A6A0 = 0;
  dword_140C5A6A4 = 0;
  stru_140C5A690 = 0LL;
  result = sub_14042A5E0(&v1, &v2);
  if ( (_BYTE)result )
  {
    dword_140D06BE0 = v1;
    result = v2;
    dword_140D06B40 = v2;
  }
  return result;
}
