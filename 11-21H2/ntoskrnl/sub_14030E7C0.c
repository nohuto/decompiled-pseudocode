/*
 * XREFs of sub_14030E7C0 @ 0x14030E7C0
 * Callers:
 *     sub_1402CF630 @ 0x1402CF630 (sub_1402CF630.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_140319F70 @ 0x140319F70 (sub_140319F70.c)
 *     sub_140594C08 @ 0x140594C08 (sub_140594C08.c)
 *     sub_1405A7A98 @ 0x1405A7A98 (sub_1405A7A98.c)
 *     sub_1405AA214 @ 0x1405AA214 (sub_1405AA214.c)
 *     sub_1405B4EA0 @ 0x1405B4EA0 (sub_1405B4EA0.c)
 *     MmRotatePhysicalView @ 0x140660170 (MmRotatePhysicalView.c)
 *     MmSecureVirtualMemoryEx @ 0x1406A2440 (MmSecureVirtualMemoryEx.c)
 *     sub_1406B42F4 @ 0x1406B42F4 (sub_1406B42F4.c)
 *     sub_1406E2C14 @ 0x1406E2C14 (sub_1406E2C14.c)
 *     sub_1406F8D30 @ 0x1406F8D30 (sub_1406F8D30.c)
 *     sub_140700F70 @ 0x140700F70 (sub_140700F70.c)
 *     sub_140753B20 @ 0x140753B20 (sub_140753B20.c)
 *     sub_140753C58 @ 0x140753C58 (sub_140753C58.c)
 *     sub_14075876C @ 0x14075876C (sub_14075876C.c)
 *     sub_14079EE84 @ 0x14079EE84 (sub_14079EE84.c)
 *     sub_1407A4A8C @ 0x1407A4A8C (sub_1407A4A8C.c)
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 *     sub_1407B9FA0 @ 0x1407B9FA0 (sub_1407B9FA0.c)
 *     sub_1407BB560 @ 0x1407BB560 (sub_1407BB560.c)
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 *     sub_1407F0478 @ 0x1407F0478 (sub_1407F0478.c)
 *     sub_1407FAEE0 @ 0x1407FAEE0 (sub_1407FAEE0.c)
 *     sub_1408042A4 @ 0x1408042A4 (sub_1408042A4.c)
 *     sub_140881A9A @ 0x140881A9A (sub_140881A9A.c)
 *     MmSetGraphicsPtes @ 0x14096B560 (MmSetGraphicsPtes.c)
 *     sub_140973534 @ 0x140973534 (sub_140973534.c)
 *     sub_140978430 @ 0x140978430 (sub_140978430.c)
 *     sub_140978EDC @ 0x140978EDC (sub_140978EDC.c)
 *     sub_14097A120 @ 0x14097A120 (sub_14097A120.c)
 *     sub_14097AC7C @ 0x14097AC7C (sub_14097AC7C.c)
 *     sub_14097B500 @ 0x14097B500 (sub_14097B500.c)
 *     sub_14097BB30 @ 0x14097BB30 (sub_14097BB30.c)
 *     sub_140A6A570 @ 0x140A6A570 (sub_140A6A570.c)
 * Callees:
 *     sub_140202010 @ 0x140202010 (sub_140202010.c)
 *     sub_140280EF8 @ 0x140280EF8 (sub_140280EF8.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_14030EA70 @ 0x14030EA70 (sub_14030EA70.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 */

__int64 __fastcall sub_14030E7C0(unsigned __int64 a1, char a2, int *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  ULONG_PTR v11; // rcx
  int v12; // r15d
  bool v13; // zf
  int v15; // eax
  int v16; // eax

  *a3 = 0;
  CurrentThread = KeGetCurrentThread();
  v7 = *((_QWORD *)CurrentThread + 23);
  --*((_WORD *)CurrentThread + 243);
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx(v7 + 1224, 0LL);
  *((_BYTE *)CurrentThread + 1384) |= 2u;
  v8 = *((_QWORD *)KeGetCurrentThread() + 23);
  v9 = *(_QWORD *)(v8 + 2016);
  if ( !v9 )
  {
LABEL_16:
    v15 = -1073741558;
    if ( (*(_DWORD *)(v7 + 1124) & 0x20) == 0 )
      v15 = -1073741664;
    goto LABEL_18;
  }
  v10 = a1 >> 12;
  if ( v10 < (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
    || v10 > (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
  {
    v9 = *(_QWORD *)(v8 + 2008);
    if ( v9 )
    {
      while ( 1 )
      {
        if ( v10 > (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
        {
          v9 = *(_QWORD *)(v9 + 8);
        }
        else
        {
          if ( v10 >= (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32)) )
          {
            *(_QWORD *)(v8 + 2016) = v9;
            goto LABEL_4;
          }
          v9 = *(_QWORD *)v9;
        }
        if ( !v9 )
          goto LABEL_16;
      }
    }
    goto LABEL_16;
  }
LABEL_4:
  if ( (a2 & 1) == 0 && (*(_DWORD *)(v7 + 1124) & 0x20) != 0 )
  {
    v15 = -1073741558;
LABEL_18:
    *a3 = v15;
    sub_14030EA00(CurrentThread, v7);
    v13 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v13 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  if ( !_InterlockedIncrement((volatile signed __int32 *)(v9 + 36)) )
    __fastfail(0xEu);
  sub_14030EA00(CurrentThread, v7);
  v11 = v9 + 40;
  v12 = a2 & 2;
  --*((_WORD *)CurrentThread + 243);
  if ( v12 )
  {
    ExAcquirePushLockSharedEx(v11, 0LL);
    *((_BYTE *)CurrentThread + 1385) |= 0x40u;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    *((_BYTE *)CurrentThread + 1384) |= 0x80u;
  }
  v13 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v13 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( (*(_DWORD *)(v9 + 48) & 4) != 0 )
  {
    if ( v12 )
    {
      sub_140280EF8((__int64)CurrentThread, v9);
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
      *((_BYTE *)CurrentThread + 1384) |= 0x80u;
    }
    sub_140202010(v9);
    sub_14032E700((PVOID)v9);
    v16 = -1073741558;
    if ( (*(_DWORD *)(v7 + 1124) & 0x20) == 0 )
      v16 = -1073741664;
    *a3 = v16;
  }
  else
  {
    if ( v10 >= (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
      && v10 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
    {
      return v9;
    }
    if ( v12 )
      sub_14030EA70((PVOID)v9);
    else
      sub_14032E700((PVOID)v9);
    *a3 = -1073741664;
  }
  return 0LL;
}
