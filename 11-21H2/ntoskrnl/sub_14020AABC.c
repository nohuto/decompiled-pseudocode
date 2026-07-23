/*
 * XREFs of sub_14020AABC @ 0x14020AABC
 * Callers:
 *     sub_1406DD184 @ 0x1406DD184 (sub_1406DD184.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     sub_14020B1F8 @ 0x14020B1F8 (sub_14020B1F8.c)
 *     sub_140256264 @ 0x140256264 (sub_140256264.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_14068934C @ 0x14068934C (sub_14068934C.c)
 *     sub_140689388 @ 0x140689388 (sub_140689388.c)
 *     sub_1406893EC @ 0x1406893EC (sub_1406893EC.c)
 *     sub_1406D58E0 @ 0x1406D58E0 (sub_1406D58E0.c)
 *     sub_1406DEFDC @ 0x1406DEFDC (sub_1406DEFDC.c)
 *     sub_1406DEFFC @ 0x1406DEFFC (sub_1406DEFFC.c)
 *     sub_1406E22CC @ 0x1406E22CC (sub_1406E22CC.c)
 *     sub_1406E36C4 @ 0x1406E36C4 (sub_1406E36C4.c)
 *     sub_1406E7AC4 @ 0x1406E7AC4 (sub_1406E7AC4.c)
 *     sub_1406EBC64 @ 0x1406EBC64 (sub_1406EBC64.c)
 *     sub_14071BC64 @ 0x14071BC64 (sub_14071BC64.c)
 *     sub_14071C0FC @ 0x14071C0FC (sub_14071C0FC.c)
 *     sub_140742E3C @ 0x140742E3C (sub_140742E3C.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 */

__int64 __fastcall sub_14020AABC(
        ULONG_PTR a1,
        _QWORD *a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        struct _KEVENT *a6,
        char a7,
        ULONG_PTR *a8,
        char a9,
        char a10,
        __int64 a11)
{
  __int64 v11; // r13
  int v15; // r14d
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // edi
  unsigned int v20; // r9d
  int v21; // eax
  int v22; // r9d
  signed int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  ULONG_PTR v26; // rdi
  ULONG_PTR *v27; // rsi
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v33; // [rsp+20h] [rbp-99h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-51h] BYREF
  ULONG_PTR *v36; // [rsp+70h] [rbp-49h]
  PRKEVENT Event; // [rsp+78h] [rbp-41h]
  _OWORD v38[3]; // [rsp+80h] [rbp-39h] BYREF

  *(_DWORD *)(a1 + 160) |= 0x20u;
  v11 = 0LL;
  BugCheckParameter2 = 0LL;
  Event = a6;
  v36 = a8;
  memset(v38, 0, sizeof(v38));
  *(_QWORD *)(a1 + 4168) = KeGetCurrentThread();
  v15 = a3 & 0x10;
  if ( (a3 & 0x10) != 0 )
  {
    v16 = *(_DWORD *)(a1 + 4112) | 0x20;
    *(_DWORD *)(a1 + 4112) = v16;
    if ( (a3 & 0x20) != 0 )
      *(_DWORD *)(a1 + 4112) = v16 | 0x40;
  }
  *(_DWORD *)(a1 + 4112) |= 1u;
  sub_1406893EC();
  LOBYTE(v17) = 1;
  sub_140689388(v17);
  if ( a4 && !v15 )
  {
    if ( (unsigned __int8)sub_140AB45A0(a4, 0LL) )
    {
      v19 = -1073741444;
      v33 = 16;
LABEL_8:
      v20 = v19;
LABEL_9:
      sub_14020A890(a11, 0, 29, v20, v33);
LABEL_22:
      sub_140AB4260();
      sub_14068934C();
      sub_140AB4550(v38);
      sub_14065A7E0((PVOID)a1);
      sub_140AB4580(v38);
      goto LABEL_39;
    }
    LOBYTE(v18) = a7;
    v21 = sub_140256264(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL), v18);
    v19 = v21;
    if ( v21 < 0 )
    {
      v33 = 32;
LABEL_12:
      v20 = v21;
      goto LABEL_9;
    }
    v21 = sub_1406E22CC(a1, a2);
    v19 = v21;
    if ( v21 < 0 )
    {
      v33 = 48;
      goto LABEL_12;
    }
  }
  if ( a5 )
  {
    v21 = sub_140AB43C0(a5, 0LL);
    v19 = v21;
    if ( v21 < 0 )
    {
      v33 = 64;
      goto LABEL_12;
    }
    v11 = *(_QWORD *)(a5 + 8);
    if ( (*(_DWORD *)(v11 + 184) & 0x40000) == 0 )
    {
      v19 = -1073741811;
      v33 = 80;
      goto LABEL_8;
    }
  }
  sub_140AB4260();
  LOBYTE(v22) = a9;
  v23 = sub_14067C9E8(a2[2], a2[1], a1, v22, 512, v15 != 0, Event, a2[4], v11, (__int64)&BugCheckParameter2, 0, a11);
  v19 = v23;
  if ( v23 < 0 )
  {
    sub_14020A890(a11, 0, 29, v23, 0x60u);
    LOBYTE(v25) = 1;
    sub_140689388(v25);
    goto LABEL_22;
  }
  v26 = BugCheckParameter2;
  if ( (a3 & 0x800) != 0 )
  {
    sub_14071BC64(BugCheckParameter2);
    v27 = v36;
    *v36 = v26;
  }
  else
  {
    v27 = v36;
  }
  LOBYTE(v24) = 1;
  sub_140689388(v24);
  if ( v15 )
  {
    sub_14071BC64(*(_QWORD *)(a1 + 2936));
    *v27 = *(_QWORD *)(a1 + 2936);
  }
  sub_1406DEFFC();
  v28 = (_QWORD *)qword_140D3CC98;
  v29 = (_QWORD *)(a1 + 1608);
  if ( *(__int64 **)qword_140D3CC98 != &qword_140D3CC90 )
    __fastfail(3u);
  *v29 = &qword_140D3CC90;
  *(_QWORD *)(a1 + 1616) = v28;
  *v28 = v29;
  qword_140D3CC98 = a1 + 1608;
  sub_1406DEFDC();
  sub_140AB4260();
  sub_140AB4550(v38);
  sub_14020B1F8(a1);
  sub_140AB4580(v38);
  sub_14071C0FC(v26);
  sub_14068934C();
  if ( (a3 & 0x110) == 0 )
  {
    LOBYTE(v30) = a10;
    sub_140742E3C(a1, v30);
    *(_DWORD *)(a1 + 4112) |= 8u;
  }
  if ( a9 )
  {
    sub_140AB4550(v38);
    sub_1406885A4(a1);
    sub_140AB4580(v38);
  }
  if ( !v15 )
    sub_1406E36C4(a1);
  v31 = *(_QWORD *)(a1 + 4152);
  if ( v31 )
  {
    TmEnableCallbacks_0(*(PKRESOURCEMANAGER *)(v31 + 56), CallbackRoutine, *(PVOID *)(a1 + 4152));
    sub_1406E7AC4(*(_QWORD *)(a1 + 4152));
  }
  sub_1406D58E0(a1);
  sub_1406893EC();
  *(_DWORD *)(a1 + 160) &= ~0x20u;
  *(_QWORD *)(a1 + 4168) = 0LL;
  sub_14068934C();
  v19 = 0;
LABEL_39:
  if ( !byte_140D3CA02 && !byte_140C49868 )
  {
    byte_140D3CA02 = 1;
    sub_1406EBC64();
  }
  return v19;
}
