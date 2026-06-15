/*
 * XREFs of ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140090CA8
 * Callers:
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14009360C (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _alloca_probe @ 0x14002F140 (_alloca_probe.c)
 *     ??$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z @ 0x14007AA2C (--$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x14007AA60 (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ?AllocateHeap@?$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAX_K@Z @ 0x140091148 (-AllocateHeap@-$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAX_K@Z.c)
 *     ?AtlHresultFromWin32@ATL@@YAJK@Z @ 0x1400912A8 (-AtlHresultFromWin32@ATL@@YAJK@Z.c)
 *     ?ChToByte@CRegParser@ATL@@KAEG@Z @ 0x140091320 (-ChToByte@CRegParser@ATL@@KAEG@Z.c)
 *     ?FreeHeap@?$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ @ 0x1400920C4 (-FreeHeap@-$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140092274 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?SetMultiStringValue@CRegKey@ATL@@QEAAJPEBG0@Z @ 0x140093E14 (-SetMultiStringValue@CRegKey@ATL@@QEAAJPEBG0@Z.c)
 *     ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x140093F20 (-SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ.c)
 *     ?VTFromRegType@CRegParser@ATL@@KAHPEBGAEAG@Z @ 0x1400943C0 (-VTFromRegType@CRegParser@ATL@@KAHPEBGAEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CRegParser::AddValue(
        ATL::CRegParser *this,
        HKEY *a2,
        const unsigned __int16 *a3,
        unsigned __int16 *a4)
{
  const WCHAR *v4; // r13
  HKEY *v5; // r12
  ATL::CRegParser *v6; // r15
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rdi
  int v10; // edi
  unsigned __int64 v11; // rax
  BYTE *v12; // rdi
  WCHAR *i; // rsi
  const WCHAR *v14; // rax
  LSTATUS v15; // esi
  HRESULT v16; // edi
  __int64 v17; // rdi
  DWORD cbData; // r14d
  size_t v19; // rsi
  unsigned __int64 v20; // rax
  BYTE *v21; // rcx
  __int64 v22; // r9
  unsigned __int8 v23; // al
  unsigned int v24; // r11d
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // rdi
  int Token; // eax
  ULONG pulOut; // [rsp+30h] [rbp-2198h] BYREF
  BYTE Data[8]; // [rsp+38h] [rbp-2190h] BYREF
  ATL::CRegParser *v31; // [rsp+40h] [rbp-2188h] BYREF
  struct ATL::CRegKey *v32; // [rsp+48h] [rbp-2180h]
  const unsigned __int16 *v33; // [rsp+50h] [rbp-2178h]
  size_t v34; // [rsp+60h] [rbp-2168h]
  unsigned __int16 *v35; // [rsp+68h] [rbp-2160h]
  BYTE *lpData; // [rsp+70h] [rbp-2158h] BYREF
  _BYTE v37[264]; // [rsp+78h] [rbp-2150h] BYREF
  WCHAR sz[4096]; // [rsp+180h] [rbp-2048h] BYREF

  v4 = a3;
  v5 = a2;
  v6 = this;
  v31 = this;
  v32 = (struct ATL::CRegKey *)a2;
  v33 = a3;
  v35 = a4;
  v7 = 0;
  LOWORD(pulOut) = 0;
  result = ATL::CRegParser::NextToken(this, sz);
  if ( (int)result >= 0 )
  {
    if ( !(unsigned int)ATL::CRegParser::VTFromRegType(sz, (unsigned __int16 *)&pulOut) )
      return 2147614729LL;
    ATL::CRegParser::SkipWhiteSpace(v6);
    result = ATL::CRegParser::NextToken(v6, sz);
    if ( (int)result >= 0 )
    {
      if ( (unsigned __int16)pulOut == 8 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( sz[v27] );
        v15 = RegSetValueExW(*v5, v4, 0, 1u, (const BYTE *)sz, 2 * v27 + 2);
        goto LABEL_47;
      }
      if ( (unsigned __int16)pulOut != 17 )
      {
        if ( (unsigned __int16)pulOut == 19 )
        {
          pulOut = 0;
          v31 = 0LL;
          v16 = VarUI4FromStr(sz, 0, 0, &pulOut);
          if ( v16 < 0 )
          {
            ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>((_QWORD **)&v31);
            return (unsigned int)v16;
          }
          *(_DWORD *)Data = pulOut;
          v15 = RegSetValueExW(*v5, v4, 0, 4u, Data, 4u);
          ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>((_QWORD **)&v31);
        }
        else
        {
          if ( (unsigned __int16)pulOut != 16392 )
          {
LABEL_49:
            Token = ATL::CRegParser::NextToken(v6, v35);
            if ( Token < 0 )
              return (unsigned int)Token;
            return v7;
          }
          v9 = -1LL;
          do
            ++v9;
          while ( sz[v9] );
          v10 = v9 + 2;
          lpData = 0LL;
          try
          {
            v11 = ATL::AtlMultiplyThrow<unsigned __int64>(v10, 2uLL);
            if ( v11 <= 0x100 )
            {
              v12 = v37;
              lpData = v37;
            }
            else
            {
              ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::AllocateHeap(&lpData, v11);
              v12 = lpData;
            }
          }
          catch ( ... )
          {
            v7 = 0;
            v12 = lpData;
            v6 = v31;
            v5 = (HKEY *)v32;
            v4 = v33;
          }
          if ( v12 )
          {
            for ( i = sz; *i; v12 += 2 )
            {
              v14 = CharNextW(i);
              if ( *i == 92 && *v14 == 48 )
              {
                *(_WORD *)v12 = 0;
                i = CharNextW(v14);
              }
              else
              {
                *(_WORD *)v12 = *i++;
              }
            }
            *(_WORD *)v12 = 0;
            *((_WORD *)v12 + 1) = 0;
            v15 = ATL::CRegKey::SetMultiStringValue((ATL::CRegKey *)v5, v4, (const unsigned __int16 *)lpData);
            v12 = lpData;
          }
          else
          {
            v15 = 14;
          }
          if ( v12 != v37 )
            goto LABEL_25;
        }
        goto LABEL_47;
      }
      v17 = -1LL;
      do
        ++v17;
      while ( sz[v17] );
      *(_DWORD *)Data = v17;
      if ( (v17 & 1) == 0 )
      {
        cbData = (int)v17 / 2;
        pulOut = (int)v17 / 2;
        lpData = 0LL;
        v19 = (int)v17 / 2;
        v34 = v19;
        try
        {
          v20 = ATL::AtlMultiplyThrow<unsigned __int64>((int)v17 / 2, 1uLL);
          if ( v20 <= 0x100 )
          {
            v21 = v37;
            lpData = v37;
          }
          else
          {
            ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::AllocateHeap(&lpData, v20);
            v21 = lpData;
          }
        }
        catch ( ... )
        {
          v7 = 0;
          LODWORD(v17) = *(_DWORD *)Data;
          cbData = pulOut;
          v21 = lpData;
          v19 = v34;
          v6 = v31;
          v5 = (HKEY *)v32;
          v4 = v33;
        }
        if ( v21 )
        {
          memset_0(v21, 0, v19);
          if ( (int)v17 > 0 )
          {
            v22 = 0LL;
            do
            {
              v23 = ATL::CRegParser::ChToByte(sz[v22]);
              lpData[(unsigned __int64)v24 >> 1] |= v23 << (4 - 4 * (v24 & 1));
              v22 = v25 + 1;
            }
            while ( v22 < v26 );
          }
          v15 = RegSetValueExW(*v5, v4, 0, 3u, lpData, cbData);
          if ( lpData != v37 )
LABEL_25:
            ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::FreeHeap(&lpData);
LABEL_47:
          if ( v15 )
            return ATL::AtlHresultFromWin32(v15);
          goto LABEL_49;
        }
        ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::FreeHeap(&lpData);
      }
      return 2147500037LL;
    }
  }
  return result;
}
