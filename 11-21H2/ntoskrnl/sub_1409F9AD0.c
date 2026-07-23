/*
 * XREFs of sub_1409F9AD0 @ 0x1409F9AD0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeQueryTimeIncrement @ 0x1402F1D40 (KeQueryTimeIncrement.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140639C30 @ 0x140639C30 (sub_140639C30.c)
 *     sub_140639D84 @ 0x140639D84 (sub_140639D84.c)
 *     sub_140639FC4 @ 0x140639FC4 (sub_140639FC4.c)
 *     ntoskrnl_20 @ 0x1406A71F0 (ntoskrnl_20.c)
 *     ntoskrnl_21 @ 0x1406A73E0 (ntoskrnl_21.c)
 *     sub_1409F992C @ 0x1409F992C (sub_1409F992C.c)
 */

__int64 __fastcall sub_1409F9AD0(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int a4, _DWORD *a5, _BYTE *a6)
{
  _DWORD *v8; // rbx
  signed __int64 *v10; // rsi
  __int64 v11; // rbx
  bool v12; // r15
  unsigned int v13; // ecx
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // si
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rbx
  unsigned int v23; // ecx
  _DWORD *v24; // r9
  __int128 v26; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v27; // [rsp+40h] [rbp-C0h]
  __int128 v28; // [rsp+50h] [rbp-B0h]
  __int128 v29; // [rsp+68h] [rbp-98h] BYREF
  __int128 v30; // [rsp+78h] [rbp-88h]
  __int128 v31; // [rsp+88h] [rbp-78h]
  __int128 v32; // [rsp+98h] [rbp-68h] BYREF
  __int128 v33; // [rsp+A8h] [rbp-58h]
  __int128 v34; // [rsp+B8h] [rbp-48h]
  _OWORD v35[3]; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v36[6]; // [rsp+F8h] [rbp-8h] BYREF
  int v37; // [rsp+170h] [rbp+70h] BYREF
  _DWORD *v38; // [rsp+178h] [rbp+78h]

  v38 = a2;
  v8 = a2;
  v37 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( !*(_QWORD *)a1 && *(_QWORD *)(a1 + 46832) )
  {
    v10 = (signed __int64 *)(a1 + 47024);
    ExAcquirePushLockSharedEx(a1 + 47024, 0LL);
    v11 = *(_QWORD *)(a1 + 47016);
    v12 = v11 == 0;
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10);
    sub_1402AFC00((ULONG_PTR)v10);
    if ( v11 )
    {
      if ( (int)ntoskrnl_21(a1, &v32) < 0 || !(_QWORD)v33 )
        goto LABEL_13;
      v13 = 900000;
      if ( *(_DWORD *)(a1 + 47032) < 0xDBBA0u )
        v13 = *(_DWORD *)(a1 + 47032);
      v14 = v33 + v13;
      if ( __OFSUB__(v14, (_QWORD)v33) )
        goto LABEL_13;
      v15 = MEMORY[0xFFFFF78000000320];
      if ( v14 <= v15 * KeQueryTimeIncrement() / 10000 )
        goto LABEL_13;
    }
    if ( v12 )
    {
LABEL_13:
      memset(v35, 0, sizeof(v35));
      if ( !*(_QWORD *)a1 && *(_QWORD *)(a1 + 46832) )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
        v16 = *(_QWORD *)(a1 + 47016);
        if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v10);
        sub_1402AFC00((ULONG_PTR)v10);
        if ( v16 )
        {
          v17 = *(_QWORD *)(a1 + 46832);
          v18 = *(unsigned int *)(a1 + 46824);
          HIDWORD(v26) = 0;
          *(_DWORD *)((char *)&v28 + 9) = 0;
          *(_WORD *)((char *)&v28 + 13) = 0;
          HIBYTE(v28) = 0;
          if ( v17 && (!(_DWORD)v18 || a1 != -24) )
          {
            v19 = 4;
            *(_QWORD *)&v26 = 0LL;
            DWORD2(v26) = 4;
            v27 = 0uLL;
            *(_QWORD *)&v28 = 0LL;
            BYTE8(v28) = 1;
            if ( (unsigned int)sub_140639D84(v17 + 20, v18, &v26)
              || (_DWORD)v20
              && ((unsigned __int64)(16 * v20) > 0xFFFFFFFF || (unsigned int)sub_140639D84(v21, v20, &v26)) )
            {
              *(_QWORD *)&v26 = 0LL;
              DWORD2(v26) = 4;
            }
            v29 = v26;
            v30 = v27;
            v31 = v28;
            if ( (int)ntoskrnl_21(a1, v35) >= 0 )
            {
              if ( *(_QWORD *)&v35[0] != (_QWORD)v29 )
              {
                DWORD2(v29) = 4;
                v19 = 6;
              }
              v22 = MEMORY[0xFFFFF78000000320];
              *(_QWORD *)&v30 = v22 * KeQueryTimeIncrement() / 10000;
              ntoskrnl_20(a1, (__int64)&v29, v19, 0);
            }
          }
        }
        else
        {
          sub_140639FC4(a1, 5);
        }
      }
    }
    v8 = v38;
  }
  if ( *(_QWORD *)a1 && sub_1402F5718() / 0x989680uLL > 0x2A30 )
  {
    sub_140639FC4(a1, 2);
    memset(v36, 0, 48);
    ntoskrnl_20(a1, (__int64)v36, 32, 0);
  }
  sub_140639C30(a1, &v37);
  if ( v37 )
  {
    v24 = a5;
    *a6 = 1;
    return (unsigned int)sub_1409F992C(v8, a3, a4, v24, 0);
  }
  else
  {
    v23 = -1073741772;
    *a6 = 0;
  }
  return v23;
}
