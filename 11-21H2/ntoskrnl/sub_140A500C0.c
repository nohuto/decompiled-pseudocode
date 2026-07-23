/*
 * XREFs of sub_140A500C0 @ 0x140A500C0
 * Callers:
 *     sub_140390D20 @ 0x140390D20 (sub_140390D20.c)
 * Callees:
 *     sub_140391464 @ 0x140391464 (sub_140391464.c)
 *     sub_1403914B8 @ 0x1403914B8 (sub_1403914B8.c)
 *     sub_140391524 @ 0x140391524 (sub_140391524.c)
 *     sub_14039157C @ 0x14039157C (sub_14039157C.c)
 *     sub_1403915EC @ 0x1403915EC (sub_1403915EC.c)
 *     sub_1403AC910 @ 0x1403AC910 (sub_1403AC910.c)
 *     sub_1403AEED4 @ 0x1403AEED4 (sub_1403AEED4.c)
 *     sub_1403B043C @ 0x1403B043C (sub_1403B043C.c)
 *     sub_1403B0670 @ 0x1403B0670 (sub_1403B0670.c)
 *     sub_1403B607C @ 0x1403B607C (sub_1403B607C.c)
 *     sub_1403B6968 @ 0x1403B6968 (sub_1403B6968.c)
 *     sub_1403B6AC0 @ 0x1403B6AC0 (sub_1403B6AC0.c)
 *     sub_14050F000 @ 0x14050F000 (sub_14050F000.c)
 *     sub_140A5029C @ 0x140A5029C (sub_140A5029C.c)
 *     sub_140A536C8 @ 0x140A536C8 (sub_140A536C8.c)
 *     KeLoadMTRR @ 0x140A53A50 (KeLoadMTRR.c)
 */

__int64 __fastcall sub_140A500C0(ULONG a1, __int64 a2)
{
  bool v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h]

  v10 = a2;
  v9 = a1;
  LODWORD(v10) = *((_DWORD *)KeGetCurrentPrcb() + 9);
  if ( (_DWORD)v10 )
  {
    sub_1403AEED4();
    while ( (_DWORD)v10 != dword_140C4A004 )
      _mm_pause();
    __writecr8(0xFuLL);
  }
  if ( (dword_140C4C44C & 0xC) != 0 )
    sub_140A5029C(0LL);
  if ( (dword_140C4C44C & 1) != 0 )
    sub_1403B0670(0LL);
  v2 = sub_1403B6968();
  if ( !(_DWORD)v10 )
  {
    dword_140C54874 = 0;
    dword_140C54850 = 0;
    dword_140C5485C = v9 - 1;
    qword_140C54868 = (__int64)&dword_140C54850;
    if ( !v2 )
      sub_1403B6AC0((__int64)&Argument, 0, 0LL, &v9);
  }
  _InterlockedIncrement(&dword_140C4A004);
  while ( dword_140C4A004 != v9 )
    ;
  if ( !(_DWORD)v10 && byte_140C4C450 && byte_140C0C684 )
    sub_14050F000();
  if ( !(_DWORD)v10 )
    sub_14039157C(0LL, 1LL);
  sub_140391524();
  sub_1403914B8(v4, v3);
  if ( !(_DWORD)v10 )
  {
    dword_140C4BFCC = 1;
    sub_14039157C(0LL, 2LL);
    sub_1403915EC();
    byte_140C4C448 = 0;
    dword_140C54870 = 0;
  }
  _InterlockedIncrement(&dword_140C54874);
  while ( dword_140C54874 != v9 )
    ;
  while ( dword_140C54870 < (int)v10 )
    ;
  sub_1403B607C((unsigned int)dword_140C54870, v5);
  sub_140A536C8();
  _InterlockedIncrement(&dword_140C54870);
  while ( dword_140C54870 != v9 )
    ;
  sub_140391464(v7, v6);
  sub_1403B043C();
  KeLoadMTRR(&unk_140C54858);
  if ( !v2 )
    sub_1403AC910((ULONG_PTR)&Argument);
  return sub_140A5029C(1LL);
}
