/*
 * XREFs of sub_14036C0A0 @ 0x14036C0A0
 * Callers:
 *     sub_1407F1400 @ 0x1407F1400 (sub_1407F1400.c)
 *     sub_140809BEC @ 0x140809BEC (sub_140809BEC.c)
 *     sub_140811238 @ 0x140811238 (sub_140811238.c)
 *     sub_14081AFCC @ 0x14081AFCC (sub_14081AFCC.c)
 *     sub_14081B144 @ 0x14081B144 (sub_14081B144.c)
 *     sub_14081B2F0 @ 0x14081B2F0 (sub_14081B2F0.c)
 *     sub_14081BF30 @ 0x14081BF30 (sub_14081BF30.c)
 *     sub_14081BF60 @ 0x14081BF60 (sub_14081BF60.c)
 *     sub_140853600 @ 0x140853600 (sub_140853600.c)
 *     sub_1409A0CF0 @ 0x1409A0CF0 (sub_1409A0CF0.c)
 *     sub_1409A0FD0 @ 0x1409A0FD0 (sub_1409A0FD0.c)
 *     sub_1409A1190 @ 0x1409A1190 (sub_1409A1190.c)
 *     sub_1409A1604 @ 0x1409A1604 (sub_1409A1604.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14036C0A0(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v3; // ecx
  __int64 v4; // rbx
  unsigned int v5; // edx
  int v6; // r8d
  __int64 result; // rax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
    v3 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  else
    v3 = -1;
  _disable();
  v4 = (__int64)CurrentThread + 1696;
  v5 = 0;
  while ( (*(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFCLL) != (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v4 + 18)
       || (*(_DWORD *)v4 & 1) != 0
       || *(_DWORD *)(v4 + 8) != v3 )
  {
    ++v5;
    v4 += 96LL;
    if ( v5 >= 6 )
      goto LABEL_16;
  }
  *(_BYTE *)(v4 + 18) = 0;
  if ( v4 )
  {
    if ( *(__int64 *)v4 < 0 )
    {
      *(_BYTE *)v4 |= 2u;
      _enable();
      sub_14034EE30(v4);
      _disable();
    }
    v6 = *(_DWORD *)(v4 + 88);
    *(_DWORD *)(v4 + 88) = 0;
    *(_BYTE *)(v4 + 17) = 0;
    *(_QWORD *)v4 = 0LL;
    result = *(unsigned __int8 *)(v4 + 16);
    *((_BYTE *)CurrentThread + 792) |= 1 << result;
    _enable();
    if ( v6 )
      return sub_14022B568((ULONG_PTR)CurrentThread, BugCheckParameter2, v6);
    return result;
  }
LABEL_16:
  result = *((unsigned int *)CurrentThread + 30);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, v3, 0LL);
  _enable();
  return result;
}
