/*
 * XREFs of sub_140A72BB0 @ 0x140A72BB0
 * Callers:
 *     sub_140A6F360 @ 0x140A6F360 (sub_140A6F360.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A6F7A0 @ 0x140A6F7A0 (sub_140A6F7A0.c)
 *     sub_140A6F900 @ 0x140A6F900 (sub_140A6F900.c)
 */

__int64 __fastcall sub_140A72BB0(int a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rbx
  int v9; // esi
  __int64 v11; // rcx
  char v12; // r12
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // [rsp+30h] [rbp-71h] BYREF
  _DWORD v17[2]; // [rsp+38h] [rbp-69h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-61h]
  __int128 v19; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v20[8]; // [rsp+60h] [rbp-41h] BYREF

  v5 = (unsigned int)(a1 - 1);
  memset(v20, 0, sizeof(v20));
  v9 = 0;
  if ( (unsigned int)v5 >= 0x10 )
    return 3221225485LL;
  v12 = sub_140A6F7A0(0LL);
  v13 = 0LL;
  if ( qword_140C40440[v5] )
  {
    if ( a4 )
    {
      while ( 1 )
      {
        v14 = qword_140C40440[v5];
        v17[1] = 0;
        v16 = 0;
        v20[1] = v14;
        v19 = 0LL;
        v20[0] = 13361LL;
        v20[2] = a2;
        LODWORD(v20[3]) = a4 <= (unsigned __int64)(unsigned int)dword_140C097F8 - 64 ? a4 : dword_140C097F8 - 64;
        v17[0] = 4194368;
        v18 = v20;
        KdSendPacket(11LL, v17, 0LL, &xmmword_140C31E60);
        if ( (_BYTE)KdDebuggerNotPresent )
          break;
        WORD1(v19) = v20[3];
        *((_QWORD *)&v19 + 1) = a3;
        v15 = KdReceivePacket(11LL, v17, &v19, &v16, &xmmword_140C31E60);
        v13 = 0LL;
        if ( !v15 )
        {
          if ( v20[0] < 0 )
            goto LABEL_16;
          v11 = v16;
          v9 += v16;
          a3 += v16;
          a2 += v16;
          a4 -= v16;
        }
        if ( !a4 )
          goto LABEL_16;
      }
      HIDWORD(v20[0]) = -1073740972;
    }
LABEL_16:
    *a5 = v9;
  }
  else
  {
    HIDWORD(v20[0]) = -1073741811;
  }
  LOBYTE(v11) = v12;
  sub_140A6F900(v11, v13);
  return HIDWORD(v20[0]);
}
