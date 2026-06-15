/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800D034C
 * Callers:
 *     asm_AudioServerInitializeStream @ 0x1800D38B0 (asm_AudioServerInitializeStream.c)
 *     ?ApplicationClosed@CApplicationTracker@@EEAAJPEBG@Z @ 0x1800D45D0 (-ApplicationClosed@CApplicationTracker@@EEAAJPEBG@Z.c)
 *     ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1801114D0 (-SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z.c)
 *     _lambda_61b46c1a1c9f0e1730f6e53f8c139b82_::operator() @ 0x18011B048 (_lambda_61b46c1a1c9f0e1730f6e53f8c139b82_--operator().c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18011B0F8 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const WCHAR **a6)
{
  const WCHAR *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  _BYTE v12[32]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+58h] [rbp-30h]
  const WCHAR *v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-20h]
  int v17; // [rsp+6Ch] [rbp-1Ch]

  v8 = *a6;
  if ( *a6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v8 = &String2;
    v10 = 2;
  }
  v15 = v8;
  v13 = a5;
  v16 = v10;
  v14 = 4LL;
  v17 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0LL, 0LL, 4, (__int64)v12);
}
