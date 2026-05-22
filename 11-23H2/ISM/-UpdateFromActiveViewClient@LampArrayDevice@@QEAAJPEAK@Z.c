/*
 * XREFs of ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x1800EC8E8
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18004BB44 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ??9Iterator@?$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEBA_NAEBV01@@Z @ 0x180010ACC (--9Iterator@-$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEBA_NAEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x1800589B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800EBAF4 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ?ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z @ 0x1800EC6AC (-ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z.c)
 */

__int64 __fastcall LampArrayDevice::UpdateFromActiveViewClient(LampArrayDevice *this, unsigned int *a2)
{
  int v3; // r13d
  struct _RTL_CRITICAL_SECTION *v4; // r14
  char v5; // r15
  struct LampArrayDevice::ViewClientListEntry *v6; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r10
  _QWORD *v10; // r8
  struct LampArrayDevice::ViewClientListEntry *v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned __int8 IsEnabled; // al
  bool v15; // al
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  bool v19; // si
  __int64 v20; // rax
  LONGLONG v21; // rax
  LONGLONG v22; // rcx
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v26; // r9
  __int64 v27; // r10
  _QWORD *v28; // r8
  struct LampArrayDevice::ViewClientListEntry *v29; // r8
  __int64 v30; // r9
  __int64 v31; // r10
  __int64 v32; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+40h]
  bool v35; // [rsp+80h] [rbp+48h] BYREF
  unsigned int *v36; // [rsp+88h] [rbp+50h]
  _QWORD *v37; // [rsp+90h] [rbp+58h] BYREF
  char *v38; // [rsp+98h] [rbp+60h] BYREF

  v36 = a2;
  v3 = -1;
  *a2 = -1;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v5 = 0;
  v35 = 0;
  v6 = (struct LampArrayDevice::ViewClientListEntry *)*((_QWORD *)this + 12);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v7 = (_QWORD *)((char *)this + 32);
  v37 = (_QWORD *)*((_QWORD *)this + 4);
  v38 = (char *)this + 32;
  if ( NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(&v37, &v38) )
  {
    v9 = 4184LL;
    while ( !*(_DWORD *)(*(_QWORD *)(v8 + 32) + v9) )
    {
      v37 = (_QWORD *)*v37;
      if ( !NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(&v37, &v38) )
        goto LABEL_12;
    }
    v10 = (_QWORD *)*v7;
    v38 = (char *)this + 32;
    while ( 1 )
    {
      v37 = v10;
      if ( !NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(&v37, &v38) )
        break;
      if ( *((_DWORD *)v11 + 6) == *(_DWORD *)(*(_QWORD *)(v12 + 32) + v13) )
      {
        v6 = v11;
        v5 = 1;
        break;
      }
      v10 = (_QWORD *)*v37;
    }
  }
LABEL_12:
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl)
    || v5 )
  {
    if ( v6 )
    {
LABEL_31:
      v19 = v35;
      goto LABEL_32;
    }
  }
  else
  {
    v6 = 0LL;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl);
  v38 = (char *)this + 32;
  if ( !IsEnabled )
  {
    v37 = (_QWORD *)*v7;
    if ( NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(&v37, &v38) )
    {
      v27 = 4200LL;
      while ( !*(_DWORD *)(*(_QWORD *)(v26 + 32) + v27) )
      {
        v37 = (_QWORD *)*v37;
        if ( !NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(&v37, &v38) )
          goto LABEL_31;
      }
      v28 = (_QWORD *)*v7;
      v38 = (char *)this + 32;
      while ( 1 )
      {
        v37 = v28;
        if ( !NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(&v37, &v38) )
          break;
        if ( *((_DWORD *)v29 + 6) == *(_DWORD *)(*(_QWORD *)(v30 + 32) + v31) )
        {
          v6 = v29;
          v19 = 1;
          goto LABEL_32;
        }
        v28 = (_QWORD *)*v37;
      }
    }
    goto LABEL_31;
  }
  v6 = 0LL;
  v37 = (_QWORD *)*v7;
  v15 = NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(&v37, &v38);
  v17 = 4100LL;
  while ( v15 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v16 + 32) + v17) )
    {
      v18 = *(_DWORD *)(v16 + 24);
      if ( v18 == *((_DWORD *)this + 54) )
      {
        v6 = (struct LampArrayDevice::ViewClientListEntry *)v16;
        break;
      }
      if ( v18 == *((_DWORD *)this + 55) )
        v6 = (struct LampArrayDevice::ViewClientListEntry *)v16;
    }
    v37 = (_QWORD *)*v37;
    v15 = NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(&v37, &v38);
  }
  if ( !*((_BYTE *)this + 224) )
  {
    v20 = *((_QWORD *)this + 12);
    if ( v20 && *(_DWORD *)(*(_QWORD *)(v20 + 32) + v17) )
      v6 = (struct LampArrayDevice::ViewClientListEntry *)*((_QWORD *)this + 12);
    goto LABEL_31;
  }
  v19 = v35;
  if ( !v6 )
    v6 = (struct LampArrayDevice::ViewClientListEntry *)*((_QWORD *)this + 12);
LABEL_32:
  if ( this != (LampArrayDevice *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v6
    && v6 == *((struct LampArrayDevice::ViewClientListEntry **)this + 12)
    && (*(_DWORD *)(*((_QWORD *)v6 + 4) + 4188LL) && !v5
     || !wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl)
     && *(_DWORD *)(*((_QWORD *)v6 + 4) + 4204LL)
     && !v19) )
  {
    v6 = 0LL;
  }
  LampArrayDevice::ProcessVendorMessages((HidLampArrayDevice **)this, v6);
  QueryPerformanceCounter(&PerformanceCount);
  v21 = PerformanceCount.QuadPart - *((_QWORD *)this + 25);
  v22 = *((_QWORD *)this + 26);
  if ( v21 < v22 )
  {
    v32 = 1000 * (v22 - v21) / *((_QWORD *)this + 24);
    if ( v32 > 0xFFFFFFFFLL )
      LODWORD(v32) = -1;
    v3 = v32;
  }
  else
  {
    v35 = 0;
    v23 = LampArrayDevice::ProcessLampState(this, v6, &v35);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x166,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)v23);
      if ( v4 )
        LeaveCriticalSection(v4);
      return v24;
    }
    if ( v35 )
      QueryPerformanceCounter((LARGE_INTEGER *)this + 25);
  }
  *v36 = v3;
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
