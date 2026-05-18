/*
 * XREFs of sub_18004E1AC @ 0x18004E1AC
 * Callers:
 *     sub_18004E560 @ 0x18004E560 (sub_18004E560.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18004DB54 @ 0x18004DB54 (sub_18004DB54.c)
 *     sub_18004EAA0 @ 0x18004EAA0 (sub_18004EAA0.c)
 *     sub_18004EAAC @ 0x18004EAAC (sub_18004EAAC.c)
 *     sub_18004EABC @ 0x18004EABC (sub_18004EABC.c)
 *     sub_18004EB80 @ 0x18004EB80 (sub_18004EB80.c)
 *     sub_18004EBF0 @ 0x18004EBF0 (sub_18004EBF0.c)
 *     sub_18004EC28 @ 0x18004EC28 (sub_18004EC28.c)
 *     sub_18004EC70 @ 0x18004EC70 (sub_18004EC70.c)
 *     sub_1800FD588 @ 0x1800FD588 (sub_1800FD588.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18004E1AC(__int64 a1)
{
  __int64 result; // rax
  char v3; // bl
  BOOL v4; // r15d
  __int64 v5; // rcx
  char v6; // r12
  __int64 *v7; // rax
  __int64 v8; // r14
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // r13
  int v12; // edi
  int v13; // ebx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // [rsp+50h] [rbp-59h] BYREF
  __int64 v17; // [rsp+58h] [rbp-51h]
  __int128 v18; // [rsp+60h] [rbp-49h] BYREF
  __int128 v19; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v20[16]; // [rsp+80h] [rbp-29h] BYREF
  _QWORD v21[7]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD *v22; // [rsp+C8h] [rbp+1Fh]

  result = *(unsigned int *)(a1 + 300);
  v3 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v4 = sub_18004EC28() == 3;
    if ( (unsigned int)sub_18004EAAC() == 1 )
    {
      v6 = 1;
      v7 = (__int64 *)sub_18004EB80(v5, v20, 0LL);
      v8 = *v7;
      v16 = *v7;
      v17 = v7[1];
      *v7 = 0LL;
      v7[1] = 0LL;
      v9 = &v16;
    }
    else
    {
      v6 = 0;
      v10 = (__int64 *)sub_18004EABC(v5, &v19, 0LL);
      v8 = *v10;
      *((_QWORD *)&v18 + 1) = v10[1];
      *v10 = 0LL;
      v10[1] = 0LL;
      v9 = (__int64 *)&v18;
      v3 = 12;
    }
    v11 = v9[1];
    *v9 = 0LL;
    v9[1] = 0LL;
    if ( (v3 & 8) != 0 )
    {
      v3 &= ~8u;
      sub_180010910((__int64)&v18);
    }
    if ( (v3 & 4) != 0 )
    {
      v3 &= ~4u;
      sub_180010910((__int64)&v19);
    }
    if ( (v3 & 2) != 0 )
    {
      v3 &= ~2u;
      sub_180010910((__int64)&v16);
    }
    if ( (v3 & 1) != 0 )
      sub_180010910((__int64)v20);
    v18 = 0LL;
    v22 = 0LL;
    if ( sub_18004DB54() )
    {
      v21[0] = &std::_Func_impl_no_alloc<_lambda_7334b5a9a3bbefa9324c75fdace13832_,void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::`vftable';
      v21[1] = a1;
      v22 = v21;
    }
    v12 = sub_18004EAA0(a1);
    v16 = v8;
    v17 = v11;
    v19 = 0LL;
    v13 = sub_18004EC70();
    v15 = sub_18004EBF0(v14, v20, 0LL);
    sub_1800FD588(v15, v13, (unsigned int)&v16, v12, v6, v4, (__int64)v21);
    sub_180010910((__int64)&v18);
    return sub_180010910((__int64)&v19);
  }
  return result;
}
