/*
 * XREFs of ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1801006A0
 * Callers:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x18010059C (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1801006A0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1801006A0.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 *     WPP_SF_D @ 0x1800E9C50 (WPP_SF_D.c)
 *     ??0ExclusiveEndpointInfo@@QEAA@PEBG0K@Z @ 0x1800FE5F4 (--0ExclusiveEndpointInfo@@QEAA@PEBG0K@Z.c)
 *     ??1?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800FE908 (--1-$CAtlArray@PEAVExclusiveEndpointInfo@@V-$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@AT.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x1800FFBC8 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1801006A0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1801006A0.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x180101E4C (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 *     ?SimpleWildcardStringCompare@@YAHQEBG_K01@Z @ 0x1801023B8 (-SimpleWildcardStringCompare@@YAHQEBG_K01@Z.c)
 *     ?UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDIO_DIRECTION@@@Z @ 0x180102484 (-UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDI.c)
 *     ?SetCount@?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x180160BC8 (-SetCount@-$CAtlArray@PEAV-$CAtlArray@PEAVExclusiveEndpointInfo@@V-$CElementTraits@PEAVExclusive.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
        __int64 a1,
        char *a2,
        char *a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7,
        unsigned int a8)
{
  unsigned __int64 v9; // rsi
  int v10; // ebx
  CAudioSessionManager *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  _QWORD *v14; // r15
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rdx
  int v19; // ecx
  _QWORD *v20; // r12
  unsigned __int64 i; // r15
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned int v25; // r12d
  unsigned int v26; // r13d
  char *v27; // r15
  char *v28; // r14
  int v29; // esi
  int v31; // [rsp+40h] [rbp-C0h]
  unsigned int v32; // [rsp+44h] [rbp-BCh]
  int v36; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v37; // [rsp+64h] [rbp-9Ch] BYREF
  int v38; // [rsp+68h] [rbp-98h]
  unsigned int v39; // [rsp+6Ch] [rbp-94h]
  int v40; // [rsp+70h] [rbp-90h]
  struct ExclusiveEndpointInfo *v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  _QWORD *v43; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  int v46; // [rsp+A0h] [rbp-60h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+A8h] [rbp-58h] BYREF
  char v48; // [rsp+B0h] [rbp-50h]
  _WORD v49[201]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 v50[261]; // [rsp+252h] [rbp+152h] BYREF
  int v51; // [rsp+45Ch] [rbp+35Ch]

  v39 = a4;
  v9 = 0LL;
  v10 = 0;
  ExclusiveEndpointInfo::ExclusiveEndpointInfo((ExclusiveEndpointInfo *)v49, a2, a3, a4);
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0;
  v41 = 0LL;
  v32 = -1;
  v42 = 0LL;
  v31 = 0;
  v38 = 0;
  if ( a8 <= 0x14 )
  {
    v11 = WPP_GLOBAL_Control;
  }
  else
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x22u,
        (__int64)&WPP_2b5f394d6942332cf81378c5e0b14847_Traceguids,
        a8);
      v11 = WPP_GLOBAL_Control;
    }
    v10 = -2005139334;
  }
  v40 = a5 == 1;
  if ( v10 >= 0 )
  {
    v12 = *(_QWORD *)(a1 + 16);
    if ( !(unsigned __int8)ATL::CAtlArray<ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>> *,ATL::CElementTraits<ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>> *>>::SetCount(
                             &v43,
                             *(_QWORD *)(v12 + 208)) )
      ATL::AtlThrowImpl(-2147024882);
    v13 = *(_QWORD *)(v12 + 208);
    v14 = v43;
    if ( v13 )
    {
      v15 = v43;
      v16 = *(_QWORD *)(v12 + 200) - (_QWORD)v43;
      do
      {
        *v15 = *(_QWORD *)((char *)v15 + v16);
        ++v15;
        --v13;
      }
      while ( v13 );
    }
    v10 = 0;
    v17 = v44;
    if ( v44 )
    {
      ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        (__int64)&lpCriticalSection,
        (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
      v19 = 0;
      do
      {
        if ( v19 )
          goto LABEL_30;
        if ( v9 >= v17 )
          ATL::AtlThrowImpl(-2147024809);
        v20 = (_QWORD *)v14[v9];
        v41 = 0LL;
        v32 = -1;
        for ( i = 0LL; i < v20[1]; ++i )
        {
          v22 = *(_QWORD *)(*v20 + 8 * i);
          if ( v49[0] && *(_WORD *)v22 && (unsigned int)_o__wcsicmp(v49, *(_QWORD *)(*v20 + 8 * i))
            || !SimpleWildcardStringCompare(v50, v18, (const unsigned __int16 *const)(v22 + 402), 0LL)
            || v51 != *(_DWORD *)(v22 + 924) )
          {
            v36 = 0;
            v37 = -1;
            CConstraintModelResourceManager::GetEndpointStatus(
              (struct _RTL_CRITICAL_SECTION *)a1,
              (const struct ExclusiveEndpointInfo *)v22,
              v40,
              &v36,
              &v37);
            v19 = v31;
            if ( v36 )
            {
              v41 = (struct ExclusiveEndpointInfo *)v22;
              v32 = v37;
            }
          }
          else
          {
            v19 = 1;
            v31 = 1;
            v42 = v22;
          }
        }
        ++v9;
        v14 = v43;
      }
      while ( v9 < v17 );
      if ( !v19 )
      {
        v24 = a1;
LABEL_39:
        v23 = a5;
        goto LABEL_40;
      }
LABEL_30:
      v23 = a5;
      if ( !v41 )
      {
        v24 = a1;
        goto LABEL_40;
      }
      if ( (v32 & 0xFFFFFFFE) < (a5 & 0xFFFFFFFE) )
      {
        v10 = -2005139334;
        v24 = a1;
        v25 = a5;
        goto LABEL_45;
      }
      v24 = a1;
      if ( !a7 )
      {
        v10 = CConstraintModelResourceManager::RevokeEndpointResources((CConstraintModelResourceManager *)a1, v41);
        v38 = 1;
        if ( v10 < 0 )
        {
          v25 = a5;
          v26 = a8;
          v27 = a3;
          v28 = a2;
          v29 = a6;
          goto LABEL_47;
        }
        goto LABEL_39;
      }
LABEL_40:
      if ( v42 && !a7 && (_DWORD)v23 == 1 )
      {
        v29 = a6;
        v27 = a3;
        v28 = a2;
        CConstraintModelResourceManager::UpdateResourceEndpoint(v24, v23, a2, a3, v39, a6);
        v25 = a5;
        goto LABEL_46;
      }
      v25 = a5;
LABEL_45:
      v27 = a3;
      v28 = a2;
      v29 = a6;
LABEL_46:
      v26 = a8;
LABEL_47:
      if ( v48 )
        LeaveCriticalSection(lpCriticalSection);
      if ( v38 && v10 >= 0 )
      {
        if ( v26 )
          Sleep(0x32u);
        v10 = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
                v24,
                v28,
                v27,
                v39,
                v25,
                v29,
                0,
                v26 + 1);
      }
    }
    v11 = WPP_GLOBAL_Control;
  }
  if ( v11 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v11 + 7) & 0x100) != 0
    && *((_BYTE *)v11 + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)v11 + 2), 0x23u, (__int64)&WPP_2b5f394d6942332cf81378c5e0b14847_Traceguids, v10);
  }
  ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>>::~CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>>((void **)&v43);
  return (unsigned int)v10;
}
