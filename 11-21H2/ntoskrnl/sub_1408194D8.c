/*
 * XREFs of sub_1408194D8 @ 0x1408194D8
 * Callers:
 *     sub_1403C0A40 @ 0x1403C0A40 (sub_1403C0A40.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_1408193F4 @ 0x1408193F4 (sub_1408193F4.c)
 *     sub_1408556F0 @ 0x1408556F0 (sub_1408556F0.c)
 *     sub_1408578E0 @ 0x1408578E0 (sub_1408578E0.c)
 *     sub_140859D40 @ 0x140859D40 (sub_140859D40.c)
 *     sub_14085FC80 @ 0x14085FC80 (sub_14085FC80.c)
 *     sub_140861FA0 @ 0x140861FA0 (sub_140861FA0.c)
 * Callees:
 *     sub_1402D6220 @ 0x1402D6220 (sub_1402D6220.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403B1A2C @ 0x1403B1A2C (sub_1403B1A2C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1408197A0 @ 0x1408197A0 (sub_1408197A0.c)
 *     sub_140819CB8 @ 0x140819CB8 (sub_140819CB8.c)
 *     sub_14085D010 @ 0x14085D010 (sub_14085D010.c)
 */

__int64 __fastcall sub_1408194D8(char a1, char a2, _OWORD *a3, unsigned int a4)
{
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  _OWORD *v15; // rbx
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 result; // rax
  int v23; // ebx
  _QWORD *v24; // rdi
  char v25; // r14
  __int64 v26; // r8
  __int64 v27; // rcx
  _OWORD *v28; // rcx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int64 v42; // rax
  __int64 v43; // rcx
  HANDLE DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD Buf1[15]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD Data[14]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v48; // [rsp+228h] [rbp+120h]

  memset(Buf1, 0, 0xE8uLL);
  DestinationString = 0LL;
  DestinationString_8 = 0LL;
  if ( a4 < 0xE8 )
    return 3221225507LL;
  if ( a4 > 0xE8 )
    return 2147483653LL;
  v8 = a3[1];
  Data[0] = *a3;
  v9 = a3[2];
  Data[1] = v8;
  v10 = a3[3];
  Data[2] = v9;
  v11 = a3[4];
  Data[3] = v10;
  v12 = a3[5];
  Data[4] = v11;
  v13 = a3[6];
  Data[5] = v12;
  Data[6] = v13;
  v14 = a3[7];
  v15 = a3 + 8;
  Data[7] = v14;
  v16 = *((_QWORD *)v15 + 12);
  v17 = v15[1];
  Data[8] = *v15;
  v18 = v15[2];
  Data[9] = v17;
  v19 = v15[3];
  Data[10] = v18;
  v20 = v15[4];
  Data[11] = v19;
  v21 = v15[5];
  Data[12] = v20;
  Data[13] = v21;
  v48 = v16;
  result = sub_1408197A0(Data, Buf1);
  v23 = result;
  if ( (int)result >= 0 )
  {
    v24 = qword_140C231B8;
    if ( !memcmp(Buf1, qword_140C231B8, 0xE8uLL) && !a1 )
    {
      return 0LL;
    }
    else
    {
      v25 = 0;
      v26 = 0LL;
      while ( 1 )
      {
        v27 = *((_QWORD *)&Buf1[6] + 3 * v26) - v24[3 * v26 + 12];
        if ( !v27 )
        {
          v27 = *((_QWORD *)&Buf1[6] + 3 * v26 + 1) - v24[3 * v26 + 13];
          if ( !v27 )
            v27 = *((_QWORD *)&Buf1[7] + 3 * v26) - v24[3 * v26 + 14];
        }
        if ( v27 )
          break;
        v26 = (unsigned int)(v26 + 1);
        if ( (unsigned int)v26 >= 4 )
          goto LABEL_12;
      }
      v25 = 1;
LABEL_12:
      v28 = qword_140C231B8;
      v29 = Buf1[1];
      *(_OWORD *)qword_140C231B8 = Buf1[0];
      v30 = Buf1[2];
      v28[1] = v29;
      v31 = Buf1[3];
      v28[2] = v30;
      v32 = Buf1[4];
      v28[3] = v31;
      v33 = Buf1[5];
      v28[4] = v32;
      v34 = Buf1[6];
      v28[5] = v33;
      v35 = Buf1[7];
      v28[6] = v34;
      v28 += 8;
      v36 = Buf1[8];
      *(v28 - 1) = v35;
      v37 = Buf1[9];
      *v28 = v36;
      v38 = Buf1[10];
      v28[1] = v37;
      v39 = Buf1[11];
      v28[2] = v38;
      v40 = Buf1[12];
      v28[3] = v39;
      v41 = Buf1[13];
      v42 = *(_QWORD *)&Buf1[14];
      v28[4] = v40;
      v28[5] = v41;
      *((_QWORD *)v28 + 12) = v42;
      sub_1402D6220(2u);
      if ( v25 && !a2 )
      {
        LOBYTE(v43) = -125;
        sub_14085D010(v43);
      }
      sub_140819CB8(3LL);
      if ( a1 )
      {
        v23 = sub_1403B1A2C((__int64)&DestinationString);
        if ( v23 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString_8, L"SystemPowerPolicy");
          v23 = ZwSetValueKey(DestinationString, &DestinationString_8, 0, 3u, Data, 0xE8u);
          ZwClose(DestinationString);
        }
      }
      return (unsigned int)v23;
    }
  }
  return result;
}
