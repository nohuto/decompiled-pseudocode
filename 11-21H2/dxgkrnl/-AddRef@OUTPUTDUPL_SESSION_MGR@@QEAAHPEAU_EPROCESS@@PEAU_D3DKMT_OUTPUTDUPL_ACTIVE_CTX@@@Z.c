/*
 * XREFs of ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C031F47C
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0326B70 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E8B48 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C03243D8 (-TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::AddRef(
        OUTPUTDUPL_SESSION_MGR *this,
        struct _EPROCESS *a2,
        struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *a3)
{
  unsigned int v6; // edi
  unsigned int v7; // ebp
  unsigned int v8; // r13d
  unsigned int v9; // edx
  unsigned int v10; // r8d
  char *Buffer; // rsi
  __int64 v12; // rcx
  struct _EPROCESS *v13; // rdx
  int v14; // eax
  const void **v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // r14
  struct _EPROCESS *v19; // rax
  __int64 v20; // rcx
  _BYTE v22[16]; // [rsp+50h] [rbp-38h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (OUTPUTDUPL_SESSION_MGR *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  v6 = 0;
  v7 = -1;
  if ( !a3 || *((_DWORD *)this + 32) < 0x10u )
  {
    v8 = 0;
    v9 = *((_DWORD *)this + 1);
    v10 = 0;
    Buffer = (char *)**((_QWORD **)this + 7);
    if ( v9 )
    {
      while ( 1 )
      {
        if ( v6 )
          goto LABEL_12;
        v12 = 32LL * v10;
        v13 = *(struct _EPROCESS **)&Buffer[v12 + 8];
        if ( a2 == v13 )
          break;
        if ( v7 != -1 )
          goto LABEL_8;
        if ( v13 )
        {
LABEL_9:
          if ( *(_DWORD *)&Buffer[v12] )
            ++v8;
          goto LABEL_11;
        }
        v7 = v10;
LABEL_11:
        v9 = *((_DWORD *)this + 1);
        if ( ++v10 >= v9 )
          goto LABEL_12;
      }
      v14 = *(_DWORD *)&Buffer[v12];
      v7 = v10;
      if ( v14 )
      {
        v6 = 1;
        *(_DWORD *)&Buffer[v12] = v14 + 1;
      }
LABEL_8:
      if ( v13 )
        goto LABEL_9;
      goto LABEL_11;
    }
LABEL_12:
    if ( v8 < *(_DWORD *)this || v6 )
    {
      if ( v7 == -1 )
      {
        v15 = (const void **)*((_QWORD *)this + 7);
        v16 = v9 + 1;
        *((_DWORD *)this + 1) = v16;
        Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(v15, 32 * v16, 1, 1LL);
        if ( !Buffer )
        {
          v6 = 0;
          goto LABEL_33;
        }
        v7 = *((_DWORD *)this + 1) - 1;
        v17 = 32LL * v7;
        *(_OWORD *)&Buffer[v17] = 0LL;
        *(_OWORD *)&Buffer[v17 + 16] = 0LL;
      }
      v18 = 32LL * v7;
      v19 = *(struct _EPROCESS **)&Buffer[v18 + 8];
      if ( v19 && v19 != a2 )
      {
        WdLogSingleEntry1(1LL, 4212LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pProcesses[IndexFound].pProcess == NULL) || (pProcesses[IndexFound].pProcess == pProcess)",
          4212LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( v7 == -1 )
      {
        if ( !v6 )
          goto LABEL_33;
      }
      else if ( !v6 )
      {
        if ( *(_DWORD *)&Buffer[v18] )
        {
          WdLogSingleEntry1(1LL, 4217LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pProcesses[IndexFound].RefCount == 0",
            4217LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_QWORD *)&Buffer[v18 + 8] = a2;
        *(_DWORD *)&Buffer[v18] = 1;
        *(LARGE_INTEGER *)&Buffer[v18 + 16] = KeQueryPerformanceCounter(0LL);
        v6 = 1;
        if ( v8 >= *((_DWORD *)this + 16) )
          *((_DWORD *)this + 16) = v8 + 1;
      }
      if ( a3 )
      {
        v20 = 3LL * *((unsigned int *)this + 32);
        *(_OWORD *)((char *)this + 8 * v20 + 136) = *(_OWORD *)a3;
        *((_QWORD *)this + v20 + 19) = *((_QWORD *)a3 + 2);
        ++*((_DWORD *)this + 32);
        OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF(this);
      }
    }
  }
LABEL_33:
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  return v6;
}
