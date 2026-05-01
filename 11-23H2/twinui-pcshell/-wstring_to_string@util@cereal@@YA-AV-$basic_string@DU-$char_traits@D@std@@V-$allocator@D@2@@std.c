/*
 * XREFs of ?wstring_to_string@util@cereal@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@4@@Z @ 0x1802D3DFC
 * Callers:
 *     ?saveValue@JSONOutputArchive@cereal@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18041ADA4 (-saveValue@JSONOutputArchive@cereal@@QEAAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1802D236A (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??0Exception@cereal@@QEAA@PEBD@Z @ 0x1804167A4 (--0Exception@cereal@@QEAA@PEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall cereal::util::wstring_to_string(_QWORD *Src, __int64 a2)
{
  int v4; // eax
  __int64 cbMultiByte; // rdi
  _QWORD *v6; // rax
  CHAR *lpMultiByteStr; // rax
  _BYTE pExceptionObject[24]; // [rsp+48h] [rbp-20h] BYREF

  *Src = 0LL;
  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v4 = WideCharToMultiByte(0xFDE9u, 0, *(LPCWCH *)a2, *(_DWORD *)(a2 + 8), 0LL, 0, 0LL, 0LL);
    cbMultiByte = v4;
    if ( v4 > 0 )
    {
      if ( (unsigned __int64)v4 > Src[2] )
      {
        std::string::append(Src, v4 - Src[2]);
      }
      else
      {
        v6 = Src;
        if ( Src[3] >= 0x10uLL )
          v6 = (_QWORD *)*Src;
        Src[2] = cbMultiByte;
        *((_BYTE *)v6 + cbMultiByte) = 0;
      }
      lpMultiByteStr = (CHAR *)Src;
      if ( Src[3] >= 0x10uLL )
        lpMultiByteStr = (CHAR *)*Src;
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
      cereal::Exception::Exception(
        (cereal::Exception *)pExceptionObject,
        "String conversion failed to convert a non-empty Unicode string to ANSI.");
      throw (cereal::Exception *)pExceptionObject;
    }
  }
  return Src;
}
