/*
 * XREFs of ?GetNextDataPointer@CCPAudioHistoryReader@@UEAA_KPEAIPEAUAE_CURRENT_POSITION@@PEAW4APO_BUFFER_FLAGS@@@Z @ 0x140087AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 */

__int64 __fastcall CCPAudioHistoryReader::GetNextDataPointer(
        CCPAudioHistoryReader *this,
        unsigned int *a2,
        struct AE_CURRENT_POSITION *a3,
        enum APO_BUFFER_FLAGS *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v17 = v4;
  v9 = 0LL;
  if ( *((_DWORD *)this + 18) == -1 )
  {
    *a2 = 0;
  }
  else
  {
    v10 = *((_DWORD *)this + 20);
    v11 = *((_QWORD *)this + 8);
    v12 = (unsigned __int64)*((unsigned int *)this + 18) << 6;
    v9 = *((_QWORD *)this + 7) + v10 + *(_DWORD *)(v12 + v11 + 4);
    if ( v10 )
      v13 = v10 / *((_DWORD *)this + 21);
    else
      v13 = 0;
    *a2 = *(_DWORD *)(v12 + v11 + 56) - v13;
    v14 = *((_QWORD *)this + 8);
    v15 = (unsigned __int64)*((unsigned int *)this + 18) << 6;
    *(_OWORD *)&a3->u64DevicePosition = *(_OWORD *)(v15 + v14 + 16);
    *(_OWORD *)&a3->u64PaddingFrames = *(_OWORD *)(v15 + v14 + 32);
    *(_QWORD *)&a3->f32FramesPerSecond = *(_QWORD *)(v15 + v14 + 48);
    *a4 = *(enum APO_BUFFER_FLAGS *)(((unsigned __int64)*((unsigned int *)this + 18) << 6) + *((_QWORD *)this + 8) + 8);
    *((_DWORD *)this + 20) = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
  return v9;
}
