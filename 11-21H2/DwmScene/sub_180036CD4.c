/*
 * XREFs of sub_180036CD4 @ 0x180036CD4
 * Callers:
 *     sub_180016260 @ 0x180016260 (sub_180016260.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800110F0 @ 0x1800110F0 (sub_1800110F0.c)
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 *     sub_18001F958 @ 0x18001F958 (sub_18001F958.c)
 *     sub_180020524 @ 0x180020524 (sub_180020524.c)
 *     sub_1800284E4 @ 0x1800284E4 (sub_1800284E4.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_180028564 @ 0x180028564 (sub_180028564.c)
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     sub_18002C8E4 @ 0x18002C8E4 (sub_18002C8E4.c)
 *     sub_18002FC20 @ 0x18002FC20 (sub_18002FC20.c)
 *     sub_18002FE64 @ 0x18002FE64 (sub_18002FE64.c)
 *     sub_180032B0C @ 0x180032B0C (sub_180032B0C.c)
 *     sub_180036948 @ 0x180036948 (sub_180036948.c)
 *     sub_1800369F8 @ 0x1800369F8 (sub_1800369F8.c)
 *     sub_18003CC94 @ 0x18003CC94 (sub_18003CC94.c)
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 */

// Hidden C++ exception states: #wind=12
_QWORD *__fastcall sub_180036CD4(__int64 a1, _QWORD *a2)
{
  unsigned int i; // esi
  __int64 v5; // r8
  __int64 v6; // r15
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  const void *v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  char **v20; // rcx
  __int64 v21; // rax
  char *v22; // rsi
  char **v23; // rcx
  char *v24; // r12
  char v25; // r13
  size_t v26; // rsi
  unsigned __int64 v27; // r15
  _QWORD *v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rbx
  unsigned __int64 v31; // rdx
  void *v32; // r14
  char *v33; // rbx
  char *v35; // [rsp+38h] [rbp-C8h]
  void *v36; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v37[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  char v39; // [rsp+60h] [rbp-A0h]
  int v40; // [rsp+6Ch] [rbp-94h]
  _QWORD v41[2]; // [rsp+70h] [rbp-90h] BYREF
  void *v42; // [rsp+80h] [rbp-80h] BYREF
  void **v43; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v44[16]; // [rsp+90h] [rbp-70h] BYREF
  const void **v45; // [rsp+A0h] [rbp-60h]
  const void **v46; // [rsp+A8h] [rbp-58h]
  _QWORD *v47; // [rsp+C0h] [rbp-40h]
  unsigned __int64 *v48; // [rsp+C8h] [rbp-38h]
  int *v49; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v50; // [rsp+F0h] [rbp-10h]
  int v51; // [rsp+F8h] [rbp-8h]
  _BYTE v52[104]; // [rsp+108h] [rbp+8h] BYREF
  char *v53[2]; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v54; // [rsp+180h] [rbp+80h]
  unsigned __int64 v55; // [rsp+188h] [rbp+88h]
  char *v56[3]; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v57; // [rsp+1A8h] [rbp+A8h]
  char *v58[3]; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned __int64 v59; // [rsp+1C8h] [rbp+C8h]
  char *v60; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned __int64 v61; // [rsp+1E8h] [rbp+E8h]

  v41[0] = &unk_180128C80;
  v42 = &unk_180128C78;
  std::wios::wios(v52);
  std::wiostream::basic_iostream<wchar_t>(v41, &v43, 0LL);
  *(_QWORD *)((char *)v41 + *(int *)(v41[0] + 4LL)) = &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vftable';
  *(int *)((char *)&v40 + *(int *)(v41[0] + 4LL)) = *(_DWORD *)(v41[0] + 4LL) - 152;
  std::wstreambuf::wstreambuf(&v43);
  v43 = &std::wstringbuf::`vftable';
  v50 = 0LL;
  v51 = 0;
  sub_18002C5FC(a1 + 112, (__int64)&v38);
  for ( i = 0; i < (unsigned int)sub_1800369F8(a1); ++i )
  {
    sub_180036948(a1, v37, i);
    v6 = v37[0];
    if ( !_RTDynamicCast(
            v37[0],
            0LL,
            &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor',
            0) )
    {
      v7 = sub_1800284E4(v6, (__int64 *)&v60);
      v8 = sub_18002FE64((__int64)&v42, v7);
      v9 = sub_18002FC20(v8, ": Hardware Feature Level ");
      v10 = sub_180028564(v6, (__int64 *)v58);
      v11 = sub_18002FE64(v9, v10);
      v12 = sub_18002FC20(v11, ", Engine Feature Level ");
      v13 = sub_18002851C(v6, (__int64 *)v56);
      v14 = sub_18002FE64(v12, v13);
      sub_18002FC20(v14, "; ");
      if ( v57 >= 8 )
        sub_180010884(v56[0], 2 * v57 + 2);
      v56[2] = 0LL;
      v57 = 7LL;
      LOWORD(v56[0]) = 0;
      if ( v59 >= 8 )
        sub_180010884(v58[0], 2 * v59 + 2);
      v58[2] = 0LL;
      v59 = 7LL;
      LOWORD(v58[0]) = 0;
      if ( v61 >= 8 )
        sub_180010884(v60, 2 * v61 + 2);
    }
    sub_180010910((__int64)v37);
  }
  v54 = 0LL;
  v55 = 7LL;
  LOWORD(v53[0]) = 0;
  if ( (v51 & 2) == 0 )
  {
    v15 = *v48;
    if ( *v48 )
    {
      v16 = *v46;
      if ( v15 < v50 )
        v15 = v50;
      v17 = v15 - (_QWORD)v16;
      goto LABEL_18;
    }
  }
  if ( (v51 & 4) == 0 && *v47 )
  {
    v16 = *v45;
    v17 = *v47 + 2LL * *v49 - (_QWORD)*v45;
LABEL_18:
    v18 = v17 >> 1;
    if ( v18 > 7 )
    {
      sub_18001F958((__int64 *)v53, v18, v5, v16);
    }
    else
    {
      v54 = v18;
      v19 = 2 * v18;
      memmove(v53, v16, 2 * v18);
      *(_WORD *)((char *)v53 + v19) = 0;
    }
  }
  v20 = v53;
  if ( v55 >= 8 )
    v20 = (char **)v53[0];
  v21 = sub_180020524((__int64)v20);
  v22 = (char *)(v21 + 2 * v54);
  v35 = v22;
  v23 = v53;
  if ( v55 >= 8 )
    v23 = (char **)v53[0];
  v24 = (char *)sub_180020524((__int64)v23);
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  sub_18003CC94(a2);
  v37[0] = a2;
  if ( v24 != v22 )
  {
    do
    {
      v25 = *v24;
      v26 = a2[2];
      v27 = a2[3];
      if ( v26 >= v27 )
      {
        if ( v26 == 0x7FFFFFFFFFFFFFFFLL )
          sub_180012150();
        v29 = (v26 + 1) | 0xF;
        if ( v29 > 0x7FFFFFFFFFFFFFFFLL || (v31 = v27 >> 1, v27 > 0x7FFFFFFFFFFFFFFFLL - (v27 >> 1)) )
        {
          v30 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v30 = v27 + v31;
          if ( v29 >= v27 + v31 )
            v30 = (v26 + 1) | 0xF;
        }
        v32 = (void *)sub_180011088(v30 + 1);
        v36 = v32;
        a2[2] = v26 + 1;
        a2[3] = v30;
        if ( v27 < 0x10 )
        {
          memcpy(v32, a2, v26);
          *((_BYTE *)v32 + v26) = v25;
          *((_BYTE *)v32 + v26 + 1) = 0;
          sub_1800110F0(a2, (__int64 *)&v36);
        }
        else
        {
          v33 = (char *)*a2;
          memcpy(v32, (const void *)*a2, v26);
          *((_BYTE *)v32 + v26) = v25;
          *((_BYTE *)v32 + v26 + 1) = 0;
          sub_180010884(v33, v27 + 1);
          *a2 = v32;
        }
      }
      else
      {
        a2[2] = v26 + 1;
        v28 = a2;
        if ( v27 >= 0x10 )
          v28 = (_QWORD *)*a2;
        *((_BYTE *)v28 + v26) = v25;
        *((_BYTE *)v28 + v26 + 1) = 0;
      }
      v24 += 2;
    }
    while ( v24 != v35 );
  }
  if ( v55 >= 8 )
    sub_180010884(v53[0], 2 * v55 + 2);
  v54 = 0LL;
  v55 = 7LL;
  LOWORD(v53[0]) = 0;
  if ( v39 )
    sub_18002C8E4(v38);
  *(_QWORD *)((char *)v41 + *(int *)(v41[0] + 4LL)) = &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vftable';
  *(int *)((char *)&v40 + *(int *)(v41[0] + 4LL)) = *(_DWORD *)(v41[0] + 4LL) - 152;
  sub_180032B0C((__int64)&v43);
  std::wiostream::~basic_iostream<wchar_t,std::char_traits<wchar_t>>(v44);
  std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(v52);
  return a2;
}
