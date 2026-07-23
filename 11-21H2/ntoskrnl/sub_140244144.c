/*
 * XREFs of sub_140244144 @ 0x140244144
 * Callers:
 *     sub_1402F9680 @ 0x1402F9680 (sub_1402F9680.c)
 *     sub_1402FB0E0 @ 0x1402FB0E0 (sub_1402FB0E0.c)
 *     sub_140384600 @ 0x140384600 (sub_140384600.c)
 *     sub_14038473C @ 0x14038473C (sub_14038473C.c)
 * Callees:
 *     sub_1402FD65C @ 0x1402FD65C (sub_1402FD65C.c)
 */

_BYTE *__fastcall sub_140244144(__int64 a1, int a2, __int64 a3, int a4, _BYTE *a5, _DWORD *a6)
{
  _BYTE *result; // rax

  result = (_BYTE *)sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(a1 + 808), 1, 0);
  if ( (_BYTE)result )
  {
    *a6 |= a4 & a2;
    result = a5;
    *a5 = 1;
  }
  return result;
}
