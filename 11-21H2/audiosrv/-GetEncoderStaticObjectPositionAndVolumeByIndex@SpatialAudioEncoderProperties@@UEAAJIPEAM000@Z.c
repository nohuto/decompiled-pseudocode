/*
 * XREFs of ?GetEncoderStaticObjectPositionAndVolumeByIndex@SpatialAudioEncoderProperties@@UEAAJIPEAM000@Z @ 0x180139B20
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex(
        SpatialAudioEncoderProperties *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v7; // r12
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  float *v16; // rdx
  int v18; // [rsp+40h] [rbp-10h] BYREF
  const CHAR *v19; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+30h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v7 = a2;
  v11 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v6 )
    LeaveCriticalSection(v6);
  v15 = *((_QWORD *)this + 6);
  if ( v15 )
  {
    if ( a3 && a4 && (v16 = a5) != 0LL && (unsigned int)v7 < 0x11 )
    {
      *(_DWORD *)a3 = *(_OWORD *)(v15 + 16 * v7);
      *a4 = *(float *)(*((_QWORD *)this + 6) + 16 * v7 + 4);
      *v16 = *(float *)(*((_QWORD *)this + 6) + 16 * v7 + 8);
      if ( a6 )
        *a6 = *(float *)(*((_QWORD *)this + 6) + 16 * v7 + 12);
    }
    else
    {
      v11 = -2147024809;
      if ( (unsigned int)dword_1801C0258 > 2 )
      {
        v18 = 612;
        goto LABEL_14;
      }
    }
  }
  else
  {
    v11 = -2147418113;
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v18 = 611;
LABEL_14:
      v19 = "SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex";
      v20 = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        byte_18018C3E2,
        v13,
        v14,
        &v19,
        (__int64)&v18,
        (__int64)&v20);
    }
  }
  return v11;
}
