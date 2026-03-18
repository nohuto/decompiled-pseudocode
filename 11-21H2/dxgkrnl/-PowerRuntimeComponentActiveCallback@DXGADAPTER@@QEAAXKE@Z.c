/*
 * XREFs of ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0009F60
 * Callers:
 *     ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C0009EB0 (-DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x1C0009F00 (-DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0014D90 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C00170F0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 * Callees:
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0008F10 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C000A3B0 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C004457C (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentActiveCallback(DXGADAPTER *this, unsigned int a2, unsigned __int8 a3)
{
  unsigned int *v5; // rbx
  unsigned int v6; // eax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  void (__fastcall *v16)(_QWORD, __int64); // rax
  unsigned int v17; // edx
  _QWORD *v18; // rdx
  unsigned int v19; // edx
  int v20; // eax
  __int64 *v21; // rax
  __int64 *v22; // rcx
  __int64 **v23; // rdx
  int v24; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  char v26; // [rsp+58h] [rbp-40h]
  char *v27; // [rsp+68h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+70h] [rbp-28h] BYREF
  char v29; // [rsp+88h] [rbp-10h]

  v5 = (unsigned int *)(*((_QWORD *)this + 362) + 520LL * a2);
  *((_BYTE *)v5 + 356) = a3;
  if ( *((_DWORD *)this + 50) == 1 )
  {
    v6 = v5[52];
    if ( v6 )
    {
      if ( v6 == 3 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned __int8))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 350) + 648LL)
                                                                                            + 8LL)
                                                                                + 760LL))(
          *(_QWORD *)(*((_QWORD *)this + 350) + 656LL),
          *((unsigned __int16 *)v5 + 3),
          v5[53],
          *v5,
          a3);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 350) + 624LL)
                                                                         + 8LL)
                                                             + 808LL))(
        *(_QWORD *)(*((_QWORD *)this + 350) + 632LL),
        *((unsigned __int16 *)v5 + 3),
        v5[53],
        a3);
    }
    if ( !*((_BYTE *)v5 + 357) || (int)v5[97] <= 0 )
      goto LABEL_9;
    v26 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 420, &LockHandle);
    *((_QWORD *)this + 421) = KeGetCurrentThread();
    v26 = 1;
    if ( a3 )
    {
      v7 = v5 + 100;
      v8 = *((_QWORD *)v5 + 50);
      if ( !v8 )
        goto LABEL_8;
      if ( *(_QWORD **)(v8 + 8) != v7 )
        goto LABEL_29;
      v18 = (_QWORD *)*((_QWORD *)v5 + 51);
      if ( (_QWORD *)*v18 != v7 )
        goto LABEL_29;
      *v18 = v8;
      *(_QWORD *)(v8 + 8) = v18;
      *v7 = 0LL;
    }
    else
    {
      v9 = v5[96];
      if ( v5[104] )
      {
        if ( v9 )
        {
          v17 = v5[1];
          v5[96] = 0;
          DXGADAPTER::SetPowerComponentLatencyCB(this, v17, **((_QWORD **)this + 398));
        }
        v10 = MEMORY[0xFFFFF78000000320];
        *((_QWORD *)v5 + 49) = MEMORY[0xFFFFF78000000320];
        *((_QWORD *)v5 + 49) = v10 + *(_QWORD *)(*((_QWORD *)this + 398) + 8LL);
        v11 = v5 + 100;
        if ( !*((_QWORD *)v5 + 50) )
        {
          v12 = (_QWORD *)((char *)this + 3344);
          v13 = *((_QWORD *)this + 418);
          if ( *(DXGADAPTER **)(v13 + 8) != (DXGADAPTER *)((char *)this + 3344) )
            goto LABEL_29;
          *v11 = v13;
          *((_QWORD *)v5 + 51) = v12;
          *(_QWORD *)(v13 + 8) = v11;
          *v12 = v11;
        }
        if ( !*((_BYTE *)this + 3332) )
        {
          v14 = *((_QWORD *)this + 350);
          *((_BYTE *)this + 3332) = 1;
          v15 = *(_QWORD *)(*(_QWORD *)(v14 + 624) + 8LL);
          v16 = *(void (__fastcall **)(_QWORD, __int64))(v15 + 864);
          LOBYTE(v15) = 1;
          v16(*(_QWORD *)(v14 + 632), v15);
        }
      }
      else
      {
        if ( v9 == 2 )
          goto LABEL_8;
        v19 = v5[1];
        v5[96] = 2;
        DXGADAPTER::SetPowerComponentLatencyCB(this, v19, *(_QWORD *)(*((_QWORD *)this + 398) + 32LL));
      }
    }
    if ( !v26 )
    {
LABEL_9:
      if ( v5[52] || !*((_QWORD *)this + 407) )
        return;
      v29 = 0;
      v27 = (char *)this + 3360;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 420, &v28);
      *((_QWORD *)this + 421) = KeGetCurrentThread();
      v20 = *((_DWORD *)this + 764);
      v29 = 1;
      if ( !a3 )
      {
        v24 = v20 - 1;
        *((_DWORD *)this + 764) = v24;
        if ( v24 )
          goto LABEL_42;
        DXGADAPTER::ScheduleAdapterActivityCheck(this);
LABEL_41:
        if ( !v29 )
          return;
LABEL_42:
        v29 = 0;
        *((_QWORD *)v27 + 1) = 0LL;
        KeReleaseInStackQueuedSpinLock(&v28);
        return;
      }
      if ( v20 )
      {
LABEL_38:
        ++*((_DWORD *)this + 764);
        goto LABEL_41;
      }
      v21 = (__int64 *)(*((_QWORD *)this + 407) + 400LL);
      v22 = (__int64 *)*v21;
      if ( !*v21 )
      {
LABEL_36:
        if ( *((_DWORD *)this + 835) )
        {
          *((_DWORD *)this + 835) = 0;
          DXGADAPTER::UpdateLatencyTolerances(this);
        }
        goto LABEL_38;
      }
      if ( (__int64 *)v22[1] == v21 )
      {
        v23 = *(__int64 ***)(*((_QWORD *)this + 407) + 408LL);
        if ( *v23 == v21 )
        {
          *v23 = v22;
          v22[1] = (__int64)v23;
          *(_QWORD *)(*((_QWORD *)this + 407) + 400LL) = 0LL;
          goto LABEL_36;
        }
      }
LABEL_29:
      __fastfail(3u);
    }
LABEL_8:
    v26 = 0;
    *((_QWORD *)this + 421) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_9;
  }
}
