/*
 * XREFs of sub_1C001C388 @ 0x1C001C388
 * Callers:
 *     sub_1C001C288 @ 0x1C001C288 (sub_1C001C288.c)
 * Callees:
 *     sub_1C0015A40 @ 0x1C0015A40 (sub_1C0015A40.c)
 *     sub_1C001B3E8 @ 0x1C001B3E8 (sub_1C001B3E8.c)
 *     sub_1C001DA50 @ 0x1C001DA50 (sub_1C001DA50.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C006FDF8 @ 0x1C006FDF8 (sub_1C006FDF8.c)
 */

__int64 __fastcall sub_1C001C388(__int64 a1)
{
  __int64 result; // rax
  _WORD *v2; // r12
  unsigned __int8 v4; // r8
  char v5; // al
  char v6; // r8
  __int16 v7; // r9
  __int16 v8; // r10
  unsigned __int8 v9; // r11
  __int64 v10; // r14
  const wchar_t *v11; // rsi
  int v12; // [rsp+80h] [rbp-138h]
  int v13; // [rsp+88h] [rbp-130h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+138h] [rbp-80h] BYREF
  _OWORD v15[2]; // [rsp+150h] [rbp-68h] BYREF
  __int64 v16; // [rsp+170h] [rbp-48h]
  int v17; // [rsp+1A8h] [rbp-10h] BYREF

  result = 0LL;
  v2 = (_WORD *)(a1 + 2392);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v17 = 0;
  if ( *(_DWORD *)(a1 + 2392) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2384), &LockHandle);
    LOWORD(v17) = *v2 - 1;
    if ( (unsigned __int16)v17 >= 0xAu )
      LOWORD(v17) = 10;
    v4 = 0;
    do
    {
      v16 = 0LL;
      memset(v15, 0, sizeof(v15));
      v5 = sub_1C0015A40((_BYTE *)(a1 + 8 * (v4 + 4 * (v4 + 89LL))), v15);
      if ( v5 == (_BYTE)v8 )
        break;
      v7 += v8;
      v4 = v8 + v6;
    }
    while ( v4 < v9 );
    HIWORD(v17) = v7;
    if ( byte_1C0093B18 == (_BYTE)v8 && !dword_1C0093B1C || dword_1C0093BDC >= (unsigned int)dword_1C0093418 )
      goto LABEL_16;
    if ( (*(_DWORD *)(a1 + 2040) & 0x20) != 0 )
      dword_1C0093B1C = -1;
    if ( *(_BYTE *)(a1 + 2044) )
      dword_1C0093B1C = -1;
    if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
      dword_1C0093B1C = -1;
    if ( dword_1C0093B1C )
      sub_1C006FDF8(a1, &v17);
    else
LABEL_16:
      sub_1C001DA50(a1, &v17);
    if ( (byte_1C0093A04 & 0x10) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 24);
      v11 = (const wchar_t *)&unk_1C0082788;
      if ( *(_QWORD *)(v10 + 5016) )
        v11 = *(const wchar_t **)(v10 + 5016);
      sub_1C001B3E8(
        40 * (unsigned int)(unsigned __int16)v17,
        a1 + 2448,
        40 * (unsigned int)HIWORD(v17),
        *(_DWORD *)(v10 + 56),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 2024,
        v10 + 5000,
        *(_DWORD *)(a1 + 3344),
        *(const wchar_t **)(v10 + 4656),
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        v11,
        v12,
        v13,
        *(_DWORD *)v2,
        *(_DWORD *)(a1 + 2396),
        *(_DWORD *)(a1 + 2400),
        *(_DWORD *)(a1 + 2404),
        *(_DWORD *)(a1 + 2184),
        *(_DWORD *)(a1 + 1328),
        *(_DWORD *)(a1 + 2420),
        *(_DWORD *)(a1 + 2424),
        *(_BYTE *)(a1 + 2413),
        *(_BYTE *)(a1 + 2408),
        *(_BYTE *)(a1 + 2409),
        *(_BYTE *)(a1 + 2410),
        *(_BYTE *)(a1 + 2411),
        *(_BYTE *)(a1 + 2412),
        *(_DWORD *)(a1 + 2416),
        *(_DWORD *)(a1 + 2428),
        *(_QWORD *)(a1 + 2432),
        40 * (unsigned __int16)v17,
        a1 + 2448,
        40 * HIWORD(v17),
        a1 + 2848);
    }
    memset_0(v2, 0, 0x1C8uLL);
    memset_0((void *)(a1 + 2848), 0, 0x190uLL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  return result;
}
