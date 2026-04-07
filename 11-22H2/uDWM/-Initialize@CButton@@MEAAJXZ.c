/*
 * XREFs of ?Initialize@CButton@@MEAAJXZ @ 0x180020DC0
 * Callers:
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x18001EF24 (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CAtlasButton@@SAJPEAPEAV1@@Z @ 0x180020CD4 (-Create@CAtlasButton@@SAJPEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x180022770 (--$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180023050 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::Initialize(struct CAtlasButton **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  char *v5; // r13
  __int64 v6; // r14
  __int64 *v7; // rdi
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 *v11; // rdx
  __int64 *v12; // r9
  __int64 v13; // r15
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // r9
  struct CAtlasButton **v17; // r8
  struct CAtlasButton **v18; // r10
  __int64 v19; // rax
  __int64 v20; // rcx
  int v22; // r9d
  unsigned int v23; // eax
  unsigned int v24; // eax
  _QWORD *v25; // r9
  _QWORD *v26; // r8
  unsigned int v27; // [rsp+20h] [rbp-18h]
  __int64 *v28; // [rsp+80h] [rbp+48h] BYREF
  __int64 v29; // [rsp+88h] [rbp+50h] BYREF
  struct CAtlasButton **v30; // [rsp+90h] [rbp+58h] BYREF
  struct CAtlasButton *v31; // [rsp+98h] [rbp+60h] BYREF

  v2 = CCompositor::CreateProxy<CVisualProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6), this + 2);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x4Du, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1Fu, 0LL);
    v22 = v3;
    v27 = 44;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, v27, 0LL);
    return v3;
  }
  v4 = CAtlasButton::Create(this + 37);
  v3 = v4;
  if ( v4 < 0 )
  {
    v27 = 46;
LABEL_23:
    v22 = v4;
    goto LABEL_24;
  }
  v5 = (char *)(this + 38);
  v4 = CAtlasButton::Create(this + 38);
  v3 = v4;
  if ( v4 < 0 )
  {
    v27 = 47;
    goto LABEL_23;
  }
  v6 = *((unsigned int *)this + 68);
  v7 = (__int64 *)(this + 31);
  v29 = *(_QWORD *)v5;
  if ( (unsigned int)v6 > *((_DWORD *)this + 68) )
  {
    v3 = -2147024809;
    v24 = 451;
    v8 = -2147024809;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v24, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x4Cu, 0LL);
    v22 = v8;
    v27 = 51;
    goto LABEL_24;
  }
  v28 = &v29;
  v8 = DynArrayImpl<0>::Grow((int)this + 248, 8, 1, 0, (__int64)&v28);
  v3 = v8;
  if ( v8 < 0 )
  {
    v24 = 461;
    goto LABEL_28;
  }
  v9 = *((unsigned int *)this + 68);
  v10 = *v7;
  *((_DWORD *)this + 68) = v9 + 1;
  if ( (unsigned int)v9 > (unsigned int)v6 )
  {
    v25 = (_QWORD *)(v10 + 8 * v9);
    do
    {
      v9 = (unsigned int)(v9 - 1);
      *v25-- = *(_QWORD *)(v10 + 8 * v9);
    }
    while ( (unsigned int)v9 > (unsigned int)v6 );
  }
  v11 = v28;
  v12 = (__int64 *)(v10 + 8 * v6);
  if ( v28 >= v12 && (unsigned __int64)v28 < v10 + 8 * ((unsigned __int64)*((unsigned int *)this + 68) - 1) )
    v11 = ++v28;
  *v12 = *v11;
  _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
  *(_QWORD *)(v29 + 80) = this;
  (*((void (__fastcall **)(struct CAtlasButton **, __int64))*this + 3))(this, 0x2000LL);
  v13 = *((unsigned int *)this + 68);
  v31 = this[37];
  if ( (unsigned int)v13 > *((_DWORD *)this + 68) )
  {
    v3 = -2147024809;
    v14 = -2147024809;
    v23 = 451;
    goto LABEL_21;
  }
  v30 = &v31;
  v14 = DynArrayImpl<0>::Grow((int)this + 248, 8, 1, 0, (__int64)&v30);
  v3 = v14;
  if ( v14 < 0 )
  {
    v23 = 461;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v23, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x4Cu, 0LL);
    v22 = v14;
    v27 = 52;
    goto LABEL_24;
  }
  v15 = *((unsigned int *)this + 68);
  v16 = *v7;
  *((_DWORD *)this + 68) = v15 + 1;
  if ( (unsigned int)v15 > (unsigned int)v13 )
  {
    v26 = (_QWORD *)(v16 + 8 * v15);
    do
    {
      v15 = (unsigned int)(v15 - 1);
      *v26-- = *(_QWORD *)(v16 + 8 * v15);
    }
    while ( (unsigned int)v15 > (unsigned int)v13 );
  }
  v17 = v30;
  v18 = (struct CAtlasButton **)(v16 + 8 * v13);
  if ( v30 >= v18 && (unsigned __int64)v30 < v16 + 8 * ((unsigned __int64)*((unsigned int *)this + 68) - 1) )
    v17 = ++v30;
  *v18 = *v17;
  _InterlockedIncrement((volatile signed __int32 *)v31 + 2);
  *((_QWORD *)v31 + 10) = this;
  (*((void (__fastcall **)(struct CAtlasButton **, __int64))*this + 3))(this, 0x2000LL);
  v19 = *(_QWORD *)v5;
  if ( *(_DWORD *)(*(_QWORD *)v5 + 32LL) || *(_DWORD *)(v19 + 36) || *(_DWORD *)(v19 + 40) || *(_DWORD *)(v19 + 44) )
  {
    *(_DWORD *)(v19 + 96) |= 1u;
    v20 = *(_QWORD *)(v19 + 80);
    *(_OWORD *)(v19 + 32) = 0LL;
    if ( v20 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 24LL))(v20, 4096LL);
  }
  return v3;
}
