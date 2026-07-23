/*
 * XREFs of sub_1406DFF64 @ 0x1406DFF64
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140689BB8 @ 0x140689BB8 (sub_140689BB8.c)
 *     sub_140689DAC @ 0x140689DAC (sub_140689DAC.c)
 */

__int64 __fastcall sub_1406DFF64(__int64 a1)
{
  unsigned int v2; // eax
  char v3; // r10
  int v4; // r11d
  int v5; // edx
  __int64 v6; // rbx
  int v7; // eax
  __int64 result; // rax
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  int v11; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+44h] [rbp-C4h] BYREF
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+68h] [rbp-A0h] BYREF
  int *v18; // [rsp+88h] [rbp-80h]
  int v19; // [rsp+90h] [rbp-78h]
  int v20; // [rsp+94h] [rbp-74h]
  int *v21; // [rsp+98h] [rbp-70h]
  int v22; // [rsp+A0h] [rbp-68h]
  int v23; // [rsp+A4h] [rbp-64h]
  int *v24; // [rsp+A8h] [rbp-60h]
  int v25; // [rsp+B0h] [rbp-58h]
  int v26; // [rsp+B4h] [rbp-54h]
  int *v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+C0h] [rbp-48h]
  int v29; // [rsp+C4h] [rbp-44h]
  int *v30; // [rsp+C8h] [rbp-40h]
  int v31; // [rsp+D0h] [rbp-38h]
  int v32; // [rsp+D4h] [rbp-34h]
  int *v33; // [rsp+D8h] [rbp-30h]
  int v34; // [rsp+E0h] [rbp-28h]
  int v35; // [rsp+E4h] [rbp-24h]
  __int64 *v36; // [rsp+E8h] [rbp-20h]
  int v37; // [rsp+F0h] [rbp-18h]
  int v38; // [rsp+F4h] [rbp-14h]
  __int64 *v39; // [rsp+F8h] [rbp-10h]
  int v40; // [rsp+100h] [rbp-8h]
  int v41; // [rsp+104h] [rbp-4h]

  sub_140689BB8((unsigned int *)a1);
  v2 = sub_140689DAC(*(_DWORD *)(a1 + 168));
  v5 = *(_DWORD *)(a1 + 172) - *(_DWORD *)(a1 + 176);
  v6 = MEMORY[0xFFFFF78000000014];
  if ( (unsigned int)dword_140C03868 > 5 )
  {
    v14 = *(_DWORD *)(a1 + 8LL * v2 + 1808);
    v18 = &v9;
    v10 = *(_DWORD *)(a1 + 280);
    v21 = &v10;
    LOBYTE(v9) = v3 == 0;
    v7 = *(_DWORD *)(a1 + 188);
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v11 = v7;
    v24 = &v11;
    v27 = &v12;
    v13 = *(_DWORD *)(a1 + 180);
    v30 = &v13;
    v33 = &v14;
    v36 = &v15;
    v16 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 200);
    v39 = &v16;
    LODWORD(v15) = v5;
    v19 = 1;
    v22 = 4;
    v25 = 4;
    v12 = v4;
    v28 = 4;
    v31 = 4;
    v34 = 4;
    v37 = 4;
    v40 = 8;
    sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_14002A093, 0LL, 0LL, 0xAu, &v17);
  }
  *(_DWORD *)(a1 + 168) = 5 - (*(_DWORD *)(a1 + 168) != 4);
  result = *(unsigned int *)(a1 + 172);
  *(_QWORD *)(a1 + 176) = (unsigned int)result;
  *(_QWORD *)(a1 + 200) = v6;
  return result;
}
