/*
 * XREFs of sub_180090FAC @ 0x180090FAC
 * Callers:
 *     sub_180065CC0 @ 0x180065CC0 (sub_180065CC0.c)
 *     sub_18008F548 @ 0x18008F548 (sub_18008F548.c)
 * Callees:
 *     sub_18008F418 @ 0x18008F418 (sub_18008F418.c)
 *     sub_18008FDC8 @ 0x18008FDC8 (sub_18008FDC8.c)
 */

__int64 sub_180090FAC()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  _QWORD v3[7]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v4; // [rsp+58h] [rbp-10h]

  v4 = 0LL;
  if ( sub_18008F418() )
  {
    v3[0] = &std::_Func_impl_no_alloc<_lambda_b8abe43d8a0b55a507686fbec5567b70_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
    v4 = v3;
  }
  return sub_18008FDC8(v1, v0, (__int64)v3);
}
