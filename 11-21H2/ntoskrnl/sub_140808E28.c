/*
 * XREFs of sub_140808E28 @ 0x140808E28
 * Callers:
 *     sub_140808DA0 @ 0x140808DA0 (sub_140808DA0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407F274C @ 0x1407F274C (sub_1407F274C.c)
 *     sub_1407F27F4 @ 0x1407F27F4 (sub_1407F27F4.c)
 */

__int64 sub_140808E28()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  unsigned int v2; // ebx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]

  v0 = sub_1407F27F4((__int64)&qword_140C20BC0, 3);
  UserData.Reserved = 0;
  v7 = 0;
  *(_OWORD *)(v0 + 24) = xmmword_140C20BD0;
  UserData.Size = 4;
  v6 = 4;
  *(_OWORD *)(v0 + 40) = xmmword_140C20BE0;
  *(_QWORD *)(v0 + 56) = qword_140C20BF0;
  *(_OWORD *)(v0 + 64) = xmmword_140C20BF8;
  *(_OWORD *)(v0 + 80) = xmmword_140C20C08;
  UserData.Ptr = (ULONGLONG)&xmmword_140C20BD0;
  v5 = &xmmword_140C20BF8;
  sub_1407F274C(&stru_14000FB68, 2u, &UserData);
  v2 = sub_14042A5E0(&qword_140C20BC0, v1);
  *(_DWORD *)(sub_1407F27F4((__int64)&qword_140C20BC0, 4) + 24) = v2;
  return v2;
}
