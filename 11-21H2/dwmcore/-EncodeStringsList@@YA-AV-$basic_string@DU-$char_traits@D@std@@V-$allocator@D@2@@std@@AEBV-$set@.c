/*
 * XREFs of ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x180075DD4
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800751DC (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ?AppendByte@Base853Encoder@@QEAAXE@Z @ 0x180076214 (-AppendByte@Base853Encoder@@QEAAXE@Z.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x180076B48 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x180076BA4 (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@E@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAE$$QEAE@Z @ 0x1800CEAFC (--$_Emplace_reallocate@E@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAE$$QEAE@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800E006C (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800F1858 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_.c)
 *     _anonymous_namespace_::Compressor::Compress @ 0x1800F28AC (_anonymous_namespace_--Compressor--Compress.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1801B5F2C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

_OWORD *__fastcall EncodeStringsList(_OWORD *a1, __int64 a2)
{
  __int64 *v3; // rax
  _BYTE *v4; // r11
  _BYTE *v5; // r10
  __int64 v6; // rax
  int v7; // r14d
  unsigned __int16 *v8; // rbx
  int *v9; // r12
  _BYTE *v10; // r10
  _BYTE *v11; // r10
  int v12; // r15d
  unsigned __int16 *v13; // rsi
  unsigned __int16 *v14; // r12
  unsigned __int16 v15; // bx
  _BYTE *v16; // r10
  __int16 v17; // bx
  unsigned __int8 *v18; // rbx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  char v22[8]; // [rsp+20h] [rbp-49h] BYREF
  __int128 v23; // [rsp+28h] [rbp-41h] BYREF
  _BYTE *v24; // [rsp+38h] [rbp-31h]
  __int64 v25; // [rsp+40h] [rbp-29h] BYREF
  __int128 *v26; // [rsp+48h] [rbp-21h] BYREF
  int v27; // [rsp+50h] [rbp-19h]
  int v28; // [rsp+54h] [rbp-15h]
  int v29; // [rsp+58h] [rbp-11h]
  _QWORD v30[3]; // [rsp+60h] [rbp-9h] BYREF
  __int128 v31; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v32; // [rsp+88h] [rbp+1Fh]

  if ( *(_QWORD *)(a2 + 8) )
  {
    v3 = *(__int64 **)a2;
    v4 = 0LL;
    v23 = 0LL;
    v5 = 0LL;
    v6 = *v3;
    v25 = v6;
    v24 = 0LL;
    while ( !*(_BYTE *)(v6 + 25) )
    {
      v7 = 0xFFFF;
      v8 = (unsigned __int16 *)(v6 + 32);
      v9 = (int *)(v6 + 48);
      if ( *(_DWORD *)(v6 + 48) < 0xFFFFu )
        v7 = *v9;
      v22[0] = v7;
      if ( v5 == v4 )
      {
        std::vector<unsigned char>::_Emplace_reallocate<unsigned char>(&v23, v5, v22);
        v4 = v24;
        v10 = (_BYTE *)*((_QWORD *)&v23 + 1);
      }
      else
      {
        *v5 = v7;
        v10 = v5 + 1;
        *((_QWORD *)&v23 + 1) = v10;
      }
      v22[0] = BYTE1(v7);
      if ( v10 == v4 )
      {
        std::vector<unsigned char>::_Emplace_reallocate<unsigned char>(&v23, v10, v22);
        v4 = v24;
        v11 = (_BYTE *)*((_QWORD *)&v23 + 1);
      }
      else
      {
        *v10 = BYTE1(v7);
        v11 = v10 + 1;
        *((_QWORD *)&v23 + 1) = v11;
      }
      v12 = 0;
      v13 = v8;
      if ( *((_QWORD *)v8 + 3) >= 8uLL )
      {
        v13 = *(unsigned __int16 **)v8;
        v8 = *(unsigned __int16 **)v8;
      }
      v14 = &v8[*(_QWORD *)v9];
      while ( v13 != v14 )
      {
        v15 = *v13;
        v22[0] = *v13;
        if ( v11 == v4 )
        {
          std::vector<unsigned char>::_Emplace_reallocate<unsigned char>(&v23, v11, v22);
          v4 = v24;
          v16 = (_BYTE *)*((_QWORD *)&v23 + 1);
        }
        else
        {
          *v11 = v15;
          v16 = v11 + 1;
          *((_QWORD *)&v23 + 1) = v16;
        }
        v17 = HIBYTE(v15);
        v22[0] = v17;
        if ( v16 == v4 )
        {
          std::vector<unsigned char>::_Emplace_reallocate<unsigned char>(&v23, v16, v22);
          v4 = v24;
          v11 = (_BYTE *)*((_QWORD *)&v23 + 1);
        }
        else
        {
          *v16 = v17;
          v11 = v16 + 1;
          *((_QWORD *)&v23 + 1) = v11;
        }
        if ( ++v12 == v7 )
          break;
        ++v13;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::wstring>>,std::_Iterator_base0>::operator++(&v25);
      v6 = v25;
    }
    anonymous_namespace_::Compressor::Compress(v30, a2, &v23);
    *(_QWORD *)&v32 = 0LL;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v18 = (unsigned __int8 *)v30[0];
    v26 = &v31;
    *((_QWORD *)&v32 + 1) = 15LL;
    LOBYTE(v31) = 0;
    while ( v18 != (unsigned __int8 *)v30[1] )
      Base853Encoder::AppendByte((Base853Encoder *)&v26, *v18++);
    Base853Encoder::EnsureZeroesAreSerialized((Base853Encoder *)&v26);
    if ( v28 )
      Base853Encoder::EncodeBlock((Base853Encoder *)&v26);
    v19 = v32;
    *(_QWORD *)&v32 = 0LL;
    v20 = v31;
    *((_QWORD *)&v32 + 1) = 15LL;
    LOBYTE(v31) = 0;
    *a1 = v20;
    a1[1] = v19;
    std::vector<unsigned char>::_Tidy(v30);
    std::vector<unsigned char>::_Tidy(&v23);
  }
  else
  {
    std::string::string(a1, &byte_18032C47F);
  }
  return a1;
}
