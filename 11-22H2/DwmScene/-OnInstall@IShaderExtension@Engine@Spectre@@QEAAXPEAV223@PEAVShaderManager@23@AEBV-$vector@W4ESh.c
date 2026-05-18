/*
 * XREFs of ?OnInstall@IShaderExtension@Engine@Spectre@@QEAAXPEAV223@PEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x180060DCC
 * Callers:
 *     ?AddExtension@ShaderManager@Engine@Spectre@@QEAAXV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@std@@@Z @ 0x18004EF08 (-AddExtension@ShaderManager@Engine@Spectre@@QEAAXV-$shared_ptr@VIShaderExtension@Engine@Spectre@.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180011BA0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

__int64 __fastcall Spectre::Engine::IShaderExtension::OnInstall(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void **v4; // rbx
  const char *v9; // rdx
  size_t v10; // r8

  v4 = (void **)(a1 + 72);
  *(_DWORD *)(a1 + 104) = 40960;
  std::string::assign((void **)(a1 + 72), "<unknown>", 9uLL);
  if ( *(int *)(a1 + 104) >= 40960 )
  {
    v9 = "ShaderModel40_Level93";
    v10 = (*(_DWORD *)(a2 + 560) & 4) != 0 ? 21LL : 13LL;
    if ( (*(_DWORD *)(a2 + 560) & 4) == 0 )
      v9 = "ShaderModel40";
    goto LABEL_10;
  }
  if ( *(int *)(a1 + 104) >= 37632 )
  {
    v9 = "ShaderModel40_Level93";
LABEL_9:
    v10 = 21LL;
LABEL_10:
    std::string::assign(v4, v9, v10);
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, a3, a4);
  }
  if ( *(int *)(a1 + 104) >= 37120 )
  {
    v9 = "ShaderModel40_Level91";
    goto LABEL_9;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, a3, a4);
}
