/*
 * XREFs of ??$fill@V?$_Array_iterator@G$0CAA@@std@@G@std@@YAXV?$_Array_iterator@G$0CAA@@0@0AEBG@Z @ 0x180081CE0
 * Callers:
 *     ??0ShaderPropertyLayout@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VShaderManager@Engine@Spectre@@@std@@W4EShaderPropertyScope@12@@Z @ 0x180081DEC (--0ShaderPropertyLayout@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VShaderManager@Engine@Spectre@@@st.c)
 * Callees:
 *     ??$_Is_all_bits_zero@G@std@@YA_NAEBG@Z @ 0x180081990 (--$_Is_all_bits_zero@G@std@@YA_NAEBG@Z.c)
 */

char std::fill<std::_Array_iterator<unsigned short,512>,unsigned short>()
{
  unsigned __int16 *v0; // rax
  __int64 v1; // rcx
  unsigned __int16 *v2; // r8
  unsigned __int16 *v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int16 *v6; // rdi
  unsigned __int64 i; // rcx

  LOBYTE(v0) = std::_Is_all_bits_zero<unsigned short>();
  if ( (_BYTE)v0 )
  {
    LOBYTE(v0) = (unsigned __int8)std::_Fill_zero_memset<unsigned short *>(v3, v1 >> 1);
  }
  else
  {
    v4 = (unsigned __int64)(v1 + 1) >> 1;
    if ( v3 > v2 )
      v4 = 0LL;
    if ( v4 >= 8 )
    {
      v0 = &v3[v4 - 1];
      if ( v3 > &Spectre::Engine::ShaderPropertyLayout::kPropertyIndexUnused
        || v0 < &Spectre::Engine::ShaderPropertyLayout::kPropertyIndexUnused )
      {
        LOBYTE(v0) = -1;
        v5 = 2 * (v4 & 0xFFFFFFFFFFFFFFF8uLL);
        v6 = v3;
        for ( i = v5 >> 1; i; --i )
          *v6++ = -1;
        v3 = (unsigned __int16 *)((char *)v3 + v5);
      }
    }
    while ( v3 != v2 )
      *v3++ = -1;
  }
  return (char)v0;
}
