/*
 * XREFs of ?SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z @ 0x1800D8ACC
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

__int64 __fastcall HidLampArrayDevice::SendVendorReport(
        HidLampArrayDevice *this,
        char a2,
        __int64 a3,
        const unsigned __int8 *a4)
{
  size_t v5; // rbx
  unsigned int v8; // r8d
  ULONG v9; // ebp
  __int64 v10; // rax
  size_t v11; // r15
  __int64 v12; // rdx
  int v14; // eax
  _BYTE *v15; // rax
  _BYTE *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  signed int LastError; // eax
  unsigned int v21; // edi
  const unsigned __int16 *v22[2]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int16 *v24; // [rsp+70h] [rbp+8h] BYREF

  v5 = (unsigned __int8)a3;
  if ( (unsigned int)dword_180240410 > 5 )
  {
    v24 = (unsigned __int16 *)((char *)this + 24);
    v22[0] = (const unsigned __int16 *)"Started";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)this,
      byte_180202DEE,
      a3,
      (__int64)a4,
      v22,
      &v24);
  }
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
  v9 = v5 + 1;
  v10 = 0LL;
  v11 = v5;
  if ( !v8 )
    return 2147942487LL;
  v12 = *((_QWORD *)this + 78);
  while ( *(_BYTE *)(v12 + 8 * v10) != a2 )
  {
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= v8 )
      return 2147942487LL;
  }
  v14 = *(_DWORD *)(v12 + 8 * v10 + 4);
  if ( v14 != v9 || (unsigned int)v14 > 0x40 || v14 <= 0 )
    return 2147942487LL;
  v15 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  if ( v15 )
  {
    memset_0(v15, 0, v9);
    *v16 = a2;
    memcpy_0(v16 + 1, a4, v11);
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), v16, v9) )
    {
      if ( (unsigned int)dword_180240410 > 5 )
      {
        v24 = (unsigned __int16 *)((char *)this + 24);
        v22[0] = (const unsigned __int16 *)"Completed successfully";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v17,
          byte_180202DEE,
          v18,
          v19,
          v22,
          &v24);
      }
      operator delete[](v16);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v21 = LastError;
      if ( LastError > 0 )
        v21 = (unsigned __int16)LastError | 0x80070000;
      operator delete[](v16);
      return v21;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
