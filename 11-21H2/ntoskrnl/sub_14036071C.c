/*
 * XREFs of sub_14036071C @ 0x14036071C
 * Callers:
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 *     sub_1407DECE0 @ 0x1407DECE0 (sub_1407DECE0.c)
 *     sub_1408525D8 @ 0x1408525D8 (sub_1408525D8.c)
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 *     sub_140982150 @ 0x140982150 (sub_140982150.c)
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_14036071C(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v5; // ecx
  __int64 v6; // rbx
  unsigned int v7; // edx
  int v8; // r9d
  _QWORD *v9; // rax

  v3 = a1 + 192;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 192), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 192);
  CurrentThread = KeGetCurrentThread();
  if ( v3 - qword_140C50630 < 0x8000000000LL )
    v5 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  else
    v5 = -1;
  _disable();
  v6 = (__int64)CurrentThread + 1696;
  v7 = 0;
  while ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v6 + 18)
       || (*(_DWORD *)v6 & 1) != 0
       || *(_DWORD *)(v6 + 8) != v5 )
  {
    ++v7;
    v6 += 96LL;
    if ( v7 >= 6 )
      goto LABEL_19;
  }
  *(_BYTE *)(v6 + 18) = 0;
  if ( v6 )
  {
    if ( *(__int64 *)v6 < 0 )
    {
      *(_BYTE *)v6 |= 2u;
      _enable();
      sub_14034EE30(v6);
      _disable();
    }
    v8 = *(_DWORD *)(v6 + 88);
    *(_DWORD *)(v6 + 88) = 0;
    *(_BYTE *)(v6 + 17) = 0;
    *(_QWORD *)v6 = 0LL;
    LOBYTE(v9) = *(_BYTE *)(v6 + 16);
    *((_BYTE *)CurrentThread + 792) |= 1 << (char)v9;
    _enable();
    if ( v8 )
      LOBYTE(v9) = sub_14022B568((ULONG_PTR)CurrentThread, v3, v8);
    goto LABEL_15;
  }
LABEL_19:
  LODWORD(v9) = *((_DWORD *)CurrentThread + 30);
  if ( ((unsigned int)v9 & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, v5, 0LL);
  _enable();
LABEL_15:
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    v9 = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*v9 != v9 )
      LOBYTE(v9) = KiCheckForKernelApcDelivery();
  }
  return (char)v9;
}
