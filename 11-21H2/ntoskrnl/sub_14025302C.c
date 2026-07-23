/*
 * XREFs of sub_14025302C @ 0x14025302C
 * Callers:
 *     sub_140659AD4 @ 0x140659AD4 (sub_140659AD4.c)
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_1409B2390 @ 0x1409B2390 (sub_1409B2390.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14025302C(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // ecx
  char *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // r9d

  v3 = a1 + 1080;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1080);
  CurrentThread = KeGetCurrentThread();
  if ( v3 - qword_140C50630 < 0x8000000000LL )
    v5 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  else
    v5 = -1;
  _disable();
  v6 = (char *)CurrentThread + 1696;
  v7 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  v8 = 0LL;
  while ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) != v7
       || !v6[18]
       || (*(_DWORD *)v6 & 1) != 0
       || *((_DWORD *)v6 + 2) != v5 )
  {
    v8 = (unsigned int)(v8 + 1);
    v6 += 96;
    if ( (unsigned int)v8 >= 6 )
      goto LABEL_17;
  }
  v6[18] = 0;
  if ( v6 )
  {
    if ( *(__int64 *)v6 < 0 )
    {
      *v6 |= 2u;
      _enable();
      sub_14034EE30(v6, v8, v7);
      _disable();
    }
    v9 = *((_DWORD *)v6 + 22);
    *((_DWORD *)v6 + 22) = 0;
    v6[17] = 0;
    *(_QWORD *)v6 = 0LL;
    *((_BYTE *)CurrentThread + 792) |= 1 << v6[16];
    _enable();
    if ( v9 )
      sub_14022B568((ULONG_PTR)CurrentThread, v3, v9);
    return sub_1402AC800(a2);
  }
LABEL_17:
  if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, v5, 0LL);
  _enable();
  return sub_1402AC800(a2);
}
