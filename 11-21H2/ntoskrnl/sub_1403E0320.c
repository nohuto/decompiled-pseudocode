/*
 * XREFs of sub_1403E0320 @ 0x1403E0320
 * Callers:
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     sub_14034A490 @ 0x14034A490 (sub_14034A490.c)
 *     sub_14034BBF0 @ 0x14034BBF0 (sub_14034BBF0.c)
 *     sub_14034FED0 @ 0x14034FED0 (sub_14034FED0.c)
 *     sub_140351E90 @ 0x140351E90 (sub_140351E90.c)
 *     sub_140370C40 @ 0x140370C40 (sub_140370C40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403E0320(_OWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  _OWORD *v3; // r8
  unsigned __int64 v4; // rdx

  if ( a2 < 0x40 )
  {
    if ( a2 )
    {
      *a1 = 0LL;
      *(_OWORD *)((char *)a1 + a2 - 16) = 0LL;
      *(_OWORD *)((char *)a1 + ((a2 & 0x20) >> 1)) = 0LL;
    }
  }
  else if ( (qword_140C5A5F8 & 1) != 0 && a2 >= 0x320 )
  {
    return sub_1403E03B0();
  }
  else
  {
    v3 = (_OWORD *)((char *)a1 + a2 - 48);
    v4 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) >> 6;
    do
    {
      *a1 = 0LL;
      a1[1] = 0LL;
      a1 += 4;
      --v4;
      *(a1 - 2) = 0LL;
      *(a1 - 1) = 0LL;
    }
    while ( v4 );
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
  }
  return result;
}
