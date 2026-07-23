/*
 * XREFs of sub_140AAA374 @ 0x140AAA374
 * Callers:
 *     sub_140AA8ED0 @ 0x140AA8ED0 (sub_140AA8ED0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sprintf_s @ 0x1403E7020 (sprintf_s.c)
 *     sub_140AAA418 @ 0x140AAA418 (sub_140AAA418.c)
 */

__int64 __fastcall sub_140AAA374(int a1)
{
  KSPIN_LOCK i; // rbx
  char DstBuf[160]; // [rsp+20h] [rbp-B8h] BYREF

  sub_140AAA418("\a\a\a<?xml>\a<BP>");
  sub_140AAA418("\r\n<INSTANCE CLASSNAME=\"BLUESCREEN\">");
  sprintf_s(DstBuf, 0xA0uLL, "\r\n<PROPERTY NAME=\"STOPCODE\" TYPE=\"string\"><VALUE>\"0x%0X\"</VALUE></PROPERTY>", a1);
  sub_140AAA418(DstBuf);
  for ( i = qword_140D01468[5]; i; i = *(_QWORD *)(i + 16) )
    sub_140AAA418(*(_QWORD *)(i + 8));
  return sub_140AAA418("\r\n</INSTANCE>\r\n</BP>\a");
}
