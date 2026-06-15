/*
 * XREFs of ?GetCommandValueLength@SpatialAudioMetadataDictionary@@UEAAJEPEAI@Z @ 0x18013ABE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionary::GetCommandValueLength(
        SpatialAudioMetadataDictionary *this,
        char a2,
        unsigned int *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rdx
  int v15; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+80h] [rbp+18h] BYREF
  const CHAR *v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v7 = -2004286976;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( a3 )
  {
    v11 = *((_DWORD *)this + 31);
    v12 = 0LL;
    if ( v11 )
    {
      v13 = *((_QWORD *)this + 16);
      while ( *(_BYTE *)(v13 + 2 * v12) != a2 )
      {
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= v11 )
          return v7;
      }
      v7 = 0;
      *a3 = *(unsigned __int8 *)(v13 + 2 * v12 + 1);
    }
  }
  else
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v15 = -2147024809;
      v17 = "SpatialAudioMetadataDictionary::GetCommandValueLength";
      v16 = 281;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        byte_18018C3E2,
        v9,
        v10,
        &v17,
        (__int64)&v16,
        (__int64)&v15);
    }
  }
  return v7;
}
