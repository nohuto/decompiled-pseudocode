/*
 * XREFs of sub_14085BE8C @ 0x14085BE8C
 * Callers:
 *     sub_140721010 @ 0x140721010 (sub_140721010.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140657670 @ 0x140657670 (sub_140657670.c)
 *     sub_14067E828 @ 0x14067E828 (sub_14067E828.c)
 *     sub_14067E974 @ 0x14067E974 (sub_14067E974.c)
 *     sub_1406BBA30 @ 0x1406BBA30 (sub_1406BBA30.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071B640 @ 0x14071B640 (sub_14071B640.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4484 @ 0x140AB4484 (sub_140AB4484.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14085BE8C(__int64 a1, void *a2)
{
  char v3; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // di
  int v13; // ebx
  ULONG_PTR v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  PPRIVILEGE_SET v17; // rcx
  __int64 v19; // [rsp+40h] [rbp-30h]
  __int128 v20; // [rsp+48h] [rbp-28h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+58h] [rbp-18h]
  char v22; // [rsp+C0h] [rbp+50h]
  __int64 v23; // [rsp+C8h] [rbp+58h] BYREF

  v23 = 0LL;
  v3 = 0;
  sub_1407C97FC(&v23);
  v20 = 0LL;
  WORD1(v20) = -1;
  *(_OWORD *)Privileges = 0LL;
  v22 = sub_140AB46D0(v6, v5, v7);
  v12 = v22;
  if ( v22 )
  {
    sub_140AB4370(v9, v8, v10);
    v14 = *(_QWORD *)(a1 + 8);
    v3 = 1;
    v15 = *(_QWORD *)(v14 + 32);
    v13 = sub_1407C05F4((__int64)&v20, v14);
    if ( v13 >= 0 )
    {
      sub_14067E974((__int64)&v20);
      v13 = sub_140AB43C0(a1, 0LL);
      if ( v13 >= 0 )
      {
        ExAcquirePushLockSharedEx(v15 + 72, 0LL);
        ExAcquirePushLockExclusiveEx(v15 + 1784, 0LL);
        v19 = sub_14067E828(v14, (__int64)&v23, 1);
        sub_1406BBA30(a1, 0LL);
        if ( !*((_BYTE *)KeGetCurrentThread() + 562) && (*(_DWORD *)(v15 + 4112) & 0x20) != 0 && *(_DWORD *)(v15 + 1872) )
          a2 = (void *)(*(_QWORD *)(*(_QWORD *)(v15 + 1888) + 8LL) + 32LL);
        v13 = sub_140657670(
                *(_QWORD *)(v14 + 32),
                *(_DWORD *)(v14 + 40),
                v19,
                *(_DWORD *)(v14 + 40) >> 31,
                a2,
                0,
                (unsigned int *)(v19 + 44));
        if ( v13 >= 0 )
        {
          sub_14071B640(v14, *(unsigned int *)(v19 + 44), 0LL, 1, 0);
          v13 = 0;
        }
        if ( v19 )
        {
          v16 = *(_QWORD *)(v14 + 32);
          if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
            sub_1406BF450(v16, &v23);
          else
            sub_1407C97C0(v16, (unsigned int *)&v23);
        }
        sub_140AB4484(v15);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v15 + 72));
        sub_1402AFC00(v15 + 72);
      }
      sub_140721BAC((__int64)&v20);
    }
    v12 = v22;
  }
  else
  {
    v13 = -1073741431;
  }
  v17 = Privileges[1];
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  if ( v3 )
    sub_140AB4260(v17, v8, v10, v11);
  if ( v12 )
    sub_140AB42A0(v17, v8);
  return (unsigned int)v13;
}
