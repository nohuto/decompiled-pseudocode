/*
 * XREFs of ?uflow@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAGXZ @ 0x1806E4E60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x1803DD2CC (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 *     ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z @ 0x18064B91C (-erase@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0@Z.c)
 *     ?_Reset_back@?$basic_filebuf@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1806E3F88 (-_Reset_back@-$basic_filebuf@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_filebuf<unsigned short>::uflow(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rcx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // bx
  void **v7; // rcx
  void **v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  void **v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  void *v15; // rcx
  void **v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  unsigned __int16 v19; // [rsp+40h] [rbp+7h] BYREF
  _BYTE v20[6]; // [rsp+42h] [rbp+9h] BYREF
  __int64 v21; // [rsp+48h] [rbp+Fh] BYREF
  unsigned __int64 v22; // [rsp+50h] [rbp+17h] BYREF
  void *v23; // [rsp+58h] [rbp+1Fh] BYREF
  unsigned __int16 *v24; // [rsp+60h] [rbp+27h] BYREF
  void *v25[2]; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v26; // [rsp+78h] [rbp+3Fh]
  unsigned __int64 v27; // [rsp+80h] [rbp+47h]

  if ( std::basic_streambuf<unsigned short>::gptr(a1) )
  {
    v2 = std::basic_streambuf<unsigned short>::egptr(a1);
    if ( std::basic_streambuf<unsigned short>::gptr(a1) < v2 )
      return *(unsigned __int16 *)std::basic_streambuf<unsigned short>::_Gninc(a1);
  }
  if ( !*(_QWORD *)(a1 + 128) )
    return 0xFFFFLL;
  std::basic_filebuf<unsigned short>::_Reset_back(a1);
  v4 = *(_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(a1 + 104) )
  {
    v25[0] = 0LL;
    v26 = 0LL;
    v27 = 15LL;
    while ( 1 )
    {
      v13 = _o_fgetc(v4);
      if ( v13 == -1 )
        goto LABEL_21;
      LOBYTE(v14) = v13;
      std::string::push_back(v25, v14);
      v7 = v25;
      if ( v27 >= 0x10 )
        v7 = (void **)v25[0];
      v8 = v25;
      if ( v27 >= 0x10 )
        v8 = (void **)v25[0];
      v9 = std::codecvt<unsigned short,char,_Mbstatet>::in(
             *(_QWORD *)(a1 + 104),
             a1 + 116,
             v8,
             (char *)v7 + v26,
             &v21,
             &v19,
             v20,
             &v24);
      if ( v9 )
      {
        v11 = v9 - 1;
        if ( v11 )
          break;
      }
      v12 = v25;
      if ( v24 != &v19 )
      {
        if ( v27 >= 0x10 )
          v12 = (void **)v25[0];
        v17 = v21;
        v18 = (__int64)v12 + v26 - v21;
        if ( v18 > 0 )
        {
          while ( 1 )
          {
            _o_ungetc((unsigned int)*(char *)(--v18 + v17));
            if ( v18 <= 0 )
              break;
            v17 = v21;
          }
        }
        v6 = v19;
        goto LABEL_22;
      }
      if ( v27 >= 0x10 )
        v12 = (void **)v25[0];
      std::string::erase(v25, v10, v21 - (_QWORD)v12);
      v4 = *(_QWORD *)(a1 + 128);
    }
    if ( v11 != 2 )
    {
LABEL_21:
      v6 = -1;
      goto LABEL_22;
    }
    v16 = v25;
    if ( v27 >= 0x10 )
      v16 = (void **)v25[0];
    v6 = *(char *)v16;
LABEL_22:
    if ( v27 >= 0x10 )
    {
      v22 = v27 + 1;
      v15 = v25[0];
      v23 = v25[0];
      if ( v27 + 1 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v23, &v22);
        v15 = v23;
      }
      operator delete(v15);
    }
  }
  else
  {
    v5 = _o_fgetwc(v4);
    v6 = -1;
    if ( v5 != 0xFFFF )
      return v5;
  }
  return v6;
}
