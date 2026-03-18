/*
 * XREFs of ?SynchronizedCommit@CChannel@@UEAAJPEAX@Z @ 0x18002D6D0
 * Callers:
 *     ?SynchronizeChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18002D308 (-SynchronizeChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ?Commit@CChannel@@UEAAJXZ @ 0x18002D6C0 (-Commit@CChannel@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::SynchronizedCommit(CChannel *this, unsigned __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 v5; // r9
  unsigned __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned int v8; // r14d
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // r15
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  _DWORD v18[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h]
  int v20; // [rsp+40h] [rbp-38h]
  int v21; // [rsp+44h] [rbp-34h]
  unsigned __int64 v22; // [rsp+48h] [rbp-30h]
  __int64 v23; // [rsp+50h] [rbp-28h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v6 = *((_QWORD *)this + 20);
  v7 = 0;
  if ( __PAIR128__(v6, a2) != 0 )
  {
    v10 = *((_DWORD *)this + 14);
    v19 = 0LL;
    v21 = 0;
    v23 = 0LL;
    v20 = v10;
    v11 = *((_QWORD *)this + 6);
    v22 = v6;
    v18[1] = 40;
    v18[0] = 8;
    LOBYTE(v5) = *((_BYTE *)this + 211);
    v12 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, unsigned __int64, __int64))(**(_QWORD **)(v11 + 8) + 8LL))(
            *(_QWORD *)(v11 + 8),
            v18,
            a2,
            v5);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x144u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v7, 0x138u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v7, 0x217u, 0LL);
      goto LABEL_4;
    }
    *((_QWORD *)this + 20) = 0LL;
  }
  *((_BYTE *)this + 211) = 0;
  v8 = *((_DWORD *)this + 3);
  EnterCriticalSection(&g_csCompositionEngine);
  if ( v8 )
  {
    v14 = *((_QWORD *)this + 5);
    do
    {
      v15 = *(_DWORD *)(v14 + 16LL * v8 + 8);
      memset_0((void *)(*((_QWORD *)this + 5) + v8 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
      v8 = v15;
    }
    while ( v15 );
  }
  LeaveCriticalSection(&g_csCompositionEngine);
  *((_DWORD *)this + 3) = 0;
LABEL_4:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
