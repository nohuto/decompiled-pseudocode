/*
 * XREFs of sub_18004E6B8 @ 0x18004E6B8
 * Callers:
 *     sub_18004E560 @ 0x18004E560 (sub_18004E560.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18004DB60 @ 0x18004DB60 (sub_18004DB60.c)
 *     sub_18004EAA0 @ 0x18004EAA0 (sub_18004EAA0.c)
 *     sub_18004EAAC @ 0x18004EAAC (sub_18004EAAC.c)
 *     sub_18004EABC @ 0x18004EABC (sub_18004EABC.c)
 *     sub_18004EB80 @ 0x18004EB80 (sub_18004EB80.c)
 *     sub_18004EBB8 @ 0x18004EBB8 (sub_18004EBB8.c)
 *     sub_18004EBF0 @ 0x18004EBF0 (sub_18004EBF0.c)
 *     sub_18004EC28 @ 0x18004EC28 (sub_18004EC28.c)
 *     sub_18004EC38 @ 0x18004EC38 (sub_18004EC38.c)
 *     sub_18004EC70 @ 0x18004EC70 (sub_18004EC70.c)
 *     sub_1800FD950 @ 0x1800FD950 (sub_1800FD950.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_18004E6B8(__int64 a1, __int64 a2, char a3)
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
  _QWORD v22[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v23; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v24[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v25[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v26[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v27[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v28; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v29[7]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD *v30; // [rsp+118h] [rbp+18h]

  result = *(unsigned int *)(a1 + 300);
  v5 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v6 = sub_18004EC28() == 3;
    if ( (unsigned int)sub_18004EAAC() == 1 )
    {
      v8 = 1;
      v9 = (__int64 *)sub_18004EB80(v7, v24, 0LL);
      v10 = *v9;
      v22[0] = *v9;
      v22[1] = v9[1];
      *v9 = 0LL;
      v9[1] = 0LL;
      v11 = v22;
    }
    else
    {
      v8 = 0;
      v12 = (__int64 *)sub_18004EABC(v7, &v23, 0LL);
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
      sub_180010910((__int64)&v20);
    }
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      sub_180010910((__int64)&v23);
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      sub_180010910((__int64)v22);
    }
    if ( (v5 & 1) != 0 )
      sub_180010910((__int64)v24);
    v23 = 0LL;
    v30 = 0LL;
    if ( sub_18004DB60() )
    {
      v29[0] = &std::_Func_impl_no_alloc<_lambda_ab41f81ca63d3d4c36433f589e0aa9fa_,void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,void *>::`vftable';
      v29[1] = a1;
      v30 = v29;
    }
    v14 = sub_18004EAA0(a1);
    v20 = v10;
    v21 = v13;
    v28 = 0LL;
    v15 = sub_18004EC70();
    v17 = sub_18004EBB8(v16, v25, 0LL);
    v24[0] = v26;
    v18 = sub_18004EC38(a1, v26, 0LL);
    v19 = sub_18004EBF0(a1, v27, 0LL);
    sub_1800FD950(v19, v18, v17, v15, (__int64)&v20, v14, v8, v6, a3, (__int64)v29);
    sub_180010910((__int64)&v23);
    return sub_180010910((__int64)&v28);
  }
  return result;
}
