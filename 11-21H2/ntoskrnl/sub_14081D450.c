/*
 * XREFs of sub_14081D450 @ 0x14081D450
 * Callers:
 *     sub_1403D981C @ 0x1403D981C (sub_1403D981C.c)
 *     sub_140AF4DB0 @ 0x140AF4DB0 (sub_140AF4DB0.c)
 * Callees:
 *     sub_14025DCF8 @ 0x14025DCF8 (sub_14025DCF8.c)
 *     sub_14025E6B4 @ 0x14025E6B4 (sub_14025E6B4.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlRandomEx @ 0x14036C940 (RtlRandomEx.c)
 *     sub_1403B7304 @ 0x1403B7304 (sub_1403B7304.c)
 *     sub_1403B7358 @ 0x1403B7358 (sub_1403B7358.c)
 *     sub_1403B75D8 @ 0x1403B75D8 (sub_1403B75D8.c)
 *     sub_1403CF398 @ 0x1403CF398 (sub_1403CF398.c)
 *     sub_14081D9C8 @ 0x14081D9C8 (sub_14081D9C8.c)
 *     sub_14081DB50 @ 0x14081DB50 (sub_14081DB50.c)
 */

char __fastcall sub_14081D450(__int64 a1, __int16 a2)
{
  int v3; // ecx
  __int64 *v4; // rdx
  unsigned int v5; // r8d
  __int64 i; // rax
  int v7; // edx
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rax
  bool v16; // cf
  __int64 v17; // rdi
  unsigned int v18; // ebx
  _QWORD *v19; // rdi
  unsigned int v20; // eax
  unsigned int v21; // r8d
  unsigned int v22; // edi
  __int64 j; // rbx
  __int64 v24; // rbx
  signed int v25; // eax
  __int64 v26; // rdi
  int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _KEVENT *v31; // r14
  __int64 v32; // r15
  __int64 v33; // rcx
  __m128i si128; // xmm0
  struct _KEVENT *v35; // rbx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  char v39; // bp
  _QWORD *v40; // rax

  *(_DWORD *)(a1 + 8) = 305535296;
  *(_WORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  if ( (ULONG_PTR *)a1 == &StartContext )
  {
    qword_140C51E80 = 0LL;
    qword_140C51EA8 = (__int64)&qword_140C51EA0;
    qword_140C51EA0 = &qword_140C51EA0;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 32;
  }
  *(_QWORD *)(a1 + 15680) = 0LL;
  KeInitializeEvent((PRKEVENT)(a1 + 104), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 15920), SynchronizationEvent, 0);
  v3 = 0;
  v4 = (__int64 *)(a1 + 2432);
  do
  {
    v5 = 0;
    for ( i = *v4; v5 < dword_140C5073C; i += 88LL )
    {
      *(_DWORD *)(i + 8) = v3;
      ++v5;
      *(_QWORD *)(i + 16) = 0x3FFFFFFFFFLL;
      *(_QWORD *)(i + 24) = 0x3FFFFFFFFFLL;
      *(_QWORD *)i = 0LL;
      *(_DWORD *)(i + 32) = 0;
    }
    ++v3;
    ++v4;
  }
  while ( v3 <= 1 );
  sub_14025DCF8(a1 + 2496, 0);
  sub_14025DCF8(a1 + 2624, 1);
  sub_14025DCF8(a1 + 2752, 2);
  v8 = (_QWORD *)(a1 + 11328);
  v9 = a1 + 2880;
  do
  {
    sub_14025DCF8(v9, v7);
    v15 = 64LL;
    do
    {
      *(v8 - 512) = -1LL;
      *v8++ = -1LL;
      --v15;
    }
    while ( v15 );
    v9 = v10 + 88;
  }
  while ( v11 != 1 );
  *(_QWORD *)(a1 + 6632) = v12;
  *(_QWORD *)(a1 + 6640) = v13;
  *(_QWORD *)(a1 + 6648) = v14;
  sub_14081DB50(a1);
  v16 = word_140D05000 != 0;
  v17 = *(_QWORD *)(a1 + 16);
  v18 = 0;
  *(_QWORD *)(a1 + 15904) = a1 + 15896;
  *(_QWORD *)(a1 + 15896) = a1 + 15896;
  if ( v16 )
  {
    v19 = (_QWORD *)(v17 + 22640);
    do
    {
      *((_DWORD *)v19 - 4) = RtlRandomEx(&dword_140C50648);
      ++v18;
      v20 = (unsigned __int16)word_140D05000;
      *v19 = 0LL;
      v19 += 3064;
    }
    while ( v18 < v20 );
  }
  v21 = dword_140C5073C;
  v22 = 0;
  for ( j = *(_QWORD *)(a1 + 6616); v22 < 2 * dword_140C5073C; ++v22 )
  {
    InitializeSListHead((PSLIST_HEADER)(j + 16LL * v22));
    v21 = dword_140C5073C;
  }
  v24 = 16LL;
  v25 = (unsigned int)(*(_QWORD *)(a1 + 16720) / 0x64uLL) / v21;
  if ( v25 < 4 )
  {
    v25 = 4;
  }
  else if ( (unsigned int)v25 > 0x10 )
  {
    v25 = 16;
  }
  *(_DWORD *)(a1 + 16188) = v25;
  if ( (ULONG_PTR *)a1 == &StartContext )
    sub_14025DCF8((__int64)&qword_140C4F248, 5);
  v26 = 3LL;
  sub_14025DCF8(a1 + 17280, 3);
  sub_14025DCF8(a1 + 17408, v27);
  sub_14025DCF8(a1 + 3584, 3);
  v28 = a1 + 3712;
  do
  {
    sub_14025DCF8(v28, 3);
    v28 = v29 + 88;
  }
  while ( v30 != 1 );
  v31 = (struct _KEVENT *)(a1 + 6840);
  v32 = a1 + 5120;
  do
  {
    sub_14025DCF8(v32, 3);
    KeInitializeEvent(v31, SynchronizationEvent, 0);
    v32 += 88LL;
    ++v31;
    --v24;
  }
  while ( v24 );
  sub_14025DCF8(a1 + 6528, 5);
  *(_QWORD *)(a1 + 6672) = v33;
  *(_QWORD *)(a1 + 6656) = a1 + 17280;
  *(_QWORD *)(a1 + 6664) = a1 + 17408;
  sub_1403B75D8(a1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_140024FD0);
  v35 = (struct _KEVENT *)(a1 + 15688);
  *(__m128i *)(a1 + 15552) = si128;
  *(__m128i *)(a1 + 15568) = si128;
  do
  {
    KeInitializeEvent(v35, NotificationEvent, 1u);
    v35 = (struct _KEVENT *)((char *)v35 + 32);
    --v26;
  }
  while ( v26 );
  v36 = (_QWORD *)(a1 + 2080);
  *(_QWORD *)(a1 + 192) = 0LL;
  v37 = 9LL;
  do
  {
    *v36 = -1LL;
    v36 += 4;
    --v37;
  }
  while ( v37 );
  KeInitializeEvent((PRKEVENT)(a1 + 208), NotificationEvent, 0);
  memset64((void *)(a1 + 248), a1 + 208, 0xBuLL);
  *(_QWORD *)(a1 + 16616) = a1 + 16608;
  *(_QWORD *)(a1 + 16608) = a1 + 16608;
  KeInitializeEvent((PRKEVENT)(a1 + 816), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 760), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 784), NotificationEvent, 0);
  *(_DWORD *)(a1 + 744) = 18;
  KeInitializeEvent((PRKEVENT)(a1 + 720), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 904), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1032), NotificationEvent, 0);
  sub_14025E6B4(a1 + 672);
  *(_QWORD *)(a1 + 664) = a1 + 656;
  *(_QWORD *)(a1 + 656) = a1 + 656;
  KeInitializeEvent((PRKEVENT)(a1 + 944), SynchronizationEvent, 0);
  *(_QWORD *)(a1 + 936) = a1 + 928;
  *(_QWORD *)(a1 + 928) = a1 + 928;
  if ( (ULONG_PTR *)a1 != &StartContext )
    sub_1403CF398(a1);
  InitializeSListHead((PSLIST_HEADER)(a1 + 448));
  sub_1403B7358(a1);
  *(_QWORD *)(a1 + 1152) = 0LL;
  *(_QWORD *)(a1 + 1128) = sub_1405B7340;
  *(_QWORD *)(a1 + 1136) = a1;
  *(_QWORD *)(a1 + 1112) = 0LL;
  *(_DWORD *)(a1 + 1172) = -1;
  KeInitializeEvent((PRKEVENT)(a1 + 1216), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1264), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 1248));
  sub_14081D9C8(a1);
  sub_1403B7304(a1, (_QWORD *)(a1 + 16200));
  *(_QWORD *)(a1 + 1352) = 1LL;
  *(_QWORD *)(a1 + 16632) = a1 + 16624;
  *(_QWORD *)(a1 + 16624) = a1 + 16624;
  *(_QWORD *)(a1 + 16648) = a1 + 16640;
  *(_QWORD *)(a1 + 16640) = a1 + 16640;
  *(_QWORD *)(a1 + 1360) = 1LL;
  *(_QWORD *)(a1 + 1368) = 1LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51F08, 0LL);
  *(_DWORD *)(a1 + 4) |= 2u;
  v39 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51F08, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v39 & 2) != 0 && (v39 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C51F08);
  LOBYTE(v40) = sub_1402AFC00((ULONG_PTR)&qword_140C51F08);
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF )
  {
    v40 = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*v40 != v40 )
      LOBYTE(v40) = KiCheckForKernelApcDelivery();
  }
  return (char)v40;
}
