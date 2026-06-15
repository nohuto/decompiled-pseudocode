/*
 * XREFs of ?GetSpatialAudioEncoderDescriptorCount@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x1800460D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetSpatialAudioEncoderDescriptorCount(
        SpatialAudioDevicePropertyReader *this,
        unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v10; // [rsp+70h] [rbp+30h] BYREF
  int v11; // [rsp+80h] [rbp+40h] BYREF
  const CHAR *v12; // [rsp+88h] [rbp+48h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( !*((_DWORD *)this + 128) )
  {
    v5 = -2147418113;
    if ( (unsigned int)dword_1801CD1E8 <= 2 )
      return v5;
    v11 = 699;
LABEL_9:
    v12 = "SpatialAudioDevicePropertyReader::GetSpatialAudioEncoderDescriptorCount";
    v10 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      (int)&unk_1801953FE,
      v7,
      v8,
      &v12,
      (__int64)&v11,
      (__int64)&v10);
    return v5;
  }
  if ( !a2 )
  {
    v5 = -2147024809;
    if ( (unsigned int)dword_1801CD1E8 <= 2 )
      return v5;
    v11 = 700;
    goto LABEL_9;
  }
  *a2 = *((_DWORD *)this + 106);
  return v5;
}
