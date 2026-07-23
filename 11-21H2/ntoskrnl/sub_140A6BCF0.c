/*
 * XREFs of sub_140A6BCF0 @ 0x140A6BCF0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140368A78 @ 0x140368A78 (sub_140368A78.c)
 *     sub_1407ED930 @ 0x1407ED930 (sub_1407ED930.c)
 *     sub_1407FEA60 @ 0x1407FEA60 (sub_1407FEA60.c)
 *     sub_140808344 @ 0x140808344 (sub_140808344.c)
 */

LONG sub_140A6BCF0()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+58h] [rbp+10h] BYREF
  int v3; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0LL;
  if ( byte_140C22CA0 )
  {
    sub_1407ED930(&v1, 0LL);
    if ( !(_BYTE)v1 )
    {
      v2 = 0;
      sub_140808344(qword_140014CD0, &v3, &v2);
      if ( !v2 )
        sub_1407FEA60(dword_140C22F78, dword_140C22F7C, 0x80000000, 1);
    }
  }
  sub_140368A78((__int64)&unk_140C20568);
  return KeSetEvent(&stru_140C205C0, 0, 0);
}
