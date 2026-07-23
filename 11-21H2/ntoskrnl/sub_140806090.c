/*
 * XREFs of sub_140806090 @ 0x140806090
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140387A68 @ 0x140387A68 (sub_140387A68.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1408062D4 @ 0x1408062D4 (sub_1408062D4.c)
 *     sub_14099BD28 @ 0x14099BD28 (sub_14099BD28.c)
 *     sub_14099C0B0 @ 0x14099C0B0 (sub_14099C0B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140806090(_QWORD *P)
{
  char *v2; // rsi
  __int64 v3; // r14
  unsigned __int64 v4; // rdi
  LARGE_INTEGER v5; // r9
  unsigned int i; // edi
  __int64 v7; // rcx
  __int16 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v9; // [rsp+34h] [rbp-CCh] BYREF
  LARGE_INTEGER v10; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER v11; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v13[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v14[100]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15[2]; // [rsp+380h] [rbp+280h] BYREF
  unsigned __int64 *v16; // [rsp+3A0h] [rbp+2A0h]
  __int64 v17; // [rsp+3A8h] [rbp+2A8h]
  __int16 *v18; // [rsp+3B0h] [rbp+2B0h]
  __int64 v19; // [rsp+3B8h] [rbp+2B8h]
  LARGE_INTEGER *v20; // [rsp+3C0h] [rbp+2C0h]
  __int64 v21; // [rsp+3C8h] [rbp+2C8h]
  __int16 *v22; // [rsp+3D0h] [rbp+2D0h]
  __int64 v23; // [rsp+3D8h] [rbp+2D8h]
  _BYTE *v24; // [rsp+3E0h] [rbp+2E0h]
  __int64 v25; // [rsp+3E8h] [rbp+2E8h]
  _QWORD *v26; // [rsp+3F0h] [rbp+2F0h]
  __int64 v27; // [rsp+3F8h] [rbp+2F8h]
  _BYTE v28[48]; // [rsp+400h] [rbp+300h] BYREF

  memset(v14, 0, 0x318uLL);
  v10.QuadPart = 0LL;
  v11.QuadPart = 0LL;
  KeQueryInterruptTimePrecise(&v10);
  sub_1408062D4(6LL, P + 29, v28, 1000LL);
  if ( (unsigned int)dword_140C03A00 > 5 && sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
  {
    v12 = P[2539];
    v17 = 8LL;
    v16 = &v12;
    v8 = 6;
    v18 = &v8;
    v19 = 2LL;
    v20 = (LARGE_INTEGER *)(P + 26);
    v22 = &v9;
    v24 = v28;
    v26 = v13;
    v21 = 24LL;
    v9 = 6;
    v23 = 2LL;
    v25 = 48LL;
    v13[0] = 0x1000000LL;
    v27 = 8LL;
    sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)word_1400319BA, 0LL, 0LL, 8u, v15);
  }
  v2 = (char *)(P + 35);
  v3 = 25LL;
  do
  {
    if ( *((_DWORD *)v2 + 102) )
    {
      memset(v14, 0, 0x318uLL);
      if ( (int)sub_14099BD28(v2, v14) >= 0 )
        sub_14099C0B0(P[2539], v14);
      if ( LOBYTE(v14[48]) )
        ExFreePoolWithTag(v14[50], 0x67696450u);
      if ( LODWORD(v14[0]) == 5 )
      {
        for ( i = 0; i < LODWORD(v14[51]); ++i )
          ExFreePoolWithTag(v14[2 * i + 53], 0x67696450u);
      }
    }
    v2 += 800;
    --v3;
  }
  while ( v3 );
  KeQueryInterruptTimePrecise(&v11);
  v4 = sub_140387A68(v10.QuadPart - P[2540], 0x3E8uLL);
  sub_140387A68(v11.QuadPart - v10.QuadPart, 0x3E8uLL);
  if ( (unsigned int)dword_140C03A00 > 5 && sub_1402A2000((__int64)&dword_140C03A00, 0x200000000000LL) )
  {
    v7 = P[2539];
    v16 = v13;
    v13[0] = v7;
    v18 = (__int16 *)&v12;
    v11 = v5;
    v20 = &v11;
    v17 = 8LL;
    v22 = (__int16 *)&v10;
    v12 = v4;
    v19 = 8LL;
    v21 = 8LL;
    v10.QuadPart = 0x1000000LL;
    v23 = 8LL;
    sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_14003194B, 0LL, 0LL, 6u, v15);
  }
  ExFreePoolWithTag(P, 0x67696450u);
}
