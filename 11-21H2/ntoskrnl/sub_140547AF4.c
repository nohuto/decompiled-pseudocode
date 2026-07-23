/*
 * XREFs of sub_140547AF4 @ 0x140547AF4
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140578EF0 @ 0x140578EF0 (sub_140578EF0.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140547A48 @ 0x140547A48 (sub_140547A48.c)
 */

__int64 __fastcall sub_140547AF4(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  v2 = (unsigned __int8)a1;
  if ( (dword_140D0688C & 2) != 0 )
  {
    sub_140547A48(0);
    KeStallExecutionProcessor(0xC350u);
  }
  if ( byte_140D06888 )
  {
    memset(v5, 0, 0x68uLL);
    v5[1] = v2;
    sub_140358A20(2u, 260, 0, (__int64)v5);
    if ( (dword_140D0688C & 2) != 0 )
    {
      if ( (_BYTE)v2 )
        byte_140C22260 = 1;
    }
  }
  if ( (dword_140D0688C & 2) != 0 )
    sub_140547A48(1);
  sub_14042A5E0(a1, a2);
  return sub_14042A5E0(1LL, v3);
}
