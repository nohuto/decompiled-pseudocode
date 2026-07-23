/*
 * XREFs of sub_14035F5AC @ 0x14035F5AC
 * Callers:
 *     sub_14035F4C8 @ 0x14035F4C8 (sub_14035F4C8.c)
 *     sub_140379EC8 @ 0x140379EC8 (sub_140379EC8.c)
 *     sub_14037BD80 @ 0x14037BD80 (sub_14037BD80.c)
 *     sub_140393AA0 @ 0x140393AA0 (sub_140393AA0.c)
 *     sub_1405F7090 @ 0x1405F7090 (sub_1405F7090.c)
 *     sub_1407FA72C @ 0x1407FA72C (sub_1407FA72C.c)
 *     sub_140847F40 @ 0x140847F40 (sub_140847F40.c)
 *     sub_140847F98 @ 0x140847F98 (sub_140847F98.c)
 * Callees:
 *     sub_14035F464 @ 0x14035F464 (sub_14035F464.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 */

ULONG_PTR __fastcall sub_14035F5AC(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // r9d

  if ( (unsigned int)a2 < 0x400 && (v2 = sub_14035F5E8(a1, a2)) != 0 )
    return sub_14035F464(v3, v4 | ((*(unsigned __int16 *)(v2 + 32) & 0x3Fu) << 10));
  else
    return 0LL;
}
