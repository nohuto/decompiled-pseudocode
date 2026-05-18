/*
 * XREFs of sub_180090F5C @ 0x180090F5C
 * Callers:
 *     sub_1800900BC @ 0x1800900BC (sub_1800900BC.c)
 * Callees:
 *     sub_18008F424 @ 0x18008F424 (sub_18008F424.c)
 *     sub_18008FDC8 @ 0x18008FDC8 (sub_18008FDC8.c)
 */

void __fastcall sub_180090F5C(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  _QWORD v3[7]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v4; // [rsp+58h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 136) != 8LL )
  {
    v4 = 0LL;
    if ( sub_18008F424() )
    {
      v3[1] = v2;
      v3[0] = &std::_Func_impl_no_alloc<_lambda_e4386f35b8603616d8ddd0087d6df351_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
      v4 = v3;
    }
    sub_18008FDC8(v2, v1, (__int64)v3);
  }
}
