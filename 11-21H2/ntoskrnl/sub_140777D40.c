/*
 * XREFs of sub_140777D40 @ 0x140777D40
 * Callers:
 *     sub_1407735A0 @ 0x1407735A0 (sub_1407735A0.c)
 *     sub_1407768EC @ 0x1407768EC (sub_1407768EC.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1407762A0 @ 0x1407762A0 (sub_1407762A0.c)
 *     sub_1407762E4 @ 0x1407762E4 (sub_1407762E4.c)
 *     sub_1407780BC @ 0x1407780BC (sub_1407780BC.c)
 *     sub_140778100 @ 0x140778100 (sub_140778100.c)
 *     sub_140778370 @ 0x140778370 (sub_140778370.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140777D40(KSPIN_LOCK a1, __int64 a2, int a3, int *a4, _DWORD *a5)
{
  int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // r15
  int v10; // ebx
  struct _ERESOURCE *v11; // rax
  struct _KTHREAD *v12; // rax
  struct _KTHREAD *v13; // rax
  _QWORD *v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rcx
  struct _KTHREAD *v18; // rax
  _QWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+40h] [rbp-48h] BYREF
  int v21; // [rsp+48h] [rbp-40h]
  int v22; // [rsp+4Ch] [rbp-3Ch]
  PVOID P; // [rsp+50h] [rbp-38h]
  __int64 v24; // [rsp+58h] [rbp-30h]
  PVOID v25; // [rsp+98h] [rbp+10h] BYREF
  int *v26; // [rsp+A8h] [rbp+20h]

  v26 = a4;
  v7 = 0;
  v19[0] = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v20 = a2;
  v21 = a3;
  v22 = 16;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v9 = a1 + 64;
  v19[1] = a1 + 64;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
  v10 = *(_DWORD *)(a1 + 216);
  ExReleasePushLockEx(v9, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( (v10 & 0x20) == 0 )
  {
    v11 = sub_1407762A0(a1);
    v7 = sub_1407762E4(v11, a1);
  }
  if ( v7 < 0 )
  {
LABEL_30:
    *a4 = 0;
    *a5 = 0;
  }
  else
  {
    v7 = MesEncodeIncrementalHandleCreate(&v20, sub_1406CA5B0, sub_1406C9120, v19);
    if ( v7 >= 0 )
    {
      v7 = MesIncrementalHandleReset(v19[0], &v20, 0LL, 0LL, 0LL, *(_DWORD *)(a1 + 216) & 2);
      if ( v7 >= 0 )
      {
        *a4 = v22;
        *a5 = 0;
        v12 = KeGetCurrentThread();
        --*((_WORD *)v12 + 242);
        ExAcquirePushLockExclusiveEx(v9, 0LL);
        v25 = *(PVOID *)(a1 + 184);
        *(_QWORD *)(a1 + 184) = 0LL;
        ExReleasePushLockEx(v9, 0LL);
        sub_1402F9540((__int64)KeGetCurrentThread());
        do
        {
          if ( v25 )
          {
            NdrMesTypeEncode3(v19[0], "TP 3\a", &off_1400023D8, &off_140C02FB0, 1, &v25);
            if ( BYTE5(v24) )
            {
              v7 = -1073741819;
              goto LABEL_30;
            }
            if ( BYTE4(v24) )
            {
              v18 = KeGetCurrentThread();
              --*((_WORD *)v18 + 242);
              ExAcquirePushLockExclusiveEx(v9, 0LL);
              *(_QWORD *)(a1 + 184) = v25;
              v25 = 0LL;
              ExReleasePushLockEx(v9, 0LL);
              sub_1402F9540((__int64)KeGetCurrentThread());
              *a5 = v24 + 16;
              break;
            }
            *a4 = v22;
            sub_140778370(v25);
            v25 = 0LL;
          }
          v13 = KeGetCurrentThread();
          --*((_WORD *)v13 + 242);
          ExAcquirePushLockExclusiveEx(v9, 0LL);
          v14 = (_QWORD *)(a1 + 192);
          v15 = *(__int64 **)(a1 + 192);
          if ( v15 == (__int64 *)(a1 + 192) )
          {
            ExReleasePushLockEx(v9, 0LL);
            sub_1402F9540((__int64)KeGetCurrentThread());
            break;
          }
          v16 = *v15;
          if ( (_QWORD *)v15[1] != v14 || *(__int64 **)(v16 + 8) != v15 )
            __fastfail(3u);
          *v14 = v16;
          *(_QWORD *)(v16 + 8) = v14;
          --*(_DWORD *)(a1 + 208);
          ExReleasePushLockEx(v9, 0LL);
          sub_1402F9540((__int64)KeGetCurrentThread());
          v7 = sub_140778100(*(_QWORD *)(a1 + 24), a1 + 32, v15, &v25);
          sub_1407780BC(v15);
          if ( v7 == -1073741772 )
            v7 = 0;
        }
        while ( v7 >= 0 );
      }
    }
    if ( v7 < 0 )
      goto LABEL_30;
  }
  if ( v25 )
    sub_140778370(v25);
  if ( P )
    ExFreePoolWithTag(P, 0x58706E50u);
  if ( v19[0] )
    MesHandleFree();
  return (unsigned int)v7;
}
