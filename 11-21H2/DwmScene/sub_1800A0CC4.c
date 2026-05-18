/*
 * XREFs of sub_1800A0CC4 @ 0x1800A0CC4
 * Callers:
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 *     sub_18009EEBC @ 0x18009EEBC (sub_18009EEBC.c)
 * Callees:
 *     sub_18009EE18 @ 0x18009EE18 (sub_18009EE18.c)
 *     sub_18009F81C @ 0x18009F81C (sub_18009F81C.c)
 */

__int64 sub_1800A0CC4()
{
  __int64 v0; // rdx
  __int64 *v1; // rcx
  _QWORD v3[7]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v4; // [rsp+58h] [rbp-10h]

  v4 = 0LL;
  if ( sub_18009EE18() )
  {
    v3[0] = &std::_Func_impl_no_alloc<_lambda_b8abe43d8a0b55a507686fbec5567b70_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
    v4 = v3;
  }
  return sub_18009F81C(v1, v0, (__int64)v3);
}
