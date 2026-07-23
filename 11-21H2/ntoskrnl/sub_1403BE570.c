/*
 * XREFs of sub_1403BE570 @ 0x1403BE570
 * Callers:
 *     sub_1403BCA0C @ 0x1403BCA0C (sub_1403BCA0C.c)
 * Callees:
 *     sub_1403B37B0 @ 0x1403B37B0 (sub_1403B37B0.c)
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 *     sub_1403BE664 @ 0x1403BE664 (sub_1403BE664.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140521F54 @ 0x140521F54 (sub_140521F54.c)
 *     sub_1405222C8 @ 0x1405222C8 (sub_1405222C8.c)
 *     sub_140522324 @ 0x140522324 (sub_140522324.c)
 *     HviGetHardwareFeatures @ 0x140647B00 (HviGetHardwareFeatures.c)
 */

__int64 sub_1403BE570()
{
  __int64 v0; // rdi
  __int64 v1; // rax
  __int64 v2; // rbx
  int v4; // eax
  unsigned __int64 v5; // rdx
  int v6; // ecx
  char v7; // si
  __int64 v8; // r15
  int v9; // edx
  int v10; // ecx
  unsigned __int64 v11; // rcx
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v15[18]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v16[14]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v17; // [rsp+148h] [rbp+40h] BYREF

  v14 = 0;
  v13 = 0;
  memset(v15, 0, sizeof(v15));
  memset(v16, 0, sizeof(v16));
  v15[0] = 0x9000000001LL;
  v17 = 0LL;
  v0 = 0LL;
  LOBYTE(v12) = 0;
  if ( !sub_1403B37B0() || !byte_140C4C678 || (HviGetHardwareFeatures(&v17), (v17 & 0x2000000) == 0) )
    v0 = sub_1403BE664(1413563479LL);
  v1 = sub_1403BE664(1414677591LL);
  v2 = v1;
  if ( v0 )
  {
    v4 = sub_1405222C8(v0, v16, &v13, &v12);
  }
  else
  {
    if ( !v1 )
      return 0LL;
    v16[1] = v1;
    v4 = sub_140522324(v1, v16, &v13, &v12);
  }
  v7 = v12;
  if ( v4 >= 0 )
  {
    if ( !(_BYTE)v12 )
      return 0LL;
    if ( LODWORD(v16[3]) )
    {
      v8 = LODWORD(v16[2]);
      if ( LODWORD(v16[2]) >= HIDWORD(v16[2]) )
      {
        HIDWORD(v15[14]) = 163872;
        LOBYTE(v6) = 32;
        if ( (int)sub_140521F54(v6, v5, (unsigned int)&v14, v0, v2) >= 0 && v14 == 1 )
        {
          HIDWORD(v15[14]) = 426016;
          LOBYTE(v10) = 33;
          sub_140521F54(v10, v9, 0, v0, v2);
        }
        v11 = (unsigned __int64)LODWORD(v16[3]) * v8 / 0x3E8;
        if ( v11 <= 0x12C436C73CE5LL )
        {
          v5 = 894000 * v11;
          v6 = 63;
          HIDWORD(v15[12]) = 63;
          do
          {
            if ( (1LL << v6) - 1 < v5 )
              break;
            --v6;
          }
          while ( v6 );
          HIDWORD(v15[12]) = v6;
          if ( !v6 )
            goto LABEL_26;
        }
        else
        {
          HIDWORD(v15[12]) = 64;
        }
        v15[3] = 0LL;
        v15[11] = 0LL;
        v15[1] = sub_1405220C0;
        v15[4] = sub_140521E50;
        v15[5] = sub_1405223E0;
        LODWORD(v15[12]) = v13;
        v15[13] = 894000LL;
        v15[17] = 13LL;
        sub_1403BE0BC((__int64)v15, 0LL);
      }
    }
  }
LABEL_26:
  if ( v7 )
  {
    LOBYTE(v6) = 11;
    sub_140521F54(v6, v5, 0, v0, v2);
  }
  return 0LL;
}
