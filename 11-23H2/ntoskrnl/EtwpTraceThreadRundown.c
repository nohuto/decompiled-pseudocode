/*
 * XREFs of EtwpTraceThreadRundown @ 0x140383280
 * Callers:
 *     EtwpThreadRundownApc @ 0x140601FE0 (EtwpThreadRundownApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14060201C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpThreadEnumCallback @ 0x140820CB0 (EtwpThreadEnumCallback.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x1402A8E40 (PsGetIoPriorityThread.c)
 *     PsGetPagePriorityThread @ 0x1402E17B0 (PsGetPagePriorityThread.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403835CC (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PsLockThreadNameShared @ 0x140411700 (PsLockThreadNameShared.c)
 *     PsUnlockThreadNameShared @ 0x140411718 (PsUnlockThreadNameShared.c)
 *     Feature_1358681402__private_IsEnabledDeviceUsage @ 0x14041226C (Feature_1358681402__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall EtwpTraceThreadRundown(__int64 a1, __int64 a2)
{
  int v3; // r12d
  __int64 v4; // r13
  int v5; // esi
  __int16 v6; // r15
  __int64 v7; // rax
  _WORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r9
  char v13; // r10
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int16 *v18; // rax
  __int64 *v19; // rcx
  unsigned int v20; // edx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 result; // rax
  _DWORD v25[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-B0h]
  __int64 v27; // [rsp+70h] [rbp-A8h]
  __int64 v28; // [rsp+78h] [rbp-A0h]
  __int64 v29; // [rsp+80h] [rbp-98h]
  __int64 v30; // [rsp+88h] [rbp-90h]
  __int64 v31; // [rsp+90h] [rbp-88h]
  __int64 v32; // [rsp+98h] [rbp-80h]
  int v33; // [rsp+A0h] [rbp-78h]
  char v34; // [rsp+A4h] [rbp-74h]
  char PagePriorityThread; // [rsp+A5h] [rbp-73h]
  char IoPriorityThread; // [rsp+A6h] [rbp-72h]
  unsigned __int8 v37; // [rsp+A7h] [rbp-71h]
  __int64 v38; // [rsp+A8h] [rbp-70h]
  _QWORD v39[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 *v40; // [rsp+C0h] [rbp-58h]
  __int64 v41; // [rsp+C8h] [rbp-50h]
  __int64 *v42; // [rsp+D0h] [rbp-48h]
  __int64 v43; // [rsp+D8h] [rbp-40h]

  v3 = 2;
  v38 = 0LL;
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_DWORD *)(a2 + 40);
  v6 = 1284 - (*(_BYTE *)(a2 + 64) != 0);
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
    v5 &= 0xFFFFE7FF;
  v25[0] = *(_DWORD *)(a1 + 1224);
  v25[1] = *(_DWORD *)(a1 + 1232);
  v26 = *(_QWORD *)(a1 + 56);
  v27 = *(_QWORD *)(a1 + 48);
  v7 = *(unsigned __int16 *)(a1 + 584);
  v8 = *(_WORD **)(a1 + 576);
  if ( (unsigned __int16)v7 >= *v8 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)&v8[4 * v7 + 4];
  v30 = v9;
  v31 = *(_QWORD *)(a1 + 1312);
  v10 = *(_QWORD *)(a1 + 240);
  v28 = 0LL;
  v29 = 0LL;
  v32 = v10;
  v33 = 0;
  v34 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v37 = 0;
  v14 = 1LL;
  if ( (*(_BYTE *)(a1 + 1384) & 8) != 0 )
  {
    v11 = v37;
    if ( *(_QWORD *)(a1 + 1176) != a1 + 1176 )
      v11 = 1LL;
    v37 = v11;
  }
  if ( v12 && v13 )
  {
    v15 = *(_QWORD *)(a1 + 544);
    if ( !*(_QWORD *)(v15 + 1408) )
      goto LABEL_18;
    v11 = *(unsigned __int16 *)(v15 + 2412);
    if ( (_WORD)v11 != 332 && (_WORD)v11 != 452 )
      LOBYTE(v14) = 0;
    if ( (_BYTE)v14 )
    {
      v33 = *(_DWORD *)(v12 + 12128);
      v28 = *(unsigned int *)(v12 + 8196);
      v16 = *(unsigned int *)(v12 + 8200);
    }
    else
    {
LABEL_18:
      v33 = *(_DWORD *)(v12 + 5920);
      v28 = *(_QWORD *)(v12 + 8);
      v16 = *(_QWORD *)(v12 + 16);
    }
    v29 = v16;
  }
  v39[0] = v25;
  v39[1] = 72LL;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)Feature_1358681402__private_IsEnabledDeviceUsage(v11, v14) )
    PsLockThreadNameShared(a1, CurrentThread);
  v18 = *(unsigned __int16 **)(a1 + 1632);
  if ( v18 && (v19 = (__int64 *)*((_QWORD *)v18 + 1)) != 0LL )
  {
    v20 = *v18;
    v21 = 2048LL;
    if ( (unsigned __int16)v20 < 0x800u )
      v21 = v20;
    v40 = v19;
    v41 = (unsigned int)v21;
    if ( !(_DWORD)v21 || *((_WORD *)v19 + (v21 >> 1) - 1) )
    {
      v42 = &EtwpNull;
      v43 = 2LL;
      v3 = 3;
    }
  }
  else
  {
    v40 = &EtwpNull;
    v41 = 2LL;
  }
  EtwpLogSystemEventUnsafe(*(_QWORD *)(v4 + 1096), (unsigned int)v39, a1, *(_DWORD *)v4, v3, v6, v5, 0);
  result = Feature_1358681402__private_IsEnabledDeviceUsage(v23, v22);
  if ( (_DWORD)result )
    return PsUnlockThreadNameShared(a1, CurrentThread);
  return result;
}
