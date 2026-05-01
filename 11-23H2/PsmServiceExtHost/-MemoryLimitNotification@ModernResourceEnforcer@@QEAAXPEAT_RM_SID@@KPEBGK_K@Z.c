/*
 * XREFs of ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000DF00
 * Callers:
 *     PsmMemoryLimitNotification2 @ 0x1800107F0 (PsmMemoryLimitNotification2.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180048F50 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18004A9B8 (--2@YAPEAX_K@Z.c)
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AU?$pair@PEAG_K@2@_K@Z @ 0x18004F1C0 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AU-$pair@PEAG_K@2@.c)
 *     ?_Reinit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXU?$pair@PEAG_K@2@_K@Z @ 0x18004F268 (-_Reinit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXU-$pair@PEAG_K@2@_K@Z.c)
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 *     memmove_0 @ 0x1800534AE (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ @ 0x180081CD0 (--1ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ.c)
 */

void __fastcall ModernResourceEnforcer::MemoryLimitNotification(
        ModernResourceEnforcer *this,
        union _RM_SID *a2,
        int a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  char *v8; // rax
  char *v9; // rsi
  _WORD *v10; // rax
  ModernResourceEnforcer *v11; // r12
  unsigned __int64 v12; // rdi
  _WORD *v13; // rcx
  unsigned __int64 v14; // rax
  _WORD *v15; // rcx
  __int64 v16; // r13
  unsigned __int64 v17; // rdi
  union _RM_SID *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  ModernResourceEnforcer **v22; // rcx
  int v23; // ebx
  int v24; // [rsp+30h] [rbp-79h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-69h] BYREF
  union _RM_SID *v26; // [rsp+50h] [rbp-59h]
  EVENT_DESCRIPTOR v27; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  void *v29; // [rsp+80h] [rbp-29h]
  int v30; // [rsp+88h] [rbp-21h]
  int v31; // [rsp+8Ch] [rbp-1Dh]
  int *v32; // [rsp+90h] [rbp-19h]
  __int64 v33; // [rsp+98h] [rbp-11h]
  EVENT_DESCRIPTOR *v34; // [rsp+A0h] [rbp-9h]
  __int64 v35; // [rsp+A8h] [rbp-1h]

  v24 = a3;
  v26 = a2;
  v8 = (char *)operator new(0x98uLL);
  v9 = v8;
  if ( !v8 )
  {
    v23 = -1073741801;
    goto LABEL_21;
  }
  v10 = v8 + 24;
  *((_QWORD *)v9 + 14) = 0LL;
  *((_QWORD *)v9 + 1) = v10;
  v11 = (ModernResourceEnforcer *)(v9 + 136);
  *((_QWORD *)v9 + 2) = v10;
  *((_QWORD *)v9 + 15) = 0LL;
  *v10 = 0;
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
  v13 = (_WORD *)*((_QWORD *)v9 + 1);
  if ( v13 == v10 )
    v14 = 7LL;
  else
    v14 = (__int64)(*(_QWORD *)v10 - (_QWORD)v13) >> 1;
  if ( v12 > v14 )
  {
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
      v9 + 8,
      &EventDescriptor,
      v12);
    v16 = *(_QWORD *)&EventDescriptor.Id;
    if ( *(_QWORD *)&EventDescriptor.Id )
    {
      memcpy_0(*(void **)&EventDescriptor.Id, a4, 2 * v12);
      v27 = EventDescriptor;
      *(_WORD *)(2 * v12 + v16) = 0;
      utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Reinit(
        v9 + 8,
        &v27,
        v12);
      goto LABEL_14;
    }
    v23 = -1073741801;
    ModernResourceEnforcer::ModernResourceEnforcerWorkItem::~ModernResourceEnforcerWorkItem((ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v9);
    operator delete(v9);
LABEL_21:
    v17 = a6;
    goto LABEL_22;
  }
  memmove_0(v13, a4, 2 * v12);
  v15 = (_WORD *)(2 * v12 + *((_QWORD *)v9 + 1));
  *((_QWORD *)v9 + 2) = v15;
  *v15 = 0;
LABEL_14:
  v17 = a6;
  *((_DWORD *)v9 + 28) = a5;
  v18 = v26;
  *((_QWORD *)v9 + 15) = a6;
  *((_DWORD *)v9 + 32) = 1;
  v19 = *((_OWORD *)v18 + 1);
  *(_OWORD *)(v9 + 40) = *(_OWORD *)v18;
  v20 = *((_OWORD *)v18 + 2);
  *(_OWORD *)(v9 + 56) = v19;
  v21 = *((_OWORD *)v18 + 3);
  LODWORD(v18) = *((_DWORD *)v18 + 16);
  *(_OWORD *)(v9 + 72) = v20;
  *(_OWORD *)(v9 + 88) = v21;
  *((_DWORD *)v9 + 26) = (_DWORD)v18;
  *((_DWORD *)v9 + 27) = v24;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 224));
  v22 = (ModernResourceEnforcer **)*((_QWORD *)this + 35);
  if ( *v22 != (ModernResourceEnforcer *)((char *)this + 272) )
    __fastfail(3u);
  *(_QWORD *)v11 = (char *)this + 272;
  *((_QWORD *)v9 + 18) = v22;
  *v22 = v11;
  *((_QWORD *)this + 35) = v11;
  if ( (*((_BYTE *)this + 296) & 1) == 0 )
  {
    (*(void (__fastcall **)(ModernResourceEnforcer *))(*(_QWORD *)this + 8LL))(this);
    TpPostWork(*((_QWORD *)this + 33));
    *((_DWORD *)this + 74) |= 1u;
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 224));
  v23 = v24;
LABEL_22:
  if ( (unsigned int)dword_1800DB1E0 > 5 && (byte_1800DB1F0 & 1) != 0 && (qword_1800DB1F8 & 1) == qword_1800DB1F8 )
  {
    *(_QWORD *)&v27.Id = v17;
    v34 = &v27;
    v24 = v23;
    v32 = &v24;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800DB1E8;
    v35 = 8LL;
    v33 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB1E8;
    v29 = &unk_1800C3157;
    UserData.Reserved = 2;
    v30 = 42;
    v31 = 1;
    LODWORD(v26) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
}
