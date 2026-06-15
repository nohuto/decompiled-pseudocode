/*
 * XREFs of ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x180162D80
 * Callers:
 *     ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH@Z @ 0x180161584 (-ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH.c)
 * Callees:
 *     ??0StreamResourceConsumer@@QEAA@PEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000FF0C (--0StreamResourceConsumer@@QEAA@PEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     wcscmp_0 @ 0x1800759C4 (wcscmp_0.c)
 *     ?LogError@@YAXPEBGZZ @ 0x180100E14 (-LogError@@YAXPEBGZZ.c)
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x180160E48 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x180162C28 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseStreamIDInfo(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        struct ResourceConsumer **a3)
{
  int EndElement; // ebx
  unsigned int v7; // r12d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v8; // r14d
  wchar_t *v9; // rax
  struct ResourceConsumer *v10; // rax
  GUID pclsid; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t *EndPtr[2]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t String[16]; // [rsp+60h] [rbp-A0h] BYREF
  OLECHAR sz[40]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v16[208]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v17[264]; // [rsp+270h] [rbp+170h] BYREF

  memset_0(v16, 0, 0x192uLL);
  memset_0(v17, 0, 0x20AuLL);
  pclsid = GUID_00000000_0000_0000_0000_000000000000;
  EndElement = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"HWID", v16, 0xC9u);
  if ( EndElement >= 0 )
  {
    EndElement = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"TopologyName", v17, 0x105u);
    if ( EndElement >= 0 )
    {
      EndElement = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"PinId", String, 0xBu);
      if ( EndElement >= 0 )
      {
        v7 = wcstoul(String, EndPtr, 10);
        if ( *EndPtr[0] || EndPtr[0] == String )
          return (unsigned int)-2147024809;
        EndElement = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"Mode", sz, 0x28u);
        if ( EndElement >= 0 )
        {
          EndElement = CLSIDFromString(sz, &pclsid);
          if ( EndElement >= 0 )
          {
            EndElement = CConstraintModelXMLParser::ParseSimpleElement(
                           this,
                           a2,
                           L"ConnectorType",
                           (unsigned __int16 *)EndPtr,
                           9u);
            if ( EndElement >= 0 )
            {
              if ( !wcscmp_0((const wchar_t *)EndPtr, L"Host") )
              {
                v8 = eHostProcessConnector;
              }
              else if ( !wcscmp_0((const wchar_t *)EndPtr, L"Offload") )
              {
                v8 = eOffloadConnector;
              }
              else
              {
                if ( wcscmp_0((const wchar_t *)EndPtr, L"Loopback") )
                {
                  EndElement = -2147024809;
                  LogError(L"Invalid connector type %s", EndPtr);
                  return (unsigned int)EndElement;
                }
                v8 = eLoopbackConnector;
              }
              EndElement = CConstraintModelXMLParser::FindEndElement(this, a2, L"Stream");
              if ( EndElement >= 0 )
              {
                v9 = (wchar_t *)operator new(0x3C8uLL);
                EndPtr[0] = v9;
                if ( !v9 )
                {
                  *a3 = 0LL;
                  return (unsigned int)-2147024882;
                }
                *(GUID *)EndPtr = pclsid;
                v10 = StreamResourceConsumer::StreamResourceConsumer(
                        (StreamResourceConsumer *)v9,
                        v16,
                        v17,
                        v7,
                        (struct _GUID *)EndPtr,
                        v8);
                *a3 = v10;
                if ( !v10 )
                  return (unsigned int)-2147024882;
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)EndElement;
}
