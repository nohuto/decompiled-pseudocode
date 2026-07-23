/*
 * XREFs of sub_140360AC0 @ 0x140360AC0
 * Callers:
 *     sub_1403884CC @ 0x1403884CC (sub_1403884CC.c)
 *     sub_14062EED8 @ 0x14062EED8 (sub_14062EED8.c)
 *     sub_1406AE644 @ 0x1406AE644 (sub_1406AE644.c)
 *     sub_1406AEA14 @ 0x1406AEA14 (sub_1406AEA14.c)
 *     sub_140739F40 @ 0x140739F40 (sub_140739F40.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_1407DD3D0 @ 0x1407DD3D0 (sub_1407DD3D0.c)
 *     sub_1407E0408 @ 0x1407E0408 (sub_1407E0408.c)
 *     sub_1407E0768 @ 0x1407E0768 (sub_1407E0768.c)
 *     sub_140987430 @ 0x140987430 (sub_140987430.c)
 * Callees:
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_1403606EC @ 0x1403606EC (sub_1403606EC.c)
 *     sub_140360C70 @ 0x140360C70 (sub_140360C70.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140360AC0(ULONG_PTR **BugCheckParameter2, _OWORD *a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  int v8; // edx
  char v9; // r14
  ULONG_PTR *v10; // rdi
  _OWORD v12[11]; // [rsp+50h] [rbp-E8h] BYREF

  memset(v12, 0, sizeof(v12));
  *a5 = 0;
  if ( a3 < 0xB0 )
  {
    *a5 = 176;
    return 3221225476LL;
  }
  v8 = 0;
  v9 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (ULONG_PTR **)-1LL )
    {
      v10 = *(ULONG_PTR **)(qword_140C51F48
                          + 8LL * *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1838LL));
    }
    else
    {
      if ( BugCheckParameter2 == (ULONG_PTR **)-2LL )
      {
        v10 = 0LL;
        goto LABEL_15;
      }
      v10 = *BugCheckParameter2;
      v8 = 1;
    }
  }
  else
  {
    v10 = &StartContext;
  }
  if ( !v10 || *((_DWORD *)v10 + 2) != 305535296 )
    goto LABEL_15;
  if ( !v8 )
    goto LABEL_8;
  if ( (ULONG_PTR **)v10[22] != BugCheckParameter2 )
LABEL_15:
    KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v10, 0LL);
  if ( !sub_1403606EC((__int64)BugCheckParameter2) )
    return 3221226656LL;
  v9 = 1;
LABEL_8:
  sub_140360C70(v10, v12);
  *a2 = v12[0];
  a2[1] = v12[1];
  a2[2] = v12[2];
  a2[3] = v12[3];
  a2[4] = v12[4];
  a2[5] = v12[5];
  a2[6] = v12[6];
  a2[7] = v12[7];
  a2[8] = v12[8];
  a2[9] = v12[9];
  a2[10] = v12[10];
  *a5 = 176;
  if ( v9 )
    sub_1403606C4(v10[22]);
  return 0LL;
}
