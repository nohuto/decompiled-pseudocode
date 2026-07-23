/*
 * XREFs of sub_140681670 @ 0x140681670
 * Callers:
 *     <none>
 * Callees:
 *     sub_140208958 @ 0x140208958 (sub_140208958.c)
 *     sub_140208D94 @ 0x140208D94 (sub_140208D94.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 *     sub_14068934C @ 0x14068934C (sub_14068934C.c)
 *     sub_140689388 @ 0x140689388 (sub_140689388.c)
 *     sub_1406893EC @ 0x1406893EC (sub_1406893EC.c)
 *     sub_1406A5F0C @ 0x1406A5F0C (sub_1406A5F0C.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     sub_140AB4138 @ 0x140AB4138 (sub_140AB4138.c)
 *     sub_140AB4178 @ 0x140AB4178 (sub_140AB4178.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_140681670(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v4; // si
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  ULONG_PTR v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // zf
  signed __int32 v19[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v20; // [rsp+20h] [rbp-50h] BYREF
  __int128 v21; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v22[3]; // [rsp+38h] [rbp-38h] BYREF

  v21 = 0LL;
  memset(v22, 0, sizeof(v22));
  sub_140347770((__int64)&v21);
  v2 = 0;
  LODWORD(v20) = 0;
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 22;
  v4 = sub_140AB4138();
  if ( v4 )
  {
    sub_1406893EC();
    LOBYTE(v7) = 1;
    sub_140689388(v7);
    v9 = *(_DWORD *)(a1 + 160);
    LODWORD(v20) = 6;
    if ( (v9 & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 23;
    }
    else if ( *(_BYTE *)(a1 + 2944) )
    {
      v10 = *(_QWORD *)(a1 + 2936);
      if ( (*(_DWORD *)(a1 + 4112) & 0x20) != 0 )
      {
        v2 = 1;
        ++dword_140C49410;
      }
      if ( sub_140208D94((struct _EX_RUNDOWN_REF *)a1, v10) )
      {
        v11 = *(_QWORD *)(a1 + 2936);
        *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 30;
        sub_140AB4550(v22);
        sub_14067BE48(v11, v12, &v20);
        sub_140AB4580(v22);
        sub_140AB4370();
        sub_14071BF40(v11);
        sub_140AB4260(v14, v13, v15, v16, v20, v21);
      }
      else if ( v2 )
      {
        sub_140208958();
      }
    }
    else
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 25;
    }
  }
  else
  {
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F;
    *(_DWORD *)(a1 + 4LL * (unsigned int)v8 + 4240) = 24;
  }
  v17 = (v20 & 2) == 0;
  *(_DWORD *)(a1 + 4800) = 0;
  if ( !v17 )
    sub_140AB4260(v8, v3, v5, v6, v20, v21);
  _InterlockedOr(v19, 0);
  if ( *(_QWORD *)(a1 + 4808) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 4808), 0LL);
  if ( (v20 & 4) != 0 )
    sub_14068934C();
  if ( v4 )
    sub_140AB4178();
  sub_1406A5F0C(a1);
  return sub_14022EA30((__int64 *)&v21);
}
