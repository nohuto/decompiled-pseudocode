/*
 * XREFs of sub_180090AB8 @ 0x180090AB8
 * Callers:
 *     sub_1800900BC @ 0x1800900BC (sub_1800900BC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memcmp @ 0x18000CA6D (memcmp.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001E730 @ 0x18001E730 (sub_18001E730.c)
 *     sub_18001E7D0 @ 0x18001E7D0 (sub_18001E7D0.c)
 *     sub_18001E83C @ 0x18001E83C (sub_18001E83C.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_18001FA00 @ 0x18001FA00 (sub_18001FA00.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180050FB8 @ 0x180050FB8 (sub_180050FB8.c)
 *     sub_18008F0EC @ 0x18008F0EC (sub_18008F0EC.c)
 *     sub_18008F230 @ 0x18008F230 (sub_18008F230.c)
 *     sub_18008F430 @ 0x18008F430 (sub_18008F430.c)
 *     sub_1800911D8 @ 0x1800911D8 (sub_1800911D8.c)
 *     sub_180091440 @ 0x180091440 (sub_180091440.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180090AB8(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  char v8; // r15
  char v9; // r13
  __int64 v10; // rax
  _BYTE *v11; // rsi
  void **v12; // rax
  unsigned __int8 *v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int8 *v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  void **v19; // rcx
  _QWORD *v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rbx
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  _QWORD *v26; // rax
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rbx
  _BYTE *v29; // r12
  void **v30; // rax
  void **v31; // rax
  char v32; // al
  __int64 v33; // rax
  __int64 v34; // r15
  _QWORD *v35; // rax
  __int64 v36; // r8
  _QWORD *v37; // rsi
  __int64 v38; // rdx
  int *v39; // rcx
  int v40; // xmm1_4
  int v41; // xmm0_4
  char v43; // [rsp+30h] [rbp-D0h]
  char v44; // [rsp+31h] [rbp-CFh]
  char v45[2]; // [rsp+32h] [rbp-CEh] BYREF
  _BYTE v46[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v47; // [rsp+38h] [rbp-C8h]
  __int64 v48; // [rsp+40h] [rbp-C0h]
  _QWORD *v49; // [rsp+48h] [rbp-B8h]
  void **v50; // [rsp+50h] [rbp-B0h]
  __int128 v51; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE *v52; // [rsp+68h] [rbp-98h]
  _QWORD *v53; // [rsp+70h] [rbp-90h]
  __int64 v54; // [rsp+78h] [rbp-88h]
  _QWORD v55[4]; // [rsp+80h] [rbp-80h] BYREF
  void *Buf1[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v57; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v58; // [rsp+B8h] [rbp-48h]
  _QWORD v59[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v60[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v61[4]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v62[4]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+140h] [rbp+40h] BYREF

  v49 = (_QWORD *)a3;
  v54 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v48 = 0LL;
  v7 = 0LL;
  LOBYTE(v3) = 0;
  v47 = v3;
  v44 = 0;
  v8 = 0;
  v43 = 0;
  v9 = 0;
  *(_DWORD *)(a3 + 32) = 0;
  v51 = 0LL;
  v52 = 0LL;
  sub_180010DD0(v60, (__int64)"<size>");
  sub_180010DD0(v62, (__int64)"<data>");
  sub_180010DD0(v61, (__int64)"</data>");
  Buf1[0] = 0LL;
  v57 = 0LL;
  v58 = 15LL;
  v10 = sub_180050FB8(a2, (__int64)Buf1);
  if ( (unsigned __int8)std::ios_base::operator bool(v10 + *(int *)(*(_QWORD *)v10 + 4LL)) )
  {
    v11 = (_BYTE *)*((_QWORD *)&v51 + 1);
    do
    {
      if ( !sub_18001F84C((__int64)Buf1) )
      {
        if ( v9 )
          goto LABEL_40;
        v12 = Buf1;
        v13 = (unsigned __int8 *)Buf1[0];
        v14 = v58;
        if ( v58 >= 0x10 )
          v12 = (void **)Buf1[0];
        v15 = v57;
        if ( *((_BYTE *)v12 + v57 - 1) == 13 )
        {
          sub_18001FA00(Buf1, v57 - 1);
          v14 = v58;
          v15 = v57;
          v13 = (unsigned __int8 *)Buf1[0];
        }
        v16 = (unsigned __int8 *)Buf1;
        if ( v14 >= 0x10 )
          v16 = v13;
        v17 = sub_18008F430(v16, v15, (__int64)v13, v14, 2LL);
        sub_18001E7D0(Buf1, v18, v17);
        v19 = Buf1;
        if ( v58 >= 0x10 )
          v19 = (void **)Buf1[0];
        if ( v57 == 5 )
        {
          v3 = (unsigned __int8)v3;
          if ( !memcmp(v19, "<LUT>", 5uLL) )
            v3 = 1;
          v47 = v3;
        }
        if ( (_BYTE)v3 )
        {
          v53 = v59;
          v20 = sub_180017648(v59, (__int64)v60);
          v21 = sub_180017648(v55, (__int64)Buf1);
          if ( (unsigned __int8)sub_1800911D8(v21, v20) )
          {
            sub_18001E83C((__int64)Buf1, (__int64)pExceptionObject, v60[2] + 1LL, 0xFFFFFFFFFFFFFFFFuLL);
            v48 = (int)sub_180091440(pExceptionObject, v22, 10LL);
            v7 = v48 * v48 * v48;
            v44 = 1;
            sub_180011B24((__int64)pExceptionObject);
          }
        }
        if ( v44
          && (v50 = (void **)v55,
              v23 = sub_180017648(v55, (__int64)v62),
              v24 = sub_180017648(v59, (__int64)Buf1),
              (unsigned __int8)sub_1800911D8(v24, v23)) )
        {
          v8 = 1;
          v43 = 1;
        }
        else if ( v8 )
        {
          v50 = (void **)v55;
          v25 = sub_180017648(v55, (__int64)v61);
          v26 = sub_180017648(v59, (__int64)Buf1);
          if ( (unsigned __int8)sub_1800911D8(v26, v25) )
          {
            v9 = 1;
          }
          else
          {
            v27 = v57 >> 1;
            v28 = 0LL;
            if ( v57 >> 1 )
            {
              v29 = v52;
              do
              {
                v30 = Buf1;
                if ( v58 >= 0x10 )
                  v30 = (void **)Buf1[0];
                v46[0] = *((_BYTE *)v30 + 2 * v28);
                v31 = Buf1;
                if ( v58 >= 0x10 )
                  v31 = (void **)Buf1[0];
                v46[1] = *((_BYTE *)v31 + 2 * v28 + 1);
                v46[2] = 0;
                v32 = o_strtoul(v46, 0LL, 16LL);
                v45[0] = v32;
                if ( v11 == v29 )
                {
                  sub_18008F0EC((__int64 *)&v51, (__int64)v11, v45);
                  v11 = (_BYTE *)*((_QWORD *)&v51 + 1);
                  v29 = v52;
                }
                else
                {
                  *v11++ = v32;
                  *((_QWORD *)&v51 + 1) = v11;
                }
                ++v28;
              }
              while ( v28 < v27 );
              LOBYTE(v3) = v47;
            }
            v8 = v43;
          }
        }
      }
      v33 = sub_180050FB8(v54, (__int64)Buf1);
    }
    while ( (unsigned __int8)std::ios_base::operator bool(v33 + *(int *)(*(_QWORD *)v33 + 4LL)) );
    if ( !v9 )
    {
      v6 = v48;
      goto LABEL_47;
    }
LABEL_40:
    v34 = v51;
    if ( &v11[-(_QWORD)v51] != (_BYTE *)(12 * v7) )
    {
      sub_180010DD0(v59, (__int64)"ColorTransform::ImportFormat_IridasLook() -- unexpected data layout in LOOK file");
      v35 = sub_180010DD0(
              v55,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\eng"
                       "ine\\colortransform.cpp");
      sub_18003AF58(pExceptionObject, (__int64)v35, v36, (__int64)v59, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v37 = v49;
    sub_18008F230(v49 + 1, v7);
    if ( v7 )
    {
      v38 = v37[1];
      v39 = (int *)(v34 + 4);
      do
      {
        v40 = v39[1];
        v41 = *v39;
        *(_DWORD *)(v38 + v5) = *(v39 - 1);
        *(_DWORD *)(v38 + v5 + 4) = v41;
        *(_DWORD *)(v38 + v5 + 8) = v40;
        *(_DWORD *)(v38 + v5 + 12) = 1065353216;
        v39 += 3;
        v5 += 16LL;
        --v7;
      }
      while ( v7 );
    }
    v6 = v48;
  }
  else
  {
LABEL_47:
    v37 = v49;
  }
  *v37 = v6;
  sub_180011B24((__int64)Buf1);
  sub_180011B24((__int64)v61);
  sub_180011B24((__int64)v62);
  sub_180011B24((__int64)v60);
  return sub_18001E730((__int64)&v51);
}
