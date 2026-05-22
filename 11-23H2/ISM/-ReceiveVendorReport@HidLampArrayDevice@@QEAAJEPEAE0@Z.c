/*
 * XREFs of ?ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z @ 0x1800F1E94
 * Callers:
 *     ?ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z @ 0x1800EC6AC (-ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057640 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180065920 (memcpy_0.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800E990C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

__int64 __fastcall HidLampArrayDevice::ReceiveVendorReport(
        HidLampArrayDevice *this,
        char a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v12; // eax
  size_t v13; // rbp
  _BYTE *v14; // rax
  _BYTE *v15; // rsi
  unsigned int v16; // ebx
  signed int LastError; // eax
  unsigned __int8 v18; // bp
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  const WCHAR *v23; // [rsp+60h] [rbp+8h] BYREF
  const char *v24; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)dword_180266498 > 5 )
  {
    v23 = (const WCHAR *)((char *)this + 24);
    v24 = "Started";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)this,
      byte_18022483C,
      (__int64)a3,
      (__int64)a4,
      (const unsigned __int16 **)&v24,
      &v23);
  }
  *a3 = 0;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 72) + 16LL) )
    return 2147942487LL;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 73) + 16LL) )
    return 2147942487LL;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 74) + 16LL) )
    return 2147942487LL;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 75) + 16LL) )
    return 2147942487LL;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 76) + 16LL) )
    return 2147942487LL;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 77) + 16LL) )
    return 2147942487LL;
  v8 = *((_DWORD *)this + 158);
  v9 = 0LL;
  if ( !v8 )
    return 2147942487LL;
  v10 = *((_QWORD *)this + 78);
  while ( *(_BYTE *)(v10 + 8 * v9) != a2 )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= v8 )
      return 2147942487LL;
  }
  v12 = *(_DWORD *)(v10 + 8 * v9 + 4);
  if ( v12 > 0x40 || (int)v12 <= 0 )
    return 2147942487LL;
  v13 = v12;
  v14 = operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v14;
  if ( !v14 )
  {
    v16 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return v16;
  }
  memset_0(v14, 0, v13);
  *v15 = a2;
  if ( !HidD_GetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), v15, v13) )
  {
    LastError = GetLastError();
    v16 = LastError;
    if ( LastError > 0 )
      v16 = (unsigned __int16)LastError | 0x80070000;
    operator delete[](v15);
    return v16;
  }
  v18 = v13 - 1;
  *a3 = v18;
  memcpy_0(a4, v15 + 1, v18);
  if ( (unsigned int)dword_180266498 > 5 )
  {
    v23 = (const WCHAR *)((char *)this + 24);
    v24 = "Completed successfully";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      v19,
      byte_18022483C,
      v20,
      v21,
      (const unsigned __int16 **)&v24,
      &v23);
  }
  operator delete[](v15);
  return 0LL;
}
