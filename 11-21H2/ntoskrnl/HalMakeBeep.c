/*
 * XREFs of HalMakeBeep @ 0x14050A490
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022D9F0 @ 0x14022D9F0 (sub_14022D9F0.c)
 *     sub_14039174C @ 0x14039174C (sub_14039174C.c)
 *     sub_14041B0A0 @ 0x14041B0A0 (sub_14041B0A0.c)
 *     sub_14050A55C @ 0x14050A55C (sub_14050A55C.c)
 */

bool __fastcall HalMakeBeep(unsigned int a1)
{
  bool result; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // di
  unsigned __int8 v7; // al
  unsigned __int8 v8; // bl
  unsigned __int8 v9; // al
  unsigned __int8 v10; // bl

  result = sub_14039174C();
  if ( result )
  {
    v6 = 1;
    sub_14022D9F0(v4, v3, v5);
    v7 = __inbyte(0x61u);
    v8 = v7;
    sub_14041B0A0();
    __outbyte(0x61u, v8 & 0xFC);
    sub_14041B0A0();
    if ( a1 )
    {
      if ( 0x1234CF / a1 <= 0xFFFF )
      {
        __outbyte(0x43u, 0xB6u);
        sub_14041B0A0();
        sub_14050A55C(66LL, 66LL, (unsigned __int16)(0x1234CF / a1));
        sub_14041B0A0();
        v9 = __inbyte(0x61u);
        v10 = v9;
        sub_14041B0A0();
        __outbyte(0x61u, v10 | 3);
        sub_14041B0A0();
      }
      else
      {
        v6 = 0;
      }
    }
    _InterlockedExchange(&dword_140C0B460, -1);
    if ( byte_140C4C1F0 )
      _enable();
    return v6;
  }
  return result;
}
