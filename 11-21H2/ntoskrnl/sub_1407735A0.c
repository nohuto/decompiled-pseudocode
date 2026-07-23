/*
 * XREFs of sub_1407735A0 @ 0x1407735A0
 * Callers:
 *     sub_140776650 @ 0x140776650 (sub_140776650.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1407758D0 @ 0x1407758D0 (sub_1407758D0.c)
 *     sub_140776880 @ 0x140776880 (sub_140776880.c)
 *     sub_140776E5C @ 0x140776E5C (sub_140776E5C.c)
 *     sub_140777D40 @ 0x140777D40 (sub_140777D40.c)
 */

__int64 __fastcall sub_1407735A0(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r15
  __int64 v4; // rdi
  char v5; // r13
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  unsigned int v8; // eax
  struct _KTHREAD *v9; // rdx
  struct _KTHREAD *v10; // rax
  unsigned int v11; // eax
  struct _KTHREAD *v13; // rax
  __int64 v14; // [rsp+20h] [rbp-78h]
  int v15; // [rsp+30h] [rbp-68h]
  _OWORD v16[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v18; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL);
  v15 = *(_DWORD *)(v3 + 24);
  v5 = 0;
  v17 = 0;
  v18 = 0;
  v16[0] = 0LL;
  if ( !v4 )
  {
    v2 = -1073741637;
    goto LABEL_14;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
  v7 = *(_DWORD *)(v4 + 216);
  if ( (v7 & 8) != 0 )
  {
    v2 = -1073741536;
    goto LABEL_7;
  }
  if ( (v7 & 4) == 0 )
    goto LABEL_29;
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x10) == 0 )
    {
      *(_DWORD *)(v4 + 216) = v7 | 0x10;
      v5 = 1;
      goto LABEL_7;
    }
LABEL_29:
    v2 = -1073741637;
    goto LABEL_7;
  }
  v2 = -1073741670;
LABEL_7:
  ExReleasePushLockEx(v4 + 64, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v2 < 0 )
    goto LABEL_13;
  v8 = *(_DWORD *)(v3 + 8);
  if ( v8 < 0x10 )
  {
    v2 = -1073741789;
  }
  else
  {
    if ( v15 == 4653063 )
    {
      ProbeForWrite(*(volatile void **)(a1 + 112), v8, 8u);
      v2 = sub_140777D40(v4, *(_QWORD *)(a1 + 112), *(_DWORD *)(v3 + 8), (unsigned int)&v17, (__int64)&v18);
      if ( v2 < 0 )
        goto LABEL_13;
      v9 = KeGetCurrentThread();
      --*((_WORD *)v9 + 242);
      ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
      sub_1407758D0(v4, *(unsigned int *)(v3 + 8), v18, v16);
LABEL_12:
      ExReleasePushLockEx(v4 + 64, 0LL);
      sub_1402F9540((__int64)KeGetCurrentThread());
LABEL_13:
      if ( v2 == 259 )
        return (unsigned int)v2;
      goto LABEL_14;
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      v13 = KeGetCurrentThread();
      --*((_WORD *)v13 + 242);
      ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
      if ( !*(_QWORD *)(v4 + 184)
        && *(_QWORD *)(v4 + 192) == v4 + 192
        && (*(_DWORD *)(*(_QWORD *)(v4 + 24) + 40LL) & 1) != 0 )
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)sub_1405616A0);
        if ( *(_BYTE *)(a1 + 68) )
        {
          v2 = -1073741536;
        }
        else
        {
          *(_QWORD *)(v4 + 176) = a1;
          *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
          v2 = 259;
        }
      }
      else
      {
        sub_1407758D0(v4, *(unsigned int *)(v3 + 8), 0LL, v16);
        v17 = 16;
      }
      goto LABEL_12;
    }
    v2 = -1073741811;
  }
LABEL_14:
  if ( v5 )
  {
    v10 = KeGetCurrentThread();
    --*((_WORD *)v10 + 242);
    ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
    v11 = *(_DWORD *)(v4 + 216) & 0xFFFFFFEF;
    *(_DWORD *)(v4 + 216) = v11;
    if ( v2 < 0 )
    {
      *(_DWORD *)(v4 + 216) = v11 | 1;
      sub_140776E5C(v4);
    }
    ExReleasePushLockEx(v4 + 64, 0LL);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  sub_140776880(a1, (unsigned int)v2, v17, v16, v14);
  return (unsigned int)v2;
}
