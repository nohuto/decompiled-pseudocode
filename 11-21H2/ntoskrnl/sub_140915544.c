/*
 * XREFs of sub_140915544 @ 0x140915544
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 *     sub_14091CBB0 @ 0x14091CBB0 (sub_14091CBB0.c)
 *     sub_1409239EC @ 0x1409239EC (sub_1409239EC.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14069FA30 @ 0x14069FA30 (sub_14069FA30.c)
 *     sub_14069FB00 @ 0x14069FB00 (sub_14069FB00.c)
 *     sub_14071BBD8 @ 0x14071BBD8 (sub_14071BBD8.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 *     sub_1407C09E0 @ 0x1407C09E0 (sub_1407C09E0.c)
 *     sub_14091C9E8 @ 0x14091C9E8 (sub_14091C9E8.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

char __fastcall sub_140915544(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r12
  unsigned int v6; // r13d
  char v8; // di
  unsigned int v9; // ebp
  __int64 v10; // r14
  ULONG_PTR v11; // rbx
  _QWORD *v12; // r12
  __int64 *v13; // r14
  __int64 v14; // rax
  ULONG_PTR v15; // rbx
  __int64 v16; // r13
  int v17; // eax
  unsigned int v19; // [rsp+30h] [rbp-B8h]
  _QWORD *v20; // [rsp+38h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-90h]
  _OWORD v23[3]; // [rsp+60h] [rbp-88h] BYREF

  v5 = *(_QWORD *)(a2 + 1648);
  v6 = *(_DWORD *)(a2 + 1656);
  v22 = v5;
  memset(v23, 0, sizeof(v23));
  v19 = v6;
  sub_140AB4550(v23);
  v8 = 0;
  v9 = 0;
  if ( !v6 )
  {
LABEL_36:
    sub_140AB4580(v23);
    return 1;
  }
  while ( 1 )
  {
    if ( a5 )
    {
      v10 = 24LL * v9;
      v11 = v10 + *(_QWORD *)(a2 + 1648);
      ExAcquirePushLockExclusiveEx(v11, 0LL);
      *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
      if ( !sub_14071BBD8(a2) )
        KeBugCheckEx(0x51u, 0x17uLL, a2, 0xBuLL, v9);
    }
    else
    {
      v10 = 24LL * v9;
    }
    v12 = (_QWORD *)(v10 + 16 + v5);
    v20 = v12;
    v13 = v12;
    v14 = *v12;
    if ( *v12 )
      break;
LABEL_26:
    if ( a5 )
      sub_14091C9E8((PVOID)a2);
    if ( ++v9 >= v6 )
      goto LABEL_36;
    v5 = v22;
  }
  while ( 1 )
  {
    v15 = v14 - 16;
    if ( a5 )
      sub_1407C0854(v14 - 16);
    if ( !*(_QWORD *)v15 )
    {
      sub_14069FB00(v15);
      sub_1407C09E0(v15, a3);
      if ( a5 )
      {
        sub_140AB4300(v15);
      }
      else if ( (*(_DWORD *)(v15 + 8) & 0x80000) != 0 )
      {
        sub_14069FA30(v15);
      }
      v13 = v12;
      goto LABEL_24;
    }
    v16 = *(_QWORD *)(v15 + 24);
    v17 = sub_14042A5E0(v15, a2);
    if ( v17 == 1 )
      break;
    if ( v17 == 3 )
    {
      if ( a5 )
        sub_140AB4300(v15);
      goto LABEL_35;
    }
    if ( v17 == 2 )
    {
      if ( a5 )
        sub_140AB4300(v15);
      *v13 = v16;
    }
    else
    {
      v13 = (__int64 *)(v15 + 24);
      if ( a5 )
        sub_140AB4300(v15);
    }
    v12 = v20;
LABEL_24:
    v14 = *v13;
    if ( !*v13 )
    {
      v6 = v19;
      goto LABEL_26;
    }
  }
  if ( a5 )
    sub_140AB4300(v15);
  v8 = 1;
LABEL_35:
  sub_14091C9E8((PVOID)a2);
  return v8;
}
