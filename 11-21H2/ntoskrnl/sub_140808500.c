/*
 * XREFs of sub_140808500 @ 0x140808500
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D6254 @ 0x1402D6254 (sub_1402D6254.c)
 *     sub_14038B860 @ 0x14038B860 (sub_14038B860.c)
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140808500(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v4; // bl
  int v5; // ecx

  sub_140A48330(a1);
  qword_140C22978 = (__int64)KeGetCurrentThread();
  if ( !(_BYTE)byte_140C227C0 )
    goto LABEL_2;
  v4 = byte_140C227C0;
  if ( !byte_140C227C1 )
  {
    if ( (byte_140C227C0 & 2) == 0 )
      goto LABEL_2;
    sub_14038B860(1);
    v5 = 2;
    goto LABEL_12;
  }
  if ( byte_140C227C1 != 2 )
    goto LABEL_2;
  if ( (int)sub_1407FF888(1, qword_140C227C4, HIDWORD(qword_140C227C4), dword_140C227CC) >= 0 )
  {
    LOBYTE(byte_140C227C0) = ~v4 & byte_140C227C0;
    goto LABEL_2;
  }
  if ( byte_140C227C1 != 2 )
  {
    v5 = 1;
LABEL_12:
    sub_1402D6254(v5);
  }
LABEL_2:
  qword_140C22978 = 0LL;
  sub_140A47CF8(v2, v1);
  if ( *((_DWORD *)KeGetCurrentThread() + 121) )
    __fastfail(0x20u);
  return 0LL;
}
