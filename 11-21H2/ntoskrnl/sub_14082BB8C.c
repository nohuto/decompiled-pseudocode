/*
 * XREFs of sub_14082BB8C @ 0x14082BB8C
 * Callers:
 *     sub_1409F68DC @ 0x1409F68DC (sub_1409F68DC.c)
 *     sub_1409F7090 @ 0x1409F7090 (sub_1409F7090.c)
 *     sub_140B064AC @ 0x140B064AC (sub_140B064AC.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407DECE0 @ 0x1407DECE0 (sub_1407DECE0.c)
 */

__int64 __fastcall sub_14082BB8C(unsigned __int16 a1, unsigned int a2, _QWORD *a3, size_t *a4)
{
  size_t v6; // rbx
  size_t v7; // rdx
  PVOID v8; // rax
  size_t Size[2]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE Src[160]; // [rsp+30h] [rbp-C8h] BYREF

  Size[0] = 0LL;
  if ( a2 >= (unsigned __int16)word_140D05000 )
    return 3221225711LL;
  sub_1407DECE0(*(_QWORD *)(qword_140C51F48 + 8LL * a1), a2, (__int64)Src, Size);
  v6 = Size[0];
  v7 = Size[0];
  *a4 = Size[0];
  v8 = sub_1402828F0(64, v7, 0x68506D4Du);
  *a3 = v8;
  if ( !v8 )
    return 3221225626LL;
  memmove(v8, Src, v6);
  return 0LL;
}
