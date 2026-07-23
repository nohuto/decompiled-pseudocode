/*
 * XREFs of sub_140553164 @ 0x140553164
 * Callers:
 *     sub_140552B40 @ 0x140552B40 (sub_140552B40.c)
 *     sub_140552EE8 @ 0x140552EE8 (sub_140552EE8.c)
 *     sub_140552F34 @ 0x140552F34 (sub_140552F34.c)
 *     sub_140553244 @ 0x140553244 (sub_140553244.c)
 *     sub_140554390 @ 0x140554390 (sub_140554390.c)
 *     sub_1405544E0 @ 0x1405544E0 (sub_1405544E0.c)
 *     sub_140554654 @ 0x140554654 (sub_140554654.c)
 *     sub_140579B48 @ 0x140579B48 (sub_140579B48.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140554090 @ 0x140554090 (sub_140554090.c)
 */

__int64 sub_140553164()
{
  __int64 result; // rax

  result = sub_140554090();
  if ( (_BYTE)result )
  {
    dword_140D01898 = 1;
    result = sub_14042A5E0(L"BugCheckProgress", qword_140037740);
    dword_140D01898 = 0;
  }
  return result;
}
