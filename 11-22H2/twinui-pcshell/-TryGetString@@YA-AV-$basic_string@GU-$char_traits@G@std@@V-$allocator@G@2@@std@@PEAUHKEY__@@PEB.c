/*
 * XREFs of ?TryGetString@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHKEY__@@PEBG1@Z @ 0x1801802EC
 * Callers:
 *     ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x18017FF70 (-CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@.c)
 *     ??R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z @ 0x18048A1A4 (--R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1802CED4A (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TryGetString(_QWORD *pvData, HKEY hkey, LPCWSTR lpSubKey, LPCWSTR lpValue)
{
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  PVOID v11; // rax
  unsigned int ValueW; // eax
  _QWORD *v13; // rax
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rax
  unsigned int pdwType; // [rsp+20h] [rbp-48h]
  DWORD pcbData[4]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *pvData = 0LL;
  pvData[2] = 0LL;
  pvData[3] = 7LL;
  *(_WORD *)pvData = 0;
  pcbData[1] = 1;
  pcbData[0] = 0;
  if ( !RegGetValueW(hkey, lpSubKey, lpValue, 2u, 0LL, 0LL, pcbData) )
  {
    v9 = (unsigned __int64)pcbData[0] >> 1;
    if ( v9 > pvData[2] )
    {
      std::wstring::append(pvData, v9 - pvData[2], 0LL);
    }
    else
    {
      v10 = pvData;
      if ( pvData[3] >= 8uLL )
        v10 = (_QWORD *)*pvData;
      pvData[2] = v9;
      *((_WORD *)v10 + v9) = 0;
    }
    v11 = pvData;
    if ( pvData[3] >= 8uLL )
      v11 = (PVOID)*pvData;
    ValueW = RegGetValueW(hkey, lpSubKey, lpValue, 2u, 0LL, v11, pcbData);
    if ( ValueW )
      wil::details::in1diag3::Throw_Win32(
        retaddr,
        (void *)0x3C,
        (unsigned int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\RegistryHelpers.h",
        (const char *)ValueW,
        pdwType);
    v13 = pvData;
    if ( pvData[3] >= 8uLL )
      v13 = (_QWORD *)*pvData;
    v14 = -1LL;
    do
      ++v14;
    while ( *((_WORD *)v13 + v14) );
    if ( v14 > pvData[2] )
    {
      std::wstring::append(pvData, v14 - pvData[2], 0LL);
    }
    else
    {
      v15 = pvData;
      if ( pvData[3] >= 8uLL )
        v15 = (_QWORD *)*pvData;
      pvData[2] = v14;
      *((_WORD *)v15 + v14) = 0;
    }
  }
  return pvData;
}
