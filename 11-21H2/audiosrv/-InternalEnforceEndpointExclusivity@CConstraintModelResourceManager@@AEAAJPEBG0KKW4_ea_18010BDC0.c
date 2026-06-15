/*
 * XREFs of ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x18010BDC0
 * Callers:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x18010BCBC (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x18010BDC0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_18010BDC0.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x1800C61CC (WPP_SF_D.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     ??1?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800CB90C (--1-$CAtlArray@PEAVExclusiveEndpointInfo@@V-$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@AT.c)
 *     ??0ExclusiveEndpointInfo@@QEAA@PEBG0K@Z @ 0x1801098A0 (--0ExclusiveEndpointInfo@@QEAA@PEBG0K@Z.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x18010B2EC (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x18010BDC0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_18010BDC0.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x18010DA8C (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 *     ?SimpleWildcardStringCompare@@YAHQEBG_K01@Z @ 0x18010DFF8 (-SimpleWildcardStringCompare@@YAHQEBG_K01@Z.c)
 *     ?UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDIO_DIRECTION@@@Z @ 0x18010E0C4 (-UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDI.c)
 *     ?SetCount@?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x180159810 (-SetCount@-$CAtlArray@PEAV-$CAtlArray@PEAVExclusiveEndpointInfo@@V-$CElementTraits@PEAVExclusive.c)
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
  __int64 v11; // rdi
  CEndpointStoreCache *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  _QWORD *v15; // r15
  _QWORD *v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdx
  int v20; // ecx
  _QWORD *v21; // r12
  unsigned __int64 i; // r15
  __int64 v23; // rdx
  __int64 v24; // r12
  unsigned int v25; // r13d
  int v26; // edi
  char *v27; // rsi
  char *v28; // r14
  unsigned int v29; // r15d
  int v32; // [rsp+44h] [rbp-BCh]
  unsigned int v34; // [rsp+50h] [rbp-B0h]
  int v37; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v38; // [rsp+6Ch] [rbp-94h] BYREF
  int v39; // [rsp+70h] [rbp-90h]
  int v40; // [rsp+74h] [rbp-8Ch]
  __int64 v41; // [rsp+78h] [rbp-88h]
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

  v9 = 0LL;
  v10 = 0;
  ExclusiveEndpointInfo::ExclusiveEndpointInfo((ExclusiveEndpointInfo *)v49, a2, a3, a4);
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0;
  v11 = 0LL;
  v34 = -1;
  v42 = 0LL;
  v32 = 0;
  v39 = 0;
  if ( a8 <= 0x14 )
  {
    v12 = WPP_GLOBAL_Control;
  }
  else
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Eu,
        (__int64)&WPP_57553648dc9d3a5078fc664d84c702c1_Traceguids,
        a8);
      v12 = WPP_GLOBAL_Control;
    }
    v10 = -2005139334;
  }
  v40 = a5 == 1;
  if ( v10 >= 0 )
  {
    v13 = *(_QWORD *)(a1 + 16);
    if ( !(unsigned __int8)ATL::CAtlArray<ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>> *,ATL::CElementTraits<ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>> *>>::SetCount(
                             &v43,
                             *(_QWORD *)(v13 + 208)) )
      ATL::AtlThrowImpl(-2147024882);
    v14 = *(_QWORD *)(v13 + 208);
    v15 = v43;
    if ( v14 )
    {
      v16 = v43;
      v17 = *(_QWORD *)(v13 + 200) - (_QWORD)v43;
      do
      {
        *v16 = *(_QWORD *)((char *)v16 + v17);
        ++v16;
        --v14;
      }
      while ( v14 );
    }
    v10 = 0;
    v18 = v44;
    if ( !v44 )
    {
LABEL_55:
      v12 = WPP_GLOBAL_Control;
      goto LABEL_56;
    }
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
    v20 = 0;
    do
    {
      if ( v20 )
        goto LABEL_29;
      if ( v9 >= v18 )
        ATL::AtlThrowImpl(-2147024809);
      v21 = (_QWORD *)v15[v9];
      v11 = 0LL;
      v41 = 0LL;
      v34 = -1;
      for ( i = 0LL; i < v21[1]; ++i )
      {
        v11 = *(_QWORD *)(*v21 + 8 * i);
        if ( v49[0] && *(_WORD *)v11 && (unsigned int)_o__wcsicmp(v49, *(_QWORD *)(*v21 + 8 * i))
          || !SimpleWildcardStringCompare(v50, v19, (const unsigned __int16 *const)(v11 + 402), 0LL)
          || v51 != *(_DWORD *)(v11 + 924) )
        {
          v37 = 0;
          v38 = -1;
          CConstraintModelResourceManager::GetEndpointStatus(
            (struct _RTL_CRITICAL_SECTION *)a1,
            (const struct ExclusiveEndpointInfo *)v11,
            v40,
            &v37,
            &v38);
          v20 = v32;
          if ( v37 )
          {
            v41 = v11;
            v34 = v38;
            continue;
          }
        }
        else
        {
          v20 = 1;
          v32 = 1;
          v42 = v11;
        }
        v11 = v41;
      }
      ++v9;
      v15 = v43;
    }
    while ( v9 < v18 );
    if ( v20 )
    {
LABEL_29:
      v23 = a5;
      if ( !v11 )
      {
        v24 = a1;
        goto LABEL_42;
      }
      if ( (v34 & 0xFFFFFFFE) < (a5 & 0xFFFFFFFE) )
      {
        v10 = -2005139334;
        v24 = a1;
        v25 = a5;
        goto LABEL_47;
      }
      v24 = a1;
      if ( a7 )
        goto LABEL_42;
      v10 = CConstraintModelResourceManager::RevokeEndpointResources(
              (CConstraintModelResourceManager *)a1,
              (struct ExclusiveEndpointInfo *)v11);
      v39 = 1;
      if ( v10 < 0 )
      {
        v26 = a6;
        v27 = a2;
        v28 = a3;
        v29 = a4;
        goto LABEL_38;
      }
    }
    else
    {
      v24 = a1;
    }
    v23 = a5;
LABEL_42:
    if ( !v42 || a7 || (_DWORD)v23 != 1 )
    {
      v25 = a5;
LABEL_47:
      v26 = a6;
      v27 = a2;
      v28 = a3;
      v29 = a4;
LABEL_48:
      if ( v48 )
        LeaveCriticalSection(lpCriticalSection);
      if ( v39 && v10 >= 0 )
      {
        if ( a8 )
          Sleep(0x32u);
        v10 = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
                v24,
                v27,
                v28,
                v29,
                v25,
                v26,
                0,
                a8 + 1);
      }
      goto LABEL_55;
    }
    v26 = a6;
    v29 = a4;
    v28 = a3;
    v27 = a2;
    CConstraintModelResourceManager::UpdateResourceEndpoint(v24, v23, a2, a3, a4, a6);
LABEL_38:
    v25 = a5;
    goto LABEL_48;
  }
LABEL_56:
  if ( v12 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v12 + 7) & 0x100) != 0
    && *((_BYTE *)v12 + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)v12 + 2), 0x1Fu, (__int64)&WPP_57553648dc9d3a5078fc664d84c702c1_Traceguids, v10);
  }
  ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>>::~CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>>((void **)&v43);
  return (unsigned int)v10;
}
