/*
 * XREFs of sub_1800A0C74 @ 0x1800A0C74
 * Callers:
 *     sub_18009FB44 @ 0x18009FB44 (sub_18009FB44.c)
 * Callees:
 *     sub_18009EE24 @ 0x18009EE24 (sub_18009EE24.c)
 *     sub_18009F81C @ 0x18009F81C (sub_18009F81C.c)
 */

void __fastcall sub_1800A0C74(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rcx
  _QWORD v3[7]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v4; // [rsp+58h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 136) != 8LL )
  {
    v4 = 0LL;
    if ( sub_18009EE24() )
    {
      v3[1] = v2;
      v3[0] = &std::_Func_impl_no_alloc<_lambda_e4386f35b8603616d8ddd0087d6df351_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
      v4 = v3;
    }
    sub_18009F81C(v2, v1, (__int64)v3);
  }
}
