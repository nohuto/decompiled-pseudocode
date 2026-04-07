/*
 * XREFs of ?wstring_to_string@util@cereal@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@4@@Z @ 0x1800F6F04
 * Callers:
 *     ??$process@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800F296C (--$process@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$OutputArchive@VJS.c)
 *     ?log@?$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800F6208 (-log@-$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV-$basic_strin.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800636E3 (_CxxThrowException_0.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1800F5EB8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall cereal::util::wstring_to_string(char *Src, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 cbMultiByte; // rdi
  char *v7; // rax
  CHAR *lpMultiByteStr; // rax
  _QWORD pExceptionObject[3]; // [rsp+48h] [rbp-20h] BYREF

  *((_QWORD *)Src + 2) = 0LL;
  *((_QWORD *)Src + 3) = 15LL;
  *Src = 0;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v4 = WideCharToMultiByte(0xFDE9u, 0, *(LPCWCH *)a2, *(_DWORD *)(a2 + 8), 0LL, 0, 0LL, 0LL);
    cbMultiByte = v4;
    if ( v4 > 0 )
    {
      if ( (unsigned __int64)v4 > *((_QWORD *)Src + 2) )
      {
        std::string::append(Src, v4 - *((_QWORD *)Src + 2), v5);
      }
      else
      {
        v7 = Src;
        if ( *((_QWORD *)Src + 3) >= 0x10uLL )
          v7 = *(char **)Src;
        *((_QWORD *)Src + 2) = cbMultiByte;
        v7[cbMultiByte] = 0;
      }
      lpMultiByteStr = Src;
      if ( *((_QWORD *)Src + 3) >= 0x10uLL )
        lpMultiByteStr = *(CHAR **)Src;
      LODWORD(cbMultiByte) = WideCharToMultiByte(
                               0xFDE9u,
                               0,
                               *(LPCWCH *)a2,
                               *(_DWORD *)(a2 + 8),
                               lpMultiByteStr,
                               cbMultiByte,
                               0LL,
                               0LL);
    }
    if ( !(_DWORD)cbMultiByte )
    {
      pExceptionObject[1] = "String conversion failed to convert a non-empty Unicode string to ANSI.";
      pExceptionObject[0] = &cereal::Exception::`vftable';
      throw (cereal::Exception *)pExceptionObject;
    }
  }
  return Src;
}
