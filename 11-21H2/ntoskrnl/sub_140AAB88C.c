/*
 * XREFs of sub_140AAB88C @ 0x140AAB88C
 * Callers:
 *     sub_140AAD490 @ 0x140AAD490 (sub_140AAD490.c)
 * Callees:
 *     sub_1403A7A98 @ 0x1403A7A98 (sub_1403A7A98.c)
 *     sub_140AABE98 @ 0x140AABE98 (sub_140AABE98.c)
 *     sub_140AAC868 @ 0x140AAC868 (sub_140AAC868.c)
 */

__int64 __fastcall sub_140AAB88C(__int64 a1)
{
  int v2; // eax
  int v4; // [rsp+40h] [rbp-20h] BYREF
  int v5; // [rsp+44h] [rbp-1Ch]
  __int64 v6; // [rsp+48h] [rbp-18h]
  int v7; // [rsp+50h] [rbp-10h]
  int v8; // [rsp+54h] [rbp-Ch]
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF

  v9 = 0LL;
  v6 = 0LL;
  if ( !a1 || (*(_DWORD *)(a1 + 24) & 1) == 0 || (int)sub_140AABE98(0LL) < 0 )
    return 0LL;
  if ( (_BYTE)qword_140C0E110 )
  {
    v4 = HIDWORD(qword_140C0E110);
    v5 = dword_140C0E118;
  }
  else
  {
    v4 = 0;
    v5 = -1;
  }
  v2 = *(_DWORD *)(a1 + 20);
  v8 = 0;
  v7 = v2;
  if ( (int)sub_140AAC868(a1, (int)a1 + 8, (unsigned int)&v4, (int)a1 + 28, (__int64)&v9, 0) < 0 )
    return 0LL;
  dword_140C0DFBC = sub_1403A7A98(v9);
  return v9;
}
