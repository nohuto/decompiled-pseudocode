/*
 * XREFs of ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x1803E6520
 * Callers:
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x1803E6050 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803E70C4 (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z @ 0x18018D6DC (-SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::EnsureEnterpriseLayoutFilePath(TaskbarLayoutPolicyManager *this)
{
  __int64 v2; // rsi
  LSTATUS ValueW; // eax
  signed int v4; // ecx
  signed int v5; // edi
  DWORD v6; // ebx
  bool v7; // zf
  LSTATUS v8; // eax
  bool v9; // zf
  int String; // ebx
  __int64 v11; // rdx
  unsigned int pvData; // [rsp+48h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD pdwType; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int16 v16[264]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+290h] [rbp+188h]

  pdwType = 0;
  pcbData = 4;
  v2 = -2147483647LL;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Policies\\Microsoft\\Windows\\Explorer",
             L"LockedStartLayout",
             0x10000012u,
             &pdwType,
             &pvData,
             &pcbData);
  v4 = ValueW;
  LOWORD(v5) = 13;
  if ( ValueW )
  {
    if ( ValueW == 234 )
    {
      LOWORD(v4) = 13;
    }
    else if ( ValueW <= 0 )
    {
LABEL_13:
      v6 = pcbData;
      goto LABEL_14;
    }
    goto LABEL_12;
  }
  LOWORD(v4) = 13;
  if ( pdwType != 4 )
  {
    if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
    {
      v4 = 0;
      v6 = 0;
      v7 = (_WORD)pvData == 49;
      goto LABEL_5;
    }
    goto LABEL_12;
  }
  if ( pvData > 1 )
  {
LABEL_12:
    v4 = (unsigned __int16)v4 | 0x80070000;
    goto LABEL_13;
  }
  v4 = 0;
  v6 = 0;
  v7 = pvData == 1;
LABEL_5:
  LOBYTE(v6) = v7;
LABEL_14:
  if ( v4 >= 0 && v6 )
    goto LABEL_29;
  pcbData = 0;
  pdwType = 4;
  v2 = -2147483646LL;
  v8 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Policies\\Microsoft\\Windows\\Explorer",
         L"LockedStartLayout",
         0x10000012u,
         &pcbData,
         &pvData,
         &pdwType);
  if ( !v8 )
  {
    if ( pcbData == 4 )
    {
      if ( pvData <= 1 )
      {
        v5 = 0;
        v6 = 0;
        v9 = pvData == 1;
LABEL_20:
        LOBYTE(v6) = v9;
        goto LABEL_27;
      }
    }
    else if ( pdwType == 4 && (unsigned __int16)(pvData - 48) <= 1u )
    {
      v5 = 0;
      v6 = 0;
      v9 = (_WORD)pvData == 49;
      goto LABEL_20;
    }
LABEL_26:
    v5 = (unsigned __int16)v5 | 0x80070000;
    goto LABEL_27;
  }
  if ( v8 == 234 )
    goto LABEL_26;
  v5 = v8;
  if ( v8 > 0 )
    goto LABEL_26;
LABEL_27:
  if ( v5 < 0 || !v6 )
    return 2147943568LL;
LABEL_29:
  String = SHRegGetStringEx(
             (HKEY)v2,
             L"SOFTWARE\\Policies\\Microsoft\\Windows\\Explorer",
             L"StartLayoutFile",
             2u,
             v16,
             0x104u);
  if ( String < 0 )
  {
    v11 = 571LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)String);
    return (unsigned int)String;
  }
  String = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
             (__int64)this + 32,
             v16,
             0xFFFFFFFFFFFFFFFFuLL);
  if ( String < 0 )
  {
    v11 = 572LL;
    goto LABEL_31;
  }
  return 0LL;
}
