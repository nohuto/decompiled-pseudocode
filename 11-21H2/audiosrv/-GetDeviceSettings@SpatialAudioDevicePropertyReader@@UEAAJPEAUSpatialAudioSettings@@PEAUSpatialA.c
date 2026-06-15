/*
 * XREFs of ?GetDeviceSettings@SpatialAudioDevicePropertyReader@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x18005B500
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetDeviceSettings(
        SpatialAudioDevicePropertyReader *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  size_t v5; // r12
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  const void *v13; // rdx
  int v15; // [rsp+40h] [rbp-10h] BYREF
  const char *v16; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+30h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v5 = a4;
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( !*((_DWORD *)this + 128) )
  {
    v9 = -2147418113;
    if ( (unsigned int)dword_1801C0258 <= 2 )
      return v9;
    v15 = 715;
    goto LABEL_19;
  }
  if ( !a2 )
  {
    v9 = -2147024809;
    if ( (unsigned int)dword_1801C0258 <= 2 )
      return v9;
    v15 = 716;
    goto LABEL_19;
  }
  *(_OWORD *)a2 = *((_OWORD *)this + 27);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 28);
  *((_OWORD *)a2 + 2) = *((_OWORD *)this + 29);
  *((_OWORD *)a2 + 3) = *((_OWORD *)this + 30);
  *((_QWORD *)a2 + 8) = *((_QWORD *)this + 62);
  if ( (_DWORD)v5 )
  {
    v13 = (const void *)*((_QWORD *)this + 63);
    if ( v13 )
    {
      if ( a3 )
      {
        v11 = v5;
        v10 = 834LL * *((unsigned int *)this + 106);
        if ( v5 == v10 )
        {
          memcpy_0(a3, v13, v5);
          return v9;
        }
      }
      v9 = -2147024809;
      if ( (unsigned int)dword_1801C0258 <= 2 )
        return v9;
      v15 = 723;
    }
    else
    {
      v9 = -2147418113;
      if ( (unsigned int)dword_1801C0258 <= 2 )
        return v9;
      v15 = 722;
    }
LABEL_19:
    v16 = "SpatialAudioDevicePropertyReader::GetDeviceSettings";
    v17 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      (unsigned int)&unk_18018C3E2,
      v11,
      v12,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v17);
  }
  return v9;
}
