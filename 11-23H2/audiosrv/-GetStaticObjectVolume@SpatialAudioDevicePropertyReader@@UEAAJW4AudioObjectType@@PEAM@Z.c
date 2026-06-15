/*
 * XREFs of ?GetStaticObjectVolume@SpatialAudioDevicePropertyReader@@UEAAJW4AudioObjectType@@PEAM@Z @ 0x1801449B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetStaticObjectVolume(
        SpatialAudioDevicePropertyReader *this,
        enum AudioObjectType a2,
        float *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  double v13; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+80h] [rbp+18h] BYREF
  const CHAR *v15; // [rsp+88h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( a3 && (unsigned int)(a2 - 2) <= 0x1FFFE )
  {
    v11 = *((_QWORD *)this + 6);
    v13 = (double)(a2 & 0x3FFFD | 2u);
    *a3 = *(float *)(v11 + 16LL * (unsigned int)((HIDWORD(v13) >> 20) - 1024) + 12);
  }
  else
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      LODWORD(v13) = -2147024809;
      v15 = "SpatialAudioDevicePropertyReader::GetStaticObjectVolume";
      v14 = 658;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        (int)&unk_1801953FE,
        v9,
        v10,
        &v15,
        (__int64)&v14,
        (__int64)&v13);
    }
  }
  return v7;
}
