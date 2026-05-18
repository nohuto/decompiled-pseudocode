/*
 * XREFs of sub_18004E370 @ 0x18004E370
 * Callers:
 *     sub_18004E560 @ 0x18004E560 (sub_18004E560.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18004DB48 @ 0x18004DB48 (sub_18004DB48.c)
 *     sub_18004EAA0 @ 0x18004EAA0 (sub_18004EAA0.c)
 *     sub_18004EAAC @ 0x18004EAAC (sub_18004EAAC.c)
 *     sub_18004EABC @ 0x18004EABC (sub_18004EABC.c)
 *     sub_18004EB80 @ 0x18004EB80 (sub_18004EB80.c)
 *     sub_18004EBF0 @ 0x18004EBF0 (sub_18004EBF0.c)
 *     sub_18004EC28 @ 0x18004EC28 (sub_18004EC28.c)
 *     sub_18004EC38 @ 0x18004EC38 (sub_18004EC38.c)
 *     sub_18004EC70 @ 0x18004EC70 (sub_18004EC70.c)
 *     sub_1800FDE78 @ 0x1800FDE78 (sub_1800FDE78.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18004E370(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v5; // bl
  BOOL v6; // r15d
  __int64 v7; // rcx
  char v8; // r12
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 *v12; // rax
  __int64 v13; // r13
  int v14; // esi
  int v15; // edi
  __int64 v16; // rcx
  int v17; // ebx
  int v18; // eax
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  _QWORD v21[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v22; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v23[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v24[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v25; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v26[7]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v27; // [rsp+F8h] [rbp-8h]

  result = *(unsigned int *)(a1 + 300);
  v5 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v6 = sub_18004EC28() == 3;
    if ( (unsigned int)sub_18004EAAC() == 1 )
    {
      v8 = 1;
      v9 = (__int64 *)sub_18004EB80(v7, v23, 0LL);
      v10 = *v9;
      v21[0] = *v9;
      v21[1] = v9[1];
      *v9 = 0LL;
      v9[1] = 0LL;
      v11 = v21;
    }
    else
    {
      v8 = 0;
      v12 = (__int64 *)sub_18004EABC(v7, &v22, 0LL);
      v10 = *v12;
      v20 = v12[1];
      *v12 = 0LL;
      v12[1] = 0LL;
      v11 = &v19;
      v5 = 12;
    }
    v13 = v11[1];
    *v11 = 0LL;
    v11[1] = 0LL;
    if ( (v5 & 8) != 0 )
    {
      v5 &= ~8u;
      sub_180010910((__int64)&v19);
    }
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      sub_180010910((__int64)&v22);
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      sub_180010910((__int64)v21);
    }
    if ( (v5 & 1) != 0 )
      sub_180010910((__int64)v23);
    v22 = 0LL;
    v27 = 0LL;
    if ( sub_18004DB48() )
    {
      v26[0] = &std::_Func_impl_no_alloc<_lambda_0c82bcc1497f3afd643663d7c3bef72a_,void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::`vftable';
      v26[1] = a1;
      v27 = v26;
    }
    v14 = sub_18004EAA0(a1);
    v19 = v10;
    v20 = v13;
    v25 = 0LL;
    v15 = sub_18004EC70();
    v17 = sub_18004EC38(v16, v23, 0LL);
    v18 = sub_18004EBF0(a1, v24, 0LL);
    sub_1800FDE78(v18, v17, v15, (unsigned int)&v19, v14, v8, v6, a3, (__int64)v26);
    sub_180010910((__int64)&v22);
    return sub_180010910((__int64)&v25);
  }
  return result;
}
