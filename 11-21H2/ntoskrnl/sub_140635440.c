/*
 * XREFs of sub_140635440 @ 0x140635440
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 */

__int64 __fastcall sub_140635440(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  __int64 v6; // rax
  _DWORD *v7; // rsi
  signed __int64 *v8; // rdi

  v2 = *a1;
  v4 = 0;
  v5 = sub_140347DB0();
  v6 = sub_140797594(v5[108], v2, 0LL);
  v7 = (_DWORD *)v6;
  if ( v6 )
  {
    *a2 = v2;
    v8 = (signed __int64 *)(v6 + 1144);
    ExAcquirePushLockSharedEx(v6 + 1144, 0LL);
    a2[1] = v7[294];
    a2[2] = v7[293];
    a2[3] = v7[295];
    if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8);
    sub_1402AFC00((ULONG_PTR)v8);
    sub_1407981E8(v7, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
