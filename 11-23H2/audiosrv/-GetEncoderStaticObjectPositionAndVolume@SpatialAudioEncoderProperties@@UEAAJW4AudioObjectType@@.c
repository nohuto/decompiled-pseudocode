/*
 * XREFs of ?GetEncoderStaticObjectPositionAndVolume@SpatialAudioEncoderProperties@@UEAAJW4AudioObjectType@@PEAM111@Z @ 0x180146560
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolume(
        SpatialAudioEncoderProperties *this,
        enum AudioObjectType a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  unsigned int v11; // ebx
  float *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int32 v16; // r12d
  int v18; // [rsp+40h] [rbp-10h] BYREF
  const CHAR *v19; // [rsp+48h] [rbp-8h] BYREF
  double v20; // [rsp+80h] [rbp+30h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v11 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v6 )
    LeaveCriticalSection(v6);
  v15 = *((_QWORD *)this + 6);
  if ( v15 )
  {
    if ( a3 && a4 && (v12 = a5) != 0LL )
    {
      v16 = a2 & 0x3FFFD | 2;
      v20 = (double)v16;
      *(_DWORD *)a3 = *(_OWORD *)(v15 + 16LL
                                      * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)v16)) >> 20) - 1024));
      *a4 = *(float *)(*((_QWORD *)this + 6)
                     + 16LL * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)v16)) >> 20) - 1024)
                     + 4);
      *v12 = *(float *)(*((_QWORD *)this + 6)
                      + 16LL * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)v16)) >> 20) - 1024)
                      + 8);
      if ( a6 )
        *a6 = *(float *)(*((_QWORD *)this + 6)
                       + 16LL * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)v16)) >> 20) - 1024)
                       + 12);
    }
    else
    {
      v11 = -2147024809;
      if ( (unsigned int)dword_1801CD1E8 > 2 )
      {
        v18 = 588;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v11 = -2147418113;
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v18 = 587;
LABEL_13:
      v19 = "SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolume";
      LODWORD(v20) = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        (int)&unk_1801953FE,
        v13,
        v14,
        &v19,
        (__int64)&v18,
        (__int64)&v20);
    }
  }
  return v11;
}
