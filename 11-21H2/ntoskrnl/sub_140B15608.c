/*
 * XREFs of sub_140B15608 @ 0x140B15608
 * Callers:
 *     sub_140B15550 @ 0x140B15550 (sub_140B15550.c)
 * Callees:
 *     sub_1403C77F8 @ 0x1403C77F8 (sub_1403C77F8.c)
 *     sub_140832FD0 @ 0x140832FD0 (sub_140832FD0.c)
 */

__int64 __fastcall sub_140B15608(__int64 *a1)
{
  unsigned int v2; // edi
  __int64 *i; // rbx
  __int64 v4; // rax
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  __int64 v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+28h] [rbp-38h]
  _QWORD v12[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+28h]

  v2 = 0;
  for ( i = sub_1403C77F8((__int64 *)&off_1400C9DD8); i; i = sub_1403C77F8(i + 6) )
  {
    v10 = 0LL;
    v11 = 0;
    if ( *((_BYTE *)i + 21) || *((_BYTE *)i + 22) )
      goto LABEL_6;
    v13[0] = 0LL;
    v4 = *a1;
    v5 = *((_DWORD *)i + 4);
    v12[0] = 0LL;
    v13[1] = v4;
    v13[2] = a1[1];
    v12[1] = a1[2];
    v12[2] = a1[3];
    v6 = sub_140832FD0(v5, (__int64)v13, (__int64)v12, (__int64)&v10);
    if ( v6 == -2147483614 )
    {
      v9 = 131LL;
      do
      {
        *(_QWORD *)*i = v9;
        i = sub_1403C77F8(i + 6);
      }
      while ( i );
      return v2;
    }
    v7 = 0;
    if ( v6 == -1073741275 )
    {
LABEL_6:
      HIDWORD(v14) = 0;
      v7 = 0;
    }
    else
    {
      HIDWORD(v14) = 0;
      if ( !v6 )
      {
        LODWORD(v14) = (2 * (BYTE4(v10) & 0xB0 | (4 * (BYTE4(v10) & 0x40)))) | 0x83;
        goto LABEL_8;
      }
      if ( v6 == 279 )
      {
        LODWORD(v14) = (2 * (BYTE4(v10) & 0x80)) | 0x83;
        goto LABEL_8;
      }
      v7 = v6;
    }
    LODWORD(v14) = 131;
LABEL_8:
    if ( !v7 )
      v7 = v2;
    v2 = v7;
    *(_QWORD *)*i = v14;
  }
  return v2;
}
