/*
 * XREFs of sub_1407FF440 @ 0x1407FF440
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D6254 @ 0x1402D6254 (sub_1402D6254.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_14038AB60 @ 0x14038AB60 (sub_14038AB60.c)
 *     sub_14038B860 @ 0x14038B860 (sub_14038B860.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407FD778 @ 0x1407FD778 (sub_1407FD778.c)
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1407FF440(int a1)
{
  char v1; // si
  char v2; // bp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r15
  unsigned int v6; // edi
  unsigned int v7; // ebx
  int v8; // r14d
  LONG v9; // edi
  __int64 *i; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  LONG v15; // [rsp+38h] [rbp-40h]
  int v16; // [rsp+3Ch] [rbp-3Ch]
  __int64 *v17; // [rsp+40h] [rbp-38h] BYREF
  int v18; // [rsp+48h] [rbp-30h]
  int v19; // [rsp+4Ch] [rbp-2Ch]

  v1 = 0;
  v2 = 0;
  sub_140A48330(a1);
  qword_140C22970 = (__int64)KeGetCurrentThread();
  if ( byte_140C227C1 == 1 )
  {
    v5 = (int)qword_140C227C4;
    v6 = HIDWORD(qword_140C227C4);
    v7 = dword_140C227CC;
    sub_14038B860(2);
    v8 = dword_140C227D4;
    v9 = sub_1407FF888(0LL, (unsigned int)v5, v6, v7);
    v2 = 1;
    if ( (byte_140C227C0 & 2) != 0 )
    {
      if ( HIDWORD(qword_140C227C4) == 5 )
        v8 = 6;
      dword_140C227D4 = v8;
      dword_140C227CC = dword_140C227CC & 0x7FFFFFDC | 0x80000020;
      LOBYTE(byte_140C227C0) = byte_140C227C0 & 0xFD;
      sub_14038B860(1);
      sub_1402D6254(2);
    }
    else
    {
      if ( (xmmword_140D06910 & 0x8000) != 0 )
      {
        v16 = 0;
        v19 = 0;
        v17 = &v14;
        v14 = v5;
        v15 = v9;
        v18 = 16;
        sub_14035EDE4((__int64)&v17, 1u, 0x80008000, 0x1223u, 0x401802u);
      }
      dword_140C227D0 = v9;
      sub_14038B860(0);
      for ( i = (__int64 *)qword_140C23130; i != &qword_140C23130; i = (__int64 *)*i )
        sub_1407FD778(i[2], v9);
      sub_1402D6254(1);
      v1 = 1;
    }
  }
  qword_140C22970 = 0LL;
  sub_140A47CF8(v4, v3);
  if ( v1 )
    sub_14038AB60();
  byte_140C223A8 = 0;
  if ( v2 && qword_140C5AD40 )
    sub_14042A5E0(v12, v11);
  if ( *((_DWORD *)KeGetCurrentThread() + 121) )
    __fastfail(0x20u);
  return 0LL;
}
