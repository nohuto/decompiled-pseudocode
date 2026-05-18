/*
 * XREFs of sub_18002F3B0 @ 0x18002F3B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800216F8 @ 0x1800216F8 (sub_1800216F8.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_18002CC9C @ 0x18002CC9C (sub_18002CC9C.c)
 *     sub_18002E0C0 @ 0x18002E0C0 (sub_18002E0C0.c)
 *     sub_18002E87C @ 0x18002E87C (sub_18002E87C.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180037398 @ 0x180037398 (sub_180037398.c)
 *     sub_1800800B0 @ 0x1800800B0 (sub_1800800B0.c)
 *     sub_1800B349C @ 0x1800B349C (sub_1800B349C.c)
 *     sub_1800B34D0 @ 0x1800B34D0 (sub_1800B34D0.c)
 *     sub_1800B3798 @ 0x1800B3798 (sub_1800B3798.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002F3B0(__int64 a1, unsigned int a2)
{
  __int64 *v4; // r8
  __int64 v5; // rdx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  _QWORD *v12; // r12
  _QWORD *v13; // rcx
  char v14; // bl
  bool v15; // r14
  char v16; // r15
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  char v21; // r9
  char v22; // r12
  char v23; // r15
  __int64 *v24; // rsi
  char ***v25; // rbx
  __int128 v27; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v28[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v29; // [rsp+38h] [rbp-28h]
  char *v30[4]; // [rsp+40h] [rbp-20h] BYREF

  v4 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v28);
  v27 = 0LL;
  v5 = v4[1];
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 8);
    while ( v6 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6);
      if ( v7 == v6 )
      {
        v8 = *v4;
        v27 = *(_OWORD *)v4;
        goto LABEL_6;
      }
    }
  }
  v8 = v27;
LABEL_6:
  v9 = v29;
  if ( v29 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 8LL))(v9, v5, v4);
    v8 = v27;
  }
  if ( v8 )
  {
    v10 = sub_18002850C(v8);
    v11 = sub_180036808(v10, a2);
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 184LL))(a1);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 96LL))(v8, 5LL) )
    {
      v13 = *(_QWORD **)(a1 + 384);
      v14 = 1;
      v15 = v13 && (unsigned __int8)sub_1800216F8(v13);
      v16 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, &qword_1801F8698, 0LL);
      LOBYTE(v17) = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 64LL))(
                      v11,
                      &qword_1801F86B8,
                      0LL);
      LOBYTE(v18) = v16;
      sub_1800B349C(*v12, v18, v19, v17);
      if ( v21 || v15 || *(_BYTE *)(a1 + 400) )
        v14 = 0;
      LOBYTE(v20) = v14;
      sub_1800B34D0(*v12, v20);
      if ( v16 )
      {
        sub_1800B3798(*v12);
        v22 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 64LL))(
                v11,
                &qword_1801F8798,
                0LL);
        v23 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 64LL))(
                v11,
                &qword_1801F87B8,
                0LL);
        v24 = sub_18002E0C0((_QWORD *)a1, (__int64 *)v30);
        v25 = (char ***)(a1 + 416);
        if ( (__int64 *)(a1 + 416) != v24 )
        {
          if ( *v25 )
          {
            sub_18002CC9C(*v25, *(char ***)(a1 + 424));
            sub_180010884((char *)*v25, 8 * ((__int64)(*(_QWORD *)(a1 + 432) - *(_QWORD *)(a1 + 416)) >> 3));
            *v25 = 0LL;
            *(_QWORD *)(a1 + 424) = 0LL;
            *(_QWORD *)(a1 + 432) = 0LL;
          }
          *v25 = (char **)*v24;
          *(_QWORD *)(a1 + 424) = v24[1];
          *(_QWORD *)(a1 + 432) = v24[2];
          *v24 = 0LL;
          v24[1] = 0LL;
          v24[2] = 0LL;
        }
        if ( v30[0] )
        {
          sub_18002CC9C((char **)v30[0], (char **)v30[1]);
          sub_180010884(v30[0], 8 * ((v30[2] - v30[0]) >> 3));
        }
        if ( v22 )
        {
          if ( v23 )
          {
            if ( *(_QWORD *)(a1 + 424) != *(_QWORD *)(a1 + 416) )
              sub_180037398();
          }
          else
          {
            sub_1800800B0(*(_QWORD *)(a1 + 456), a1 + 416);
          }
        }
        if ( v15 )
          sub_18002E87C(a1);
      }
    }
  }
  return sub_180010910((__int64)&v27);
}
