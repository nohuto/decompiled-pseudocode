/*
 * XREFs of sub_140A531E0 @ 0x140A531E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407D6CBC @ 0x1407D6CBC (sub_1407D6CBC.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 *     sub_140A47884 @ 0x140A47884 (sub_140A47884.c)
 */

_BOOL8 sub_140A531E0()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  do
  {
    sub_1407D6F54(1u);
    if ( byte_140D0501A )
      sub_140A47884(0, 0);
    sub_1407D6CBC();
    v1 = *((_QWORD *)sub_140347DB0() + 113);
    if ( qword_140D3B4A0 )
      sub_14042A5E0(v1, v0);
  }
  while ( _InterlockedExchangeAdd(&dword_140C15A48, 0xFFFFFFFF) != 1 );
  v3[0] = 0LL;
  v3[1] = -1LL;
  return KeSetTimer2((__int64)&unk_140C159C0, qword_140C15B50, 0LL, (__int64)v3);
}
