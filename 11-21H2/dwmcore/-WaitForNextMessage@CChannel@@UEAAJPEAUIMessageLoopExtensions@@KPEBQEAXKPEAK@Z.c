/*
 * XREFs of ?WaitForNextMessage@CChannel@@UEAAJPEAUIMessageLoopExtensions@@KPEBQEAXKPEAK@Z @ 0x18002D440
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::WaitForNextMessage(
        CChannel *this,
        struct IMessageLoopExtensions *a2,
        unsigned int a3,
        void *const *a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v6; // r12
  void *const *v7; // r13
  __int64 v8; // r15
  struct _RTL_CRITICAL_SECTION *v10; // r14
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // edi
  unsigned int v14; // r12d
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // r13
  unsigned int v23; // ebx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // [rsp+20h] [rbp-E0h]
  _DWORD v29[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h]
  int v31; // [rsp+68h] [rbp-98h]
  int v32; // [rsp+6Ch] [rbp-94h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  _QWORD v35[64]; // [rsp+80h] [rbp-80h] BYREF

  v6 = a6;
  v7 = a4;
  v8 = a3;
  if ( a3 && !a4 || a3 > 0x3F )
  {
    v13 = -2147024809;
    v26 = 639;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v13, v26, 0LL);
    return (unsigned int)v13;
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v12 = *((_QWORD *)this + 20);
  v13 = 0;
  if ( v12 )
  {
    v31 = *((_DWORD *)this + 14);
    v18 = *((_QWORD *)this + 6);
    v33 = v12;
    v30 = 0LL;
    v32 = 0;
    v19 = *(_QWORD *)(v18 + 8);
    v34 = 0LL;
    v29[1] = 40;
    v29[0] = 8;
    LOBYTE(v11) = *((_BYTE *)this + 211);
    v20 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, __int64))(*(_QWORD *)v19 + 8LL))(v19, v29, 0LL, v11);
    v13 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x144u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v13, 0x138u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v13, 0x217u, 0LL);
      goto LABEL_7;
    }
    *((_QWORD *)this + 20) = 0LL;
  }
  *((_BYTE *)this + 211) = 0;
  v14 = *((_DWORD *)this + 3);
  EnterCriticalSection(&g_csCompositionEngine);
  if ( v14 )
  {
    v22 = *((_QWORD *)this + 5);
    do
    {
      v23 = *(_DWORD *)(v22 + 16LL * v14 + 8);
      memset_0((void *)(*((_QWORD *)this + 5) + v14 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
      v14 = v23;
    }
    while ( v23 );
    v7 = a4;
  }
  LeaveCriticalSection(&g_csCompositionEngine);
  v6 = a6;
  *((_DWORD *)this + 3) = 0;
LABEL_7:
  if ( v10 )
    LeaveCriticalSection(v10);
  if ( v13 < 0 )
  {
    v26 = 642;
    goto LABEL_23;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  if ( *((CChannel **)this + 8) == (CChannel *)((char *)this + 64) )
  {
    ResetEvent(*((HANDLE *)this + 10));
    memcpy_0(v35, v7, 8 * v8);
    v35[v8] = *((_QWORD *)this + 10);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    v15 = (*(__int64 (__fastcall **)(struct IMessageLoopExtensions *, _QWORD, _QWORD *, _QWORD, _DWORD, unsigned int *))(*(_QWORD *)a2 + 32LL))(
            a2,
            (unsigned int)(v8 + 1),
            v35,
            a5,
            0,
            v6);
    v13 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x29Eu, 0LL);
  }
  else
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    *v6 = v8;
  }
  return (unsigned int)v13;
}
