/*
 * XREFs of ?GetEncoderStaticObjectPosition@SpatialAudioDevicePropertyReader@@UEAAJW4AudioObjectType@@PEAM11@Z @ 0x1801371A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetEncoderStaticObjectPosition(
        SpatialAudioDevicePropertyReader *this,
        enum AudioObjectType a2,
        float *a3,
        float *a4,
        float *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  float *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  const CHAR *v18; // [rsp+40h] [rbp-38h] BYREF
  double v19; // [rsp+80h] [rbp+8h] BYREF
  int v20; // [rsp+90h] [rbp+18h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v10 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v5 )
    LeaveCriticalSection(v5);
  if ( a3 && a4 && (v14 = a5) != 0LL && (unsigned int)(a2 - 2) <= 0x1FFFE )
  {
    v15 = *((_QWORD *)this + 7);
    v19 = (double)(a2 & 0x3FFFD | 2u);
    v16 = 2LL * (unsigned int)((HIDWORD(v19) >> 20) - 1024);
    *(_DWORD *)a3 = *(_OWORD *)(v15 + 16LL * (unsigned int)((HIDWORD(v19) >> 20) - 1024));
    *a4 = *(float *)(v15 + 8 * v16 + 8);
    *v14 = *(float *)(v15 + 8 * v16 + 4);
  }
  else
  {
    v10 = -2147024809;
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      LODWORD(v19) = -2147024809;
      v18 = "SpatialAudioDevicePropertyReader::GetEncoderStaticObjectPosition";
      v20 = 621;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        byte_18018C3E2,
        v12,
        v13,
        &v18,
        (__int64)&v20,
        (__int64)&v19);
    }
  }
  return v10;
}
