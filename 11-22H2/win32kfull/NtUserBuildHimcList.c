/*
 * XREFs of NtUserBuildHimcList @ 0x1C00B0140
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?_BuildHimcList@@YAIPEBUtagTHREADINFO@@IPEAPEAUHIMC__@@@Z @ 0x1C00B0230 (-_BuildHimcList@@YAIPEBUtagTHREADINFO@@IPEAPEAUHIMC__@@@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserBuildHimcList(__int64 a1, __int64 a2, volatile void *a3, unsigned int *a4)
{
  __int64 v6; // rsi
  unsigned int v7; // ebx
  const struct tagTHREADINFO *v8; // rbx
  _DWORD *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rax
  _BYTE v20[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+24h] [rbp-24h]

  v6 = (unsigned int)a2;
  v7 = a1;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v20);
  if ( (*gpsi & 4) != 0 )
  {
    if ( v7 )
    {
      if ( v7 == -1 )
      {
        v8 = 0LL;
      }
      else
      {
        v19 = PtiFromThreadId(v7);
        v8 = (const struct tagTHREADINFO *)v19;
        if ( !v19 || !*(_QWORD *)(v19 + 456) )
        {
          v13 = -1073741811;
          goto LABEL_7;
        }
        if ( *(_QWORD *)(v19 + 456) != *((_QWORD *)PtiCurrentShared() + 57) )
        {
          v13 = -1073741790;
          goto LABEL_7;
        }
      }
    }
    else
    {
      v8 = PtiCurrentShared();
    }
    ProbeForWrite(a3, 8 * v6, 4u);
    v9 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v9 = (_DWORD *)MmUserProbeAddress;
    *v9 = *v9;
    v10 = _BuildHimcList(v8, v6, (struct HIMC__ **)a3);
    v13 = (unsigned int)v6 < v10 ? 0xC0000023 : 0;
    v21 = v13;
    *a4 = v10;
  }
  else
  {
    UserSetLastError(120LL);
    v13 = -1073741823;
  }
LABEL_7:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v20, v11, v12);
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v13;
}
