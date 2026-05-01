/*
 * XREFs of ?RegisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180113CBC
 * Callers:
 *     ?UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180113BDC (-UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D2458 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1800D2458.c)
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x180113F10 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::RegisterHotkeys(RTL_SRWLOCK *this)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // ecx
  __int64 v6; // rax
  unsigned int v7; // r15d
  int *v8; // rbx
  const unsigned __int16 **v9; // r14
  LSTATUS ValueW; // eax
  bool v11; // sf
  int v12; // ecx
  char v13; // dl
  int v14; // ecx
  int v15; // eax
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  int pvData; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v18; // [rsp+48h] [rbp-B8h] BYREF
  RTL_SRWLOCK *v19; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v20[27]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  if ( (unsigned int)CloudPCHelpers::GetCloudPCMode(this) == 1 )
    return 0LL;
  AcquireSRWLockExclusive(this + 100);
  v19 = this + 100;
  if ( LODWORD(this[101].Ptr) )
  {
    v3 = -2147418113;
  }
  else
  {
    memset_0(v20, 0, sizeof(v20));
    v4 = 0;
    v5 = 0;
    v6 = 0LL;
    do
    {
      v20[v6] = *(_OWORD *)((char *)&unk_180835F20 + v6 * 16);
      ++v4;
      ++v5;
      ++v6;
    }
    while ( v5 < 9 );
    v7 = 0;
    v8 = (int *)&v20[v4] + 2;
    v9 = (const unsigned __int16 **)&off_1807CC570;
    do
    {
      pvData = 0;
      v18 = 0;
      pcbData = 4;
      ValueW = RegGetValueW(
                 HKEY_CURRENT_USER,
                 L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
                 *(v9 - 1),
                 0x10u,
                 0LL,
                 &pvData,
                 &pcbData);
      v11 = ValueW < 0;
      if ( ValueW > 0 )
        v11 = 1;
      if ( !v11
        && SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR", *v9, &v18) >= 0 )
      {
        v12 = pvData;
        if ( pvData )
        {
          v13 = v18;
          if ( v18 )
          {
            if ( (v18 & 8) == 0 )
            {
              *(v8 - 2) = 2;
              *(v8 - 1) = *((_DWORD *)v9 - 4);
              v8[1] = v12;
              v14 = *v8 | 0x4800;
              *v8 = v14;
              if ( (v13 & 1) != 0 )
              {
                v14 |= 2u;
                *v8 = v14;
              }
              if ( (v13 & 2) != 0 )
              {
                v14 |= 1u;
                *v8 = v14;
              }
              if ( (v18 & 4) != 0 )
                *v8 = v14 | 4;
              ++v4;
              v8 += 4;
            }
          }
        }
      }
      ++v7;
      v9 += 3;
    }
    while ( v7 < 0x12 );
    v15 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _OWORD *, unsigned __int64))(*(_QWORD *)this[45].Ptr + 24LL))(
            this[45].Ptr,
            v4,
            v20,
            (unsigned __int64)&this[20] & -(__int64)(this != 0LL));
    v3 = v15;
    if ( v15 >= 0 )
      v3 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1046,
        (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v15,
        (_DWORD)this + 808);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v19);
  return v3;
}
