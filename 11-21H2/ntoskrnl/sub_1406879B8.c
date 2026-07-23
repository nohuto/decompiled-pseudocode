/*
 * XREFs of sub_1406879B8 @ 0x1406879B8
 * Callers:
 *     PsAssignProcessToJobObject @ 0x140688050 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140682038 @ 0x140682038 (sub_140682038.c)
 *     sub_1406820CC @ 0x1406820CC (sub_1406820CC.c)
 *     sub_14068214C @ 0x14068214C (sub_14068214C.c)
 *     sub_1406821D4 @ 0x1406821D4 (sub_1406821D4.c)
 *     sub_1406822EC @ 0x1406822EC (sub_1406822EC.c)
 *     sub_140682838 @ 0x140682838 (sub_140682838.c)
 *     sub_140682CF0 @ 0x140682CF0 (sub_140682CF0.c)
 *     sub_140682D58 @ 0x140682D58 (sub_140682D58.c)
 *     sub_140682D84 @ 0x140682D84 (sub_140682D84.c)
 *     sub_140682EA4 @ 0x140682EA4 (sub_140682EA4.c)
 *     sub_140683088 @ 0x140683088 (sub_140683088.c)
 *     sub_140684158 @ 0x140684158 (sub_140684158.c)
 *     sub_140687754 @ 0x140687754 (sub_140687754.c)
 *     sub_140687E80 @ 0x140687E80 (sub_140687E80.c)
 *     sub_140687EEC @ 0x140687EEC (sub_140687EEC.c)
 *     sub_140687FE0 @ 0x140687FE0 (sub_140687FE0.c)
 *     sub_1406CA970 @ 0x1406CA970 (sub_1406CA970.c)
 *     sub_1406D4C5C @ 0x1406D4C5C (sub_1406D4C5C.c)
 *     sub_1406E6570 @ 0x1406E6570 (sub_1406E6570.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFED4 @ 0x1406FFED4 (sub_1406FFED4.c)
 *     sub_140700280 @ 0x140700280 (sub_140700280.c)
 *     sub_14070BA00 @ 0x14070BA00 (sub_14070BA00.c)
 *     sub_1409B0334 @ 0x1409B0334 (sub_1409B0334.c)
 *     DnsPrint_RpcStatsBuffer_0 @ 0x1409B05AC (DnsPrint_RpcStatsBuffer_0.c)
 */

__int64 __fastcall sub_1406879B8(PVOID Object, __int64 BugCheckParameter1, __int64 a3, int a4)
{
  unsigned int v4; // r14d
  char v5; // bl
  __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // r12
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // r12
  int v15; // edi
  __int64 v16; // rdi
  char v17; // bl
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r9
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // r13d
  unsigned int v29; // eax
  PVOID v30; // rax
  _BYTE v31[4]; // [rsp+40h] [rbp-59h] BYREF
  int v32; // [rsp+44h] [rbp-55h] BYREF
  __int64 v33; // [rsp+48h] [rbp-51h]
  struct _KTHREAD *v34; // [rsp+50h] [rbp-49h]
  unsigned int v35; // [rsp+58h] [rbp-41h] BYREF
  __int128 v36; // [rsp+60h] [rbp-39h] BYREF
  __int64 v37; // [rsp+70h] [rbp-29h]
  __int128 v38; // [rsp+78h] [rbp-21h] BYREF
  __int64 v39; // [rsp+88h] [rbp-11h]
  int v40[4]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v41; // [rsp+A0h] [rbp+7h]
  __int64 v42; // [rsp+B0h] [rbp+17h]

  v31[0] = 0;
  v37 = 0LL;
  v4 = 0;
  v39 = 0LL;
  v42 = 0LL;
  v36 = 0LL;
  v5 = 0;
  v8 = BugCheckParameter1;
  v38 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v34 = CurrentThread;
  v32 = 0;
  *(_OWORD *)v40 = 0LL;
  v41 = 0LL;
  if ( a4 == 5 )
  {
    a3 = *(_QWORD *)(BugCheckParameter1 + 1296);
    v8 = sub_1406CA970(Object, CurrentThread, &v38, 0LL);
    ObfReferenceObjectWithTag((PVOID)v8, 0x624A7350u);
    v5 = 1;
    DnsPrint_RpcStatsBuffer_0(Object, CurrentThread, &v38, v8);
    v4 = v32;
  }
  if ( !v8 )
  {
LABEL_6:
    sub_140687FE0((_DWORD)Object, v8, a3, a4, (__int64)v40);
    v5 |= 6u;
    sub_140682D58((__int64)CurrentThread);
    sub_1406820CC((unsigned int *)v40, v8, (__int64)CurrentThread, 1);
    if ( a4 == 5 )
    {
      if ( (unsigned __int8)sub_1409B0334(Object) )
      {
        v30 = *(PVOID *)(v8 + 1296);
        v32 = 5;
        if ( v30 == Object && (*(_DWORD *)(v8 + 2172) & 0x1000) != 0 )
        {
          v4 = v32;
          goto LABEL_10;
        }
        v4 = v32;
        v15 = -1073741790;
LABEL_59:
        v27 = -1073741558;
        goto LABEL_60;
      }
    }
    else
    {
      v11 = sub_140687EEC(Object, v8, a3, &v32);
      v4 = v32;
      if ( v11 >= 0 )
      {
        if ( v32 == a4 )
        {
          if ( v32 != 2 )
          {
LABEL_10:
            if ( v8 && v4 != 5 )
            {
              a3 = *(_QWORD *)(v8 + 1296);
              v4 = v32;
            }
            if ( v4 == 4
              && (*((_DWORD *)Object + 378) & 0x10) != 0
              && ((*(_DWORD *)(a3 + 1512) & 0x10) != 0 || !(unsigned __int8)sub_1406E6570(a3))
              || !(unsigned __int8)sub_140687E80(Object, a3, v8, v4)
              || !sub_14068214C((__int64)Object, a3, v8, v4) )
            {
              goto LABEL_93;
            }
            if ( v4 == 5 )
            {
              if ( (*((_DWORD *)Object + 260) & 1) != 0 )
                goto LABEL_93;
            }
            else if ( ((v4 - 4) & 0xFFFFFFFC) != 0 || v4 == 6 )
            {
LABEL_20:
              if ( ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 )
              {
                v12 = 0;
                while ( (unsigned int)(v12 - 1) <= 1
                     || !_bittest((const signed __int32 *)Object + 378, 0x19u)
                     || !_bittest((const signed __int32 *)(a3 + 1512), 0x19u) )
                {
                  if ( ++v12 >= 3 )
                    goto LABEL_25;
                }
                goto LABEL_93;
              }
LABEL_25:
              if ( ((v4 - 4) & 0xFFFFFFFC) != 0
                || v4 == 6
                || !*(_DWORD *)(a3 + 1540) && !(unsigned __int8)sub_1406D4C5C(a3)
                || !*((_DWORD *)Object + 385) && !(unsigned __int8)sub_1406D4C5C((__int64)Object) )
              {
                switch ( v4 )
                {
                  case 1u:
                  case 3u:
                    v13 = a3;
                    break;
                  case 4u:
                    v13 = 0LL;
                    break;
                  case 5u:
                    v14 = a3;
                    v13 = 0LL;
LABEL_32:
                    v33 = v13;
                    if ( v14 )
                    {
                      v15 = sub_1406821D4(v14, v13, v8, 0);
                      if ( v15 < 0 )
                      {
LABEL_106:
                        CurrentThread = v34;
                        goto LABEL_59;
                      }
                    }
LABEL_34:
                    v15 = sub_1406822EC((char *)Object, v8, a3, v4);
                    if ( v15 >= 0 )
                    {
                      if ( v8 )
                      {
                        if ( (*((_DWORD *)Object + 378) & 0x1000) != 0 )
                        {
                          v16 = 0LL;
                          do
                          {
                            if ( (*(_DWORD *)(v8 + 4LL * (int)v16 + 2472) & 0x7FFFFFFF) != 0 )
                              sub_140700280(Object, 0, 0LL, 6451018LL);
                            _interlockedbittestandset((volatile signed __int32 *)(v8 + 4 * v16 + 2472), 0x1Fu);
                            v16 = (unsigned int)(v16 + 1);
                          }
                          while ( (unsigned int)v16 < 7 );
                          if ( (*(_DWORD *)(v8 + 2508) & 0x7FFFFFFF) != 0 )
                            sub_140700280(Object, 4, 0LL, 6451018LL);
                          _interlockedbittestandset((volatile signed __int32 *)(v8 + 2508), 0x1Fu);
                        }
                        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                          ExfTryToWakePushLock(v8 + 1080);
                        sub_1402AFC00(v8 + 1080);
                        v4 = v32;
                        v17 = v5 | 8;
                        v18 = v33;
                        if ( v32 == 4 )
                          v18 = a3;
                        sub_140682838(v14, v18, v8, 0);
                        sub_140683088((__int64)Object, a3, v8);
                        CurrentThread = v34;
                        sub_140682038(v40, 0LL, (__int64)v34);
                        v5 = v17 & 0xFB;
                        if ( (*((_DWORD *)Object + 378) & 0x1000000) == 0 )
                        {
                          sub_14070BA00(v8, v31, 0LL);
                          if ( v31[0] )
                            _InterlockedOr((volatile signed __int32 *)Object + 378, 0x1000000u);
                          else
                            _InterlockedOr((volatile signed __int32 *)Object + 378, 0x1800000u);
                          v4 = v32;
                        }
                        v15 = sub_140682EA4(v8, v19, v20, v21);
                        if ( v15 >= 0 )
                        {
                          v23 = 0;
                          if ( v4 == 5 )
                            v23 = 4;
                          if ( (unsigned int)sub_140682D84(v8, a3, v23, v22) )
                          {
                            sub_140682CF0((__int64)CurrentThread);
                            v5 &= ~2u;
                            --*((_WORD *)CurrentThread + 242);
                            sub_140687754((char *)v8, v24, v25, v26);
                            sub_1402AC800((__int64)CurrentThread);
                            if ( !*((_DWORD *)Object + 136) )
                              goto LABEL_57;
                            v29 = *((_DWORD *)Object + 144);
                            DWORD2(v36) = 1;
                            *(_QWORD *)&v36 = Object;
                            v37 = v8;
                            v35 = v29;
                            if ( v29 > 0xFFFFFFFD
                              || (sub_1406FFED4(Object, CurrentThread),
                                  v15 = sub_1406F83A0(6LL, &v36, 1LL, &v35),
                                  sub_1406FFE90(Object, CurrentThread),
                                  v15 >= 0) )
                            {
LABEL_57:
                              if ( v4 == 5 )
                              {
                                v15 = -1073741267;
                                v5 |= 0x20u;
                              }
                            }
                          }
                          else
                          {
                            v15 = -1073741756;
                          }
                        }
                        goto LABEL_59;
                      }
                      v15 = 0;
                    }
                    goto LABEL_106;
                  default:
                    v14 = 0LL;
                    v33 = 0LL;
                    goto LABEL_34;
                }
                v14 = (__int64)Object;
                goto LABEL_32;
              }
LABEL_93:
              v15 = -1073741637;
              goto LABEL_59;
            }
            if ( (unsigned int)*(unsigned __int8 *)(a3 + 1066) + 1 > 0x64 )
              goto LABEL_93;
            goto LABEL_20;
          }
          v15 = 0;
        }
        else
        {
          v15 = -1073741267;
        }
        goto LABEL_59;
      }
    }
    v15 = -1073741790;
    goto LABEL_59;
  }
  if ( sub_140347810((struct _EX_RUNDOWN_REF *)(v8 + 1112)) )
  {
    v5 |= 0x10u;
    goto LABEL_6;
  }
  v27 = -1073741558;
  v15 = -1073741558;
LABEL_60:
  if ( (v5 & 0x10) != 0 )
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(v8 + 1112));
  if ( (v5 & 0x20) == 0 && v15 < 0 && (v5 & 8) != 0 )
  {
    if ( v4 == 5 )
      KeBugCheckEx(0xEFu, v8, 0LL, (ULONG_PTR)Object, v15);
    if ( v15 != -1073741558 )
      v27 = -1073741756;
    sub_140684158(v8, 0LL, 0xAu, v27);
  }
  if ( (v5 & 4) != 0 )
    sub_140682038(v40, v8, (__int64)CurrentThread);
  if ( (v5 & 2) != 0 )
    sub_140682CF0((__int64)CurrentThread);
  if ( (v5 & 1) != 0 )
    ObfDereferenceObjectWithTag((PVOID)v8, 0x624A7350u);
  return (unsigned int)v15;
}
