/*
 * XREFs of ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x180035210
 * Callers:
 *     PsmMemoryLimitNotification2 @ 0x180039530 (PsmMemoryLimitNotification2.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18004DD94 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F7E8 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004F84C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004F874 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 *     memmove_0 @ 0x18005022E (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ @ 0x180083558 (--1ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ.c)
 */

void __fastcall ModernResourceEnforcer::MemoryLimitNotification(
        ModernResourceEnforcer *this,
        union _RM_SID *a2,
        int a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  union _RM_SID *v8; // r12
  char *v9; // rax
  char *v10; // rsi
  ModernResourceEnforcer *v11; // r14
  unsigned __int64 v12; // rbx
  char **v13; // r13
  __int64 v14; // rcx
  char **v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  char *v19; // r14
  size_t v20; // rbx
  char *v21; // rbx
  char **v22; // rcx
  char *v23; // rax
  __int128 v24; // xmm1
  unsigned __int64 v25; // rdi
  int v26; // eax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  ModernResourceEnforcer **v29; // rcx
  size_t v30; // rbx
  _WORD *v31; // rcx
  int v32; // [rsp+30h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-61h] BYREF
  union _RM_SID *v34; // [rsp+48h] [rbp-51h]
  unsigned __int64 v35; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  void *v37; // [rsp+70h] [rbp-29h]
  int v38; // [rsp+78h] [rbp-21h]
  int v39; // [rsp+7Ch] [rbp-1Dh]
  int *v40; // [rsp+80h] [rbp-19h]
  __int64 v41; // [rsp+88h] [rbp-11h]
  unsigned __int64 *v42; // [rsp+90h] [rbp-9h]
  __int64 v43; // [rsp+98h] [rbp-1h]

  v32 = a3;
  v34 = a2;
  v8 = a2;
  v9 = (char *)operator new(0x98uLL);
  v10 = v9;
  if ( !v9 )
    goto LABEL_37;
  *((_WORD *)v9 + 12) = 0;
  *((_QWORD *)v9 + 1) = v9 + 24;
  v11 = (ModernResourceEnforcer *)(v9 + 136);
  *((_QWORD *)v9 + 2) = v9 + 24;
  *((_QWORD *)v9 + 14) = 0LL;
  *((_QWORD *)v9 + 15) = 0LL;
  *((_DWORD *)v9 + 32) = 0;
  *(_OWORD *)(v9 + 136) = 0LL;
  *(_DWORD *)v9 = 1;
  if ( a4 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a4[v12] );
  }
  else
  {
    v12 = 0LL;
  }
  v13 = (char **)(v9 + 24);
  v14 = 7LL;
  v15 = (char **)*((_QWORD *)v9 + 1);
  if ( v15 == v13 )
    v16 = 7LL;
  else
    v16 = (*v13 - (char *)v15) >> 1;
  if ( v12 > v16 )
  {
    if ( v15 != v13 )
      v14 = (*v13 - (char *)v15) >> 1;
    v17 = 2 * v14 + 1;
    if ( v17 < v12 )
      v17 = v12;
    if ( v17 > 0x3FFFFFFFFFFFFFF7LL )
      v17 = 0x3FFFFFFFFFFFFFF7LL;
    if ( v12 > v17 )
    {
      EventDescriptor.Keyword = 0LL;
      *(_QWORD *)&EventDescriptor.Id = 0LL;
    }
    else
    {
      v18 = v17 + 1;
      EventDescriptor.Keyword = v17 + 1;
      if ( v17 + 1 > 0x7FFFFFFFFFFFFFFFLL )
        v19 = 0LL;
      else
        v19 = (char *)operator new(2 * v18, (const struct std::nothrow_t *)&std::nothrow);
      *(_QWORD *)&EventDescriptor.Id = 0LL;
      if ( v19 )
      {
        v20 = 2 * v12;
        memcpy_0(v19, a4, v20);
        v21 = &v19[v20];
        *(_WORD *)v21 = 0;
        v22 = (char **)*((_QWORD *)v10 + 1);
        if ( v22 != v13 )
          operator delete(v22);
        *((_QWORD *)v10 + 1) = v19;
        *((_QWORD *)v10 + 2) = v21;
        v23 = &v19[2 * v18 - 2];
        v8 = v34;
        *v13 = v23;
        v11 = (ModernResourceEnforcer *)(v10 + 136);
        goto LABEL_21;
      }
    }
    ModernResourceEnforcer::ModernResourceEnforcerWorkItem::~ModernResourceEnforcerWorkItem((ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v10);
    operator delete(v10);
LABEL_37:
    v25 = a6;
    goto LABEL_25;
  }
  v30 = 2 * v12;
  memmove_0(v15, a4, v30);
  v31 = (_WORD *)(v30 + *((_QWORD *)v10 + 1));
  *((_QWORD *)v10 + 2) = v31;
  *v31 = 0;
LABEL_21:
  v24 = *((_OWORD *)v8 + 1);
  v25 = a6;
  *(_OWORD *)(v10 + 40) = *(_OWORD *)v8;
  *((_DWORD *)v10 + 28) = a5;
  v26 = *((_DWORD *)v8 + 16);
  v27 = *((_OWORD *)v8 + 2);
  *((_QWORD *)v10 + 15) = a6;
  *(_OWORD *)(v10 + 56) = v24;
  *((_DWORD *)v10 + 32) = 1;
  v28 = *((_OWORD *)v8 + 3);
  *(_OWORD *)(v10 + 72) = v27;
  *(_OWORD *)(v10 + 88) = v28;
  *((_DWORD *)v10 + 26) = v26;
  *((_DWORD *)v10 + 27) = v32;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 224));
  v29 = (ModernResourceEnforcer **)*((_QWORD *)this + 35);
  if ( *v29 != (ModernResourceEnforcer *)((char *)this + 272) )
    __fastfail(3u);
  *(_QWORD *)v11 = (char *)this + 272;
  *((_QWORD *)v11 + 1) = v29;
  *v29 = v11;
  *((_QWORD *)this + 35) = v11;
  if ( (*((_BYTE *)this + 296) & 1) == 0 )
  {
    (*(void (__fastcall **)(ModernResourceEnforcer *))(*(_QWORD *)this + 8LL))(this);
    TpPostWork(*((_QWORD *)this + 33));
    *((_DWORD *)this + 74) |= 1u;
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 224));
LABEL_25:
  if ( (unsigned int)dword_1800DC1E0 > 5 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
  {
    v35 = v25;
    v42 = &v35;
    v32 = -1073741801;
    v40 = &v32;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800DC1E8;
    v43 = 8LL;
    v41 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
    v37 = &unk_1800C1F6D;
    UserData.Reserved = 2;
    v38 = 42;
    v39 = 1;
    LODWORD(v34) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
}
