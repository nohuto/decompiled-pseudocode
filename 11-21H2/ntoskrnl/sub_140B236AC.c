/*
 * XREFs of sub_140B236AC @ 0x140B236AC
 * Callers:
 *     sub_140A5B230 @ 0x140A5B230 (sub_140A5B230.c)
 * Callees:
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     sub_140B237A4 @ 0x140B237A4 (sub_140B237A4.c)
 */

__int64 __fastcall sub_140B236AC(__int64 a1)
{
  __int64 **v2; // rdi
  __int64 *i; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  ULONG v6; // edx
  ULONG v7; // r8d

  stru_140C4A810.SizeOfBitMap = 256;
  off_140C01BF8[0] = (__int64 (__fastcall *)())sub_140A4EB20;
  stru_140C4A800.SizeOfBitMap = 256;
  off_140C01C28 = sub_14050A880;
  off_140C01E88[0] = (__int64 (__fastcall *)())sub_140399040;
  off_140C01EF8[0] = (__int64 (__fastcall *)())sub_1403728C0;
  stru_140C4A810.Buffer = (PULONG)&unk_140C4A7E0;
  stru_140C4A800.Buffer = (PULONG)&unk_140C4A820;
  RtlSetAllBits(&stru_140C4A810);
  v2 = (__int64 **)(a1 + 32);
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    v4 = *((int *)i + 6);
    if ( (unsigned int)v4 <= 0x23 )
    {
      v5 = 0xBC0400048LL;
      if ( _bittest64(&v5, v4) )
        continue;
    }
    if ( (unsigned __int64)i[4] < 0x100 )
    {
      v6 = *((_DWORD *)i + 8);
      v7 = 256 - v6;
      if ( 256 - v6 > (unsigned __int64)i[5] )
        v7 = *((_DWORD *)i + 10);
      RtlClearBits(&stru_140C4A810, v6, v7);
    }
  }
  sub_140B237A4();
  return 0LL;
}
