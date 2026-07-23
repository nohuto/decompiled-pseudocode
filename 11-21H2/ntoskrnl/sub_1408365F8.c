/*
 * XREFs of sub_1408365F8 @ 0x1408365F8
 * Callers:
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 * Callees:
 *     sub_1403C7B58 @ 0x1403C7B58 (sub_1403C7B58.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14083673C @ 0x14083673C (sub_14083673C.c)
 *     sub_1408368C8 @ 0x1408368C8 (sub_1408368C8.c)
 */

char __fastcall sub_1408365F8(_OWORD *Buf2, __int16 a2)
{
  char v4; // di
  __int128 v5; // xmm1
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  char *v22; // rbx
  __int64 v23; // rax
  __int128 v24; // xmm1
  HANDLE Handle; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v26[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h]
  int v28; // [rsp+50h] [rbp-B0h]
  __int128 Buf1; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v30; // [rsp+70h] [rbp-90h]
  __int128 v31; // [rsp+80h] [rbp-80h]
  __int128 v32; // [rsp+90h] [rbp-70h]
  __int128 v33; // [rsp+A0h] [rbp-60h]
  __int128 v34; // [rsp+B0h] [rbp-50h]
  __int128 v35; // [rsp+C0h] [rbp-40h]
  __int128 v36; // [rsp+D0h] [rbp-30h]
  __int128 v37; // [rsp+E0h] [rbp-20h]
  __int128 v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp+0h]
  int v40; // [rsp+108h] [rbp+8h]

  v27 = 0LL;
  v28 = 0;
  v4 = 0;
  Handle = 0LL;
  memset(v26, 0, sizeof(v26));
  if ( (int)sub_14083673C((char *)Buf2 + 172, &Handle) >= 0 )
  {
    if ( (int)sub_1403C7B58(v26, (const WCHAR *)Handle, a2) >= 0 )
    {
      v5 = Buf2[1];
      Buf1 = *Buf2;
      v6 = *((_QWORD *)Buf2 + 20);
      v7 = Buf2[2];
      v30 = v5;
      v8 = Buf2[3];
      v31 = v7;
      v9 = Buf2[4];
      v32 = v8;
      v10 = Buf2[5];
      v33 = v9;
      v11 = Buf2[6];
      v34 = v10;
      v12 = Buf2[8];
      v35 = v11;
      v36 = Buf2[7];
      v13 = Buf2[9];
      v37 = v12;
      v38 = v13;
      v39 = v6;
      v40 = *((_DWORD *)Buf2 + 42);
      sub_1408368C8(&Buf1, v26);
      if ( memcmp(&Buf1, Buf2, 0xACuLL) )
      {
        v4 = 1;
        v15 = v30;
        *Buf2 = Buf1;
        v16 = v31;
        Buf2[1] = v15;
        v17 = v32;
        Buf2[2] = v16;
        v18 = v33;
        Buf2[3] = v17;
        v19 = v34;
        Buf2[4] = v18;
        v20 = v35;
        Buf2[5] = v19;
        v21 = v36;
        Buf2[6] = v20;
        v22 = (char *)(Buf2 + 8);
        *((_OWORD *)v22 - 1) = v21;
        v23 = v39;
        v24 = v38;
        *(_OWORD *)v22 = v37;
        *((_OWORD *)v22 + 1) = v24;
        *((_QWORD *)v22 + 4) = v23;
        *((_DWORD *)v22 + 10) = v40;
      }
    }
    ZwClose(Handle);
  }
  return v4;
}
