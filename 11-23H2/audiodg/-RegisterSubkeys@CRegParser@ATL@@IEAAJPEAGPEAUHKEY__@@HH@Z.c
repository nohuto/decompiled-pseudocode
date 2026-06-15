/*
 * XREFs of ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14009360C
 * Callers:
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x140093254 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14009360C (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x14002F140 (_alloca_probe.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140090CA8 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?AtlHresultFromWin32@ATL@@YAJK@Z @ 0x1400912A8 (-AtlHresultFromWin32@ATL@@YAJK@Z.c)
 *     ?CanForceRemoveKey@CRegParser@ATL@@IEAAHPEBG@Z @ 0x1400912C0 (-CanForceRemoveKey@CRegParser@ATL@@IEAAHPEBG@Z.c)
 *     ?Close@CRegKey@ATL@@QEAAJXZ @ 0x140091490 (-Close@CRegKey@ATL@@QEAAJXZ.c)
 *     ?Create@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAK@Z @ 0x1400914C0 (-Create@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAK@Z.c)
 *     ?DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x140091FD4 (-DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?HasSubKeys@CRegParser@ATL@@IEAAHPEAUHKEY__@@@Z @ 0x140092110 (-HasSubKeys@CRegParser@ATL@@IEAAHPEAUHKEY__@@@Z.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140092274 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z @ 0x14009242C (-Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z.c)
 *     ?RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x140093158 (-RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14009360C (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140093E84 (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z @ 0x140093F64 (-StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CRegParser::RegisterSubkeys(
        ATL::CRegParser *this,
        unsigned __int16 *a2,
        HKEY a3,
        int a4,
        int a5)
{
  int v5; // r15d
  int v9; // esi
  int Token; // ebx
  int v11; // r12d
  ATL::CRegParser *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned __int16 *v16; // r9
  int v17; // eax
  __int64 v18; // rax
  int v19; // esi
  int v20; // r15d
  int v21; // eax
  ATL::CRegParser *v22; // rcx
  __int64 v23; // rax
  int v24; // ecx
  int HasSubKeys; // esi
  unsigned int v27; // [rsp+20h] [rbp-E0h]
  HKEY hKey; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  HKEY v32[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v33[264]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR ValueName[4096]; // [rsp+290h] [rbp+190h] BYREF

  v5 = a4;
  v9 = 0;
  memset(v32, 0, 24);
  Token = ATL::CRegParser::NextToken(this, a2);
  if ( Token < 0 || *a2 == 125 )
    goto LABEL_86;
  while ( 1 )
  {
    v11 = 1;
    LOBYTE(v9) = lstrcmpiW(a2, L"Delete") == 0;
    if ( lstrcmpiW(a2, L"ForceRemove") && !v9 )
      goto LABEL_16;
    Token = ATL::CRegParser::NextToken(this, a2);
    if ( Token < 0 )
      goto LABEL_86;
    if ( !v5 )
      goto LABEL_16;
    hKey = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    if ( ATL::CRegParser::StrChrW(a2, 0x5Cu) )
      break;
    if ( (unsigned int)ATL::CRegParser::CanForceRemoveKey(v12, a2) )
    {
      hKey = a3;
      ATL::CRegKey::RecurseDeleteKey(&hKey, a2);
      hKey = 0LL;
    }
    if ( v9 )
    {
      Token = ATL::CRegParser::NextToken(this, a2);
      if ( Token < 0 )
        goto LABEL_88;
      v13 = ATL::CRegParser::SkipAssignment(this, a2);
      Token = v13;
      goto LABEL_13;
    }
    ATL::CRegKey::Close(&hKey);
LABEL_16:
    if ( !lstrcmpiW(a2, L"NoRemove") )
    {
      v11 = 0;
      Token = ATL::CRegParser::NextToken(this, a2);
      if ( Token < 0 )
        goto LABEL_86;
    }
    if ( !lstrcmpiW(a2, L"Val") )
    {
      Token = ATL::CRegParser::NextToken(this, ValueName);
      if ( Token < 0 )
        goto LABEL_86;
      Token = ATL::CRegParser::NextToken(this, a2);
      if ( Token < 0 )
        goto LABEL_86;
      if ( *a2 != 61 )
        goto LABEL_85;
      if ( !v5 )
      {
        if ( !a5 && v11 )
        {
          hKey = 0LL;
          v30 = 0LL;
          v31 = 0LL;
          v14 = ATL::CRegKey::Open(&hKey, a3, 0LL, 0x20006u);
          if ( v14 || (v14 = RegDeleteValueW(hKey, ValueName), (v14 & 0xFFFFFFFD) != 0) )
          {
LABEL_87:
            Token = ATL::AtlHresultFromWin32(v14);
LABEL_88:
            ATL::CRegKey::Close(&hKey);
            goto LABEL_86;
          }
          ATL::CRegKey::Close(&hKey);
        }
        v15 = ATL::CRegParser::SkipAssignment(this, a2);
        goto LABEL_30;
      }
      v30 = 0LL;
      v31 = 0LL;
      hKey = a3;
      v13 = ATL::CRegParser::AddValue(this, &hKey, ValueName, a2);
      Token = v13;
      hKey = 0LL;
LABEL_13:
      if ( v13 < 0 )
        goto LABEL_88;
      ATL::CRegKey::Close(&hKey);
      goto LABEL_40;
    }
    if ( ATL::CRegParser::StrChrW(a2, 0x5Cu) )
      goto LABEL_85;
    if ( v5 )
    {
      if ( (unsigned int)ATL::CRegKey::Open(v32, a3, a2, 0x2001Fu) )
      {
        if ( (unsigned int)ATL::CRegKey::Open(v32, a3, a2, 0x20019u) )
        {
          v17 = ATL::CRegKey::Create(v32, a3, a2, v16, v27);
          if ( v17 )
          {
LABEL_89:
            v24 = v17;
            goto LABEL_69;
          }
        }
      }
      Token = ATL::CRegParser::NextToken(this, a2);
      if ( Token < 0 )
        goto LABEL_86;
      if ( *a2 == 61 )
      {
        Token = ATL::CRegParser::AddValue(this, v32, 0LL, a2);
        if ( Token < 0 )
          goto LABEL_86;
      }
LABEL_40:
      if ( *a2 != 123 )
        goto LABEL_81;
      v18 = -1LL;
      do
        ++v18;
      while ( a2[v18] );
      if ( v18 != 1 )
        goto LABEL_81;
      Token = ATL::CRegParser::RegisterSubkeys(this, a2, v32[0], v5, 0);
      if ( Token < 0 )
        goto LABEL_86;
      v15 = ATL::CRegParser::NextToken(this, a2);
LABEL_30:
      Token = v15;
      if ( v15 < 0 )
        goto LABEL_86;
      goto LABEL_81;
    }
    if ( a5 )
      v19 = 2;
    else
      v19 = ATL::CRegKey::Open(v32, a3, a2, 0x20019u);
    v20 = 1;
    if ( !v19 )
      v20 = a5;
    v21 = _o_wcsncpy_s(v33, 260LL, a2, -1LL);
    if ( v21 )
    {
      if ( v21 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v21 == 22 || v21 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v21 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
    Token = ATL::CRegParser::NextToken(this, a2);
    if ( Token < 0 )
      goto LABEL_86;
    Token = ATL::CRegParser::SkipAssignment(this, a2);
    v22 = 0LL;
    if ( Token < 0 )
      goto LABEL_86;
    if ( *a2 == 123 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a2[v23] );
      if ( v23 == 1 )
      {
        Token = ATL::CRegParser::RegisterSubkeys(this, a2, v32[0], 0, v20);
        if ( Token < 0 && !v20 )
          goto LABEL_86;
        Token = ATL::CRegParser::NextToken(this, a2);
        if ( Token < 0 )
          goto LABEL_86;
      }
    }
    if ( v19 != 2 )
    {
      if ( v19 )
      {
        if ( !a5 )
        {
          v24 = v19;
LABEL_69:
          Token = ATL::AtlHresultFromWin32(v24);
          goto LABEL_86;
        }
      }
      else if ( a5 && (unsigned int)ATL::CRegParser::HasSubKeys(v22, v32[0]) )
      {
        if ( (unsigned int)ATL::CRegParser::CanForceRemoveKey(v22, v33) && v11 )
          ATL::CRegKey::RecurseDeleteKey(v32, v33);
      }
      else
      {
        HasSubKeys = ATL::CRegParser::HasSubKeys(v22, v32[0]);
        v17 = ATL::CRegKey::Close(v32);
        if ( v17 )
          goto LABEL_89;
        if ( v11 && !HasSubKeys )
        {
          v30 = 0LL;
          v31 = 0LL;
          hKey = a3;
          v14 = ATL::CRegKey::DeleteSubKey((ATL::CRegKey *)&hKey, v33);
          hKey = 0LL;
          if ( v14 )
            goto LABEL_87;
          ATL::CRegKey::Close(&hKey);
        }
      }
    }
    v5 = a4;
LABEL_81:
    if ( *a2 == 125 )
      goto LABEL_86;
    v9 = 0;
  }
  ATL::CRegKey::Close(&hKey);
LABEL_85:
  Token = -2147352567;
LABEL_86:
  ATL::CRegKey::Close(v32);
  return (unsigned int)Token;
}
