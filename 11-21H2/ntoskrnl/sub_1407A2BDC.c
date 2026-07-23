/*
 * XREFs of sub_1407A2BDC @ 0x1407A2BDC
 * Callers:
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_1407A1CE8 @ 0x1407A1CE8 (sub_1407A1CE8.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     sub_1407A2B78 @ 0x1407A2B78 (sub_1407A2B78.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140883EDC @ 0x140883EDC (sub_140883EDC.c)
 */

__int64 __fastcall sub_1407A2BDC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r10
  char v5; // si
  unsigned int LockArray_high; // eax
  ULONG_PTR v7; // rbx
  __int64 v8; // rax
  __int64 v10; // rax
  _DWORD *v11; // rax

  v4 = a1;
  if ( *(_DWORD *)(a1 + 4) )
  {
    v11 = (_DWORD *)sub_140883EDC(a1);
    if ( v11 )
    {
      *v11 = 0;
      v11[1] = 0;
    }
  }
  *(_QWORD *)(a3 + 8) = 0LL;
  v5 = *(_BYTE *)(v4 + 44) & 1;
  if ( v5 )
    LockArray_high = 0;
  else
    LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v7 = v4 + ((LockArray_high + 1LL) << 6);
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  if ( v5 )
  {
    v8 = *(_QWORD *)(v7 + 16);
    if ( v8 )
      *(_QWORD *)(v8 + 8) = a3;
    else
      *(_QWORD *)(v7 + 8) = a3;
    *(_QWORD *)(v7 + 16) = a3;
  }
  else
  {
    v10 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(a3 + 8) = v10;
    if ( !v10 )
      *(_QWORD *)(v7 + 16) = a3;
    *(_QWORD *)(v7 + 8) = a3;
  }
  --*(_DWORD *)(v7 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  return sub_1402AFC00(v7);
}
