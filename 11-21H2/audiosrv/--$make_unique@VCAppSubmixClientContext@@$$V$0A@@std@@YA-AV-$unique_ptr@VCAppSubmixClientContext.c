/*
 * XREFs of ??$make_unique@VCAppSubmixClientContext@@$$V$0A@@std@@YA?AV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@XZ @ 0x180106D94
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x180107784 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     ??0?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@QEAA@XZ @ 0x180107070 (--0-$unordered_set@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U-$hash@.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_unique<CAppSubmixClientContext,,0>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x70uLL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x70uLL);
    *(_QWORD *)v3 = 0LL;
    v3[2] = 0;
    v3[3] = 0;
    v3[4] = 0;
    std::unordered_set<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::unordered_set<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(v3 + 6);
    *((_QWORD *)v3 + 11) = 0LL;
    *((_QWORD *)v3 + 12) = 0LL;
    *((_QWORD *)v3 + 13) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
