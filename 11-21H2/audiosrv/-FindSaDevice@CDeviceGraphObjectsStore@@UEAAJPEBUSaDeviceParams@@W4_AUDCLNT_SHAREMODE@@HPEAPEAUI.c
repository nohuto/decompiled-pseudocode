/*
 * XREFs of ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x1800084E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800029FC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800FB384 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x1800FD2F0 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::FindSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        struct ISaDeviceProxy **a5)
{
  __int64 **v5; // rdi
  struct ISaDeviceProxy **v6; // r13
  struct _RTL_CRITICAL_SECTION *v7; // r15
  struct ISaDeviceProxy **v8; // r12
  unsigned int v9; // r14d
  __int64 **v10; // rsi
  __int64 *i; // rbx
  unsigned int v12; // r14d
  int v13; // ebx
  unsigned int v14; // esi
  __int64 (__fastcall ***v15)(); // rdx
  bool v16; // bl
  __int64 *j; // rbx
  __int64 (__fastcall ***v18)(); // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  CDeviceGraphObjectsStore *v22; // rax
  __int64 v23; // [rsp+20h] [rbp-51h] BYREF
  __int64 v24; // [rsp+28h] [rbp-49h] BYREF
  struct ISaDeviceProxy **v25; // [rsp+30h] [rbp-41h] BYREF
  CDeviceGraphObjectsStore *v26; // [rsp+38h] [rbp-39h] BYREF
  __int64 (__fastcall **v27)(); // [rsp+40h] [rbp-31h] BYREF
  const struct SaDeviceParams *v28; // [rsp+48h] [rbp-29h]
  __int64 (__fastcall ***v29)(); // [rsp+78h] [rbp+7h]
  CDeviceGraphObjectsStore *v30; // [rsp+D0h] [rbp+5Fh] BYREF
  const struct SaDeviceParams *v31; // [rsp+D8h] [rbp+67h]
  enum _AUDCLNT_SHAREMODE v32; // [rsp+E0h] [rbp+6Fh]
  int v33; // [rsp+E8h] [rbp+77h]

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v30 = this;
  v5 = (__int64 **)((char *)this + 88);
  v6 = a5;
  *a5 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v27 = off_1801765C8;
  LODWORD(v28) = 1;
  v29 = &v27;
  v8 = 0LL;
  EnterCriticalSection(v7);
  v9 = 0;
  v10 = v5;
  while ( 2 )
  {
    if ( !v8 )
    {
      for ( i = *v10; i != v10[1]; ++i )
      {
        v20 = *i;
        v24 = v20;
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        v23 = 0LL;
        if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v24, &v23) >= 0 && v23 )
        {
          a5 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v23, &a5) >= 0 )
          {
            v25 = a5;
            if ( !v29 )
            {
              std::_Xbad_function_call();
              __debugbreak();
              goto LABEL_48;
            }
            if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), struct ISaDeviceProxy ***))(*v29)[2])(
                   v29,
                   &v25) )
            {
              v8 = a5;
              a5 = 0LL;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&a5);
              Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v23);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v24);
              break;
            }
          }
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&a5);
        }
        Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v23);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v24);
      }
      ++v9;
      v10 += 3;
      if ( v9 < 4 )
        continue;
      if ( !v8 )
      {
        v12 = -2005139430;
        v13 = -2005139430;
        v14 = 0;
        goto LABEL_8;
      }
    }
    break;
  }
LABEL_48:
  v14 = 0;
  v13 = 0;
  v12 = -2005139430;
LABEL_8:
  if ( v7 )
    LeaveCriticalSection(v7);
  if ( v29 )
  {
    v15 = &v27;
    if ( v29 == &v27 )
      v15 = 0LL;
    else
      LOBYTE(v15) = 1;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v29)[4])(v29, v15);
    v29 = 0LL;
  }
  v16 = v13 >= 0;
  if ( v8 )
    (*((void (__fastcall **)(struct ISaDeviceProxy **))*v8 + 2))(v8);
  if ( v16 )
  {
    if ( !v33 || v32 )
    {
      v12 = -2005139364;
      goto LABEL_31;
    }
  }
  else if ( v32 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    if ( CDeviceGraphObjectsStore::SaDeviceExists(v30, AUDCLNT_SHAREMODE_SHARED) && !v33 )
      v12 = -2005139363;
    goto LABEL_31;
  }
  if ( *((_DWORD *)v31 + 2) != 1 )
  {
    v27 = off_180176598;
    v28 = v31;
    v29 = &v27;
    *v6 = 0LL;
    EnterCriticalSection(v7);
    while ( 2 )
    {
      if ( *v6 )
        goto LABEL_67;
      for ( j = *v5; j != v5[1]; ++j )
      {
        v21 = *j;
        v24 = v21;
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
        a5 = 0LL;
        if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v24, &a5) >= 0 && a5 )
        {
          v30 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&a5, &v30) >= 0 )
          {
            v26 = v30;
            if ( !v29 )
            {
              std::_Xbad_function_call();
              __debugbreak();
              goto LABEL_67;
            }
            if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), CDeviceGraphObjectsStore **))(*v29)[2])(
                   v29,
                   &v26) )
            {
              v22 = v30;
              v30 = 0LL;
              *v6 = v22;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v30);
              Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&a5);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v24);
              break;
            }
          }
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v30);
        }
        Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&a5);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v24);
      }
      ++v14;
      v5 += 3;
      if ( v14 < 4 )
        continue;
      break;
    }
    if ( *v6 )
LABEL_67:
      v12 = 0;
    if ( v7 )
      LeaveCriticalSection(v7);
    if ( v29 )
    {
      v18 = &v27;
      if ( v29 == &v27 )
        v18 = 0LL;
      else
        LOBYTE(v18) = 1;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v29)[4])(v29, v18);
    }
  }
LABEL_31:
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_963f2f7f04c53afe9709a1371902504b_Traceguids, v12);
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return v12;
}
