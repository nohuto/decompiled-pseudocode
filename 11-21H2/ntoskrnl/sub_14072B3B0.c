/*
 * XREFs of sub_14072B3B0 @ 0x14072B3B0
 * Callers:
 *     sub_1406679E8 @ 0x1406679E8 (sub_1406679E8.c)
 *     ObCreateObject @ 0x14066BA00 (ObCreateObject.c)
 *     sub_140681CB0 @ 0x140681CB0 (sub_140681CB0.c)
 *     PsCreateSiloContext @ 0x140692CD0 (PsCreateSiloContext.c)
 *     sub_1406AFD10 @ 0x1406AFD10 (sub_1406AFD10.c)
 *     sub_1406B4B90 @ 0x1406B4B90 (sub_1406B4B90.c)
 *     sub_1406B8E18 @ 0x1406B8E18 (sub_1406B8E18.c)
 *     sub_1406B8FE0 @ 0x1406B8FE0 (sub_1406B8FE0.c)
 *     sub_1406C08F0 @ 0x1406C08F0 (sub_1406C08F0.c)
 *     sub_1406C2A70 @ 0x1406C2A70 (sub_1406C2A70.c)
 *     sub_1406C505C @ 0x1406C505C (sub_1406C505C.c)
 *     sub_1406D9390 @ 0x1406D9390 (sub_1406D9390.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     sub_1406E1214 @ 0x1406E1214 (sub_1406E1214.c)
 *     sub_1406E2A70 @ 0x1406E2A70 (sub_1406E2A70.c)
 *     sub_1406EC524 @ 0x1406EC524 (sub_1406EC524.c)
 *     sub_1406F0080 @ 0x1406F0080 (sub_1406F0080.c)
 *     sub_1406FD9F0 @ 0x1406FD9F0 (sub_1406FD9F0.c)
 *     NtCreateEvent @ 0x140727DD0 (NtCreateEvent.c)
 *     sub_14072A4C0 @ 0x14072A4C0 (sub_14072A4C0.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14074CD70 (IoCreateStreamFileObjectEx2.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     sub_140782F2C @ 0x140782F2C (sub_140782F2C.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 *     sub_140796F10 @ 0x140796F10 (sub_140796F10.c)
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 *     sub_1407D5050 @ 0x1407D5050 (sub_1407D5050.c)
 *     sub_1407D53D0 @ 0x1407D53D0 (sub_1407D53D0.c)
 *     sub_1407F385C @ 0x1407F385C (sub_1407F385C.c)
 *     sub_14084685C @ 0x14084685C (sub_14084685C.c)
 *     sub_140846BEC @ 0x140846BEC (sub_140846BEC.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     sub_140854BB0 @ 0x140854BB0 (sub_140854BB0.c)
 *     sub_140857300 @ 0x140857300 (sub_140857300.c)
 *     IoCreateController @ 0x140861240 (IoCreateController.c)
 *     sub_140916788 @ 0x140916788 (sub_140916788.c)
 *     sub_140928A50 @ 0x140928A50 (sub_140928A50.c)
 *     ntoskrnl_30 @ 0x140938B40 (ntoskrnl_30.c)
 *     sub_1409A2F78 @ 0x1409A2F78 (sub_1409A2F78.c)
 *     sub_1409AB130 @ 0x1409AB130 (sub_1409AB130.c)
 *     sub_1409AEFF0 @ 0x1409AEFF0 (sub_1409AEFF0.c)
 *     sub_1409AF200 @ 0x1409AF200 (sub_1409AF200.c)
 *     sub_1409EBDD0 @ 0x1409EBDD0 (sub_1409EBDD0.c)
 *     sub_1409F3EC0 @ 0x1409F3EC0 (sub_1409F3EC0.c)
 *     sub_140A062C8 @ 0x140A062C8 (sub_140A062C8.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_14071F0D0 @ 0x14071F0D0 (sub_14071F0D0.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14072E5D0 @ 0x14072E5D0 (sub_14072E5D0.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     sub_1407CCD80 @ 0x1407CCD80 (sub_1407CCD80.c)
 *     sub_140986424 @ 0x140986424 (sub_140986424.c)
 */

__int64 __fastcall sub_14072B3B0(
        unsigned __int8 a1,
        _DWORD *a2,
        int a3,
        unsigned __int8 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9,
        __int64 a10)
{
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rdx
  int v18; // esi
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  int v22; // ecx
  int v23; // edi
  __int64 v24; // rbx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  struct _KPRCB *v30; // rdx
  __int64 v31; // rcx
  struct _KPRCB *v32; // rax
  __int64 v33; // r8
  __int64 v34; // [rsp+30h] [rbp-48h]
  __int128 v35; // [rsp+40h] [rbp-38h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  a5 = 0LL;
  v15 = *((_QWORD *)CurrentPrcb + 264);
  v35 = 0LL;
  ++*(_DWORD *)(v15 + 20);
  v16 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v15);
  if ( !v16 )
  {
    ++*(_DWORD *)(v15 + 24);
    v26 = *((_QWORD *)CurrentPrcb + 265);
    ++*(_DWORD *)(v26 + 20);
    v16 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v26);
    if ( !v16 )
    {
      v27 = *(unsigned int *)(v26 + 44);
      v28 = *(unsigned int *)(v26 + 36);
      ++*(_DWORD *)(v26 + 24);
      v16 = sub_14042A5E0(v28, v27);
      if ( !v16 )
        return 3221225626LL;
    }
  }
  *(_DWORD *)v16 = *((_DWORD *)CurrentPrcb + 9);
  v18 = sub_1407CCD80(a1, a4, a3, (unsigned int)&v35, v16, 0);
  if ( v18 >= 0 )
  {
    if ( (*(_DWORD *)v16 & a2[18]) != 0 )
    {
      v23 = -1073741811;
    }
    else if ( (*(_DWORD *)v16 & 0x10) == 0 || SeSinglePrivilegeCheck(stru_140D3CB68, a1) )
    {
      v21 = a7;
      if ( !a7 )
        v21 = a2[26];
      v22 = a8;
      if ( !a8 )
        v22 = a2[27];
      *(_DWORD *)(v16 + 20) = v21;
      v34 = a10;
      *(_DWORD *)(v16 + 24) = v22;
      v23 = sub_14072E5D0(v16, a4, (_DWORD)a2, (unsigned int)&v35, a6, (__int64)&a5, v34);
      if ( v23 >= 0 )
      {
        v24 = a5;
        if ( dword_140D05010 )
        {
          sub_140986424(a5);
          sub_1405C5EC8(v24, 1, 1u, 0x746C6644u);
        }
        *a9 = v24 + 48;
        return (unsigned int)v23;
      }
    }
    else
    {
      v23 = -1073741727;
    }
    if ( *((_QWORD *)&v35 + 1) )
      sub_14071F0D0((__int64)&v35);
    v29 = *(_QWORD *)(v16 + 32);
    if ( v29 )
    {
      LOBYTE(v19) = 1;
      SeReleaseSecurityDescriptor(v29, *(unsigned __int8 *)(v16 + 16), v19, v20);
      *(_QWORD *)(v16 + 32) = 0LL;
    }
    v30 = KeGetCurrentPrcb();
    v31 = *((_QWORD *)v30 + 264);
    ++*(_DWORD *)(v31 + 28);
    if ( *(_WORD *)v31 < *(_WORD *)(v31 + 16)
      || (++*(_DWORD *)(v31 + 32),
          v31 = *((_QWORD *)v30 + 265),
          ++*(_DWORD *)(v31 + 28),
          *(_WORD *)v31 < *(_WORD *)(v31 + 16)) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v31, (PSLIST_ENTRY)v16);
    }
    else
    {
      ++*(_DWORD *)(v31 + 32);
      sub_14042A5E0(v16, v30);
    }
    return (unsigned int)v23;
  }
  v32 = KeGetCurrentPrcb();
  v33 = *((_QWORD *)v32 + 264);
  ++*(_DWORD *)(v33 + 28);
  if ( *(_WORD *)v33 < *(_WORD *)(v33 + 16)
    || (++*(_DWORD *)(v33 + 32),
        v33 = *((_QWORD *)v32 + 265),
        ++*(_DWORD *)(v33 + 28),
        *(_WORD *)v33 < *(_WORD *)(v33 + 16)) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v33, (PSLIST_ENTRY)v16);
  }
  else
  {
    ++*(_DWORD *)(v33 + 32);
    sub_14042A5E0(v16, v17);
  }
  return (unsigned int)v18;
}
