/*
 * XREFs of ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x1803DCA1C
 * Callers:
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x1803D44FC (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180188350 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Convert_wide_to_narrow_replace_chars@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x1803D2D24 (--$_Convert_wide_to_narrow_replace_chars@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@.c)
 *     ??$_Reallocate_grow_by@V_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@$$V@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@@Z @ 0x1803D39D4 (--$_Reallocate_grow_by@V_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@$$V@-$basic_string@DU-$char_t.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x1803DD2CC (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::filesystem::filesystem_error::_Pretty_message(_QWORD *Src, __int64 a2, void **a3, void **a4)
{
  UINT v8; // r14d
  void *v9; // rcx
  void *v10; // rax
  void *v11; // rcx
  void *v12; // rax
  size_t v13; // rdx
  size_t v14; // rsi
  void *v15; // rbx
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  void *v19; // rcx
  void *v20; // rcx
  void *v22[2]; // [rsp+20h] [rbp-39h] BYREF
  void *v23; // [rsp+30h] [rbp-29h] BYREF
  int v24; // [rsp+38h] [rbp-21h]
  _QWORD v25[2]; // [rsp+40h] [rbp-19h] BYREF
  size_t v26; // [rsp+50h] [rbp-9h]
  unsigned __int64 v27; // [rsp+58h] [rbp-1h]
  _QWORD Srca[2]; // [rsp+60h] [rbp+7h] BYREF
  size_t v29; // [rsp+70h] [rbp+17h]
  unsigned __int64 v30; // [rsp+78h] [rbp+1Fh]

  v23 = Src;
  *Src = 0LL;
  Src[2] = 0LL;
  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  v24 = 1;
  v8 = 0;
  if ( (unsigned int)_o____lc_codepage_func() == 65001 )
    v8 = 65001;
  v9 = a3;
  if ( (unsigned __int64)a3[3] >= 8 )
    v9 = *a3;
  v10 = a3[2];
  v22[0] = v9;
  v22[1] = v10;
  std::filesystem::_Convert_wide_to_narrow_replace_chars<std::char_traits<char>,std::allocator<char>>(
    Srca,
    v8,
    (__int64)v22);
  v11 = a4;
  if ( (unsigned __int64)a4[3] >= 8 )
    v11 = *a4;
  v12 = a4[2];
  v22[0] = v11;
  v22[1] = v12;
  std::filesystem::_Convert_wide_to_narrow_replace_chars<std::char_traits<char>,std::allocator<char>>(
    v25,
    v8,
    (__int64)v22);
  v13 = v26 + v29 + *(_QWORD *)(a2 + 8) + (v26 != 0 ? 8LL : 4LL);
  v14 = Src[2];
  if ( v14 <= v13 && Src[3] != v13 )
  {
    if ( Src[3] >= v13 )
    {
      if ( v13 < 0x10 && Src[3] >= 0x10uLL )
      {
        v15 = (void *)*Src;
        memcpy_0(Src, (const void *)*Src, v14 + 1);
        std::_Deallocate<16,0>(v15, Src[3] + 1LL);
        Src[3] = 15LL;
      }
    }
    else
    {
      std::string::_Reallocate_grow_by<_lambda_9013ee9e23efe4882b67eff5b0ecf103_,>((void **)Src, v13 - v14);
      Src[2] = v14;
    }
  }
  std::string::append(Src, *(const void **)a2, _mm_srli_si128(*(__m128i *)a2, 8).m128i_u64[0]);
  std::string::append(Src, ": \"", 3uLL);
  v16 = Srca;
  if ( v30 >= 0x10 )
    v16 = (_QWORD *)Srca[0];
  std::string::append(Src, v16, v29);
  if ( v26 )
  {
    std::string::append(Src, "\", \"", 4uLL);
    v18 = v25;
    if ( v27 >= 0x10 )
      v18 = (_QWORD *)v25[0];
    std::string::append(Src, v18, v26);
  }
  LOBYTE(v17) = 34;
  std::string::push_back(Src, v17);
  if ( v27 >= 0x10 )
  {
    v22[0] = (void *)(v27 + 1);
    v19 = (void *)v25[0];
    v23 = (void *)v25[0];
    if ( v27 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v23, (unsigned __int64 *)v22);
      v19 = v23;
    }
    operator delete(v19);
  }
  v26 = 0LL;
  v27 = 15LL;
  LOBYTE(v25[0]) = 0;
  if ( v30 >= 0x10 )
  {
    v23 = (void *)(v30 + 1);
    v20 = (void *)Srca[0];
    v22[0] = (void *)Srca[0];
    if ( v30 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v22, (unsigned __int64 *)&v23);
      v20 = v22[0];
    }
    operator delete(v20);
  }
  return Src;
}
