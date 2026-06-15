/*
 * XREFs of ?GetVirtualSurroundEffectMode@SpatialAudioDevicePropertyReader@@UEAAJPEAW4VirtualSurroundEffectMode@@@Z @ 0x18000F5F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode(
        SpatialAudioDevicePropertyReader *this,
        enum VirtualSurroundEffectMode *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // edi
  _QWORD v15[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+30h] BYREF
  int v17; // [rsp+90h] [rbp+40h] BYREF
  int v18; // [rsp+98h] [rbp+48h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v8 = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( !*((_DWORD *)this + 128) )
  {
    v13 = -2147418113;
    if ( (unsigned int)dword_1801C0258 <= 2 )
      return v13;
    v17 = 878;
LABEL_12:
    v15[0] = "SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode";
    v16 = v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      (unsigned int)&unk_18018C3E2,
      v6,
      v7,
      (__int64)v15,
      (__int64)&v17,
      (__int64)&v16);
    return v13;
  }
  if ( !a2 )
  {
    v13 = -2147024809;
    if ( (unsigned int)dword_1801C0258 <= 2 )
      return v13;
    v17 = 879;
    goto LABEL_12;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 52) + 32LL))(*((_QWORD *)this + 52), &v18);
  v13 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v16 = v9;
      v17 = 883;
      v15[0] = "SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        (unsigned int)&unk_18018C41C,
        v11,
        v12,
        (__int64)v15,
        (__int64)&v17,
        (__int64)&v16);
    }
  }
  else
  {
    if ( !v18 )
      v8 = *((_DWORD *)this + 125);
    *(_DWORD *)a2 = v8;
  }
  return v13;
}
