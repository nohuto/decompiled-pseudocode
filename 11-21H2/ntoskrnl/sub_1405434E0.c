/*
 * XREFs of sub_1405434E0 @ 0x1405434E0
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 * Callees:
 *     sub_14054BFF0 @ 0x14054BFF0 (sub_14054BFF0.c)
 *     sub_14054C0E0 @ 0x14054C0E0 (sub_14054C0E0.c)
 */

_UNKNOWN **__fastcall sub_1405434E0(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v11; // rbx
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v12[0] = 0LL;
  if ( (dword_140D0689C & 0x2000) != 0 )
  {
    result = (_UNKNOWN **)sub_14054BFF0(533LL, v12);
    v11 = 0x8000000000000000uLL;
    if ( v12[0] < 0 )
    {
      sub_14054C0E0(528LL, a1);
      sub_14054C0E0(529LL, a2);
      sub_14054C0E0(530LL, a3);
      sub_14054C0E0(531LL, a4);
      sub_14054C0E0(532LL, a5);
      if ( (v12[0] & 0x2000000000000000LL) != 0 )
        v11 = (-(__int64)(a6 != 0) & 0x2000000000000000LL) + 0x8000000000000000uLL;
      return (_UNKNOWN **)sub_14054C0E0(533LL, v11);
    }
  }
  return result;
}
