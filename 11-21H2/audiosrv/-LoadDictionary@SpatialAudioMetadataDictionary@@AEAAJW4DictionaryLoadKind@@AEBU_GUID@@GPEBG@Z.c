/*
 * XREFs of ?LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z @ 0x18013B080
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBGPEAEI@Z @ 0x18013B3FC (-RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18004EB08 (Create_SpatialAudioDevicePropertyReader.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioMetadataDictionary::LoadDictionary(
        __int64 a1,
        int a2,
        __int64 a3,
        __int16 a4,
        const unsigned __int16 *a5)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  unsigned __int8 *v13; // rdx
  int v14; // r9d
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64, __int64 *); // rdi
  unsigned __int64 v18; // rcx
  SIZE_T v19; // rax
  LPVOID v20; // rdx
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  const CHAR *v24; // [rsp+50h] [rbp-10h] BYREF
  int v25; // [rsp+90h] [rbp+30h] BYREF
  int v26; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v27; // [rsp+A8h] [rbp+48h] BYREF

  LOWORD(v27) = a4;
  v22 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  if ( v8 )
    LeaveCriticalSection(v8);
  v23 = 0LL;
  if ( a2 )
  {
    v12 = -2147418113;
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v26 = -2147418113;
      v25 = 202;
      v13 = byte_18018C3E2;
LABEL_26:
      v24 = "SpatialAudioMetadataDictionary::LoadDictionary";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        v13,
        v10,
        v11,
        &v24,
        (__int64)&v25,
        (__int64)&v26);
      goto LABEL_27;
    }
    goto LABEL_27;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v23);
  v15 = Create_SpatialAudioDevicePropertyReader(a5, 0LL, &v23, v14);
  v12 = v15;
  if ( v15 < 0 )
  {
    if ( (unsigned int)dword_1801C0258 <= 2 )
      goto LABEL_27;
    v25 = 205;
    v13 = byte_18018C41C;
LABEL_25:
    v26 = v15;
    goto LABEL_26;
  }
  v16 = v23;
  v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v23 + 40LL);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
  v15 = v17(v16, a3, &v22);
  v12 = v15;
  if ( v15 < 0 )
  {
    if ( (unsigned int)dword_1801C0258 <= 2 )
      goto LABEL_27;
    v25 = 208;
    v13 = byte_18018C41C;
    goto LABEL_25;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 32LL))(v22, a1 + 120);
  v12 = v15;
  if ( v15 < 0 )
  {
    if ( (unsigned int)dword_1801C0258 <= 2 )
      goto LABEL_27;
    v25 = 213;
    v13 = byte_18018C41C;
    goto LABEL_25;
  }
  v27 = 0;
  v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 40LL))(v22, &v27);
  v12 = v15;
  if ( v15 < 0 )
  {
    if ( (unsigned int)dword_1801C0258 <= 2 )
      goto LABEL_27;
    v25 = 217;
    v13 = byte_18018C41C;
    goto LABEL_25;
  }
  v18 = v27 >> 1;
  *(_DWORD *)(a1 + 124) = v18;
  v19 = 2 * v18;
  if ( !is_mul_ok(v18, 2uLL) )
    v19 = -1LL;
  v20 = operator new[](v19, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)(a1 + 128) = v20;
  if ( !v20 )
  {
    v12 = -2147024882;
    goto LABEL_27;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD))(*(_QWORD *)v22 + 48LL))(v22, v20, v27);
  v12 = v15;
  if ( v15 < 0 && (unsigned int)dword_1801C0258 > 2 )
  {
    v25 = 224;
    v13 = byte_18018C41C;
    goto LABEL_25;
  }
LABEL_27:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
  return v12;
}
