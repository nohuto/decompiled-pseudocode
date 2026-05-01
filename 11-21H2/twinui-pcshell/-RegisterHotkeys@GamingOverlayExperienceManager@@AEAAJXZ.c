/*
 * XREFs of ?RegisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18011EFB0
 * Callers:
 *     ?UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18011EE3C (-UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::RegisterHotkeys(GamingOverlayExperienceManager *this)
{
  unsigned int v2; // edi
  unsigned int v3; // ecx
  __int64 v4; // rax
  unsigned int v5; // r15d
  int *v6; // rbx
  const unsigned __int16 **v7; // r14
  LSTATUS ValueW; // eax
  bool v9; // sf
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // ecx
  char v14; // dl
  int v15; // ecx
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  int pvData; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v18; // [rsp+48h] [rbp-B8h] BYREF
  RTL_SRWLOCK *v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v20[27]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  wil::AcquireSRWLockExclusive(v19, (char *)this + 760);
  if ( *((_DWORD *)this + 192) )
  {
    v11 = -2147418113;
  }
  else
  {
    memset_0(v20, 0, sizeof(v20));
    v2 = 0;
    v3 = 0;
    v4 = 0LL;
    do
    {
      v20[v4] = *(_OWORD *)((char *)&unk_180699EA0 + v4 * 16);
      ++v2;
      ++v3;
      ++v4;
    }
    while ( v3 < 9 );
    v5 = 0;
    v6 = (int *)&v20[v2] + 2;
    v7 = (const unsigned __int16 **)&off_180646600;
    do
    {
      pvData = 0;
      v18 = 0;
      pcbData = 4;
      ValueW = RegGetValueW(
                 HKEY_CURRENT_USER,
                 L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
                 *(v7 - 1),
                 0x10u,
                 0LL,
                 &pvData,
                 &pcbData);
      v9 = ValueW < 0;
      if ( ValueW > 0 )
        v9 = 1;
      if ( !v9
        && SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR", *v7, &v18) >= 0 )
      {
        v13 = pvData;
        if ( pvData )
        {
          v14 = v18;
          if ( v18 )
          {
            if ( (v18 & 8) == 0 )
            {
              *(v6 - 2) = 2;
              *(v6 - 1) = *((_DWORD *)v7 - 4);
              v6[1] = v13;
              v15 = *v6 | 0x4800;
              *v6 = v15;
              if ( (v14 & 1) != 0 )
              {
                v15 |= 2u;
                *v6 = v15;
              }
              if ( (v14 & 2) != 0 )
              {
                v15 |= 1u;
                *v6 = v15;
              }
              if ( (v14 & 4) != 0 )
                *v6 = v15 | 4;
              ++v2;
              v6 += 4;
            }
          }
        }
      }
      ++v5;
      v7 += 3;
    }
    while ( v5 < 0x12 );
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *, unsigned __int64, char *))(**((_QWORD **)this + 40) + 24LL))(
            *((_QWORD *)this + 40),
            v2,
            v20,
            ((unsigned __int64)this + 152) & -(__int64)(this != 0LL),
            (char *)this + 768);
    v11 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF8F,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    else
      v11 = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v19);
  return v11;
}
