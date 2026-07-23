/*
 * XREFs of sub_140A7294C @ 0x140A7294C
 * Callers:
 *     sub_140A6F360 @ 0x140A6F360 (sub_140A6F360.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A6F7A0 @ 0x140A6F7A0 (sub_140A6F7A0.c)
 *     sub_140A6F900 @ 0x140A6F900 (sub_140A6F900.c)
 */

__int64 __fastcall sub_140A7294C(int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rdx
  char v4; // di
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  int v8; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v9[2]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD *v10; // [rsp+48h] [rbp-29h]
  __int128 v11; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v12[8]; // [rsp+68h] [rbp-9h] BYREF

  v1 = (unsigned int)(a1 - 1);
  memset(v12, 0, sizeof(v12));
  if ( (unsigned int)v1 >= 0x10 )
    return 3221225485LL;
  v4 = sub_140A6F7A0(0LL);
  v5 = qword_140C40440[v1];
  if ( v5 )
  {
    for ( v12[1] = qword_140C40440[v1]; ; v12[1] = v6 )
    {
      v9[1] = 0;
      v8 = 0;
      LODWORD(v12[0]) = 13363;
      v9[0] = 4194368;
      v10 = v12;
      v11 = 0LL;
      KdSendPacket(11LL, v9, 0LL, &xmmword_140C31E60);
      if ( (_BYTE)KdDebuggerNotPresent )
      {
        v7 = -1073740972;
        HIDWORD(v12[0]) = -1073740972;
        goto LABEL_10;
      }
      WORD1(v11) = 12288;
      *((_QWORD *)&v11 + 1) = &unk_140CE2A00;
      if ( !(unsigned int)KdReceivePacket(11LL, v9, &v11, &v8, &xmmword_140C31E60) )
        break;
      v6 = qword_140C40440[v1];
      HIDWORD(v12[0]) = 0;
    }
    v7 = HIDWORD(v12[0]);
LABEL_10:
    if ( v7 >= 0 )
      qword_140C40440[v1] = 0LL;
  }
  else
  {
    HIDWORD(v12[0]) = -1073741811;
  }
  LOBYTE(v5) = v4;
  sub_140A6F900(v5, v3);
  return HIDWORD(v12[0]);
}
