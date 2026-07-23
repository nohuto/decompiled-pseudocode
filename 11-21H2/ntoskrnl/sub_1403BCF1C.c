/*
 * XREFs of sub_1403BCF1C @ 0x1403BCF1C
 * Callers:
 *     sub_1403BCA40 @ 0x1403BCA40 (sub_1403BCA40.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403B31C0 @ 0x1403B31C0 (sub_1403B31C0.c)
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_1403BCF1C()
{
  int v0; // ebx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 v8; // [rsp+30h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v10[18]; // [rsp+50h] [rbp-39h] BYREF
  char v11; // [rsp+F0h] [rbp+67h] BYREF
  int v12; // [rsp+F8h] [rbp+6Fh] BYREF

  v12 = 0;
  v11 = 0;
  v8 = 0LL;
  DestinationString = 0LL;
  memset(v10, 0, sizeof(v10));
  v10[13] = 0LL;
  v10[11] = &v12;
  v0 = 7;
  v10[0] = 0x9000000001LL;
  LODWORD(v10[17]) = 5;
  v10[12] = 0x4000000004LL;
  if ( (int)sub_1403B38C8(v1, 0LL, 6, 16LL, &v8) >= 0 )
  {
    v6 = sub_14042A5E0(v3, v2);
    v7 = 0LL;
    if ( v6 )
      v7 = v6;
    v10[13] = v7;
  }
  if ( (int)sub_1403B31C0(&byte_140C4A1B8, &byte_140C4A1B1, &v11) < 0 )
  {
    v0 = 24583;
LABEL_15:
    HIDWORD(v10[14]) = v0;
    goto LABEL_6;
  }
  if ( !byte_140C4A1B8 )
    v0 = 8199;
  HIDWORD(v10[14]) = v0;
  if ( !byte_140C4A1B1 )
  {
    v0 |= 0x4000u;
    goto LABEL_15;
  }
LABEL_6:
  v10[1] = sub_1403B30A0;
  if ( v11 )
  {
    v4 = sub_140372C80;
    HIDWORD(v10[14]) = v0 | 0x1000000;
  }
  else
  {
    v4 = (__int64 (__fastcall *)(__int64, __int64))qword_1405232F0;
  }
  v10[2] = v4;
  RtlInitUnicodeString(&DestinationString, L"VEN_vvvv&DEV_dddd&SUBVEN_ssss&SUBDEV_yyyy&REV_rrrr&INST_iiii&UID_uuuuuuuu");
  sub_1403BE0BC(v10, &DestinationString);
  return 0LL;
}
