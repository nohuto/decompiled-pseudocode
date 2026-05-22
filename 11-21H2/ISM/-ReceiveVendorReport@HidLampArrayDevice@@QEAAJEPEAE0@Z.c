/*
 * XREFs of ?ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z @ 0x1800D8408
 * Callers:
 *     ?ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z @ 0x1800D2C58 (-ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B774 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800CFEC4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

__int64 __fastcall HidLampArrayDevice::ReceiveVendorReport(
        HidLampArrayDevice *this,
        char a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r8
  size_t v12; // rbp
  _BYTE *v13; // rax
  _BYTE *v14; // rbx
  signed int LastError; // eax
  unsigned int v16; // edi
  unsigned __int8 v17; // bp
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int16 *v22; // [rsp+60h] [rbp+8h] BYREF
  const char *v23; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)dword_180240410 > 5 )
  {
    v22 = (unsigned __int16 *)((char *)this + 24);
    v23 = "Started";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)this,
      byte_180202E39,
      (__int64)a3,
      (__int64)a4,
      (const unsigned __int16 **)&v23,
      &v22);
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
  v12 = *(int *)(v10 + 8 * v9 + 4);
  if ( (unsigned int)v12 > 0x40 || (int)v12 <= 0 )
    return 2147942487LL;
  v13 = operator new[](*(int *)(v10 + 8 * v9 + 4), (const struct std::nothrow_t *)&std::nothrow);
  v14 = v13;
  if ( v13 )
  {
    memset_0(v13, 0, v12);
    *v14 = a2;
    if ( HidD_GetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), v14, v12) )
    {
      v17 = v12 - 1;
      *a3 = v17;
      memcpy_0(a4, v14 + 1, v17);
      if ( (unsigned int)dword_180240410 > 5 )
      {
        v22 = (unsigned __int16 *)((char *)this + 24);
        v23 = "Completed successfully";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v18,
          byte_180202E39,
          v19,
          v20,
          (const unsigned __int16 **)&v23,
          &v22);
      }
      operator delete[](v14);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v16 = LastError;
      if ( LastError > 0 )
        v16 = (unsigned __int16)LastError | 0x80070000;
      operator delete[](v14);
      return v16;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C0,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
