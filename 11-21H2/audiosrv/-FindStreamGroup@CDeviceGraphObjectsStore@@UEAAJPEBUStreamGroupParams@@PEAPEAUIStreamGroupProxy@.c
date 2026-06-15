/*
 * XREFs of ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180016310
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180002CD8 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006251D (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::FindStreamGroup(
        CDeviceGraphObjectsStore *this,
        const struct StreamGroupParams *a2,
        struct IStreamGroupProxy **a3)
{
  unsigned int v6; // r14d
  struct _RTL_CRITICAL_SECTION *v7; // r15
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  int v11; // eax
  __int64 v12; // rax
  size_t v13; // rbx
  const void *v14; // rax
  __int64 v15; // rax
  struct IStreamGroupProxy *v16; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  struct IStreamGroupProxy *v20; // [rsp+20h] [rbp-30h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-28h] BYREF
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v23[16]; // [rsp+38h] [rbp-18h] BYREF

  v6 = 0;
  *a3 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v8 = (__int64 *)*((_QWORD *)this + 8);
  while ( v8 != *((__int64 **)this + 9) )
  {
    v9 = *v8;
    v22 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v10 = 0LL;
    v21 = 0LL;
    if ( v9 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)v9 + 24LL))(
              v9,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              &v21);
      v10 = v21;
    }
    else
    {
      v11 = 0;
    }
    if ( v11 >= 0 && v10 )
    {
      v20 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v21, (__int64 *)&v20) >= 0
        && *((_QWORD *)a2 + 3) == (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v20 + 104LL))(v20) )
      {
        v18 = (_QWORD *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *, _BYTE *))(*(_QWORD *)v20 + 112LL))(
                          v20,
                          v23);
        v19 = *((_QWORD *)a2 + 4) - *v18;
        if ( !v19 )
          v19 = *((_QWORD *)a2 + 5) - v18[1];
        if ( !v19
          && *((_DWORD *)a2 + 2) == (*(unsigned int (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v20 + 160LL))(v20) )
        {
          v12 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v20 + 120LL))(v20);
          v13 = *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL) + 18LL;
          if ( v13 == *(unsigned __int16 *)(v12 + 16) + 18LL )
          {
            v14 = (const void *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v20 + 120LL))(v20);
            if ( !memcmp_0(*((const void **)a2 + 2), v14, v13)
              && *((_BYTE *)a2 + 49) == (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v20 + 136LL))(v20)
              && *((_BYTE *)a2 + 48) == (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v20 + 152LL))(v20)
              && *((_BYTE *)a2 + 50) == (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v20 + 232LL))(v20) )
            {
              v15 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v20 + 256LL))(v20);
              if ( *((_QWORD *)a2 + 7) )
              {
                if ( v15 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15) )
                {
LABEL_22:
                  v16 = v20;
                  v20 = 0LL;
                  *a3 = v16;
                  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v20);
                  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v21);
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
                  break;
                }
              }
              else if ( !v15 )
              {
                goto LABEL_22;
              }
            }
          }
        }
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v20);
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v21);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
      ++v8;
    }
    else
    {
      if ( v10 )
      {
        v21 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v10)[2])(v10);
      }
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      ++v8;
    }
  }
  if ( !*a3 )
    v6 = -2147023728;
  if ( v7 )
    LeaveCriticalSection(v7);
  return v6;
}
