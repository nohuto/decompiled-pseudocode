/*
 * XREFs of sub_1402B4EC0 @ 0x1402B4EC0
 * Callers:
 *     sub_140207F60 @ 0x140207F60 (sub_140207F60.c)
 *     sub_14020E1DC @ 0x14020E1DC (sub_14020E1DC.c)
 *     sub_14020E6EC @ 0x14020E6EC (sub_14020E6EC.c)
 *     sub_14020E9E8 @ 0x14020E9E8 (sub_14020E9E8.c)
 *     sub_1402112F8 @ 0x1402112F8 (sub_1402112F8.c)
 *     sub_14022B5D8 @ 0x14022B5D8 (sub_14022B5D8.c)
 *     sub_140255110 @ 0x140255110 (sub_140255110.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_140294824 @ 0x140294824 (sub_140294824.c)
 *     ntoskrnl_6 @ 0x14029B310 (ntoskrnl_6.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     sub_1402EFA40 @ 0x1402EFA40 (sub_1402EFA40.c)
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_14039C4BC @ 0x14039C4BC (sub_14039C4BC.c)
 *     sub_1403D2D98 @ 0x1403D2D98 (sub_1403D2D98.c)
 *     sub_1403D2F9C @ 0x1403D2F9C (sub_1403D2F9C.c)
 *     sub_140428BA0 @ 0x140428BA0 (sub_140428BA0.c)
 *     sub_14056B410 @ 0x14056B410 (sub_14056B410.c)
 *     sub_14056B9FC @ 0x14056B9FC (sub_14056B9FC.c)
 *     sub_140572774 @ 0x140572774 (sub_140572774.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 *     sub_140576AA4 @ 0x140576AA4 (sub_140576AA4.c)
 * Callees:
 *     sub_140280754 @ 0x140280754 (sub_140280754.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140294824 @ 0x140294824 (sub_140294824.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     sub_14033E1B0 @ 0x14033E1B0 (sub_14033E1B0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     sub_14034F230 @ 0x14034F230 (sub_14034F230.c)
 *     sub_140359140 @ 0x140359140 (sub_140359140.c)
 *     sub_14035A0F0 @ 0x14035A0F0 (sub_14035A0F0.c)
 *     sub_14035A160 @ 0x14035A160 (sub_14035A160.c)
 *     sub_14035A264 @ 0x14035A264 (sub_14035A264.c)
 *     sub_14035A364 @ 0x14035A364 (sub_14035A364.c)
 *     sub_14035A424 @ 0x14035A424 (sub_14035A424.c)
 *     sub_14035A6C8 @ 0x14035A6C8 (sub_14035A6C8.c)
 *     sub_14035A718 @ 0x14035A718 (sub_14035A718.c)
 *     sub_14035A7F8 @ 0x14035A7F8 (sub_14035A7F8.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1402B4EC0(__int64 a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // r12
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // al
  char v7; // r15
  char *v8; // rdx
  unsigned int v9; // esi
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  _QWORD *v18; // rbx
  __int64 v19; // rax
  char v20; // r9
  char v21; // al
  int v22; // r10d
  char v23; // r13
  char v24; // al
  char v25; // r9
  char v26; // cl
  __int64 v27; // r14
  __int64 v29; // rdx
  _QWORD *v30; // [rsp+30h] [rbp-19h] BYREF
  __int64 v31; // [rsp+38h] [rbp-11h] BYREF
  char *v32; // [rsp+40h] [rbp-9h]
  struct _KPRCB *v33; // [rsp+48h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp+7h] BYREF
  int v35; // [rsp+B0h] [rbp+67h] BYREF
  char v36; // [rsp+C0h] [rbp+77h]
  int v37; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (*(unsigned __int8 *)(a1 + 792) | *(unsigned __int8 *)(a1 + 870)) != 0x3F )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = *(_BYTE *)(a1 + 792);
    v6 = *(_BYTE *)(a1 + 870);
    v7 = 0;
    v33 = CurrentPrcb;
    v30 = 0LL;
    v8 = (char *)CurrentPrcb + 35696;
    v32 = (char *)CurrentPrcb + 35696;
    v31 = 0LL;
    v35 = 0;
    if ( (v5 | v6) != 63 )
    {
      v9 = (*(unsigned __int8 *)(a1 + 792) | *(unsigned __int8 *)(a1 + 870)) ^ 0x3F;
      v10 = !_BitScanForward((unsigned int *)&v11, v9);
      if ( !v10 )
      {
        v12 = (__int64)CurrentPrcb + 35696;
        while ( 1 )
        {
          v9 &= v9 - 1;
          v13 = 96 * v11;
          v14 = v13 + a1 + 1696;
          v15 = *(_QWORD *)v14;
          if ( !*(_QWORD *)v14 || (v15 & 2) != 0 || (v15 & 1) != 0 )
            goto LABEL_15;
          if ( v15 < 0 )
          {
            if ( (*(_BYTE *)(v14 + 19) & 1) != 0 )
              goto LABEL_15;
            if ( *(_BYTE *)(v14 + 17) )
            {
              v26 = *(_BYTE *)(v14 - 96LL * *(unsigned __int8 *)(v14 + 16) - 1501);
              if ( v26 > 30 )
                v26 = 30;
              if ( v26 == *(_BYTE *)(v14 + 48) )
                goto LABEL_15;
            }
            else if ( (unsigned __int8)sub_14035A7F8(v13 + a1 + 1696) == *(_BYTE *)(v14 + 48) )
            {
              goto LABEL_15;
            }
          }
          v35 = 0;
          v37 = 0;
          memset(&LockHandle, 0, sizeof(LockHandle));
          v16 = sub_14034F230(v14, 1LL, &LockHandle);
          v17 = v16;
          if ( v16 )
          {
            if ( *(_BYTE *)(v14 + 17) )
            {
              if ( v14 != v16 )
                sub_14035A718(v14, v16);
              v19 = *(_QWORD *)(v17 + 56);
              if ( v19 )
                v20 = *(_BYTE *)(v19 + 24);
              else
                v20 = 30;
              LOBYTE(v35) = v20;
              if ( !*(_BYTE *)(v17 + 17) )
              {
                v24 = sub_14035A7F8(v17);
                if ( v24 < v25 )
                  LOBYTE(v35) = v24;
              }
              sub_14033E1B0(v14, v17);
              v21 = sub_14035A6C8(v14);
              v36 = v21;
              if ( (char)v35 < v21 )
              {
                if ( v22 )
                {
LABEL_38:
                  sub_14035A160(v17, v22, (unsigned int)&v30, (unsigned int)&v31, v12);
                  v21 = v36;
                }
                sub_14035A264(v17, (unsigned __int8)v21, (unsigned int)&v30, (unsigned int)&v31, v12);
LABEL_40:
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                v23 = v37;
                if ( v37 )
                {
                  v27 = v14 - 96LL * *(unsigned __int8 *)(v14 + 16) - 1696;
                  if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v27, 1953261124LL) )
                  {
                    if ( (v23 & 1) != 0 )
                      sub_140280754((KSPIN_LOCK *)v27, 2, 0x80000000);
                    if ( (v23 & 2) != 0 && *(_DWORD *)(v27 + 1448) && sub_1403614FC(qword_140C474D8) )
                    {
                      sub_14042A5E0(v27, v29);
                      sub_1402AD030((struct _EX_RUNDOWN_REF *)(qword_140C474D8 + 64));
                    }
                    ObDereferenceObjectDeferDeleteWithTag((PVOID)v27, 0x746C6644u);
                  }
                }
                goto LABEL_15;
              }
              if ( v22 )
                goto LABEL_38;
            }
            else
            {
              if ( v14 != v16 )
                sub_14035A364(v14, v16);
              sub_14035A0F0(v17, &v35);
              if ( v35 )
              {
                if ( (unsigned int)sub_14035A424(
                                     v14,
                                     (unsigned int)&v35,
                                     (unsigned int)&v30,
                                     (unsigned int)&v31,
                                     v12,
                                     (__int64)&v37)
                  && v14 != v17 )
                {
                  sub_14035A364(v14, v17);
                }
                goto LABEL_40;
              }
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          }
LABEL_15:
          v10 = !_BitScanForward((unsigned int *)&v11, v9);
          if ( v10 )
          {
            CurrentPrcb = v33;
            v8 = v32;
            break;
          }
        }
      }
    }
    sub_140359140(&v31, v8, &v30);
    v18 = v30;
    if ( v30 )
    {
      v30 = (_QWORD *)*v30;
      do
      {
        sub_1403405E0(CurrentPrcb, v18 - 27, &v30);
        v18 = v30;
        ++v7;
        if ( v30 )
          v30 = (_QWORD *)*v30;
        if ( (v7 & 0xF) == 0 )
          sub_140340300((char *)CurrentPrcb + 12760);
      }
      while ( v18 );
    }
    sub_140340300((char *)CurrentPrcb + 12760);
    if ( a2 )
      sub_140294824((__int64)CurrentPrcb, 2u);
  }
}
