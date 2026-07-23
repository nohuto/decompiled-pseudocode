/*
 * XREFs of sub_140AAB930 @ 0x140AAB930
 * Callers:
 *     sub_140AAD490 @ 0x140AAD490 (sub_140AAD490.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1403A7A98 @ 0x1403A7A98 (sub_1403A7A98.c)
 *     sub_1403A7AF8 @ 0x1403A7AF8 (sub_1403A7AF8.c)
 *     sub_1403A8368 @ 0x1403A8368 (sub_1403A8368.c)
 *     sub_140AABE98 @ 0x140AABE98 (sub_140AABE98.c)
 *     sub_140AAC868 @ 0x140AAC868 (sub_140AAC868.c)
 */

__int64 __fastcall sub_140AAB930(int *a1)
{
  int v2; // eax
  _DWORD v4[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]
  __int64 v8; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = 0LL;
  KeInitializeEvent(&stru_140D009C0, NotificationEvent, 1u);
  if ( !a1 || (a1[6] & 1) == 0 )
    return 0LL;
  if ( dword_140C0E11C == 1 )
  {
    word_140C0C674 = 0;
    word_140C0C678 = -7936;
    word_140C0C67C = -7818;
    word_140C09770 = -7937;
  }
  if ( (int)sub_140AABE98(0LL) < 0 )
    return 0LL;
  v4[0] = HIDWORD(qword_140C0E110);
  v4[1] = dword_140C0E118;
  v6 = a1[5];
  v7 = 1;
  if ( (int)sub_140AAC868((_DWORD)a1, (int)a1 + 8, (unsigned int)v4, (int)a1 + 28, (__int64)&v8, 10) < 0 )
    return 0LL;
  v2 = sub_1403A8368();
  dword_140C0DFB4 = ((sub_1403A7AF8(a1[3], a1[2], v2) + 15) & 0xFFFFFFF0) + 128;
  dword_140C0DFB0 = dword_140C0DFB4 * ((unsigned __int16)word_140C0C67C - (unsigned __int16)word_140C0C678 + 1);
  dword_140C0DFB8 = sub_1403A7A98(v8);
  return v8;
}
