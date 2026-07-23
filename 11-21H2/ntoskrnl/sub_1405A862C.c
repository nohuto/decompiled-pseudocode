/*
 * XREFs of sub_1405A862C @ 0x1405A862C
 * Callers:
 *     sub_1402ECEB0 @ 0x1402ECEB0 (sub_1402ECEB0.c)
 * Callees:
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140882604 @ 0x140882604 (sub_140882604.c)
 *     sub_14097A0B0 @ 0x14097A0B0 (sub_14097A0B0.c)
 *     sub_1409B44C8 @ 0x1409B44C8 (sub_1409B44C8.c)
 *     sub_1409B4560 @ 0x1409B4560 (sub_1409B4560.c)
 *     sub_1409B4584 @ 0x1409B4584 (sub_1409B4584.c)
 */

__int64 __fastcall sub_1405A862C(ULONG_PTR BugCheckParameter3)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v4; // rsi
  _QWORD *v5; // rdx
  ULONG_PTR v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rax
  unsigned int v9; // edi
  int v10; // eax

  if ( (*(_DWORD *)(BugCheckParameter3 + 64) & 1) != 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = *(void **)(BugCheckParameter3 + 72);
  sub_1409B4560(v4);
  v6 = BugCheckParameter3 + 80;
  if ( v5 )
  {
    v7 = *(_QWORD *)v6;
    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6
      || (*v5 = v7, v5[1] = v6, *(_QWORD *)(v7 + 8) = v5, *(_QWORD *)v6 = v5, v5[1] != v6)
      || (v8 = *(_QWORD **)(BugCheckParameter3 + 88), *v8 != v6) )
    {
      __fastfail(3u);
    }
    *v8 = v5;
    v5[1] = v8;
    *(_QWORD *)(BugCheckParameter3 + 88) = BugCheckParameter3 + 80;
    *(_QWORD *)v6 = v6;
  }
  else
  {
    sub_14097A0B0(v6);
  }
  if ( (unsigned __int8)sub_1409B44C8(v4) )
  {
    sub_140281C44((__int64)CurrentThread, BugCheckParameter3);
    v10 = sub_1409B4584(v4);
    v9 = v10;
    if ( v10 < 0 )
      KeBugCheckEx(0x1Au, 0x44417uLL, v10, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 72));
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx(BugCheckParameter3 + 40, 0LL);
    *((_BYTE *)CurrentThread + 1384) |= 0x80u;
    if ( (*(_BYTE *)(BugCheckParameter3 + 48) & 4) != 0 )
      v9 = -1073741800;
  }
  else
  {
    v9 = -1073740527;
  }
  sub_140882604(v4);
  return v9;
}
