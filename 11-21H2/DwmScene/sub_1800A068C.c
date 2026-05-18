/*
 * XREFs of sub_1800A068C @ 0x1800A068C
 * Callers:
 *     sub_18009FB44 @ 0x18009FB44 (sub_18009FB44.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DA7C @ 0x18001DA7C (sub_18001DA7C.c)
 *     sub_18001F58C @ 0x18001F58C (sub_18001F58C.c)
 *     sub_18001FB60 @ 0x18001FB60 (sub_18001FB60.c)
 *     sub_180020DB0 @ 0x180020DB0 (sub_180020DB0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180058808 @ 0x180058808 (sub_180058808.c)
 *     sub_18009EB10 @ 0x18009EB10 (sub_18009EB10.c)
 *     sub_18009ED14 @ 0x18009ED14 (sub_18009ED14.c)
 *     sub_18009EE90 @ 0x18009EE90 (sub_18009EE90.c)
 *     sub_1800A0F8C @ 0x1800A0F8C (sub_1800A0F8C.c)
 *     sub_1800A1130 @ 0x1800A1130 (sub_1800A1130.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800A068C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  char i; // r15
  char *v5; // r13
  char *v6; // r14
  __int64 v7; // rax
  char *v8; // rsi
  unsigned __int64 v9; // rbx
  void **v10; // rax
  void **v11; // r15
  unsigned __int64 v12; // r12
  void **v13; // rsi
  char *v14; // rcx
  unsigned __int8 *v15; // rdx
  unsigned __int64 v16; // rdx
  void **v17; // rcx
  char v18; // al
  int v19; // ecx
  __int64 *v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rcx
  size_t v23; // r8
  void **v24; // rdx
  __int64 v25; // rdx
  __int64 *v26; // rbx
  __int64 *v27; // rax
  __int64 *v28; // rbx
  __int64 *v29; // rax
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rbx
  void **v32; // rax
  void **v33; // rax
  char v34; // al
  __int64 *v35; // r12
  __int64 *v36; // rbx
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rcx
  int *v42; // rdx
  int v43; // xmm1_4
  int v44; // xmm0_4
  __int64 result; // rax
  _QWORD *v46; // rax
  __int64 v47; // r8
  char v48; // [rsp+30h] [rbp-D0h]
  char v49; // [rsp+31h] [rbp-CFh]
  char v50; // [rsp+32h] [rbp-CEh]
  char v51; // [rsp+33h] [rbp-CDh] BYREF
  _BYTE v52[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v53; // [rsp+38h] [rbp-C8h]
  __int64 *v54; // [rsp+40h] [rbp-C0h]
  __int64 *v55; // [rsp+48h] [rbp-B8h]
  __int64 v56; // [rsp+50h] [rbp-B0h]
  __int64 *v57; // [rsp+58h] [rbp-A8h]
  __int128 v58; // [rsp+60h] [rbp-A0h] BYREF
  char *v59; // [rsp+70h] [rbp-90h]
  __int64 v60; // [rsp+78h] [rbp-88h]
  __int64 v61[4]; // [rsp+80h] [rbp-80h] BYREF
  void *v62[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v63; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v64; // [rsp+B8h] [rbp-48h]
  char *v65[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v67; // [rsp+D8h] [rbp-28h]
  __int64 v68[4]; // [rsp+E0h] [rbp-20h] BYREF
  char *v69[3]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v70; // [rsp+118h] [rbp+18h]
  char *v71[3]; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v72; // [rsp+138h] [rbp+38h]
  char *pExceptionObject[3]; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v74; // [rsp+158h] [rbp+58h]
  _BYTE v75[256]; // [rsp+180h] [rbp+80h] BYREF

  v55 = (__int64 *)a3;
  v60 = a2;
  v56 = 0LL;
  v3 = 0LL;
  LOBYTE(v53) = 0;
  v49 = 0;
  v50 = 0;
  i = 0;
  v48 = 0;
  *(_DWORD *)(a3 + 32) = 0;
  v58 = 0LL;
  v5 = 0LL;
  v59 = 0LL;
  v66 = 0LL;
  v67 = 15LL;
  LOBYTE(v65[0]) = 0;
  sub_180012190((__int64 *)v65, "<size>", 6uLL);
  v71[2] = 0LL;
  v72 = 15LL;
  LOBYTE(v71[0]) = 0;
  sub_180012190((__int64 *)v71, "<data>", 6uLL);
  v69[2] = 0LL;
  v70 = 15LL;
  LOBYTE(v69[0]) = 0;
  sub_180012190((__int64 *)v69, "</data>", 7uLL);
  v63 = 0LL;
  v64 = 15LL;
  LOBYTE(v62[0]) = 0;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = sub_180058808(v60, (__int64)v62);
    v8 = (char *)v58;
    if ( (*(_BYTE *)(*(int *)(*(_QWORD *)v7 + 4LL) + v7 + 16) & 6) != 0 )
      break;
    v9 = v63;
    if ( v63 )
    {
      if ( i )
        goto LABEL_51;
      v10 = v62;
      v11 = (void **)v62[0];
      v12 = v64;
      if ( v64 >= 0x10 )
        v10 = (void **)v62[0];
      if ( *((_BYTE *)v10 + v63 - 1) == 13 )
      {
        sub_180020DB0(v62, v63 - 1);
        v12 = v64;
        v9 = v63;
        v11 = (void **)v62[0];
      }
      v13 = v62;
      if ( v12 >= 0x10 )
        v13 = v11;
      if ( !v9 )
        goto LABEL_17;
      memset(v75, 0, sizeof(v75));
      v14 = " \t";
      do
        v75[(unsigned __int8)*v14++] = 1;
      while ( v14 != "" );
      v15 = (unsigned __int8 *)v13;
      if ( v13 < (void **)((char *)v13 + v9) )
      {
        while ( v75[*v15] )
        {
          if ( ++v15 >= (unsigned __int8 *)v13 + v9 )
            goto LABEL_17;
        }
        v16 = v15 - (unsigned __int8 *)v13;
      }
      else
      {
LABEL_17:
        v16 = -1LL;
      }
      if ( v9 < v16 )
        v16 = v9;
      v17 = v62;
      if ( v12 >= 0x10 )
        v17 = v11;
      v63 = v9 - v16;
      memmove(v17, (char *)v17 + v16, v9 - v16 + 1);
      v18 = sub_18001DA7C(v62, "<LUT>");
      v19 = (unsigned __int8)v53;
      if ( v18 )
        v19 = 1;
      v53 = v19;
      if ( (_BYTE)v19 )
      {
        v57 = v68;
        v20 = sub_18001875C(v68, (__int64)v65);
        v21 = sub_18001875C(v61, (__int64)v62);
        if ( (unsigned __int8)sub_1800A0F8C(v21, v20) )
        {
          v22 = v66 + 1;
          pExceptionObject[2] = 0LL;
          v74 = 15LL;
          LOBYTE(pExceptionObject[0]) = 0;
          if ( v63 < v66 + 1 )
          {
            sub_18001F58C();
            JUMPOUT(0x1800A0C6CLL);
          }
          v23 = -1LL;
          if ( v63 - v22 != -1LL )
            v23 = v63 - v22;
          v24 = v62;
          if ( v64 >= 0x10 )
            v24 = (void **)v62[0];
          sub_180012190((__int64 *)pExceptionObject, (char *)v24 + v22, v23);
          v56 = (int)sub_1800A1130(pExceptionObject, v25, 10LL);
          v3 = (int)v56 * (int)v56 * (__int64)(int)v56;
          v49 = 1;
          if ( v74 >= 0x10 )
            sub_180010884(pExceptionObject[0], v74 + 1);
        }
      }
      if ( v49
        && (v54 = v61,
            v26 = sub_18001875C(v61, (__int64)v71),
            v27 = sub_18001875C(v68, (__int64)v62),
            (unsigned __int8)sub_1800A0F8C(v27, v26)) )
      {
        v50 = 1;
        i = v48;
      }
      else
      {
        i = v48;
        if ( v50 )
        {
          v54 = v61;
          v28 = sub_18001875C(v61, (__int64)v69);
          v29 = sub_18001875C(v68, (__int64)v62);
          if ( (unsigned __int8)sub_1800A0F8C(v29, v28) )
          {
            i = 1;
            v48 = 1;
          }
          else
          {
            v30 = v63 >> 1;
            v31 = 0LL;
            for ( i = v48; v31 < v30; ++v31 )
            {
              v32 = v62;
              if ( v64 >= 0x10 )
                v32 = (void **)v62[0];
              v52[0] = *((_BYTE *)v32 + 2 * v31);
              v33 = v62;
              if ( v64 >= 0x10 )
                v33 = (void **)v62[0];
              v52[1] = *((_BYTE *)v33 + 2 * v31 + 1);
              v52[2] = 0;
              v34 = o_strtoul(v52, 0LL, 16LL);
              v51 = v34;
              if ( v6 == v5 )
              {
                sub_18009EB10((__int64 *)&v58, v6, &v51);
                v5 = v59;
                v6 = (char *)*((_QWORD *)&v58 + 1);
              }
              else
              {
                *v6++ = v34;
                *((_QWORD *)&v58 + 1) = v6;
              }
            }
          }
        }
      }
    }
  }
  if ( !i )
  {
    v35 = v55;
    goto LABEL_64;
  }
LABEL_51:
  if ( &v6[-(_QWORD)v58] != (char *)(12 * v3) )
  {
    sub_1800113D0(v68, "ColorTransform::ImportFormat_IridasLook() -- unexpected data layout in LOOK file");
    v46 = sub_1800113D0(
            v61,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\colortransform.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v46, v47, (__int64)v68, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v35 = v55;
  v36 = v55 + 1;
  v37 = (v55[2] - v55[1]) >> 4;
  if ( v3 >= v37 )
  {
    if ( v3 <= v37 )
      goto LABEL_59;
    if ( v3 > (v55[3] - v55[1]) >> 4 )
    {
      sub_18009ED14(v55 + 1, v3);
      goto LABEL_59;
    }
    v38 = sub_18009EE90(v55[2], v3 - v37);
  }
  else
  {
    v38 = *v36 + 16 * v3;
  }
  v36[1] = v38;
LABEL_59:
  v39 = sub_18001FB60((__int64)v8);
  if ( v3 )
  {
    v40 = *v36;
    v41 = 0LL;
    v42 = (int *)(v39 + 4);
    do
    {
      v43 = v42[1];
      v44 = *v42;
      *(_DWORD *)(v40 + v41) = *(v42 - 1);
      *(_DWORD *)(v40 + v41 + 4) = v44;
      *(_DWORD *)(v40 + v41 + 8) = v43;
      *(_DWORD *)(v40 + v41 + 12) = 1065353216;
      v42 += 3;
      v41 += 16LL;
      --v3;
    }
    while ( v3 );
  }
LABEL_64:
  result = v56;
  *v35 = v56;
  if ( v64 >= 0x10 )
    result = sub_180010884((char *)v62[0], v64 + 1);
  v63 = 0LL;
  v64 = 15LL;
  LOBYTE(v62[0]) = 0;
  if ( v70 >= 0x10 )
    result = sub_180010884(v69[0], v70 + 1);
  if ( v72 >= 0x10 )
    result = sub_180010884(v71[0], v72 + 1);
  if ( v67 >= 0x10 )
    result = sub_180010884(v65[0], v67 + 1);
  if ( v8 )
    return sub_180010884(v8, v5 - v8);
  return result;
}
