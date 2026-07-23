/*
 * XREFs of sub_1407049DC @ 0x1407049DC
 * Callers:
 *     sub_140704EF8 @ 0x140704EF8 (sub_140704EF8.c)
 *     sub_140705578 @ 0x140705578 (sub_140705578.c)
 * Callees:
 *     PsGetThreadTeb @ 0x14029A290 (PsGetThreadTeb.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140704D58 @ 0x140704D58 (sub_140704D58.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1407049DC(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        bool *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v12; // r14
  __int64 ThreadTeb; // rbx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  _OWORD *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  _OWORD *v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rax
  struct _KTHREAD *v24; // rbx
  struct _KTHREAD *v26; // rbx
  int v28; // [rsp+24h] [rbp-C4h]
  __int64 v29; // [rsp+28h] [rbp-C0h]
  volatile void *Address[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+50h] [rbp-98h]
  __int128 v32; // [rsp+60h] [rbp-88h]
  __int64 v33; // [rsp+70h] [rbp-78h]
  _OWORD v34[3]; // [rsp+78h] [rbp-70h] BYREF

  memset(v34, 0, sizeof(v34));
  *(_OWORD *)Address = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v12 = (signed __int64 *)(a2 + 1360);
  ExAcquirePushLockSharedEx(a2 + 1360, 0LL);
  ThreadTeb = PsGetThreadTeb(a2);
  v29 = ThreadTeb;
  if ( ThreadTeb )
  {
    sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v34, v14);
    v16 = *(_QWORD *)(ThreadTeb + 5256);
    v33 = v16;
    if ( v16 )
    {
      v28 = sub_140704D58(v16, v15, Address);
      if ( v28 >= 0 )
      {
        if ( a3 )
        {
          v17 = Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)Address[0] + 716 > 0x7FFFFFFF0000LL || (char *)Address[0] + 716 < Address[0] )
            MEMORY[0x7FFFFFFF0000] = 0;
          v18 = 5LL;
          do
          {
            *(_OWORD *)a4 = *v17;
            *(_OWORD *)(a4 + 16) = v17[1];
            *(_OWORD *)(a4 + 32) = v17[2];
            *(_OWORD *)(a4 + 48) = v17[3];
            *(_OWORD *)(a4 + 64) = v17[4];
            *(_OWORD *)(a4 + 80) = v17[5];
            *(_OWORD *)(a4 + 96) = v17[6];
            a4 += 128LL;
            *(_OWORD *)(a4 - 16) = v17[7];
            v17 += 8;
            --v18;
          }
          while ( v18 );
          *(_OWORD *)a4 = *v17;
          *(_OWORD *)(a4 + 16) = v17[1];
          *(_OWORD *)(a4 + 32) = v17[2];
          *(_OWORD *)(a4 + 48) = v17[3];
          *(_QWORD *)(a4 + 64) = *((_QWORD *)v17 + 8);
          *(_DWORD *)(a4 + 72) = *((_DWORD *)v17 + 18);
          if ( a7 )
          {
            v20 = *((_QWORD *)&v31 + 1);
            if ( *((_QWORD *)&v31 + 1) >= 0x7FFFFFFF0000uLL )
              v20 = 0x7FFFFFFF0000LL;
            *a7 = *(_DWORD *)v20;
          }
        }
        else
        {
          v21 = Address[0];
          ProbeForWrite(Address[0], 0x2CCuLL, 4u);
          v22 = 5LL;
          do
          {
            *v21 = *(_OWORD *)a4;
            v21[1] = *(_OWORD *)(a4 + 16);
            v21[2] = *(_OWORD *)(a4 + 32);
            v21[3] = *(_OWORD *)(a4 + 48);
            v21[4] = *(_OWORD *)(a4 + 64);
            v21[5] = *(_OWORD *)(a4 + 80);
            v21[6] = *(_OWORD *)(a4 + 96);
            v21 += 8;
            *(v21 - 1) = *(_OWORD *)(a4 + 112);
            a4 += 128LL;
            --v22;
          }
          while ( v22 );
          *v21 = *(_OWORD *)a4;
          v21[1] = *(_OWORD *)(a4 + 16);
          v21[2] = *(_OWORD *)(a4 + 32);
          v21[3] = *(_OWORD *)(a4 + 48);
          *((_QWORD *)v21 + 8) = *(_QWORD *)(a4 + 64);
          *((_DWORD *)v21 + 18) = *(_DWORD *)(a4 + 72);
          ThreadTeb = v29;
          if ( a7 )
          {
            v23 = *((_QWORD *)&v31 + 1);
            if ( *((_QWORD *)&v31 + 1) >= 0x7FFFFFFF0000uLL )
              v23 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v23 = *a7;
          }
        }
        if ( a8 )
        {
          v19 = *(_QWORD *)(ThreadTeb + 5328);
          if ( v19 )
          {
            if ( (v19 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)(v19 + 8) > 0x7FFFFFFF0000LL || v19 + 8 < (unsigned __int64)(v19 + 4) )
              MEMORY[0x7FFFFFFF0000] = 0;
            *a8 = (*(_DWORD *)(v19 + 4) & 2) != 0;
          }
          else
          {
            *a8 = 0;
          }
        }
      }
    }
    else
    {
      v28 = -1073741811;
    }
    sub_1402D0930((__int64)v34, 0LL);
    v24 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    sub_1402AFC00((ULONG_PTR)v12);
    sub_1402AC800((__int64)v24);
    return (unsigned int)v28;
  }
  else
  {
    v26 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    sub_1402AFC00((ULONG_PTR)v12);
    sub_1402AC800((__int64)v26);
    return 3221225547LL;
  }
}
