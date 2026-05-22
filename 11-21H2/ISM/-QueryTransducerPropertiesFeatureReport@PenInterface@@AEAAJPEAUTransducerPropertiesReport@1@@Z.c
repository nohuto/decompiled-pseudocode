/*
 * XREFs of ?QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z @ 0x180189164
 * Callers:
 *     ?Initialize@PenInterface@@QEAAJXZ @ 0x180188B9C (-Initialize@PenInterface@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B774 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerPropertiesReport@1@@Z @ 0x180188EE4 (-ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerProp.c)
 */

__int64 __fastcall PenInterface::QueryTransducerPropertiesFeatureReport(
        PenInterface *this,
        struct PenInterface::TransducerPropertiesReport *a2)
{
  size_t v5; // rsi
  _BYTE *v6; // rax
  _BYTE *v7; // rbx
  unsigned int LastError; // edi
  __int64 v9; // rdx
  __int64 v10; // r9
  const char *v11; // r9
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 147) )
    return 2147500034LL;
  v5 = *((unsigned __int16 *)this + 40);
  v6 = operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, v5);
    *v7 = *((_BYTE *)this + 147);
    if ( !HidD_GetFeature(*((HANDLE *)this + 7), v7, v5) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0xDB,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\serve"
                                  "r\\peninterface.cpp",
                    v11);
      goto LABEL_10;
    }
    v12 = PenInterface::ParseTransducerPropertiesReport(this, HidP_Feature, v7, v5, a2);
    LastError = v12;
    if ( v12 >= 0 )
    {
      LastError = 0;
LABEL_13:
      operator delete[](v7);
      return LastError;
    }
    v10 = (unsigned int)v12;
    v9 = 226LL;
  }
  else
  {
    LastError = -2147024882;
    v9 = 209LL;
    v10 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
    (const char *)v10);
LABEL_10:
  if ( v7 )
    goto LABEL_13;
  return LastError;
}
