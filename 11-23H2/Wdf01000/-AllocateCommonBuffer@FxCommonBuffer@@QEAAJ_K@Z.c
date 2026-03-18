/*
 * XREFs of ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C0020304
 * Callers:
 *     imp_WdfCommonBufferCreate @ 0x1C001A4E0 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C001A680 (imp_WdfCommonBufferCreateWithConfig.c)
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C001AD04 (-AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAPEAXPEAT_LARGE_INTEGER@@@Z.c)
 *     WPP_IFR_SF_qi @ 0x1C001C060 (WPP_IFR_SF_qi.c)
 *     WPP_IFR_SF_qii @ 0x1C001C128 (WPP_IFR_SF_qii.c)
 */

__int64 __fastcall FxCommonBuffer::AllocateCommonBuffer(FxCommonBuffer *this, unsigned __int64 Length)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 result; // rax
  unsigned int v6; // esi
  unsigned __int64 m_Alignment; // rdx
  unsigned __int64 v8; // rcx
  _LARGE_INTEGER *p_m_BufferRawLA; // r14
  char *m_BufferRawVA; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 QuadPart; // r10
  _LARGE_INTEGER v13; // r8
  unsigned __int64 v14; // r8
  const void *_a2; // rax
  __int64 v16; // rdx
  unsigned int v17; // r8d
  const void *v18; // rax
  unsigned __int8 v19; // dl
  __int64 v20; // r8
  const void *ObjectHandleUnchecked; // rax
  __int64 v22; // r8
  __int64 v23; // r10

  m_Globals = this->m_Globals;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  v6 = result;
  if ( (int)result >= 0 )
  {
    m_Alignment = this->m_Alignment;
    this->m_Length = Length;
    if ( m_Alignment <= 0xFFF && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, m_Alignment, 0xBu) )
    {
      this->m_RawLength = Length;
      v8 = Length;
    }
    else
    {
      v8 = -1LL;
      if ( m_Alignment + Length >= Length )
        v8 = m_Alignment + Length;
      v6 = m_Alignment + Length < Length ? 0xC0000095 : 0;
      this->m_RawLength = v8;
      if ( m_Alignment + Length < Length )
      {
        _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qii(m_Globals, 2u, v17, 0xAu, WPP_FxCommonBuffer_cpp_Traceguids, _a2, Length, v16);
        FxVerifierDbgBreakPoint(m_Globals);
        return v6;
      }
    }
    p_m_BufferRawLA = &this->m_BufferRawLA;
    FxDmaEnabler::AllocateCommonBuffer(this->m_DmaEnabler, v8, &this->m_BufferRawVA, &this->m_BufferRawLA);
    m_BufferRawVA = (char *)this->m_BufferRawVA;
    if ( m_BufferRawVA )
    {
      v11 = this->m_Alignment;
      QuadPart = p_m_BufferRawLA->QuadPart;
      v13.QuadPart = ~v11 & (p_m_BufferRawLA->QuadPart + v11);
      this->m_BufferAlignedVA = (void *)(~v11 & (unsigned __int64)&m_BufferRawVA[v11]);
      this->m_BufferAlignedLA = v13;
      if ( v11 <= 0xFFF )
        return v6;
      if ( v13.QuadPart < QuadPart )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qii(m_Globals, 2u, v22, 0xBu, WPP_FxCommonBuffer_cpp_Traceguids, ObjectHandleUnchecked, v23, v22);
      }
      else
      {
        v14 = v13.QuadPart - QuadPart;
        if ( v14 <= 0xFFFFFFFF )
        {
          v6 = 0;
          this->m_BufferAlignedVA = &m_BufferRawVA[(unsigned int)v14];
          return v6;
        }
        v18 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qi(m_Globals, v19, v20, 0xCu, WPP_FxCommonBuffer_cpp_Traceguids, v18, v20);
      }
      FxVerifierDbgBreakPoint(m_Globals);
      return 3221225621LL;
    }
    else
    {
      this->m_Length = 0LL;
      result = 3221225626LL;
      this->m_RawLength = 0LL;
      this->m_BufferAlignedVA = 0LL;
      this->m_BufferAlignedLA.QuadPart = 0LL;
    }
  }
  return result;
}
