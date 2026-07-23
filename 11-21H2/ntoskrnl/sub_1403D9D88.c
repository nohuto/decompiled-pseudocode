/*
 * XREFs of sub_1403D9D88 @ 0x1403D9D88
 * Callers:
 *     sub_1403D9D30 @ 0x1403D9D30 (sub_1403D9D30.c)
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 *     sub_1403D3D2C @ 0x1403D3D2C (sub_1403D3D2C.c)
 *     sub_1403D3EE0 @ 0x1403D3EE0 (sub_1403D3EE0.c)
 *     sub_1403D9FA8 @ 0x1403D9FA8 (sub_1403D9FA8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_140B2A220 @ 0x140B2A220 (sub_140B2A220.c)
 */

__int64 __fastcall sub_1403D9D88(ULONG_PTR a1)
{
  unsigned int v2; // ebp
  int SystemThread; // esi
  unsigned int v4; // ebx
  __int64 v5; // r12
  _QWORD *v6; // r12
  _DWORD *v7; // rax
  _DWORD *v8; // r14
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // r14
  __int64 *v12; // r14
  __int64 v13; // rdx
  struct _KEVENT *v15; // rcx
  HANDLE Handle; // [rsp+50h] [rbp-48h] BYREF
  __int128 v17; // [rsp+58h] [rbp-40h] BYREF

  Handle = 0LL;
  v17 = 0LL;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( (ULONG_PTR *)a1 == &StartContext )
  {
    if ( (unsigned int)sub_140B2A220() )
      goto LABEL_3;
    v15 = (struct _KEVENT *)(a1 + 16128);
LABEL_17:
    KeSetEvent(v15, 0, 0);
    return 3221225473LL;
  }
  v15 = (struct _KEVENT *)(a1 + 16128);
  *(_WORD *)(a1 + 16128) = 0;
  *(_DWORD *)(a1 + 16132) = 0;
  *(_QWORD *)(a1 + 16144) = a1 + 16136;
  *(_QWORD *)(a1 + 16136) = a1 + 16136;
  *(_BYTE *)(a1 + 16130) = 6;
  if ( byte_140C58EB0 )
    goto LABEL_17;
LABEL_3:
  *(_DWORD *)(a1 + 16156) = 0;
  *(_DWORD *)(a1 + 16108) = 0;
  v2 = (unsigned __int16)word_140D05000;
  SystemThread = 0;
  *(_QWORD *)(a1 + 16120) = a1 + 16112;
  v4 = 0;
  *(_QWORD *)(a1 + 16112) = a1 + 16112;
  *(_QWORD *)(a1 + 16168) = a1 + 16160;
  *(_QWORD *)(a1 + 16160) = a1 + 16160;
  *(_WORD *)(a1 + 16104) = 263;
  *(_BYTE *)(a1 + 16106) = 6;
  *(_WORD *)(a1 + 16152) = 263;
  *(_BYTE *)(a1 + 16154) = 6;
  v5 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 16177) = 1;
  if ( !v2 )
  {
LABEL_7:
    v10 = 0;
    v11 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16096) = v2;
    *(_DWORD *)(a1 + 16184) = v2;
    *(_DWORD *)(a1 + 16192) = v2;
    if ( !v2 )
    {
LABEL_13:
      sub_140217454(a1 + 16104, 0);
      if ( *(_BYTE *)(a1 + 16176) )
        return (unsigned int)-1073741823;
      return (unsigned int)SystemThread;
    }
    v12 = (__int64 *)(v11 + 22944);
    while ( 1 )
    {
      v13 = *v12;
      if ( SystemThread < 0 )
        break;
      v17 = *(_OWORD *)*(_QWORD *)(120LL * *(unsigned int *)(v13 + 80) + qword_140C506E0 + 112);
      SystemThread = PsCreateSystemThreadEx((unsigned int)&Handle, 0LL, (__int64)sub_1403D3960, v13, (__int64)&v17, 0LL);
      if ( SystemThread < 0 )
        goto LABEL_22;
      ObCloseHandle(Handle, 0);
LABEL_12:
      ++v10;
      v12 += 3064;
      if ( v10 >= v2 )
        goto LABEL_13;
    }
    Handle = 0LL;
LABEL_22:
    *(_BYTE *)(a1 + 16176) = 1;
    sub_1403D3D2C(a1);
    sub_1403D3EE0(a1, 0LL);
    goto LABEL_12;
  }
  v6 = (_QWORD *)(v5 + 22944);
  while ( 1 )
  {
    v7 = sub_14030B860(64LL, 0x138uLL, 0x635A694Du, v4 | 0x80000000);
    v8 = v7;
    if ( !v7 )
      break;
    *v6 = v7;
    v9 = sub_1403D9FA8(a1, v4);
    v8[20] = v4;
    v6 += 3064;
    ++v4;
    *((_QWORD *)v8 + 38) = v9;
    *((_QWORD *)v8 + 9) = a1;
    if ( v4 >= v2 )
      goto LABEL_7;
  }
  KeSetEvent((PRKEVENT)(a1 + 16128), 0, 0);
  return 3221225626LL;
}
