/*
 * XREFs of sub_140713980 @ 0x140713980
 * Callers:
 *     <none>
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067FF60 @ 0x14067FF60 (sub_14067FF60.c)
 *     sub_1406A185C @ 0x1406A185C (sub_1406A185C.c)
 *     sub_1406A1AB8 @ 0x1406A1AB8 (sub_1406A1AB8.c)
 *     sub_1406B3C34 @ 0x1406B3C34 (sub_1406B3C34.c)
 *     sub_14071F740 @ 0x14071F740 (sub_14071F740.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1407C1A00 @ 0x1407C1A00 (sub_1407C1A00.c)
 *     sub_1407CA1C0 @ 0x1407CA1C0 (sub_1407CA1C0.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_140713980(int a1, void *a2, unsigned int a3, volatile void *a4, unsigned int *a5, _DWORD *a6)
{
  __int64 v6; // r14
  int v9; // r8d
  int v10; // r9d
  signed int v11; // edi
  unsigned int v12; // r15d
  int v13; // r8d
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int v18; // r9d
  int v19; // eax
  unsigned int v20; // r8d
  __int64 v21; // rdx
  PPRIVILEGE_SET v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  char v27; // [rsp+40h] [rbp-1D8h]
  char v28; // [rsp+41h] [rbp-1D7h]
  unsigned int Length; // [rsp+44h] [rbp-1D4h] BYREF
  char Length_4; // [rsp+48h] [rbp-1D0h]
  unsigned int v31; // [rsp+50h] [rbp-1C8h]
  PVOID v32; // [rsp+58h] [rbp-1C0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-1B8h] BYREF
  unsigned int v34; // [rsp+68h] [rbp-1B0h] BYREF
  unsigned int v35; // [rsp+6Ch] [rbp-1ACh]
  volatile void *Address; // [rsp+70h] [rbp-1A8h]
  PVOID Object[3]; // [rsp+78h] [rbp-1A0h] BYREF
  __int64 v38; // [rsp+90h] [rbp-188h]
  PPRIVILEGE_SET v39; // [rsp+98h] [rbp-180h] BYREF
  PPRIVILEGE_SET v40; // [rsp+A0h] [rbp-178h] BYREF
  _QWORD v41[2]; // [rsp+A8h] [rbp-170h] BYREF
  int v42; // [rsp+B8h] [rbp-160h]
  __int128 v43; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v44[10]; // [rsp+D0h] [rbp-148h] BYREF
  _OWORD v45[2]; // [rsp+120h] [rbp-F8h] BYREF
  _OWORD v46[3]; // [rsp+140h] [rbp-D8h] BYREF
  __int64 v47[12]; // [rsp+170h] [rbp-A8h] BYREF

  Address = a4;
  v6 = a3;
  Object[1] = a2;
  v31 = a3;
  Object[2] = a5;
  v43 = 0LL;
  Length = 0;
  v34 = 0;
  v42 = 0;
  memset(v46, 0, sizeof(v46));
  memset(v47, 0, 0x58uLL);
  memset(v45, 0, sizeof(v45));
  v38 = 0LL;
  if ( qword_140D3B008 )
    sub_140223A20((unsigned __int64)v45, 0x20000uLL);
  v27 = 0;
  v28 = 0;
  v32 = 0LL;
  memset(v44, 0, 0x48uLL);
  v41[1] = v41;
  v41[0] = v41;
  sub_140347770((__int64)&v43);
  Object[0] = 0LL;
  Privileges = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  Length_4 = sub_140AB46D0();
  if ( !Length_4 )
  {
    v11 = -1073741431;
    goto LABEL_33;
  }
  v12 = *((char *)KeGetCurrentThread() + 562);
  LOBYTE(v10) = v12;
  v11 = sub_140AB4630(a1, 1, v9, v10, (__int64)&v32, 0LL);
  if ( v11 >= 0 )
  {
    if ( qword_140D3B008 && v32 )
      v38 = *((_QWORD *)v32 + 1);
    if ( (_BYTE)v12 == 1 )
    {
      v14 = 0x7FFFFFFF0000LL;
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a5;
      Length = *(_DWORD *)v15;
      if ( (unsigned int)v6 > 0x10000 )
        RtlRaiseStatus(-1073741670);
      ProbeForWrite(a2, 24 * v6, 4u);
      if ( a6 )
      {
        if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
          v14 = (__int64)a6;
        *(_DWORD *)v14 = *(_DWORD *)v14;
      }
      ProbeForWrite(Address, Length, 4u);
    }
    else
    {
      Length = *a5;
    }
    LOBYTE(v13) = v12;
    v11 = sub_14071F740((_DWORD)a2, v6, v13, (unsigned int)&Privileges, (__int64)&v39, (__int64)&v40);
    if ( v11 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v28 = 1;
      if ( dword_140C54CA8 && !sub_1402ACD00() )
      {
        v44[0] = v32;
        v44[1] = Privileges;
        LODWORD(v44[2]) = v6;
        v44[3] = Address;
        v44[4] = &Length;
        v44[5] = a6;
        LOBYTE(v18) = 1;
        v19 = sub_140735760(9, (unsigned int)v44, 0, v18, 24, (__int64)v32, (__int64)v41);
        v11 = v19;
        if ( v19 < 0 )
        {
          if ( v19 == -1073740541 )
            v11 = 0;
          goto LABEL_33;
        }
        v27 = 1;
      }
      LOBYTE(v16) = v12;
      v11 = sub_1407CA1C0(&v32, v16, 1LL, Object);
      if ( v11 >= 0 )
      {
        v11 = sub_1407C1A00(v47, Address, Length, v12, 4);
        if ( v11 >= 0 )
        {
          sub_140AB4550(v46);
          v11 = sub_1406B3C34((__int64)v32, (__int64)Object[0], (__int64)Privileges, v6, v47[1], &Length, &v34);
          sub_140AB4580(v46);
          if ( a6 )
            *a6 = v34;
          if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
            sub_1406A1AB8((__int64)v47, Length);
        }
      }
    }
  }
LABEL_33:
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( v27 )
    v11 = sub_14067FF60(24, (__int64)v32, v11, (__int64)v44, 0LL, v41);
  if ( Privileges )
  {
    *a5 = Length;
    if ( ((v11 + 0x80000000) & 0x80000000) != 0 || v11 == -2147483643 )
    {
      v20 = 0;
      v35 = 0;
      while ( v20 < (unsigned int)v6 )
      {
        v21 = 3LL * v20;
        v22 = Privileges;
        *((_DWORD *)a2 + 2 * v21 + 2) = Privileges->Privilege[2 * v20].Luid.LowPart;
        *((_DWORD *)a2 + 2 * v21 + 3) = v22->Privilege[2 * v20].Luid.HighPart;
        *((_DWORD *)a2 + 2 * v21 + 4) = v22->Privilege[2 * v20++].Attributes;
        v35 = v20;
      }
    }
  }
  if ( v28 )
    sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v32 )
    ObfDereferenceObject(v32);
  sub_1406A185C((__int64)v47);
  if ( qword_140D3B008 )
  {
    v25 = v38;
    LOBYTE(v25) = 19;
    sub_14042A5E0(v25, v45);
  }
  if ( Length_4 )
    sub_140AB42A0(v24, v23);
  if ( Privileges )
    SeFreePrivileges(Privileges);
  if ( v39 )
    SeFreePrivileges(v39);
  if ( v40 )
    SeFreePrivileges(v40);
  sub_14022EA30((__int64 *)&v43);
  return (unsigned int)v11;
}
