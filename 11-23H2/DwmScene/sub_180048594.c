/*
 * XREFs of sub_180048594 @ 0x180048594
 * Callers:
 *     sub_180048440 @ 0x180048440 (sub_180048440.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180047948 @ 0x180047948 (sub_180047948.c)
 *     sub_180048974 @ 0x180048974 (sub_180048974.c)
 *     sub_180048980 @ 0x180048980 (sub_180048980.c)
 *     sub_180048990 @ 0x180048990 (sub_180048990.c)
 *     sub_1800489C8 @ 0x1800489C8 (sub_1800489C8.c)
 *     sub_180048A00 @ 0x180048A00 (sub_180048A00.c)
 *     sub_180048A38 @ 0x180048A38 (sub_180048A38.c)
 *     sub_180048A48 @ 0x180048A48 (sub_180048A48.c)
 *     sub_180048A80 @ 0x180048A80 (sub_180048A80.c)
 *     sub_1800E2460 @ 0x1800E2460 (sub_1800E2460.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180048594(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v5; // bl
  BOOL v6; // r12d
  __int64 v7; // rcx
  char v8; // r13
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rsi
  int v14; // r14d
  int v15; // esi
  __int64 v16; // rcx
  int v17; // edi
  int v18; // ebx
  int v19; // eax
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h]
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h]
  __int128 v24; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v25; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h]
  _BYTE v27[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v28[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v29[16]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v30[7]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v31; // [rsp+108h] [rbp+8h]
  __int128 v32; // [rsp+110h] [rbp+10h]

  result = *(unsigned int *)(a1 + 300);
  v5 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v6 = sub_180048A38() == 3;
    if ( (unsigned int)sub_180048980() == 1 )
    {
      v8 = 1;
      v9 = (__int64 *)sub_180048990(v7, &v25, 0LL);
      v10 = *v9;
      v22 = *v9;
      v23 = v9[1];
      *v9 = 0LL;
      v9[1] = 0LL;
      v11 = &v22;
    }
    else
    {
      v8 = 0;
      v12 = (__int64 *)sub_180048990(v7, &v24, 0LL);
      v10 = *v12;
      v21 = v12[1];
      *v12 = 0LL;
      v12[1] = 0LL;
      v11 = &v20;
      v5 = 12;
    }
    v13 = v11[1];
    *v11 = 0LL;
    v11[1] = 0LL;
    if ( (v5 & 8) != 0 )
    {
      v5 &= ~8u;
      if ( v21 )
        sub_180010530(v21);
    }
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      if ( *((_QWORD *)&v24 + 1) )
        sub_180010530(*((__int64 *)&v24 + 1));
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      if ( v23 )
        sub_180010530(v23);
    }
    if ( (v5 & 1) != 0 && v26 )
      sub_180010530(v26);
    v24 = 0LL;
    v31 = 0LL;
    if ( sub_180047948() )
    {
      v30[0] = &std::_Func_impl_no_alloc<_lambda_ab41f81ca63d3d4c36433f589e0aa9fa_,void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,void *>::`vftable';
      v30[1] = a1;
      v31 = v30;
    }
    v14 = sub_180048974(a1);
    v20 = v10;
    v21 = v13;
    v32 = 0LL;
    v15 = sub_180048A80();
    v17 = sub_1800489C8(v16, v27, 0LL);
    v25 = v28;
    v18 = sub_180048A48(a1, v28, 0LL);
    v19 = sub_180048A00(a1, v29, 0LL);
    result = sub_1800E2460(v19, v18, v17, v15, (__int64)&v20, v14, v8, v6, a3, (__int64)v30);
    if ( *((_QWORD *)&v24 + 1) )
      return sub_180010530(*((__int64 *)&v24 + 1));
  }
  return result;
}
