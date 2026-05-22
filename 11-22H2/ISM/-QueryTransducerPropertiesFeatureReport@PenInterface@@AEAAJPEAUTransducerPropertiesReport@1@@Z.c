/*
 * XREFs of ?QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z @ 0x1801B52E4
 * Callers:
 *     ?Initialize@PenInterface@@QEAAJXZ @ 0x1801B4CBC (-Initialize@PenInterface@@QEAAJXZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x18001B9A0 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058470 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A7C6C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerPropertiesReport@1@@Z @ 0x1801B5010 (-ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerProp.c)
 */

__int64 __fastcall PenInterface::QueryTransducerPropertiesFeatureReport(
        PenInterface *this,
        struct PenInterface::TransducerPropertiesReport *a2)
{
  size_t v5; // rsi
  void *v6; // rax
  _BYTE *v7; // rdi
  unsigned int LastError; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  const char *v11; // r9
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v14; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 147) )
    return 2147500034LL;
  v5 = *((unsigned __int16 *)this + 40);
  v6 = operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v6;
  v7 = v6;
  if ( !v6 )
  {
    LastError = -2147024882;
    v9 = 205LL;
    v10 = 2147942414LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      (const char *)v10);
    goto LABEL_10;
  }
  memset_0(v6, 0, v5);
  *v7 = *((_BYTE *)this + 147);
  if ( !HidD_GetFeature(*((HANDLE *)this + 7), v7, v5) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xD7,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
                  v11);
LABEL_10:
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v14);
    return LastError;
  }
  v12 = PenInterface::ParseTransducerPropertiesReport(this, HidP_Feature, v7, v5, a2);
  LastError = v12;
  if ( v12 < 0 )
  {
    v10 = (unsigned int)v12;
    v9 = 222LL;
    goto LABEL_9;
  }
  operator delete[](v7);
  return 0LL;
}
