/*
 * XREFs of sub_18004806C @ 0x18004806C
 * Callers:
 *     sub_180048440 @ 0x180048440 (sub_180048440.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18004793C @ 0x18004793C (sub_18004793C.c)
 *     sub_180048974 @ 0x180048974 (sub_180048974.c)
 *     sub_180048980 @ 0x180048980 (sub_180048980.c)
 *     sub_180048990 @ 0x180048990 (sub_180048990.c)
 *     sub_180048A00 @ 0x180048A00 (sub_180048A00.c)
 *     sub_180048A38 @ 0x180048A38 (sub_180048A38.c)
 *     sub_180048A80 @ 0x180048A80 (sub_180048A80.c)
 *     sub_1800E20F0 @ 0x1800E20F0 (sub_1800E20F0.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18004806C(__int64 a1)
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
  _BYTE v20[8]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v21; // [rsp+88h] [rbp-21h]
  _QWORD v22[7]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD *v23; // [rsp+C8h] [rbp+1Fh]

  result = *(unsigned int *)(a1 + 300);
  v3 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v4 = sub_180048A38() == 3;
    if ( (unsigned int)sub_180048980() == 1 )
    {
      v6 = 1;
      v7 = (__int64 *)sub_180048990(v5, v20, 0LL);
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
      v10 = (__int64 *)sub_180048990(v5, &v19, 0LL);
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
      if ( *((_QWORD *)&v18 + 1) )
        sub_180010530(*((__int64 *)&v18 + 1));
    }
    if ( (v3 & 4) != 0 )
    {
      v3 &= ~4u;
      if ( *((_QWORD *)&v19 + 1) )
        sub_180010530(*((__int64 *)&v19 + 1));
    }
    if ( (v3 & 2) != 0 )
    {
      v3 &= ~2u;
      if ( v17 )
        sub_180010530(v17);
    }
    if ( (v3 & 1) != 0 && v21 )
      sub_180010530(v21);
    v18 = 0LL;
    v23 = 0LL;
    if ( sub_18004793C() )
    {
      v22[0] = &std::_Func_impl_no_alloc<_lambda_7334b5a9a3bbefa9324c75fdace13832_,void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::`vftable';
      v22[1] = a1;
      v23 = v22;
    }
    v12 = sub_180048974(a1);
    v16 = v8;
    v17 = v11;
    v19 = 0LL;
    v13 = sub_180048A80();
    v15 = sub_180048A00(v14, v20, 0LL);
    result = sub_1800E20F0(v15, v13, (unsigned int)&v16, v12, v6, v4, (__int64)v22);
    if ( *((_QWORD *)&v18 + 1) )
      return sub_180010530(*((__int64 *)&v18 + 1));
  }
  return result;
}
