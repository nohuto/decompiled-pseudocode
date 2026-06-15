/*
 * XREFs of ??0StreamResourceConsumer@@QEAA@PEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180028998
 * Callers:
 *     ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJPEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x1800287D0 (-GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJPEBG0KU_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18015B980 (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004CB1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

StreamResourceConsumer *__fastcall StreamResourceConsumer::StreamResourceConsumer(
        StreamResourceConsumer *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        struct _GUID *a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6)
{
  const unsigned __int16 *v7; // r11

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &StreamResourceConsumer::`vftable';
  *((_DWORD *)this + 235) = a4;
  *((struct _GUID *)this + 59) = *a5;
  *((_DWORD *)this + 240) = a6;
  StringCchCopyW((unsigned __int16 *)this + 8, 0xC9uLL, a2);
  StringCchCopyW((unsigned __int16 *)this + 209, 0x105uLL, v7);
  return this;
}
