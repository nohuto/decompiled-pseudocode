/*
 * XREFs of ObSetHandleAttributes @ 0x1407A1B10
 * Callers:
 *     sub_1406B9250 @ 0x1406B9250 (sub_1406B9250.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402F3510 @ 0x1402F3510 (sub_1402F3510.c)
 *     sub_1402F3558 @ 0x1402F3558 (sub_1402F3558.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     sub_1407A1AC0 @ 0x1407A1AC0 (sub_1407A1AC0.c)
 */

__int64 __fastcall ObSetHandleAttributes(unsigned __int64 a1, _BYTE *a2, char a3)
{
  __int64 v4; // rbx
  char v5; // r12
  char v6; // r15
  __int64 v7; // r14
  __int64 v8; // r9
  ULONG_PTR v9; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v11; // rax
  volatile signed __int64 *v12; // r10
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // ebx
  signed __int32 v17[8]; // [rsp+0h] [rbp-88h] BYREF
  _OWORD v18[3]; // [rsp+20h] [rbp-68h] BYREF

  memset(v18, 0, sizeof(v18));
  v4 = a1;
  v5 = 0;
  v6 = 0;
  v7 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( sub_1402F3558(a1, a3) )
  {
    v4 ^= 0xFFFFFFFF80000000uLL;
    v9 = qword_140C24F88;
    if ( (PEPROCESS)v7 != PsInitialSystemProcess )
    {
      sub_14030D5C0((ULONG_PTR)PsInitialSystemProcess, 0LL, (__int64)v18, v8);
      v5 = 1;
    }
  }
  else if ( *((_BYTE *)KeGetCurrentThread() + 586) == 1 )
  {
    v9 = sub_14066B3D8((struct _EX_RUNDOWN_REF *)v7);
    if ( !v9 )
      return 3221225480LL;
    v6 = 1;
  }
  else
  {
    v9 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1392LL);
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v11 = sub_1407A1AC0((unsigned int *)v9, v4);
  v12 = v11;
  if ( v11 )
  {
    v13 = (*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( !*a2
      || (*(_DWORD *)(qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v13 + 24) ^ (unsigned __int64)BYTE1(v13)]
                    + 72) & 2) == 0 )
    {
      v14 = (*a2 != 0 ? 2 : 0) | 1;
      if ( !a2[1] )
        v14 = *a2 != 0 ? 2 : 0;
      sub_1402F3510((__int64)v12, v14, 3);
    }
    _InterlockedExchangeAdd64(v12, 1uLL);
    _InterlockedOr(v17, 0);
    if ( *(_QWORD *)(v9 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v9 + 48), 0LL);
    v15 = 0;
  }
  else
  {
    v15 = -1073741790;
  }
  sub_1402F9540((__int64)CurrentThread);
  if ( v5 )
    sub_1402D0930((__int64)v18, 0LL);
  if ( v6 )
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(v7 + 1112));
  return v15;
}
