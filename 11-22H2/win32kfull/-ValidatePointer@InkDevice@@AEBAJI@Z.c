/*
 * XREFs of ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C02449A0
 * Callers:
 *     ?PreProcessInkFeedbackCommand_NoLock@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0243F80 (-PreProcessInkFeedbackCommand_NoLock@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0040C00 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0226010 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0227D10 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0241F60 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 */

__int64 __fastcall InkDevice::ValidatePointer(
        InkDevice *this,
        unsigned int a2,
        const struct tagPOINTER_INFO **a3,
        __int64 a4)
{
  unsigned int PointerInfoByPointerId; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  const char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _BYTE v15[8]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v16[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+58h] [rbp-28h] BYREF

  *(_QWORD *)v16 = 0LL;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId(
                             (Pointer *)a2,
                             (const struct tagPOINTER_INFO **)v16,
                             a3,
                             a4);
  if ( (PointerInfoByPointerId & 0x80000000) != 0 )
  {
    if ( (unsigned int)dword_1C03540E0 > 2 )
    {
      v8 = "Wrong thread (or invalid pointer id)";
LABEL_25:
      v16[0] = PointerInfoByPointerId;
      goto LABEL_26;
    }
    return PointerInfoByPointerId;
  }
  v9 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v16 + 16LL), 19) + 472);
  if ( *(_DWORD *)(v9 + 24) != 5 )
  {
    PointerInfoByPointerId = -1073741811;
    if ( (unsigned int)dword_1C03540E0 > 2 )
    {
      v15[0] = *(_BYTE *)(v9 + 24);
      v17 = (__int64)"Not an integrated pen device";
      v16[0] = -1073741811;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
        3221225485LL,
        byte_1C031DD29,
        v6,
        v7,
        (__int64)v16,
        (void **)&v17,
        (__int64)v15);
    }
    return PointerInfoByPointerId;
  }
  v10 = *(_QWORD *)(v9 + 16);
  v11 = *(_DWORD *)(v10 + 1968);
  if ( v11 != 0x80000000 && v11 != 11 && v11 != 13 )
  {
    PointerInfoByPointerId = -1073741811;
    if ( (unsigned int)dword_1C03540E0 <= 2 )
      return PointerInfoByPointerId;
    v8 = "Pointer device not mapped to the integrated display";
    v16[0] = -1073741811;
    goto LABEL_26;
  }
  v12 = *(_QWORD *)(v10 + 456);
  if ( *(unsigned __int16 *)(v12 + 112) == *((_DWORD *)this + 34)
    && *(unsigned __int16 *)(v12 + 110) == *((_DWORD *)this + 33) )
  {
    v13 = *(_QWORD **)(v9 + 392);
    if ( !v13 || !*v13 )
      return PointerInfoByPointerId;
    if ( !byte_1C035F8E0 )
    {
      if ( (unsigned int)dword_1C03540E0 > 5 && tlgKeywordOn((__int64)&dword_1C03540E0, 0x400000000000LL) )
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C03540E0,
          (unsigned __int8 *)dword_1C031DF6E,
          0LL,
          0LL,
          2u,
          &v18);
      byte_1C035F8E0 = 1;
    }
    PointerInfoByPointerId = -1073741811;
    if ( (unsigned int)dword_1C03540E0 <= 2 )
      return PointerInfoByPointerId;
    v8 = "The pointer device contains calibration data";
    v16[0] = -1073741811;
LABEL_26:
    v17 = (__int64)v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1C03540E0,
      byte_1C031D70B,
      v6,
      v7,
      (__int64)v16,
      (void **)&v17);
    return PointerInfoByPointerId;
  }
  PointerInfoByPointerId = -1073741823;
  if ( (unsigned int)dword_1C03540E0 > 2 )
  {
    v8 = "Pointer device not supported by the ink device";
    goto LABEL_25;
  }
  return PointerInfoByPointerId;
}
