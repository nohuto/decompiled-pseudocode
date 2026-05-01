/*
 * XREFs of ?uflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHXZ @ 0x18064BF50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x1803DD2CC (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 *     ?_Reset_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x18064B7A8 (-_Reset_back@-$basic_filebuf@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z @ 0x18064B91C (-erase@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::filebuf::uflow(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  void **v9; // rcx
  void **v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  void **v14; // rax
  void **v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  void *v18; // rcx
  unsigned __int8 v19; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v20[7]; // [rsp+49h] [rbp+8h] BYREF
  __int64 v21; // [rsp+50h] [rbp+Fh] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp+17h] BYREF
  void *v23; // [rsp+60h] [rbp+1Fh] BYREF
  unsigned __int8 *v24; // [rsp+68h] [rbp+27h] BYREF
  void *v25[2]; // [rsp+70h] [rbp+2Fh] BYREF
  __int64 v26; // [rsp+80h] [rbp+3Fh]
  unsigned __int64 v27; // [rsp+88h] [rbp+47h]

  if ( std::streambuf::gptr(a1) )
  {
    v2 = std::streambuf::egptr(a1);
    if ( std::streambuf::gptr(a1) < v2 )
      return *(unsigned __int8 *)std::streambuf::_Gninc(a1);
  }
  if ( !*(_QWORD *)(a1 + 128) )
    return 0xFFFFFFFFLL;
  std::filebuf::_Reset_back(a1);
  v4 = *(_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(a1 + 104) )
  {
    v25[0] = 0LL;
    v26 = 0LL;
    v27 = 15LL;
    v7 = _o_fgetc(v4);
    v6 = -1;
    while ( v7 != -1 )
    {
      LOBYTE(v8) = v7;
      std::string::push_back(v25, v8);
      v9 = v25;
      if ( v27 >= 0x10 )
        v9 = (void **)v25[0];
      v10 = v25;
      if ( v27 >= 0x10 )
        v10 = (void **)v25[0];
      v11 = std::codecvt<char,char,_Mbstatet>::in(
              *(_QWORD *)(a1 + 104),
              a1 + 116,
              v10,
              (char *)v9 + v26,
              &v21,
              &v19,
              v20,
              &v24);
      if ( v11 )
      {
        v13 = v11 - 1;
        if ( v13 )
        {
          if ( v13 == 2 )
          {
            v15 = v25;
            if ( v27 >= 0x10 )
              v15 = (void **)v25[0];
            v6 = *(char *)v15;
          }
          break;
        }
      }
      v14 = v25;
      if ( v24 != &v19 )
      {
        if ( v27 >= 0x10 )
          v14 = (void **)v25[0];
        v16 = v21;
        v17 = (__int64)v14 + v26 - v21;
        if ( v17 > 0 )
        {
          while ( 1 )
          {
            _o_ungetc((unsigned int)*(char *)(--v17 + v16));
            if ( v17 <= 0 )
              break;
            v16 = v21;
          }
        }
        v6 = v19;
        break;
      }
      if ( v27 >= 0x10 )
        v14 = (void **)v25[0];
      std::string::erase(v25, v12, v21 - (_QWORD)v14);
      v7 = _o_fgetc(*(_QWORD *)(a1 + 128));
    }
    if ( v27 >= 0x10 )
    {
      v22 = v27 + 1;
      v18 = v25[0];
      v23 = v25[0];
      if ( v27 + 1 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v23, &v22);
        v18 = v23;
      }
      operator delete(v18);
    }
  }
  else
  {
    v5 = _o_fgetc(v4);
    v6 = -1;
    if ( v5 != -1 )
      return (unsigned __int8)v5;
  }
  return v6;
}
