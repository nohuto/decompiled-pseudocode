/*
 * XREFs of RtlSetBitsEx @ 0x14030B740
 * Callers:
 *     sub_14026B354 @ 0x14026B354 (sub_14026B354.c)
 *     RtlFindClearBitsAndSetEx @ 0x14029E780 (RtlFindClearBitsAndSetEx.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_14036FD8C @ 0x14036FD8C (sub_14036FD8C.c)
 *     sub_14038A790 @ 0x14038A790 (sub_14038A790.c)
 *     sub_140553E38 @ 0x140553E38 (sub_140553E38.c)
 *     sub_140583778 @ 0x140583778 (sub_140583778.c)
 *     sub_14058617C @ 0x14058617C (sub_14058617C.c)
 *     sub_140599050 @ 0x140599050 (sub_140599050.c)
 *     sub_1405BD66C @ 0x1405BD66C (sub_1405BD66C.c)
 *     sub_140700460 @ 0x140700460 (sub_140700460.c)
 *     sub_140700A40 @ 0x140700A40 (sub_140700A40.c)
 *     sub_1407095A8 @ 0x1407095A8 (sub_1407095A8.c)
 *     sub_1407B8A60 @ 0x1407B8A60 (sub_1407B8A60.c)
 *     sub_1407FD674 @ 0x1407FD674 (sub_1407FD674.c)
 *     sub_140970C6C @ 0x140970C6C (sub_140970C6C.c)
 *     sub_14097389C @ 0x14097389C (sub_14097389C.c)
 *     sub_1409739A4 @ 0x1409739A4 (sub_1409739A4.c)
 *     sub_1409766B0 @ 0x1409766B0 (sub_1409766B0.c)
 *     sub_140A67430 @ 0x140A67430 (sub_140A67430.c)
 *     sub_140A67608 @ 0x140A67608 (sub_140A67608.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall RtlSetBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  _BYTE *v5; // rsi
  unsigned __int64 v6; // rdi
  char v7; // al

  if ( a3 )
  {
    v4 = a2 & 7;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
    v6 = a3;
    if ( v4 + a3 <= 8 )
    {
      v7 = byte_140018DF0[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_140015C40[v4];
      v6 = a3 - (unsigned int)(8 - v4);
    }
    if ( v6 > 8 )
    {
      memset(v5, 255, v6 >> 3);
      v5 += v6 >> 3;
      v6 &= 7u;
    }
    if ( v6 )
    {
      v7 = byte_140018DF0[v6];
      goto LABEL_4;
    }
  }
}
