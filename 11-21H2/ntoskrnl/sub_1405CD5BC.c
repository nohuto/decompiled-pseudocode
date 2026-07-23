/*
 * XREFs of sub_1405CD5BC @ 0x1405CD5BC
 * Callers:
 *     PoFxRegisterPluginEx @ 0x1405CA8D0 (PoFxRegisterPluginEx.c)
 *     PoFxRegisterPlugin @ 0x14098CDA0 (PoFxRegisterPlugin.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14085B454 @ 0x14085B454 (sub_14085B454.c)
 *     sub_140992720 @ 0x140992720 (sub_140992720.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1405CD5BC(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // ax
  int v7; // ebx
  bool v8; // cf
  __int16 v10; // ax
  __int64 Pool2; // rax
  _DWORD *v12; // r15
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  struct _KTHREAD *v16; // rbp
  unsigned int v17; // ecx
  __int64 v18; // rbx
  unsigned int v19; // edx
  int v20; // r9d

  v3 = *a3;
  if ( *a3 > 3u )
    return (unsigned int)-1073700860;
  switch ( v3 )
  {
    case 3u:
      v8 = a3[1] < 0x60u;
      break;
    case 2u:
      v8 = a3[1] < 0x58u;
      break;
    case 0u:
      return (unsigned int)-1073741811;
    default:
      goto LABEL_11;
  }
  if ( v8 )
    return (unsigned int)-1073741811;
LABEL_11:
  if ( a3[1] < 0x38u )
    return (unsigned int)-1073741811;
  v10 = *a1;
  if ( *a1 > 3u )
    return (unsigned int)-1073700859;
  if ( v10 == 3 )
  {
    if ( a1[1] < 0x20u || !*((_QWORD *)a1 + 1) && !*((_QWORD *)a1 + 3) )
      return (unsigned int)-1073741811;
  }
  else if ( v10 != 2 || a1[1] < 0x18u || !*((_QWORD *)a1 + 1) )
  {
    return (unsigned int)-1073741811;
  }
  Pool2 = ExAllocatePool2(64LL, 424LL, 1297630800LL);
  v12 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    v7 = sub_14085B454(Pool2 + 120, Pool2);
    if ( v7 >= 0 )
    {
      v12[4] = *a1;
      *((_QWORD *)v12 + 3) = a2;
      *((_QWORD *)v12 + 12) = *((_QWORD *)a1 + 1);
      *((_QWORD *)v12 + 13) = *((_QWORD *)a1 + 2);
      if ( *a1 >= 3u )
        *((_QWORD *)v12 + 14) = *((_QWORD *)a1 + 3);
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C23C48, 0LL);
      v14 = (_QWORD *)qword_140C23B60;
      v15 = *(_QWORD *)qword_140C23B60;
      if ( *(_QWORD *)(*(_QWORD *)qword_140C23B60 + 8LL) != qword_140C23B60 )
        __fastfail(3u);
      *(_QWORD *)v12 = v15;
      *((_QWORD *)v12 + 1) = v14;
      *(_QWORD *)(v15 + 8) = v12;
      *v14 = v12;
      if ( (a2 & 0x80000000) != 0 )
        qword_140C23B60 = (__int64)v12;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C23C48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C23C48);
      v16 = KeGetCurrentThread();
      if ( (unsigned __int64)&qword_140C23C48 - qword_140C50630 >= 0x8000000000LL )
        v17 = -1;
      else
        v17 = sub_140287F30(*((_QWORD *)v16 + 23));
      _disable();
      v18 = (__int64)v16 + 1696;
      v19 = 0;
      while ( (*(_QWORD *)v18 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C23C48 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v18 + 18)
           || (*(_DWORD *)v18 & 1) != 0
           || *(_DWORD *)(v18 + 8) != v17 )
      {
        ++v19;
        v18 += 96LL;
        if ( v19 >= 6 )
          goto LABEL_43;
      }
      *(_BYTE *)(v18 + 18) = 0;
      if ( !v18 )
      {
LABEL_43:
        if ( (*((_DWORD *)v16 + 30) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v16, (ULONG_PTR)&qword_140C23C48, v17, 0LL);
        _enable();
        goto LABEL_51;
      }
      if ( *(__int64 *)v18 < 0 )
      {
        *(_BYTE *)v18 |= 2u;
        _enable();
        sub_14034EE30(v18);
        _disable();
      }
      v20 = *(_DWORD *)(v18 + 88);
      *(_DWORD *)(v18 + 88) = 0;
      *(_BYTE *)(v18 + 17) = 0;
      *(_QWORD *)v18 = 0LL;
      *((_BYTE *)v16 + 792) |= 1 << *(_BYTE *)(v18 + 16);
      _enable();
      if ( v20 )
        sub_14022B568((ULONG_PTR)v16, (__int64)&qword_140C23C48, v20);
LABEL_51:
      sub_1402F9540((__int64)KeGetCurrentThread());
      sub_140992720(v12, a2, 0LL);
      *((_QWORD *)a3 + 4) = 0LL;
      *((_QWORD *)a3 + 5) = 0LL;
      *((_QWORD *)a3 + 3) = 0LL;
      v8 = *a3 < 2u;
      *((_QWORD *)a3 + 2) = sub_140358140;
      *((_QWORD *)a3 + 6) = sub_1405CE300;
      *((_QWORD *)a3 + 1) = v12;
      if ( !v8 )
      {
        *((_QWORD *)a3 + 7) = sub_1405CD400;
        *((_QWORD *)a3 + 8) = sub_1405CD100;
        *((_QWORD *)a3 + 9) = sub_1405CE7C0;
        *((_QWORD *)a3 + 10) = sub_1405CE6B0;
      }
      if ( *a1 >= 3u )
      {
        *((_QWORD *)a3 + 11) = sub_1405CDB50;
        if ( *a1 == 3 )
        {
          if ( *((_QWORD *)a1 + 3) )
            byte_140C1C978 = 1;
        }
      }
      return 0;
    }
    else
    {
      ExFreePoolWithTag(v12, 0x4D584650u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
