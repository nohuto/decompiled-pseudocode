/*
 * XREFs of sub_1409F36F4 @ 0x1409F36F4
 * Callers:
 *     sub_1409F3EC0 @ 0x1409F3EC0 (sub_1409F3EC0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14057158C @ 0x14057158C (sub_14057158C.c)
 *     sub_1406BF0AC @ 0x1406BF0AC (sub_1406BF0AC.c)
 *     sub_1406D520C @ 0x1406D520C (sub_1406D520C.c)
 *     sub_1407F8914 @ 0x1407F8914 (sub_1407F8914.c)
 *     sub_140814DC0 @ 0x140814DC0 (sub_140814DC0.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140832640 (PsSetLoadImageNotifyRoutineEx.c)
 *     sub_1409620D4 @ 0x1409620D4 (sub_1409620D4.c)
 *     sub_1409EEA80 @ 0x1409EEA80 (sub_1409EEA80.c)
 *     sub_1409F2650 @ 0x1409F2650 (sub_1409F2650.c)
 */

__int64 __fastcall sub_1409F36F4(_DWORD *Object)
{
  int v2; // r14d
  _QWORD *v3; // rax
  int ImageNotifyRoutine; // esi
  PVOID *v5; // rdx
  unsigned int v6; // ecx
  unsigned int v7; // esi
  int v8; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r15
  __int64 v11; // rcx
  int v12; // edx
  int v13; // eax

  v2 = 0;
  v3 = sub_1409F2650(Object[9]);
  *((_QWORD *)Object + 144) = v3;
  if ( !v3 )
  {
    ImageNotifyRoutine = -1073741670;
    goto LABEL_26;
  }
  ++Object[296];
  v5 = (PVOID *)*((_QWORD *)Object + 147);
  if ( *v5 != Object + 292 )
    __fastfail(3u);
  *v3 = Object + 292;
  v3[1] = v5;
  *v5 = v3;
  *((_QWORD *)Object + 147) = v3;
  v6 = Object[17];
  v7 = Object[16];
  if ( v6 )
    v7 /= v6;
  v8 = Object[6];
  if ( (v8 & 4) == 0 )
  {
    if ( (v8 & 2) == 0 )
    {
      sub_14042A5E0(1LL, 24LL);
      if ( (Object[6] & 1) != 0 )
      {
        ImageNotifyRoutine = -1073741637;
        goto LABEL_26;
      }
    }
    v2 = 10 * v7;
    if ( (BYTE4(xmmword_140D06900[0]) & 2) != 0 )
      v2 = dword_140C0C85C;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15D60, 0LL);
  qword_140C15D68 = (__int64)KeGetCurrentThread();
  if ( qword_140C15D78 )
  {
    ImageNotifyRoutine = -1073740008;
  }
  else
  {
    ImageNotifyRoutine = sub_1409EEA80(Object + 6);
    if ( ImageNotifyRoutine >= 0 )
    {
      v10 = qword_140C15D88;
      ObfReferenceObject(Object);
      qword_140C15D78 = (__int64)Object;
      _InterlockedExchange64((volatile __int64 *)&stru_140C15D80, 0LL);
      Object[287] |= 1u;
      ImageNotifyRoutine = PsSetLoadImageNotifyRoutineEx((__int64)NotifyRoutine, 0LL);
      if ( ImageNotifyRoutine >= 0 )
      {
        Object[287] |= 2u;
        sub_1406BF0AC((__int64)sub_1409F1110, (__int64)(Object + 4));
        sub_140814DC0((__int64)sub_1409F10B0, (__int64)(Object + 4));
        v11 = qword_140D05008;
        v12 = *(_DWORD *)(qword_140D05008 + 4572) | 4;
        *(_DWORD *)(qword_140D05008 + 4572) = v12;
        v13 = Object[6];
        if ( (v13 & 8) == 0 )
        {
          *(_DWORD *)(v11 + 4576) |= 4u;
          v13 = Object[6];
        }
        if ( (v13 & 0x10) == 0 )
        {
          *(_DWORD *)(v11 + 4576) |= 0x200u;
          v13 = Object[6];
        }
        if ( (v13 & 0x20) == 0 )
          *(_DWORD *)(v11 + 4572) = v12 | 0x1000;
        sub_1406D520C(v11, 0, 9u);
        Object[287] |= 4u;
        if ( (Object[6] & 4) == 0 )
        {
          sub_1409620D4((unsigned __int16 *)(v10 + 16), (__int64)sub_140636860, v10, 0);
          sub_1407F8914(v2, *(__int16 *)(v10 + 360));
          sub_14057158C(v10 + 16);
          Object[287] |= 8u;
        }
        ImageNotifyRoutine = 0;
      }
    }
  }
LABEL_26:
  if ( (struct _KTHREAD *)qword_140C15D68 == KeGetCurrentThread() )
  {
    qword_140C15D68 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15D60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C15D60);
    sub_1402AFC00((ULONG_PTR)&qword_140C15D60);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  return (unsigned int)ImageNotifyRoutine;
}
