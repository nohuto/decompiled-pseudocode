/*
 * XREFs of sub_1403BB340 @ 0x1403BB340
 * Callers:
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_1403AEA08 @ 0x1403AEA08 (sub_1403AEA08.c)
 *     sub_1403AEF08 @ 0x1403AEF08 (sub_1403AEF08.c)
 *     sub_1403BB634 @ 0x1403BB634 (sub_1403BB634.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_1403BB340()
{
  __int64 v0; // rbx
  int v1; // edi
  __int64 v2; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // [rsp+40h] [rbp-28h] BYREF
  __int128 v9; // [rsp+48h] [rbp-20h] BYREF

  v0 = qword_140C4E380;
  v1 = 0;
  v9 = 0LL;
  if ( qword_140C4C728 || (qword_140C4C728 = sub_1403BB634(32LL)) != 0 )
  {
    v8 = 10000;
    sub_14042A5E0(0LL, &v8);
    if ( HIDWORD(KeGetPcr()[1].LockArray) )
    {
      if ( v0 )
      {
        sub_1403AEF08(0xFDu, (int)sub_140521CB0, 15, v2, -3LL);
        if ( (*(_DWORD *)(v0 + 224) & 1) != 0 )
        {
          v4 = sub_140303720(v0);
          v1 = sub_14042A5E0(v4, v5);
          if ( v1 >= 0 )
          {
            v6 = sub_140303720(v0);
            sub_14042A5E0(v6, v7);
          }
        }
      }
    }
    else if ( v0 )
    {
      *((_QWORD *)&v9 + 1) = (unsigned __int16)(dword_140D0E5E0[0] >> 6);
      *(_QWORD *)&v9 = 1LL << (dword_140D0E5E0[0] & 0x3F);
      return (unsigned int)sub_1403AEA08(v0, 0xFDu, 15, v2, -3LL, 1u, &v9, (__int64)sub_140521CB0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v1;
}
