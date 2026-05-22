/*
 * XREFs of ?GetMaxTextureSize@CDevice@DirectComposition@@UEAAIXZ @ 0x180075A60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?GetNext@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEAVCSurfaceFactory@DirectComposition@@PEAV23@@Z @ 0x18009B538 (-GetNext@-$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::GetMaxTextureSize(DirectComposition::CDevice *this)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r8
  DirectComposition::CDevice *v7; // rax
  __int64 Next; // rdx
  int v9; // r10d
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  bool v13; // zf
  _BYTE v15[40]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2) )
      *((_BYTE *)this + 132) = 1;
    ++*((_DWORD *)this + 32);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  }
  (*(void (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this - 2) + 40LL))((char *)this - 16, v15);
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  if ( DirectComposition::CDevice::s_minSafeFeatureLevel > D3D_FEATURE_LEVEL_9_2 )
  {
    if ( DirectComposition::CDevice::s_minSafeFeatureLevel > D3D_FEATURE_LEVEL_9_3 )
    {
      v5 = 0x4000;
      if ( DirectComposition::CDevice::s_minSafeFeatureLevel <= D3D_FEATURE_LEVEL_10_1 )
        v5 = 0x2000;
    }
    else
    {
      v5 = 4096;
    }
  }
  else
  {
    v5 = 2048;
  }
  v6 = 0LL;
  v7 = (DirectComposition::CDevice *)*((_QWORD *)this + 75);
  Next = (__int64)v7 - 288;
  if ( v7 == (DirectComposition::CDevice *)((char *)this + 600) )
    Next = 0LL;
  if ( Next )
  {
    v9 = 0x800000;
    do
    {
      v10 = *(_DWORD *)(Next + 132);
      if ( *(_BYTE *)(Next + 249) )
        v10 = v9;
      if ( v5 < v10 )
        v10 = v5;
      v5 = v10;
      Next = CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::GetNext(
               (char *)this + 592,
               Next,
               v6,
               v3);
    }
    while ( Next );
  }
  v11 = *((_QWORD *)this + 10);
  if ( v11 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, Next);
  v12 = *((_QWORD *)this + 10);
  if ( v12 )
  {
    v13 = (*((_DWORD *)this + 32))-- == 1;
    if ( v13 && *((_BYTE *)this + 132) )
    {
      *((_BYTE *)this + 132) = 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  else
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  }
  return v5;
}
