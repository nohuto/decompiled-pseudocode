/*
 * XREFs of sub_14069F770 @ 0x14069F770
 * Callers:
 *     sub_140208D94 @ 0x140208D94 (sub_140208D94.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 * Callees:
 *     sub_14069F7AC @ 0x14069F7AC (sub_14069F7AC.c)
 */

bool __fastcall sub_14069F770(__int64 a1)
{
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]

  v2 = a1;
  v3 = 0LL;
  ((void (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(), __int64 *))sub_14069F7AC)(
    a1,
    0LL,
    sub_1407F4D80,
    &v2);
  return (_DWORD)v3 != 0;
}
