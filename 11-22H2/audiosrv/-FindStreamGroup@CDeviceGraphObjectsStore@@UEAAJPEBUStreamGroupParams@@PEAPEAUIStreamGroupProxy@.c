/*
 * XREFs of ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180047C10
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006A7FD (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D78EC (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::FindStreamGroup(
        CDeviceGraphObjectsStore *this,
        const struct StreamGroupParams *a2,
        struct IStreamGroupProxy **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 *i; // rbx
  unsigned int v8; // ebx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  size_t v14; // r14
  const void *v15; // rax
  int v16; // eax
  unsigned int v17; // r14d
  struct IStreamGroupProxy *v18; // rax
  struct IStreamGroupProxy *v19; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20; // [rsp+28h] [rbp-38h] BYREF
  int v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v23[16]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  for ( i = (__int64 *)*((_QWORD *)this + 8); ; ++i )
  {
    if ( i == *((__int64 **)this + 9) )
      goto LABEL_3;
    v10 = *i;
    v22 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v20 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v22, &v20) >= 0 )
    {
      if ( v20 )
        break;
    }
LABEL_10:
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
  }
  v19 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v20, &v19) < 0
    || *((_QWORD *)a2 + 3) != (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v19 + 144LL))(v19) )
  {
    goto LABEL_25;
  }
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *, _BYTE *))(*(_QWORD *)v19 + 152LL))(v19, v23);
  v12 = *((_QWORD *)a2 + 4) - *v11;
  if ( !v12 )
    v12 = *((_QWORD *)a2 + 5) - v11[1];
  if ( v12
    || *((_DWORD *)a2 + 2) != (*(unsigned int (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v19 + 200LL))(v19)
    || (v13 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v19 + 160LL))(v19),
        v14 = *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL) + 18LL,
        v14 != *(unsigned __int16 *)(v13 + 16) + 18LL)
    || (v15 = (const void *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v19 + 160LL))(v19),
        memcmp_0(*((const void **)a2 + 2), v15, v14))
    || *((_BYTE *)a2 + 49) != (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v19 + 176LL))(v19)
    || *((_BYTE *)a2 + 48) != (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v19 + 192LL))(v19)
    || *((_BYTE *)a2 + 50) != (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v19 + 272LL))(v19) )
  {
LABEL_25:
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v19);
    goto LABEL_10;
  }
  v21 = 0;
  v16 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, char *, int *))(*(_QWORD *)v19 + 456LL))(
          v19,
          (char *)a2 + 56,
          &v21);
  v17 = v16;
  if ( v16 >= 0 )
  {
    if ( v21 == 1 )
    {
      v18 = v19;
      v19 = 0LL;
      *a3 = v18;
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v19);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
LABEL_3:
      v8 = *a3 == 0LL ? 0x80070490 : 0;
      if ( v6 )
        LeaveCriticalSection(v6);
      return v8;
    }
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x50,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
    (const char *)(unsigned int)v16);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
  if ( v6 )
    LeaveCriticalSection(v6);
  return v17;
}
