/*
 * XREFs of ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C0115E68
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010F958 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01165CC (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C00235E4 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0062EAC (WPP_RECORDER_SF_LL_ea_1C0062EAC.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013AAA8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisClearTransientBindFailuresAboveThisFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2)
{
  __int64 m_numElements; // r15
  bool v5; // bp
  unsigned __int64 v6; // rbx
  unsigned int v7; // r8d
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // r14
  NDIS_BIND_FILTER_LINK *value; // rdi
  unsigned int m_unbindReasons; // r8d
  __int64 v11; // rbp
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v13; // r14
  NDIS_BIND_PROTOCOL_LINK *v14; // rdi
  unsigned int v15; // r8d
  int v16; // edx
  bool v17; // cf
  char v18[8]; // [rsp+30h] [rbp-E8h]
  char v19[160]; // [rsp+40h] [rbp-D8h] BYREF

  m_numElements = a1->Bindings.Filters.m_numElements;
  v5 = 0;
  v6 = 0LL;
  v7 = a1->Bindings.Filters.m_numElements;
  while ( v6 != m_numElements )
  {
    if ( v6 >= v7 )
LABEL_30:
      __fastfail(5u);
    p = a1->Bindings.Filters._p;
    if ( v5 )
    {
      value = p[v6].__ptr_.__value_;
      m_unbindReasons = value->BindState.m_unbindReasons;
      value->BindState.m_unbindReasons = m_unbindReasons & 0xFFFBFFE3;
      if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFFBFFE3) != 0) || !value->BindState.Miniport )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v18 = m_unbindReasons & 0xFFFBFFE3;
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            m_unbindReasons,
            *(_QWORD *)v18);
        }
        value->BindState.Miniport->BindEngine.m_isDirty = 1;
        memset(v19, 0, sizeof(v19));
        if ( (unsigned __int8)byte_1C00F5443 >= 4u )
        {
          ndisGetBindLinkNameForTracing(p[v6].__ptr_.__value_, (struct NDIS_PNPTRACE_LOCALS *)v19);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v16,
              0x1Cu,
              0x16u,
              (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
              *(unsigned __int16 **)&v19[8],
              *(_QWORD *)v19);
        }
      }
      v7 = a1->Bindings.Filters.m_numElements;
    }
    else
    {
      v5 = p[v6].__ptr_.__value_ == a2;
    }
    ++v6;
  }
  v11 = a1->Bindings.Protocols.m_numElements;
  for ( i = 0LL; i != v11; ++i )
  {
    if ( i >= a1->Bindings.Protocols.m_numElements )
      goto LABEL_30;
    v13 = a1->Bindings.Protocols._p;
    v14 = v13[i].__ptr_.__value_;
    v15 = v14->BindState.m_unbindReasons;
    v14->BindState.m_unbindReasons = v15 & 0xFFFBFFE3;
    if ( (v15 != 0) != ((v15 & 0xFFFBFFE3) != 0) || !v14->BindState.Miniport )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v18 = v15 & 0xFFFBFFE3;
        WPP_RECORDER_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xEu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          v15,
          *(_QWORD *)v18);
      }
      v17 = (unsigned __int8)byte_1C00F5443 < 4u;
      v14->BindState.Miniport->BindEngine.m_isDirty = 1;
      if ( !v17 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v13[i].__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_,
          0x1Cu,
          0x17u,
          (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
          &v13[i].__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_->Length,
          v13[i].__ptr_.__value_->BindState.Miniport);
    }
  }
}
