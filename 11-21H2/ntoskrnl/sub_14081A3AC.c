/*
 * XREFs of sub_14081A3AC @ 0x14081A3AC
 * Callers:
 *     sub_140399068 @ 0x140399068 (sub_140399068.c)
 *     sub_140399140 @ 0x140399140 (sub_140399140.c)
 *     sub_1403DEC60 @ 0x1403DEC60 (sub_1403DEC60.c)
 *     sub_1405DD354 @ 0x1405DD354 (sub_1405DD354.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_140849690 @ 0x140849690 (sub_140849690.c)
 *     sub_140849940 @ 0x140849940 (sub_140849940.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     sub_1403B3E0C @ 0x1403B3E0C (sub_1403B3E0C.c)
 *     sub_1403B3E68 @ 0x1403B3E68 (sub_1403B3E68.c)
 *     sub_1403B3E84 @ 0x1403B3E84 (sub_1403B3E84.c)
 *     sub_1403B3F0C @ 0x1403B3F0C (sub_1403B3F0C.c)
 *     sub_14081A4FC @ 0x14081A4FC (sub_14081A4FC.c)
 *     sub_14081A654 @ 0x14081A654 (sub_14081A654.c)
 *     sub_14081A760 @ 0x14081A760 (sub_14081A760.c)
 */

__int64 (__fastcall ***sub_14081A3AC())()
{
  char v0; // bl
  bool v1; // si
  __int64 *v2; // r14
  char v3; // di
  char v4; // bp
  char v5; // al
  _DWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // bl
  __int64 (__fastcall ***result)(); // rax

  v0 = 0;
  v1 = 0;
  v2 = &off_140C03040[534 * dword_140C232CC];
  v3 = 1;
  v4 = 0;
  if ( (__int64 *)qword_140D06970 != &qword_140D06970 )
  {
    v1 = sub_1403B3F0C((__int64)(v2 + 5)) != 0;
    v0 = v1;
    if ( byte_140C204A0 )
      v0 = 1;
    v5 = PoEnergyEstimationEnabled();
    v6 = (_DWORD *)v2 + 31;
    if ( v5 )
      v0 = 1;
    v7 = 2LL;
    do
    {
      if ( *v6 != v6[2] )
      {
        v0 = 1;
        v4 = 1;
      }
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  if ( (unsigned __int8)sub_14081A654() )
  {
    v0 = 1;
    v1 = 1;
  }
  if ( (sub_1403B3E68() || (v3 = v0) != 0) && !byte_140C203A1 )
    sub_14081A760();
  v9 = v3;
  if ( byte_140C203A0 )
    v9 = 0;
  if ( !v4 )
    sub_1403B3E0C();
  LOBYTE(v8) = v1;
  sub_14081A4FC(v8);
  if ( v9 )
  {
    sub_1403B3E84();
  }
  else if ( byte_140C203A1 )
  {
    _InterlockedExchange64(&qword_140C204C8, 0LL);
    byte_140C203A1 = 0;
  }
  result = off_140002118;
  qword_140C20490 = (__int64)off_140002118;
  if ( dword_140D05054 )
  {
    if ( v1 )
    {
      result = off_14000A740;
      qword_140C20490 = (__int64)off_14000A740;
    }
  }
  return result;
}
