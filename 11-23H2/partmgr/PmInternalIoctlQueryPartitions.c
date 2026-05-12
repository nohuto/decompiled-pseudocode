/*
 * XREFs of PmInternalIoctlQueryPartitions @ 0x1C000E568
 * Callers:
 *     ?PmFilterInternalDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000E940 (-PmFilterInternalDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmWakeupNotificationWorkItem @ 0x1C000353C (PmWakeupNotificationWorkItem.c)
 */

__int64 __fastcall PmInternalIoctlQueryPartitions(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 v4; // r15
  unsigned int v5; // ebx
  KSPIN_LOCK *v6; // r13
  KIRQL v7; // bl
  unsigned int v8; // ebp
  KIRQL v9; // al
  _DWORD *v10; // r12
  _QWORD **v11; // r15
  KIRQL v12; // r8
  unsigned int v13; // ecx
  _QWORD *i; // rdx
  unsigned int v15; // edi
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  KIRQL v21; // [rsp+60h] [rbp+8h]

  v2 = a2[23];
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(v2 + 8) >= 8u )
  {
    v6 = (KSPIN_LOCK *)(v4 + 112);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 112));
    PmWakeupNotificationWorkItem(v4);
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 112), v7);
    v8 = 0;
    KeWaitForSingleObject((PVOID)(v4 + 824), Executive, 0, 0, 0LL);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 112));
    v10 = (_DWORD *)a2[3];
    v11 = (_QWORD **)(v4 + 896);
    v12 = v9;
    v21 = v9;
    v13 = 0;
    *v10 = 0;
    for ( i = *v11; i != v11; i = (_QWORD *)*i )
      *v10 = ++v13;
    v15 = -1;
    v16 = 8LL * v13;
    if ( v16 > 0xFFFFFFFF )
    {
      v5 = -1073741675;
    }
    else
    {
      v17 = v16 + 8;
      if ( v17 >= 8 )
        v15 = v17;
      v5 = v17 < 8 ? 0xC0000095 : 0;
      if ( v17 >= 8 )
      {
        if ( *(_DWORD *)(v2 + 8) >= v15 )
        {
          v18 = *v11;
          if ( *v11 != v11 )
          {
            do
            {
              ObfReferenceObject((PVOID)*(v18 - 17));
              v19 = v8++;
              *(_QWORD *)&v10[2 * v19 + 2] = *(v18 - 17);
              v18 = (_QWORD *)*v18;
            }
            while ( v18 != v11 );
            v12 = v21;
          }
          a2[7] = v15;
        }
        else
        {
          a2[7] = 8LL;
          v5 = -2147483643;
        }
      }
    }
    KeReleaseSpinLock(v6, v12);
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v5;
}
