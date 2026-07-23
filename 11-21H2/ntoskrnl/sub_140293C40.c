/*
 * XREFs of sub_140293C40 @ 0x140293C40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140293CD0 @ 0x140293CD0 (sub_140293CD0.c)
 */

char sub_140293C40()
{
  bool v0; // di
  unsigned int i; // ebx
  int v3; // [rsp+20h] [rbp-28h]

  v0 = BYTE3(off_140C03040[534 * dword_140C232CC + 20]) != 0;
  for ( i = 0; i < dword_140C1CF34; ++i )
  {
    LOBYTE(v3) = v0;
    sub_140293CD0(
      *(_QWORD *)(qword_140C1CF38 + 336LL * i + 8),
      *(_QWORD *)(qword_140C1CF38 + 336LL * i + 32),
      *(unsigned __int16 *)(qword_140C1CF38 + 336LL * i + 4),
      *(_BYTE *)(qword_140C1CF38 + 336LL * i + 142),
      v3,
      0,
      0LL);
  }
  return 1;
}
