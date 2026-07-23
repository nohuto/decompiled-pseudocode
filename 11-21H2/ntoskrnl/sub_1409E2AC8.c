/*
 * XREFs of sub_1409E2AC8 @ 0x1409E2AC8
 * Callers:
 *     sub_140985970 @ 0x140985970 (sub_140985970.c)
 *     sub_140986424 @ 0x140986424 (sub_140986424.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14062FC2C @ 0x14062FC2C (sub_14062FC2C.c)
 *     sub_14063A59C @ 0x14063A59C (sub_14063A59C.c)
 */

void __fastcall sub_1409E2AC8(unsigned __int16 a1, __int64 a2)
{
  unsigned __int8 v4; // r15
  unsigned int v5; // edi
  int v6; // r9d
  unsigned int v7; // esi
  bool v8; // zf
  __int64 v9; // r14
  __int64 v10; // r8
  int v11; // ebx
  _WORD *v12; // rbp
  int v13; // eax
  int v14; // [rsp+30h] [rbp-68h]
  __int128 v15; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-50h] BYREF

  v4 = dword_140D06C0C ^ *(_BYTE *)(a2 + 24) ^ BYTE1(a2);
  v5 = 0;
  v15 = 0LL;
  v6 = *(_DWORD *)(qword_140D07490[v4] + 192);
  v14 = v6;
  v7 = *(_DWORD *)(qword_140D05008 + 4248);
  v8 = !_BitScanForward((unsigned int *)&v9, v7);
  if ( !v8 )
  {
    do
    {
      v7 &= v7 - 1;
      v10 = 32LL * (unsigned int)v9 + qword_140D05008 + 4284;
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 16) & 0x80u) != 0 )
        {
          v11 = 0;
          v12 = (_WORD *)(0x140000000LL + 20 * v9 + 12672704);
          if ( *v12 )
          {
            while ( 1 )
            {
              v13 = sub_14063A59C(v6, *(_DWORD *)&v12[2 * v11 + 2]);
              v6 = v14;
              if ( v13 )
                break;
              if ( ++v11 >= (unsigned int)(unsigned __int16)*v12 )
                goto LABEL_9;
            }
            v5 |= 1 << v9;
          }
        }
      }
LABEL_9:
      v8 = !_BitScanForward((unsigned int *)&v9, v7);
    }
    while ( !v8 );
    if ( v5 )
    {
      v16[1] = 16LL;
      *(_QWORD *)&v15 = a2 + 48;
      WORD4(v15) = v4;
      v16[0] = &v15;
      sub_14062FC2C((__int64)v16, 1u, v5, a1, 0x10501902u);
    }
  }
}
