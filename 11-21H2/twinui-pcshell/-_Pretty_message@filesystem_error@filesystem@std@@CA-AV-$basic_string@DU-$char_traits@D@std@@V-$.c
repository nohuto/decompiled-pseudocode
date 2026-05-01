/*
 * XREFs of ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180581C04
 * Callers:
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x18057E9BC (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180350E38 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??$_Convert_wide_to_narrow_replace_chars@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x18057DBF4 (--$_Convert_wide_to_narrow_replace_chars@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@.c)
 *     ??$_Reallocate_grow_by@V_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@$$V@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@@Z @ 0x18057E330 (--$_Reallocate_grow_by@V_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@$$V@-$basic_string@DU-$char_t.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x180582684 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 */

// Hidden C++ exception states: #wind=3
unsigned __int64 *__fastcall std::filesystem::filesystem_error::_Pretty_message(
        unsigned __int64 *Src,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  UINT v8; // r14d
  void *v9; // rax
  void *v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  void *v13; // rbx
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  __int64 v17; // r8
  void *v18; // rcx
  void *v19; // rcx
  void *v21[2]; // [rsp+20h] [rbp-39h] BYREF
  void *v22; // [rsp+30h] [rbp-29h] BYREF
  int v23; // [rsp+38h] [rbp-21h]
  _QWORD v24[2]; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-9h]
  unsigned __int64 v26; // [rsp+58h] [rbp-1h]
  _QWORD Srca[2]; // [rsp+60h] [rbp+7h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp+17h]
  unsigned __int64 v29; // [rsp+78h] [rbp+1Fh]

  v22 = Src;
  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  v23 = 1;
  v8 = 0;
  if ( (unsigned int)_o____lc_codepage_func() == 65001 )
    v8 = 65001;
  v9 = (void *)a3[2];
  if ( a3[3] >= 8uLL )
    a3 = (_QWORD *)*a3;
  v21[0] = a3;
  v21[1] = v9;
  std::filesystem::_Convert_wide_to_narrow_replace_chars<std::char_traits<char>,std::allocator<char>>(
    Srca,
    v8,
    (__int64)v21);
  v10 = (void *)a4[2];
  if ( a4[3] >= 8uLL )
    a4 = (_QWORD *)*a4;
  v21[0] = a4;
  v21[1] = v10;
  std::filesystem::_Convert_wide_to_narrow_replace_chars<std::char_traits<char>,std::allocator<char>>(
    v24,
    v8,
    (__int64)v21);
  v11 = v28 + v25 + *(_QWORD *)(a2 + 8) + (v25 != 0 ? 8LL : 4LL);
  v12 = Src[2];
  if ( v12 <= v11 && Src[3] != v11 )
  {
    if ( Src[3] >= v11 )
    {
      if ( v11 < 0x10 && Src[3] >= 0x10 )
      {
        v13 = (void *)*Src;
        memcpy_0(Src, (const void *)*Src, v12 + 1);
        std::_Deallocate<16,0>(v13, Src[3] + 1);
        Src[3] = 15LL;
      }
    }
    else
    {
      std::string::_Reallocate_grow_by<_lambda_9013ee9e23efe4882b67eff5b0ecf103_,>((void **)Src, v11 - v12);
      Src[2] = v12;
    }
  }
  std::string::append((void **)Src, *(const void **)a2, _mm_srli_si128(*(__m128i *)a2, 8).m128i_u64[0]);
  std::string::append((void **)Src, ": \"", 3uLL);
  v14 = Srca;
  if ( v29 >= 0x10 )
    v14 = (_QWORD *)Srca[0];
  std::string::append((void **)Src, v14, v28);
  if ( v25 )
  {
    std::string::append((void **)Src, "\", \"", 4uLL);
    v16 = v24;
    if ( v26 >= 0x10 )
      v16 = (_QWORD *)v24[0];
    std::string::append((void **)Src, v16, v25);
  }
  LOBYTE(v15) = 34;
  std::string::push_back(Src, v15);
  if ( v26 >= 0x10 )
  {
    v21[0] = (void *)(v26 + 1);
    v18 = (void *)v24[0];
    v22 = (void *)v24[0];
    if ( v26 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v22, (unsigned __int64 *)v21, v17);
      v18 = v22;
    }
    operator delete(v18);
  }
  v25 = 0LL;
  v26 = 15LL;
  LOBYTE(v24[0]) = 0;
  if ( v29 >= 0x10 )
  {
    v22 = (void *)(v29 + 1);
    v19 = (void *)Srca[0];
    v21[0] = (void *)Srca[0];
    if ( v29 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v21, (unsigned __int64 *)&v22, v17);
      v19 = v21[0];
    }
    operator delete(v19);
  }
  return Src;
}
