/*
 * XREFs of sub_1406AE11C @ 0x1406AE11C
 * Callers:
 *     sub_1406ADF1C @ 0x1406ADF1C (sub_1406ADF1C.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_140360A84 @ 0x140360A84 (sub_140360A84.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406AE46C @ 0x1406AE46C (sub_1406AE46C.c)
 *     sub_1406AE49C @ 0x1406AE49C (sub_1406AE49C.c)
 *     sub_1406AE59C @ 0x1406AE59C (sub_1406AE59C.c)
 *     sub_1406AE644 @ 0x1406AE644 (sub_1406AE644.c)
 *     sub_1406AECC0 @ 0x1406AECC0 (sub_1406AECC0.c)
 *     sub_1406AF030 @ 0x1406AF030 (sub_1406AF030.c)
 *     sub_1406AF0D4 @ 0x1406AF0D4 (sub_1406AF0D4.c)
 *     sub_1406AF220 @ 0x1406AF220 (sub_1406AF220.c)
 *     sub_1407DFFD8 @ 0x1407DFFD8 (sub_1407DFFD8.c)
 *     sub_1407E0408 @ 0x1407E0408 (sub_1407E0408.c)
 *     sub_1409870AC @ 0x1409870AC (sub_1409870AC.c)
 *     sub_140987430 @ 0x140987430 (sub_140987430.c)
 *     sub_140A52F48 @ 0x140A52F48 (sub_140A52F48.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406AE11C(__int64 a1)
{
  char v2; // r12
  __int64 Pool2; // rax
  int v4; // ebx
  int v5; // r15d
  unsigned int v6; // eax
  unsigned int v7; // ebx
  void *v8; // rax
  unsigned int i; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  bool v13; // cf
  unsigned int v14; // r14d
  int v15; // eax
  int v17; // eax
  unsigned int j; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned int k; // edi
  __int64 v26; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h]
  _QWORD v29[28]; // [rsp+58h] [rbp-B0h] BYREF

  v28 = 0LL;
  Event.Header.WaitListHead = 0LL;
  memset(&v29[1], 0, 0xD8uLL);
  v29[0] = a1;
  KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
  v2 = *((_BYTE *)KeGetCurrentThread() + 562);
  *((_BYTE *)KeGetCurrentThread() + 562) = 0;
  Pool2 = ExAllocatePool2(64LL, 144LL, 1129539152LL);
  v29[5] = Pool2;
  if ( !Pool2 )
  {
    v4 = -1073741670;
    goto LABEL_26;
  }
  sub_1406AF220(Pool2);
  *(_QWORD *)(v29[5] + 24LL) = v29;
  if ( (*(_DWORD *)(v29[0] + 80LL) & 4) != 0 )
  {
    *(_DWORD *)(v29[5] + 60LL) = 60000;
    *(_DWORD *)(v29[5] + 56LL) = 150;
  }
  else
  {
    *(_DWORD *)(v29[5] + 60LL) = 250;
    *(_DWORD *)(v29[5] + 56LL) = 15;
  }
  v4 = sub_1406AF0D4(v29[5]);
  if ( v4 >= 0 )
  {
    v5 = *(unsigned __int8 *)(v29[0] + 81LL);
    if ( *(_BYTE *)(v29[0] + 81LL) )
    {
      _InterlockedAdd(&dword_140CF5E58, 1u);
      v4 = sub_140A52F48((ULONG_PTR)&qword_140C54520, 0);
      if ( v4 < 0 )
      {
LABEL_55:
        _InterlockedDecrement(&dword_140CF5E58);
        sub_140A52F48((ULONG_PTR)&qword_140C54520, 0);
        goto LABEL_26;
      }
      if ( !*(_QWORD *)(v29[0] + 72LL) )
        *(_QWORD *)(v29[0] + 72LL) = &Event.Header.WaitListHead;
    }
    v6 = *(_DWORD *)(a1 + 8) << 6;
    if ( v6 )
    {
      v7 = *(_DWORD *)(a1 + 8) << 6;
      v8 = (void *)ExAllocatePool2(256LL, v6, 1213621840LL);
      v29[2] = v8;
      if ( !v8 )
        goto LABEL_37;
      memset(v8, 0, v7);
      for ( i = 0; i < *(_DWORD *)(a1 + 8); *(_QWORD *)(v11 + v12 + 56) |= 0x200000000uLL )
      {
        v10 = v29[2];
        v11 = i++;
        v11 <<= 6;
        *(_OWORD *)(v11 + v29[2]) = 0LL;
        *(_OWORD *)(v11 + v10 + 16) = 0LL;
        *(_QWORD *)(v11 + v10 + 24) |= 0x200000000uLL;
        v12 = v29[2];
        *(_OWORD *)(v11 + v29[2] + 32) = 0LL;
        *(_OWORD *)(v11 + v12 + 48) = 0LL;
      }
    }
    v13 = (*(_DWORD *)(v29[0] + 80LL) & 4) != 0;
    LODWORD(v29[4]) = v13 ? 16 : 768;
    v29[3] = ExAllocatePool2(256LL, (-(__int64)v13 & 0xFFFFFFFFFFFFE880uLL) + 6160, 1347249744LL);
    if ( v29[3] )
    {
      if ( (*(_DWORD *)(v29[0] + 80LL) & 4) != 0 )
        goto LABEL_12;
      v17 = *(_DWORD *)(v29[0] + 12LL);
      if ( !v17 )
        goto LABEL_12;
      v29[1] = ExAllocatePool2(256LL, (unsigned int)(32 * v17), 1749444176LL);
      if ( v29[1] )
      {
        for ( j = 0; j < *(_DWORD *)(v29[0] + 12LL); *(_QWORD *)(v20 + 24) |= 0x200000000uLL )
        {
          v19 = 32LL * j++;
          v20 = v29[1] + v19;
          *(_OWORD *)v20 = 0LL;
          *(_OWORD *)(v20 + 16) = 0LL;
        }
LABEL_12:
        sub_1406AF030(a1);
        if ( !*(_WORD *)(a1 + 30) && *(_WORD *)(a1 + 28) )
          *(_WORD *)(a1 + 30) = *(_WORD *)(a1 + 28) - 1;
        if ( *(_DWORD *)(a1 + 20) )
        {
          v21 = sub_140987430(v29);
          v4 = v21;
          if ( v21 == -1073741248 || v21 == -1073741670 || v21 == -1073741801 )
            goto LABEL_25;
        }
        v14 = 0;
        if ( *(_DWORD *)(a1 + 8) )
        {
          do
          {
            if ( (int)sub_1406AECC0(v29[5], v29[2] + ((unsigned __int64)v14 << 6), *(_QWORD *)(a1 + 32) + 40LL * v14) >= 0 )
            {
              v4 = sub_1406AE644(v29, v14);
              if ( v4 == -1073741248 )
                goto LABEL_25;
            }
          }
          while ( ++v14 < *(_DWORD *)(a1 + 8) );
        }
        if ( (*(_DWORD *)(v29[0] + 80LL) & 4) != 0 )
        {
          v15 = sub_1407E0408(v29);
          v4 = v15;
          if ( v15 == -1073741248 || v15 == -1073741670 )
            goto LABEL_25;
        }
        else
        {
          v22 = sub_1409870AC(v29, 0LL);
          v4 = v22;
          if ( v22 == -1073741248 || v22 == -1073741670 || v22 == -1073741801 )
            goto LABEL_25;
          if ( sub_140360A84(v29) )
          {
            v4 = -1073741248;
            goto LABEL_25;
          }
          LOBYTE(v23) = 1;
          v15 = sub_1409870AC(v29, v23);
          v4 = v15;
          if ( v15 == -1073741248 || v15 == -1073741670 )
          {
LABEL_25:
            if ( !v5 )
              goto LABEL_26;
            goto LABEL_55;
          }
        }
        if ( v15 != -1073741801 )
          v4 = 0;
        goto LABEL_25;
      }
    }
LABEL_37:
    v4 = -1073741670;
    goto LABEL_25;
  }
LABEL_26:
  if ( v29[1] )
  {
    v24 = v29[0];
    for ( k = 0; k < *(_DWORD *)(v24 + 12); ++k )
    {
      v26 = v29[1] + 32LL * k;
      if ( _bittest64((const signed __int64 *)(v26 + 24), 0x22u) )
      {
        sub_1407DFFD8(v26, v29[5]);
        v24 = v29[0];
      }
    }
    ExFreePoolWithTag((PVOID)v29[1], 0);
  }
  sub_1406AE59C(v29);
  if ( v29[3] )
    ExFreePoolWithTag((PVOID)v29[3], 0);
  if ( v29[5] )
  {
    sub_1406AE49C();
    sub_1406AE46C(v29[5]);
  }
  *((_BYTE *)KeGetCurrentThread() + 562) = v2;
  return (unsigned int)v4;
}
