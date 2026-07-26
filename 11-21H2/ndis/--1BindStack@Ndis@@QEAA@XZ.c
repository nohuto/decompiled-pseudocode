/*
 * XREFs of ??1BindStack@Ndis@@QEAA@XZ @ 0x1C0112C00
 * Callers:
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C00649C8 (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0112B04 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C003260C (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 *     ??_G?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C0032638 (--_G-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@.c)
 */

void __fastcall Ndis::BindStack::~BindStack(Ndis::BindStack *this, unsigned int a2)
{
  void **p; // rcx
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v4; // rcx
  unsigned int m_numElements; // edi
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v6; // rcx
  unsigned int v7; // edi

  p = this->Miniport.m_bindContext._p;
  if ( p )
  {
    ExFreePoolWithTag(p, 0x7272414Bu);
    this->Miniport.m_bindContext._p = 0LL;
    this->Miniport.m_bindContext.m_numElements = 0;
    this->Miniport.m_bindContext.m_bufferSize = 0;
  }
  v4 = this->Filters._p;
  if ( v4 )
  {
    m_numElements = this->Filters.m_numElements;
    if ( m_numElements )
    {
      do
        wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
          &this->Filters._p[--m_numElements].__ptr_.__value_,
          a2);
      while ( m_numElements );
      v4 = this->Filters._p;
    }
    ExFreePoolWithTag(v4, 0x7272414Bu);
    this->Filters._p = 0LL;
    this->Filters.m_numElements = 0;
    this->Filters.m_bufferSize = 0;
  }
  v6 = this->Protocols._p;
  if ( v6 )
  {
    v7 = this->Protocols.m_numElements;
    if ( v7 )
    {
      do
        wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'(
          &this->Protocols._p[--v7].__ptr_.__value_,
          a2);
      while ( v7 );
      v6 = this->Protocols._p;
    }
    ExFreePoolWithTag(v6, 0x7272414Bu);
    this->Protocols._p = 0LL;
    this->Protocols.m_numElements = 0;
    this->Protocols.m_bufferSize = 0;
  }
}
