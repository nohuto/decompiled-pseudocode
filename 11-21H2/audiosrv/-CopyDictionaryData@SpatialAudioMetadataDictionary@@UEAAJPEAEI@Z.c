/*
 * XREFs of ?CopyDictionaryData@SpatialAudioMetadataDictionary@@UEAAJPEAEI@Z @ 0x18013AA60
 * Callers:
 *     ?CopyDictionaryData@SpatialAudioMetadataDictionary@@W7EAAJPEAEI@Z @ 0x18006C100 (-CopyDictionaryData@SpatialAudioMetadataDictionary@@W7EAAJPEAEI@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionary::CopyDictionaryData(
        const void **this,
        unsigned __int8 *a2,
        unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  size_t v4; // r14
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+78h] [rbp+10h] BYREF
  const CHAR *v14; // [rsp+88h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(this + 7);
  v4 = a3;
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 7));
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( a2 && (v9 = v4, v4 == 2LL * *((unsigned int *)this + 31)) )
  {
    memcpy_0(a2, this[16], v4);
  }
  else
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v12 = -2147024809;
      v14 = "SpatialAudioMetadataDictionary::CopyDictionaryData";
      v13 = 344;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        byte_18018C3E2,
        v9,
        v10,
        &v14,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
  return v7;
}
