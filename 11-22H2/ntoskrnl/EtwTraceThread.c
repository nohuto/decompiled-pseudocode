/*
 * XREFs of EtwTraceThread @ 0x1406AD060
 * Callers:
 *     PspInsertThread @ 0x14073F3AC (PspInsertThread.c)
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 * Callees:
 *     PsGetCurrentThreadTeb @ 0x1402118A0 (PsGetCurrentThreadTeb.c)
 *     EtwTraceSiloKernelEvent @ 0x140214970 (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x14028C060 (PsGetProcessServerSilo.c)
 *     PsGetIoPriorityThread @ 0x1402A8A90 (PsGetIoPriorityThread.c)
 *     PsGetPagePriorityThread @ 0x1402E1520 (PsGetPagePriorityThread.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     EtwpPsProvTraceThread @ 0x1409E65CC (EtwpPsProvTraceThread.c)
 */

__int64 __fastcall EtwTraceThread(__int64 a1, __int64 a2, char a3)
{
  int v6; // r14d
  __int64 v7; // rax
  _WORD *v8; // rcx
  __int64 v9; // rdx
  _DWORD *CurrentThreadTeb; // rdx
  _KPROCESS *Process; // rax
  int v12; // eax
  __int16 v13; // cx
  char v14; // al
  unsigned __int16 *v15; // rdx
  __int64 ProcessServerSilo; // rax
  __int64 v18; // rcx
  _KPROCESS *v19; // rdx
  __int64 v20; // rax
  __int16 v21; // r8
  char v22; // al
  unsigned int v23; // eax
  __int16 v24; // [rsp+30h] [rbp-C8h]
  int v25; // [rsp+38h] [rbp-C0h]
  _DWORD v26[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A0h]
  __int64 v28; // [rsp+60h] [rbp-98h]
  __int64 v29; // [rsp+68h] [rbp-90h]
  __int64 v30; // [rsp+70h] [rbp-88h]
  __int64 v31; // [rsp+78h] [rbp-80h]
  __int64 v32; // [rsp+80h] [rbp-78h]
  __int64 v33; // [rsp+88h] [rbp-70h]
  int v34; // [rsp+90h] [rbp-68h]
  char v35; // [rsp+94h] [rbp-64h]
  char PagePriorityThread; // [rsp+95h] [rbp-63h]
  char IoPriorityThread; // [rsp+96h] [rbp-62h]
  char v38; // [rsp+97h] [rbp-61h]
  __int64 v39; // [rsp+98h] [rbp-60h]
  _QWORD v40[2]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 *v41; // [rsp+B0h] [rbp-48h]
  __int64 v42; // [rsp+B8h] [rbp-40h]
  __int64 *v43; // [rsp+C0h] [rbp-38h]
  __int64 v44; // [rsp+C8h] [rbp-30h]

  v6 = 2;
  v39 = 0LL;
  v25 = 5249283;
  if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4540) & 2) != 0 )
    EtwpPsProvTraceThread();
  v26[0] = *(_DWORD *)(a1 + 1224);
  v26[1] = *(_DWORD *)(a1 + 1232);
  v27 = *(_QWORD *)(a1 + 56);
  v28 = *(_QWORD *)(a1 + 48);
  v7 = *(unsigned __int16 *)(a1 + 584);
  v8 = *(_WORD **)(a1 + 576);
  if ( (unsigned __int16)v7 >= *v8 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)&v8[4 * v7 + 4];
  v31 = v9;
  v32 = *(_QWORD *)(a1 + 1312);
  v29 = 0LL;
  v30 = 0LL;
  v33 = *(_QWORD *)(a1 + 240);
  v34 = 0;
  v35 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v38 = 0;
  if ( a3 )
  {
    v24 = 1281;
    if ( a2 )
    {
      v29 = *(_QWORD *)(a2 + 16);
      v30 = *(_QWORD *)(a2 + 24);
    }
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      Process = KeGetCurrentThread()->Process;
      if ( !Process[1].Affinity.StaticBitmap[30] )
        goto LABEL_11;
      v13 = WORD2(Process[2].Affinity.StaticBitmap[20]);
      if ( v13 == 332 || (v14 = 0, v13 == 452) )
        v14 = 1;
      if ( v14 )
        v12 = CurrentThreadTeb[3032];
      else
LABEL_11:
        v12 = CurrentThreadTeb[1480];
      v34 = v12;
    }
  }
  else
  {
    v24 = 1282;
    v25 = 72358147;
    v18 = *(_QWORD *)(a1 + 240);
    if ( v18 )
    {
      v19 = KeGetCurrentThread()->Process;
      if ( !v19[1].Affinity.StaticBitmap[30] )
        goto LABEL_24;
      v21 = WORD2(v19[2].Affinity.StaticBitmap[20]);
      if ( v21 == 332 || (v22 = 0, v21 == 452) )
        v22 = 1;
      if ( v22 )
      {
        v34 = *(_DWORD *)(v18 + 12128);
        v29 = *(unsigned int *)(v18 + 8196);
        v20 = *(unsigned int *)(v18 + 8200);
      }
      else
      {
LABEL_24:
        v34 = *(_DWORD *)(v18 + 5920);
        v29 = *(_QWORD *)(v18 + 8);
        v20 = *(_QWORD *)(v18 + 16);
      }
      v30 = v20;
    }
  }
  v40[0] = v26;
  v40[1] = 72LL;
  v15 = *(unsigned __int16 **)(a1 + 1632);
  if ( v15 && *((_QWORD *)v15 + 1) )
  {
    v23 = 2048;
    if ( *v15 < 0x800u )
      v23 = *v15;
    v41 = (__int64 *)*((_QWORD *)v15 + 1);
    v42 = v23;
    if ( !v23 || *(_WORD *)(*((_QWORD *)v15 + 1) + 2 * ((unsigned __int64)v23 >> 1) - 2) )
    {
      v43 = &EtwpNull;
      v44 = 2LL;
      v6 = 3;
    }
  }
  else
  {
    v41 = &EtwpNull;
    v42 = 2LL;
  }
  ProcessServerSilo = PsGetProcessServerSilo(*(_QWORD *)(a1 + 544));
  return EtwTraceSiloKernelEvent(ProcessServerSilo, (int)v40, v6, 2u, v24, v25);
}
