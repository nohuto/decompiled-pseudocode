/*
 * XREFs of sub_1409AE050 @ 0x1409AE050
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1409BFD4C @ 0x1409BFD4C (sub_1409BFD4C.c)
 *     sub_1409BFEC8 @ 0x1409BFEC8 (sub_1409BFEC8.c)
 */

__int64 __fastcall sub_1409AE050(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned int *a5)
{
  volatile signed __int64 *v5; // r12
  unsigned int v6; // ebp
  unsigned int v7; // esi
  __int64 v10; // r15
  __int64 v11; // r9
  unsigned int v12; // esi
  unsigned int v13; // edx
  char v14; // di
  _DWORD *v15; // rcx
  unsigned __int64 v16; // rax
  char v17; // di
  int *v18; // r14
  int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  unsigned int v24; // [rsp+20h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-A0h]
  struct _EX_RUNDOWN_REF *v27; // [rsp+40h] [rbp-88h]
  _OWORD v28[3]; // [rsp+50h] [rbp-78h] BYREF

  v5 = (volatile signed __int64 *)(a2 + 8);
  memset(v28, 0, sizeof(v28));
  v6 = 0;
  v7 = a4;
  CurrentThread = KeGetCurrentThread();
  v10 = *((_QWORD *)CurrentThread + 23);
  --*((_WORD *)CurrentThread + 242);
  v27 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( sub_140347810((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112)) )
  {
    v13 = 0;
    v24 = v7;
    v14 = 2;
    if ( v7 )
    {
      v15 = (_DWORD *)(a3 + 16);
      while ( (*((_DWORD *)CurrentThread + 344) & 1) == 0 )
      {
        if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 )
        {
          v12 = -1073741558;
          goto LABEL_34;
        }
        v16 = *((_QWORD *)v15 - 2);
        v11 = *((_QWORD *)v15 - 1);
        if ( v11 + v16 < v16 )
        {
          v12 = -1073741675;
          goto LABEL_34;
        }
        if ( v16 - 0x10000 > 0x7FFFFFFDFFFFLL || v11 + v16 - 0x10000 > 0x7FFFFFFDFFFFLL || !v11 )
        {
          v12 = -1073741503;
          goto LABEL_34;
        }
        if ( (*v15 & 0xFFFFFFFE) != 0 )
        {
          v12 = -1073741811;
          goto LABEL_34;
        }
        ++v13;
        v15 += 6;
        if ( v13 >= v7 )
          goto LABEL_13;
      }
      v12 = -1073741749;
    }
    else
    {
LABEL_13:
      if ( BugCheckParameter1 != v10 )
      {
        sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v28, v11);
        v14 = 3;
      }
      v17 = v14 | 4;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
      if ( v7 )
      {
        v18 = (int *)(a3 + 16);
        while ( (*((_DWORD *)CurrentThread + 344) & 1) == 0 )
        {
          if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 )
          {
            v12 = -1073741558;
            goto LABEL_30;
          }
          v19 = *v18;
          v20 = *((_QWORD *)v18 - 2);
          v21 = *((_QWORD *)v18 - 1);
          if ( (*v18 & 1) != 0 )
            v22 = sub_1409BFD4C(a2, v20, v21);
          else
            v22 = sub_1409BFEC8(a2, v20, v21);
          v12 = v22;
          if ( v22 < 0 )
            goto LABEL_30;
          ++v6;
          *v18 = v19 | 2;
          v18 += 6;
          if ( v6 >= v24 )
            goto LABEL_29;
        }
        v12 = -1073741749;
      }
      else
      {
LABEL_29:
        v12 = 0;
      }
LABEL_30:
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      sub_1402AFC00((ULONG_PTR)v5);
      if ( (v17 & 1) != 0 )
        sub_1402D0930((__int64)v28, 0LL);
    }
LABEL_34:
    sub_1402AD030(v27);
  }
  else
  {
    v12 = -1073741558;
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  *a5 = v6;
  return v12;
}
