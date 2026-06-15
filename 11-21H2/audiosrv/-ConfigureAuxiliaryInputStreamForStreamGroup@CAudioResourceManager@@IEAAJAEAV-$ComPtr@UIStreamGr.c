/*
 * XREFs of ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800FE824
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N@Z @ 0x1801020F0 (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N@Z.c)
 * Callees:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800E0F34 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x1800ED9F8 (--1SystemAudioStream@@QEAA@XZ.c)
 *     _lambda_52ab9d6b1284637cac045e0e1380eabe_::operator() @ 0x1800FE6C4 (_lambda_52ab9d6b1284637cac045e0e1380eabe_--operator().c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x1800FEAD8 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSyste.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup(
        CAudioResourceManager *this,
        struct IStreamGroupProxy **a2,
        const unsigned __int16 *a3)
{
  RTL_SRWLOCK *v6; // rcx
  int EndpointStore; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  int InternalLoopbackStream; // eax
  char v11; // al
  struct IStreamGroupProxy *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  struct CEndpointStore *v16; // [rsp+30h] [rbp-D0h] BYREF
  int *v17; // [rsp+38h] [rbp-C8h] BYREF
  char v18; // [rsp+40h] [rbp-C0h]
  GUID v19; // [rsp+50h] [rbp-B0h] BYREF
  GUID pguid; // [rsp+60h] [rbp-A0h] BYREF
  GUID v21; // [rsp+70h] [rbp-90h]
  GUID v22; // [rsp+80h] [rbp-80h] BYREF
  int v23[4]; // [rsp+90h] [rbp-70h] BYREF
  int v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  __int64 v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  char v28[304]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+1F0h] [rbp+F0h]
  char v30[296]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v31; // [rsp+320h] [rbp+220h]
  char v32[296]; // [rsp+328h] [rbp+228h] BYREF
  int v33; // [rsp+450h] [rbp+350h]
  char v34[304]; // [rsp+458h] [rbp+358h] BYREF
  int v35; // [rsp+588h] [rbp+488h]
  int v36; // [rsp+58Ch] [rbp+48Ch]
  int v37; // [rsp+590h] [rbp+490h]
  wil::details::in1diag3 *retaddr; // [rsp+5D8h] [rbp+4D8h]

  pguid = GUID_00000000_0000_0000_0000_000000000000;
  CoCreateGuid(&pguid);
  v21 = pguid;
  v22 = pguid;
  EtwEventActivityIdControl(4LL, &v22);
  v16 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v6, a3, &v16);
  v8 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x516,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointStore);
    goto LABEL_14;
  }
  CAudioSessionManager::RegisterDisconnectNotificationClient(*((_QWORD *)v16 + 12), a2);
  *(_OWORD *)v23 = 0LL;
  v24 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  memset_0(v28, 0, sizeof(v28));
  v29 = 0LL;
  memset_0(v30, 0, sizeof(v30));
  v31 = 0LL;
  memset_0(v32, 0, sizeof(v32));
  v33 = 0;
  memset_0(v34, 0, sizeof(v34));
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v17 = v23;
  v18 = 1;
  do
    v9 = _InterlockedIncrement64(&CAudioStream::s_llStreamIdentifier);
  while ( !v9 );
  InternalLoopbackStream = CAudioResourceManager::CreateInternalLoopbackStream(
                             this,
                             a3,
                             v9,
                             *a2,
                             (struct SystemAudioStream *)v23);
  if ( InternalLoopbackStream < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x528,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)InternalLoopbackStream);
    v11 = v18;
LABEL_10:
    v8 = 0;
    goto LABEL_11;
  }
  v12 = *a2;
  v13 = *(_QWORD *)*a2;
  v19 = pguid;
  v14 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, GUID *, __int64, int *, const unsigned __int16 *))(v13 + 272))(
          v12,
          &v19,
          v9,
          v23,
          a3);
  v8 = v14;
  if ( v14 >= 0 )
  {
    v11 = 0;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x52A,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v14);
  v11 = v18;
LABEL_11:
  if ( v11 )
  {
    v18 = 0;
    lambda_52ab9d6b1284637cac045e0e1380eabe_::operator()((__int64 *)&v17);
  }
  SystemAudioStream::~SystemAudioStream((SystemAudioStream *)v23);
LABEL_14:
  if ( v16 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v16);
  EtwEventActivityIdControl(4LL, &v22);
  return v8;
}
