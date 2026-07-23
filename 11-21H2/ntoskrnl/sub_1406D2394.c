/*
 * XREFs of sub_1406D2394 @ 0x1406D2394
 * Callers:
 *     EtwRegisterClassicProvider @ 0x1406D2300 (EtwRegisterClassicProvider.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406D2684 @ 0x1406D2684 (sub_1406D2684.c)
 *     sub_14079488C @ 0x14079488C (sub_14079488C.c)
 *     sub_140796390 @ 0x140796390 (sub_140796390.c)
 *     sub_140796798 @ 0x140796798 (sub_140796798.c)
 *     sub_140796B04 @ 0x140796B04 (sub_140796B04.c)
 *     sub_140796C40 @ 0x140796C40 (sub_140796C40.c)
 *     sub_14079809C @ 0x14079809C (sub_14079809C.c)
 *     sub_140882EB0 @ 0x140882EB0 (sub_140882EB0.c)
 *     sub_1409F4FB4 @ 0x1409F4FB4 (sub_1409F4FB4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406D2394(int a1, _QWORD *a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int128 **a7)
{
  bool v10; // zf
  __int64 v11; // rax
  unsigned int v12; // edi
  _QWORD *v13; // rsi
  struct _KTHREAD *v14; // rax
  _QWORD *v15; // rdi
  int v16; // edx
  _DWORD *v17; // rbx
  int v18; // edx
  int v19; // r8d
  __int128 *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // rax
  unsigned __int8 v28; // cl
  __int16 v29; // ax
  __int64 v30; // rdx
  int v31; // r8d
  void *Pool2; // r14
  unsigned int v33; // eax
  unsigned int v34; // r12d
  struct _KTHREAD *CurrentThread; // rax
  PVOID P; // [rsp+40h] [rbp-51h] BYREF
  __int128 *v37; // [rsp+48h] [rbp-49h] BYREF
  _QWORD *v38; // [rsp+50h] [rbp-41h]
  _OWORD v39[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v40; // [rsp+78h] [rbp-19h]
  int v41; // [rsp+80h] [rbp-11h]
  int v42; // [rsp+84h] [rbp-Dh]
  __int128 v43; // [rsp+88h] [rbp-9h] BYREF

  v40 = a5;
  P = 0LL;
  *a7 = 0LL;
  v11 = *a2 - 0x4994547854849625LL;
  v10 = *a2 == 0x4994547854849625LL;
  v37 = 0LL;
  memset(v39, 0, sizeof(v39));
  if ( v10 )
    v11 = a2[1] - 0xDC328033B3EBAA5LL;
  if ( !v11 )
    return 3221225506LL;
  if ( !a4 && a5 || a3 != 3 && (a3 != 2 || !a4) )
    return 3221225485LL;
  v12 = sub_140796798(a1, (_DWORD)a2, 0, 0, (__int64)&P);
  if ( v12 )
  {
    v17 = P;
  }
  else
  {
    v13 = P;
    if ( *((_QWORD *)P + 50) )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx(v13[50] + 408LL, 0LL);
      *(_QWORD *)(v13[50] + 416LL) = KeGetCurrentThread();
    }
    v14 = KeGetCurrentThread();
    --*((_WORD *)v14 + 242);
    v15 = P;
    v38 = P;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)P + 408, 0LL);
    v16 = a3;
    v17 = P;
    v15[52] = KeGetCurrentThread();
    LODWORD(P) = sub_1406D2684((_DWORD)v17, v16, a4, a5, (__int64)&v37);
    v12 = (unsigned int)P;
    if ( (int)P >= 0 )
    {
      v20 = v37;
      *((_QWORD *)v37 + 6) = a6;
      *a7 = v20;
      if ( v17[24] )
      {
        LOBYTE(v18) = (*((_BYTE *)v20 + 98) & 8) != 0;
        sub_14079488C((_DWORD)v17, v18, 0, 0, (__int64)v20 + 100);
      }
      v21 = v13[50];
      if ( v21 && *(_DWORD *)(v21 + 96) )
      {
        LOBYTE(v18) = (*((_BYTE *)v20 + 98) & 8) != 0;
        LOBYTE(v19) = 1;
        sub_14079488C(v21, v18, v19, 0, (__int64)v20 + 102);
      }
      sub_14079809C(v20, v39);
      sub_140796C40(v20);
      if ( a4 )
      {
        if ( (*((_BYTE *)v20 + 98) & 8) != 0 )
        {
          if ( (*((_BYTE *)v17 + 91) & 1) != 0 )
          {
            v28 = *((_BYTE *)v17 + 90);
            v29 = *((_WORD *)v17 + 44);
            v30 = (unsigned int)v17[20];
            v31 = v17[21];
            v42 = 0;
            LOWORD(v40) = v29;
            WORD1(v40) = v28;
            HIDWORD(v40) = v30;
            LOBYTE(v30) = 1;
            v41 = v31;
            sub_14042A5E0(v17 + 10, v30);
          }
        }
        else if ( LODWORD(v39[0]) )
        {
          Pool2 = 0LL;
          v37 = 0LL;
          v43 = 0LL;
          LOBYTE(v22) = *((_BYTE *)v20 + 100);
          v33 = sub_140796390(v17, v22);
          v34 = v33;
          if ( v33 )
          {
            Pool2 = (void *)ExAllocatePool2(256LL, v33, 1182233669LL);
            if ( Pool2 )
            {
              *(_QWORD *)&v43 = Pool2;
              *((_QWORD *)&v43 + 1) = v34 | 0x8000000000000000uLL;
              v37 = &v43;
              sub_1409F4FB4(Pool2);
            }
          }
          sub_14042A5E0(&xmmword_140010DE8, 1LL);
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0);
        }
      }
      if ( EtwEventEnabled(qword_140C15FA8, &stru_140010DB8) )
        sub_140882EB0(v23, &stru_140010DB8, v24, 1LL, 0LL, a2);
      v12 = (unsigned int)P;
    }
    v25 = v38;
    v38[52] = 0LL;
    ExReleasePushLockEx((ULONG_PTR)(v25 + 51), 0LL);
    KeLeaveCriticalRegion();
    v26 = v13[50];
    if ( v26 )
    {
      *(_QWORD *)(v26 + 416) = 0LL;
      ExReleasePushLockEx(v13[50] + 408LL, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  if ( v17 )
    sub_140796B04(v17);
  return v12;
}
