/*
 * XREFs of ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00932EC
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C009313C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     vMakeInactiveHelper @ 0x1C02A07F0 (vMakeInactiveHelper.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B4F3C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0087828 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0087AF0 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0087B88 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0087BA8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C011C73C (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     TraceGreReleaseSemaphore @ 0x1C013E084 (TraceGreReleaseSemaphore.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C013E7A8 (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026572C (--1SEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bMakeInactiveHelper(RFONTOBJ *this, struct RFONT **a2)
{
  unsigned int v2; // r15d
  __int64 v5; // rcx
  struct RFONT *v7; // r12
  __int64 v8; // r13
  Gre::Base *v9; // rcx
  _QWORD *v10; // r14
  struct Gre::Base::SESSION_GLOBALS *v11; // rbx
  __int64 v12; // rdx
  const struct SEMOBJSHARED *v13; // rdx
  const struct SEMOBJSHARED *v14; // rdx
  RFONTOBJ *v15; // rcx
  __int64 v16; // rdx
  struct RFONT *v17; // rcx
  __int64 v18; // rax
  struct RFONT *v19; // rcx
  struct RFONT *v20; // rcx
  __int64 v21; // rax
  unsigned int i; // edx
  struct RFONT *v23; // rcx
  void *v24; // rcx
  __int64 v25; // r10
  __int64 v26; // rbx
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r11
  _QWORD *v30; // r8
  __int64 v31; // rax
  unsigned int v32; // edx
  struct RFONT *v33; // rax
  struct RFONT *v34; // rcx
  struct RFONT *v35; // rdx
  __int64 v36; // rdx
  _QWORD *v37; // r9
  _QWORD *v38; // r8
  __int64 v39; // rdx
  struct RFONT *v40; // [rsp+20h] [rbp-40h] BYREF
  __int64 v41; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v42[2]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v43[2]; // [rsp+40h] [rbp-20h] BYREF
  struct _FONTOBJ *v44; // [rsp+B0h] [rbp+50h] BYREF
  struct RFONT *v45; // [rsp+B8h] [rbp+58h] BYREF

  v2 = 0;
  LODWORD(v44) = 0;
  if ( !(unsigned int)RFONTOBJ::bValid(this) )
    return 0LL;
  v7 = 0LL;
  v8 = *(_QWORD *)(SGDGetSessionState(v5) + 32);
  v10 = (_QWORD *)(v8 + 13272);
  v11 = Gre::Base::Globals(v9);
  if ( a2 )
  {
    GreAcquireSemaphore(*v10);
    v12 = *v10;
    ++*(_DWORD *)(v8 + 13300);
    TraceGreReleaseSemaphore(L"GreFullGlobals.hsemEUDC1", v12);
    GreReleaseSemaphoreInternal(*v10);
  }
  v42[0] = *((_QWORD *)v11 + 3);
  GreAcquireSemaphore(v42[0]);
  if ( !RFONTOBJ::bActive(this, v13) )
  {
    GreAcquireSemaphore(*v10);
    v16 = *v10;
    --*(_DWORD *)(v8 + 13300);
    TraceGreReleaseSemaphore(L"GreFullGlobals.hsemEUDC1", v16);
    GreReleaseSemaphoreInternal(*v10);
    SEMOBJ::~SEMOBJ((SEMOBJ *)v42);
    return 0LL;
  }
  --*(_DWORD *)(*(_QWORD *)this + 660LL);
  if ( !RFONTOBJ::bActive(v15, v14) )
  {
    if ( a2 )
    {
      v17 = *(struct RFONT **)(*(_QWORD *)this + 720LL);
      if ( v17 )
      {
        *a2++ = v17;
        *(_QWORD *)(*(_QWORD *)this + 720LL) = 0LL;
      }
      v18 = *(_QWORD *)this;
      LODWORD(v44) = 1;
      v19 = *(struct RFONT **)(v18 + 728);
      if ( v19 )
      {
        *a2++ = v19;
        *(_QWORD *)(*(_QWORD *)this + 728LL) = 0LL;
      }
      v20 = *(struct RFONT **)(*(_QWORD *)this + 736LL);
      if ( v20 )
      {
        *a2++ = v20;
        *(_QWORD *)(*(_QWORD *)this + 736LL) = 0LL;
      }
      v21 = *(_QWORD *)this;
      for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 840LL); ++i )
      {
        v23 = *(struct RFONT **)(*(_QWORD *)(v21 + 744) + 8LL * i);
        if ( v23 )
        {
          *a2++ = v23;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 744LL) + 8LL * i) = 0LL;
        }
        v21 = *(_QWORD *)this;
      }
      v24 = *(void **)(v21 + 744);
      if ( v24 && v24 != (void *)(v21 + 752) )
        Win32FreePool(v24);
      *(_QWORD *)(*(_QWORD *)this + 744LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 832LL) = 0;
    }
    v25 = *(_QWORD *)this;
    v26 = *(_QWORD *)(*(_QWORD *)this + 104LL);
    v41 = v26;
    if ( (*(_DWORD *)(v26 + 40) & 0x800000) != 0 )
      v27 = *(_QWORD *)(*(_QWORD *)(v26 + 3496) + 1512LL);
    else
      v27 = *(_QWORD *)(v26 + 1512);
    v28 = *(_QWORD *)(v25 + 664);
    v29 = *(_QWORD *)(v25 + 672);
    v30 = (_QWORD *)((v29 + 664) & -(__int64)(v29 != 0));
    if ( v28 )
    {
      *(_QWORD *)(((v28 + 664) & -(__int64)(*(_QWORD *)(v25 + 664) != 0LL)) + 8) = v29;
      if ( v30 )
        *v30 = *(_QWORD *)(v25 + 664);
    }
    else
    {
      v27 = *(_QWORD *)(v25 + 672);
      if ( v30 )
        *v30 = 0LL;
    }
    if ( (*(_DWORD *)(v26 + 40) & 0x800000) != 0 )
      *(_QWORD *)(*(_QWORD *)(v26 + 3496) + 1512LL) = v27;
    else
      *(_QWORD *)(v26 + 1512) = v27;
    v31 = *(_QWORD *)(*(_QWORD *)this + 128LL);
    if ( *(_DWORD *)(v31 + 56) || *(_DWORD *)(v31 + 60) || *(_QWORD *)(v31 + 144) )
    {
      if ( (*(_DWORD *)(v26 + 40) & 0x800000) != 0 )
        v32 = *(_DWORD *)(*(_QWORD *)(v26 + 3496) + 1528LL);
      else
        v32 = *(_DWORD *)(v26 + 1528);
      if ( v32 < 0x80 )
      {
        if ( (*(_DWORD *)(v26 + 40) & 0x800000) != 0 )
          ++*(_DWORD *)(*(_QWORD *)(v26 + 3496) + 1528LL);
        else
          ++*(_DWORD *)(v26 + 1528);
      }
      else
      {
        v33 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v41);
        if ( v33 )
        {
          v34 = v33;
          v35 = v33;
          do
          {
            v7 = v34;
            v34 = (struct RFONT *)*((_QWORD *)v35 + 84);
            v45 = v34;
            v35 = v34;
          }
          while ( v34 );
        }
        v40 = v7;
        v45 = v33;
        RFONTOBJ::vRemove((__int64)&v40, &v45, 1);
        PDEVOBJ::prfntInactive((PDEVOBJ *)&v41, v45);
        v40 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v40);
      }
      if ( (*(_DWORD *)(v26 + 40) & 0x800000) != 0 )
        v36 = *(_QWORD *)(*(_QWORD *)(v26 + 3496) + 1520LL);
      else
        v36 = *(_QWORD *)(v26 + 1520);
      v37 = (_QWORD *)((v36 + 664) & -(__int64)(v36 != 0));
      v38 = (_QWORD *)(*(_QWORD *)this + 664LL);
      if ( *(_QWORD *)this != -664LL )
      {
        *v38 = 0LL;
        v38[1] = v36;
        if ( v37 )
          *v37 = *(_QWORD *)this;
        v36 = *(_QWORD *)this;
      }
      if ( (*(_DWORD *)(v26 + 40) & 0x800000) != 0 )
        *(_QWORD *)(*(_QWORD *)(v26 + 3496) + 1520LL) = v36;
      else
        *(_QWORD *)(v26 + 1520) = v36;
    }
    else
    {
      v7 = *(struct RFONT **)this;
    }
    v2 = (unsigned int)v44;
  }
  SEMOBJ::~SEMOBJ((SEMOBJ *)v42);
  if ( a2 && !v2 )
  {
    GreAcquireSemaphore(*v10);
    v39 = *v10;
    --*(_DWORD *)(v8 + 13300);
    TraceGreReleaseSemaphore(L"GreFullGlobals.hsemEUDC1", v39);
    GreReleaseSemaphoreInternal(*v10);
  }
  if ( v7 )
  {
    v42[0] = *((_QWORD *)v7 + 16);
    v44 = (struct _FONTOBJ *)v7;
    memset(v43, 0, sizeof(v43));
    PushThreadGuardedObject(v43, v7, RestartInactiveHelper);
    RFONTOBJ::vDeleteRFONT(&v44, 0LL, (struct PFFOBJ *)v42, 1);
    PopThreadGuardedObject(v43);
    v44 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v44);
  }
  *(_QWORD *)this = 0LL;
  return v2;
}
