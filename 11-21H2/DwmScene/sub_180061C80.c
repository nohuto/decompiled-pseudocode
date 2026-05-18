/*
 * XREFs of sub_180061C80 @ 0x180061C80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180017428 @ 0x180017428 (sub_180017428.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_18002805C @ 0x18002805C (sub_18002805C.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     sub_180048A80 @ 0x180048A80 (sub_180048A80.c)
 *     sub_18005C210 @ 0x18005C210 (sub_18005C210.c)
 *     sub_18006120C @ 0x18006120C (sub_18006120C.c)
 *     sub_1800616B8 @ 0x1800616B8 (sub_1800616B8.c)
 *     sub_180096660 @ 0x180096660 (sub_180096660.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180061C80(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 *v7; // r14
  unsigned int v8; // eax
  __int64 v9; // r9
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 *v16; // rax
  _QWORD *v17; // rbx
  char *v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v32; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD *v33; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D0h]
  _OWORD v35[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v36[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v37[3]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v38; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v39[18]; // [rsp+90h] [rbp-70h] BYREF
  int v40; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v41; // [rsp+DCh] [rbp-24h]
  int v42; // [rsp+E4h] [rbp-1Ch]
  int v43; // [rsp+E8h] [rbp-18h]
  int v44; // [rsp+ECh] [rbp-14h]
  int v45; // [rsp+F0h] [rbp-10h]
  __int128 v46; // [rsp+F4h] [rbp-Ch]
  int v47; // [rsp+104h] [rbp+4h]
  int v48; // [rsp+108h] [rbp+8h]
  _QWORD v49[2]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v50[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v51[5]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v52[3]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v53[448]; // [rsp+170h] [rbp+70h] BYREF
  char v54; // [rsp+330h] [rbp+230h] BYREF
  __int64 v55; // [rsp+440h] [rbp+340h]
  __int64 v56; // [rsp+448h] [rbp+348h]

  v36[0] = a2;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  v37[0] = *a2;
  v37[1] = v4;
  sub_180010910((__int64)v37);
  v6 = sub_180028544(*a2);
  if ( v6 )
  {
    v7 = (__int64 *)(a1 + 448);
    v8 = sub_180028544(v5);
    v10 = *(__int64 **)(*(_QWORD *)(a1 + 448) + 8LL);
    v11 = *(__int64 **)(a1 + 448);
    while ( !*((_BYTE *)v10 + 25) )
    {
      if ( *((_DWORD *)v10 + 8) >= v8 )
      {
        v11 = v10;
        v10 = (__int64 *)*v10;
      }
      else
      {
        v10 = (__int64 *)v10[2];
      }
    }
    if ( *((_BYTE *)v11 + 25) || v8 < *((_DWORD *)v11 + 8) || v11 == *(__int64 **)(a1 + 448) )
    {
      sub_18002C7C4(v9 + 24);
      sub_18006120C((__int64)v53);
      v12 = (__int64 *)sub_18002850C(*a2);
      v13 = sub_180048A80(v12, (__int64 *)v35);
      v14 = *v13;
      v15 = v13[1];
      *v13 = 0LL;
      v13[1] = 0LL;
      v49[0] = v55;
      v55 = v14;
      v49[1] = v56;
      v56 = v15;
      sub_180010910((__int64)v49);
      sub_180010910((__int64)v35);
      memset(v39, 0, sizeof(v39));
      *(_QWORD *)&v39[1] = 2LL;
      v39[3] = 0;
      v39[4] = 0;
      v39[5] = 0;
      LOBYTE(v39[6]) = 0;
      memset(&v39[7], 0, 32);
      v39[15] = 65793;
      LOBYTE(v39[16]) = 1;
      v39[17] = 3;
      sub_180096660(v55, v39, 0LL);
      v16 = (__int64 *)sub_18002850C(*a2);
      sub_180017428(v16, &v33);
      v41 = 0LL;
      v42 = 0;
      v43 = 0;
      v44 = 1;
      v45 = 7;
      v47 = 0;
      v48 = 2139095039;
      v40 = 2;
      v46 = 0LL;
      v17 = v33;
      v51[2] = 0LL;
      v51[3] = 15LL;
      LOBYTE(v51[0]) = 0;
      sub_180012190(v51, "Camera Default Sampler", 0x16uLL);
      sub_18002BC44((__int64)v17, v51);
      sub_18005C210(v33, &v40, 0LL);
      v18 = &v54;
      v19 = 16LL;
      do
      {
        v20 = v34;
        if ( v34 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v34 + 8));
          v20 = v34;
        }
        v50[0] = *(_QWORD *)v18;
        *(_QWORD *)v18 = v33;
        v50[1] = *((_QWORD *)v18 + 1);
        *((_QWORD *)v18 + 1) = v20;
        sub_180010910((__int64)v50);
        v18 += 16;
        --v19;
      }
      while ( v19 );
      v21 = sub_18002805C(*a2, v52, (__int64)v53, a1 + 24);
      v22 = *v7;
      v23 = *(_QWORD *)(*v7 + 8);
      *(_QWORD *)&v35[0] = v23;
      DWORD2(v35[0]) = 0;
      v24 = v22;
      while ( !*(_BYTE *)(v23 + 25) )
      {
        *(_QWORD *)&v35[0] = v23;
        if ( *(_DWORD *)(v23 + 32) >= v6 )
        {
          DWORD2(v35[0]) = 1;
          v24 = v23;
          v23 = *(_QWORD *)v23;
        }
        else
        {
          DWORD2(v35[0]) = 0;
          v23 = *(_QWORD *)(v23 + 16);
        }
      }
      if ( *(_BYTE *)(v24 + 25) || v6 < *(_DWORD *)(v24 + 32) )
      {
        if ( *(_QWORD *)(a1 + 456) == 0x492492492492492LL )
          sub_18001F56C();
        v32 = v22;
        v38 = (unsigned __int64)(a1 + 448);
        v25 = sub_180011088(0x38uLL);
        *(_DWORD *)(v25 + 32) = v6;
        *(_QWORD *)(v25 + 40) = 0LL;
        *(_QWORD *)(v25 + 48) = 0LL;
        sub_18001DE7C((__int64 *)v25, &v32);
        sub_18001DE7C((__int64 *)(v26 + 8), &v32);
        sub_18001DE7C((__int64 *)(v27 + 16), &v32);
        *(_WORD *)(v28 + 24) = 0;
        v38 = v35[0];
        v24 = sub_18001F31C((_QWORD *)(a1 + 448), (__int64)&v38, v28);
      }
      v29 = *v21;
      v30 = v21[1];
      *v21 = 0LL;
      v21[1] = 0LL;
      v36[0] = *(_QWORD *)(v24 + 40);
      *(_QWORD *)(v24 + 40) = v29;
      v36[1] = *(_QWORD *)(v24 + 48);
      *(_QWORD *)(v24 + 48) = v30;
      sub_180010910((__int64)v36);
      sub_180010910((__int64)v52);
      sub_180010910((__int64)&v33);
      sub_1800616B8((__int64)v53);
    }
  }
  return sub_180010910((__int64)a2);
}
