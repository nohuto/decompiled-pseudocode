/*
 * XREFs of ?ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x180162018
 * Callers:
 *     ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH@Z @ 0x180161534 (-ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     wcscmp_0 @ 0x180075994 (wcscmp_0.c)
 *     ?LogError@@YAXPEBGZZ @ 0x180100DC4 (-LogError@@YAXPEBGZZ.c)
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x180160DF8 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x180162BD8 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParsePhoneCallInfo(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        struct ResourceConsumer **a3)
{
  int EndElement; // ebx
  int v7; // edi
  struct ResourceConsumer *v8; // rax
  wchar_t String1[264]; // [rsp+40h] [rbp-248h] BYREF

  memset_0(String1, 0, 0x20AuLL);
  EndElement = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"CallState", String1, 0x105u);
  if ( EndElement >= 0 )
  {
    if ( !wcscmp_0(String1, L"Active") )
    {
      v7 = 0;
    }
    else
    {
      if ( wcscmp_0(String1, L"Hold") )
      {
        EndElement = -2147024809;
        LogError(L"Invalid call state %s", String1);
        return (unsigned int)EndElement;
      }
      v7 = 1;
    }
    EndElement = CConstraintModelXMLParser::FindEndElement(this, a2, L"PhoneCall");
    if ( EndElement >= 0 )
    {
      v8 = (struct ResourceConsumer *)operator new(0x18uLL);
      if ( v8 )
      {
        *((_DWORD *)v8 + 2) = 0;
        *(_QWORD *)v8 = &PhoneCallResourceConsumer::`vftable';
        *((_DWORD *)v8 + 4) = v7;
        *a3 = v8;
      }
      else
      {
        *a3 = 0LL;
        return (unsigned int)-2147024882;
      }
    }
  }
  return (unsigned int)EndElement;
}
