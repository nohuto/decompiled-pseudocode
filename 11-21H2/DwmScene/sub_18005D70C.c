/*
 * XREFs of sub_18005D70C @ 0x18005D70C
 * Callers:
 *     sub_18002A240 @ 0x18002A240 (sub_18002A240.c)
 *     sub_1800592F4 @ 0x1800592F4 (sub_1800592F4.c)
 *     sub_18005D638 @ 0x18005D638 (sub_18005D638.c)
 *     sub_18005E084 @ 0x18005E084 (sub_18005E084.c)
 *     sub_18007AA0C @ 0x18007AA0C (sub_18007AA0C.c)
 *     sub_18007E464 @ 0x18007E464 (sub_18007E464.c)
 *     sub_18009F3E0 @ 0x18009F3E0 (sub_18009F3E0.c)
 *     sub_1800EF710 @ 0x1800EF710 (sub_1800EF710.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001D6B8 @ 0x18001D6B8 (sub_18001D6B8.c)
 *     sub_18002B9E0 @ 0x18002B9E0 (sub_18002B9E0.c)
 *     sub_18002BA14 @ 0x18002BA14 (sub_18002BA14.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_180039EBC @ 0x180039EBC (sub_180039EBC.c)
 *     sub_180058850 @ 0x180058850 (sub_180058850.c)
 *     sub_18005C638 @ 0x18005C638 (sub_18005C638.c)
 *     sub_18005C6C8 @ 0x18005C6C8 (sub_18005C6C8.c)
 *     sub_18005C7A0 @ 0x18005C7A0 (sub_18005C7A0.c)
 *     sub_18005DEB4 @ 0x18005DEB4 (sub_18005DEB4.c)
 *     sub_18005DF04 @ 0x18005DF04 (sub_18005DF04.c)
 *     sub_18005E32C @ 0x18005E32C (sub_18005E32C.c)
 *     sub_18005E53C @ 0x18005E53C (sub_18005E53C.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18005D70C(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v12; // r12
  void (__fastcall ***v13)(_QWORD, __int64); // rsi
  __int64 v14; // rdi
  _QWORD *v15; // rax
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  __int64 *v17; // rax
  LPVOID *p_lpMem; // rcx
  char v19; // bl
  unsigned int **v20; // r14
  unsigned int *v21; // rax
  void *v22; // rcx
  __int64 v23; // r13
  char v24; // r12
  int v25; // r8d
  __int64 v26; // rcx
  char *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  const void *v31; // rdi
  __int64 v32; // rbx
  int v33; // eax
  size_t v34; // rbx
  _QWORD *v35; // rax
  void (__fastcall ****v36)(_QWORD, __int64); // rdx
  void (__fastcall ***v37)(_QWORD, __int64); // rcx
  void (__fastcall ***v38)(_QWORD, __int64); // r8
  __int64 result; // rax
  unsigned int v40; // eax
  int v41; // r8d
  unsigned int v42; // eax
  int v43; // r8d
  LPVOID lpMem; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v47; // [rsp+58h] [rbp-A8h] BYREF
  void (__fastcall ***v48)(_QWORD, __int64); // [rsp+60h] [rbp-A0h] BYREF
  int v49; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v50; // [rsp+70h] [rbp-90h] BYREF
  char *v51; // [rsp+78h] [rbp-88h] BYREF
  char *v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h]
  LPVOID v54; // [rsp+90h] [rbp-70h] BYREF
  LPVOID v55; // [rsp+98h] [rbp-68h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-60h]
  _QWORD v57[2]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v58[24]; // [rsp+B8h] [rbp-48h] BYREF
  char *v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+E0h] [rbp-20h]
  _QWORD v61[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v62[4]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+130h] [rbp+30h] BYREF

  v46 = a2;
  v45 = a3;
  v49 = a4;
  v12 = a8;
  v56 = a8;
  v13 = (void (__fastcall ***)(_QWORD, __int64))a9;
  v47 = a9;
  v14 = a10;
  LODWORD(lpMem) = 0;
  v15 = (_QWORD *)(a1 + 136);
  v16 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 136);
  *v15 = 0LL;
  if ( v16 )
    (**v16)(v16, 1LL);
  if ( a4 )
  {
    v17 = sub_18005C638((__int64 *)&v54, &v46, &v45, &v49, &a5, &a7, &a6);
    lpMem = (LPVOID)*v17;
    p_lpMem = &lpMem;
    v19 = 12;
  }
  else
  {
    v17 = sub_18005C6C8((__int64 *)&v55, &v46, &v45, &a5, &a7, &a6);
    v50 = (LPVOID)*v17;
    p_lpMem = &v50;
    v19 = 3;
  }
  *v17 = 0LL;
  v20 = (unsigned int **)(a1 + 128);
  if ( (LPVOID *)(a1 + 128) != p_lpMem )
  {
    v21 = (unsigned int *)*p_lpMem;
    *p_lpMem = 0LL;
    v22 = *v20;
    *v20 = v21;
    if ( v22 )
      sub_18000B998(v22);
  }
  if ( (v19 & 8) != 0 )
  {
    v19 &= ~8u;
    if ( lpMem )
      sub_18000B998(lpMem);
  }
  if ( (v19 & 4) != 0 )
  {
    v19 &= ~4u;
    if ( v54 )
      sub_18000B998(v54);
  }
  if ( (v19 & 2) != 0 )
  {
    v19 &= ~2u;
    if ( v50 )
      sub_18000B998(v50);
  }
  if ( (v19 & 1) != 0 && v55 )
    sub_18000B998(v55);
  v48 = v13;
  sub_18005DEB4(v58, *v20, v12, v13);
  if ( v14 )
    sub_18002BCC0(a1, 1, 1);
  v23 = sub_18002B9E0(a1);
  v24 = 0;
  if ( sub_18002BA14(a1, 1) )
  {
    if ( v14 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14) )
      {
        sub_1800113D0(v62, "Texture cannot be created to just target generic devices");
        v42 = (unsigned int)sub_1800113D0(
                              v61,
                              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\sour"
                              "ce\\engine\\texture.cpp");
        sub_180079B60((unsigned int)pExceptionObject, v42, v43, (unsigned int)v62, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      sub_18005DF04(a1, v58, v14);
      sub_18002BCC0(a1, 2, 0);
      sub_18002BCC0(v26, v25 + 4, v25);
      v24 = 1;
    }
    else
    {
      sub_180039EBC(v23, &v51);
      v27 = v51;
      v28 = (__int64)v52;
      if ( v51 != v52 )
      {
        do
        {
          v29 = *((_QWORD *)v27 + 1);
          if ( v29 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
            v29 = *((_QWORD *)v27 + 1);
          }
          v30 = *(_QWORD *)v27;
          v57[0] = v30;
          v57[1] = v29;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30) )
          {
            sub_18005DF04(a1, v58, v30);
            v24 = 1;
          }
          sub_180010910((__int64)v57);
          v27 += 16;
        }
        while ( v27 != (char *)v28 );
        v28 = (__int64)v52;
        v27 = v51;
        LODWORD(v13) = v47;
      }
      if ( v27 )
      {
        sub_1800126E8((__int64)v27, v28);
        sub_180010884(v51, (v53 - (_QWORD)v51) & 0xFFFFFFFFFFFFFFF0uLL);
      }
    }
  }
  v31 = (const void *)v56;
  if ( v56 && (*(_DWORD *)(v23 + 552) == 1 || !v24) )
  {
    v32 = (__int64)*v20;
    v33 = sub_18005E32C((*v20)[4], **v20, (*v20)[1]);
    if ( (*(_BYTE *)(v32 + 20) & 0x10) != 0 )
      v33 *= 6;
    if ( *(_DWORD *)(v32 + 8) * v33 != (_DWORD)v13 )
    {
      sub_1800113D0(v61, "Wrong buffer size");
      v40 = (unsigned int)sub_1800113D0(
                            v62,
                            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source"
                            "\\engine\\texture.cpp");
      sub_180079B60((unsigned int)pExceptionObject, v40, v41, (unsigned int)v61, 1);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v34 = (size_t)v48;
    sub_180058850(&lpMem, (size_t)v48);
    sub_18001060C(lpMem, v34, v31, v34);
    v35 = sub_18005C7A0(&v48, (__int64)v58, (__int64 *)&lpMem, &v47);
    v36 = (void (__fastcall ****)(_QWORD, __int64))(a1 + 136);
    if ( (_QWORD *)(a1 + 136) != v35 )
    {
      v37 = (void (__fastcall ***)(_QWORD, __int64))*v35;
      *v35 = 0LL;
      v38 = *v36;
      *v36 = v37;
      if ( v38 )
        (**v38)(v38, 1LL);
    }
    if ( v48 )
      (**v48)(v48, 1LL);
    if ( lpMem )
      sub_18001D6B8(lpMem);
  }
  result = sub_18005E53C(a1);
  if ( v59 )
    return sub_180010884(v59, (v60 - (_QWORD)v59) & 0xFFFFFFFFFFFFFFE0uLL);
  return result;
}
