/*
 * XREFs of sub_14050EA90 @ 0x14050EA90
 * Callers:
 *     sub_14050E930 @ 0x14050E930 (sub_14050E930.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_140354420 @ 0x140354420 (sub_140354420.c)
 *     sub_14039FEEC @ 0x14039FEEC (sub_14039FEEC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void sub_14050EA90()
{
  __int64 v0; // rbx
  int v1; // eax
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v0 = qword_140C4E3E8;
  if ( qword_140C4E3E8 )
  {
    v1 = dword_140C4C698;
    if ( dword_140C4C698 < 0 || (--dword_140C4C698, v1 - 1 < 0) )
    {
      v2 = sub_140303720(qword_140C4E3E8);
      sub_14042A5E0(v2, v3);
      qword_140C4C6B0 = MEMORY[0xFFFFF78000000008];
      if ( (int)sub_140354420(v0, 3u, qword_140C4C690, 1, &v4) >= 0 )
      {
        byte_140C4C6A8 = 1;
        sub_14039FEEC();
      }
    }
  }
}
