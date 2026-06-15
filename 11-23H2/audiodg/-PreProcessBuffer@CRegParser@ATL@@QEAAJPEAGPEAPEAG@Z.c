/*
 * XREFs of ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x140092488
 * Callers:
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x140093254 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x14007AA60 (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ??0CParseBuffer@CRegParser@ATL@@QEAA@H@Z @ 0x14008FDAC (--0CParseBuffer@CRegParser@ATL@@QEAA@H@Z.c)
 *     ?Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z @ 0x14009117C (-Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z.c)
 *     ?StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z @ 0x140093F64 (-StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z.c)
 *     ?StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z @ 0x140093FB8 (-StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CRegParser::PreProcessBuffer(
        ATL::CRegParser *this,
        unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  LPWSTR v4; // rbx
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned __int16 *v8; // rcx
  WCHAR v10; // ax
  LPWSTR v11; // rax
  const unsigned __int16 *v12; // rdx
  unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // r14
  __int64 v15; // rcx
  int v16; // eax
  const unsigned __int16 *v17; // rax
  __int64 v18; // r8
  int v19; // ebx
  const WCHAR *i; // rax
  _BYTE v21[8]; // [rsp+20h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-31h]
  _QWORD *v23; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int16 v24[32]; // [rsp+40h] [rbp-19h] BYREF

  v4 = a2;
  v6 = 0;
  if ( !a2 || !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  ATL::CRegParser::CParseBuffer::CParseBuffer((ATL::CRegParser::CParseBuffer *)v21, 2 * v7);
  v8 = (unsigned __int16 *)pv;
  if ( !pv )
  {
    CoTaskMemFree(0LL);
    return 2147942414LL;
  }
  *(_QWORD *)this = v4;
  v10 = *v4;
  if ( !*v4 )
  {
LABEL_30:
    pv = 0LL;
    *a3 = v8;
    goto LABEL_31;
  }
  while ( v10 != 37 )
  {
    v12 = v4;
LABEL_27:
    if ( !(unsigned int)ATL::CRegParser::CParseBuffer::Append((ATL::CRegParser::CParseBuffer *)v21, v12, 1) )
      goto LABEL_37;
LABEL_28:
    v4 = CharNextW(*(LPCWSTR *)this);
    *(_QWORD *)this = v4;
    v10 = *v4;
    if ( !*v4 )
    {
      v8 = (unsigned __int16 *)pv;
      goto LABEL_30;
    }
  }
  v11 = CharNextW(v4);
  *(_QWORD *)this = v11;
  if ( *v11 == 37 )
  {
    v12 = v11;
    goto LABEL_27;
  }
  v13 = ATL::CRegParser::StrChrW(v11, 0x25u);
  v14 = v13;
  if ( !v13 )
    goto LABEL_36;
  v15 = ((__int64)v13 - *(_QWORD *)this) >> 1;
  if ( v15 > 31 )
  {
    v6 = -2147467259;
    goto LABEL_31;
  }
  v16 = _o_wcsncpy_s(v24, 32LL, *(_QWORD *)this, (int)v15);
  if ( v16 )
  {
    if ( v16 == 12 )
      ATL::AtlThrowImpl(-2147024882);
    if ( v16 == 22 || v16 == 34 )
      ATL::AtlThrowImpl(-2147024809);
    if ( v16 != 80 )
      ATL::AtlThrowImpl(-2147467259);
  }
  v17 = ATL::CRegObject::StrFromMap(*((ATL::CRegObject **)this + 1), v24);
  if ( !v17 )
  {
LABEL_36:
    v6 = -2147352567;
    goto LABEL_31;
  }
  v23 = 0LL;
  v18 = -1LL;
  do
    ++v18;
  while ( v17[v18] );
  v19 = ATL::CRegParser::CParseBuffer::Append((ATL::CRegParser::CParseBuffer *)v21, v17, v18);
  ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v23);
  if ( v19 )
  {
    for ( i = *(const WCHAR **)this; i != v14; *(_QWORD *)this = i )
      i = CharNextW(i);
    goto LABEL_28;
  }
LABEL_37:
  v6 = -2147024882;
LABEL_31:
  CoTaskMemFree(pv);
  return v6;
}
