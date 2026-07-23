/*
 * XREFs of sub_1406686C8 @ 0x1406686C8
 * Callers:
 *     sub_140667114 @ 0x140667114 (sub_140667114.c)
 *     sub_14069E454 @ 0x14069E454 (sub_14069E454.c)
 *     sub_140859318 @ 0x140859318 (sub_140859318.c)
 *     sub_14090E9C0 @ 0x14090E9C0 (sub_14090E9C0.c)
 *     sub_14090EC00 @ 0x14090EC00 (sub_14090EC00.c)
 *     sub_140914914 @ 0x140914914 (sub_140914914.c)
 *     sub_140AB4008 @ 0x140AB4008 (sub_140AB4008.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x140251C40 (PsDereferenceSiloContext.c)
 *     sub_140347840 @ 0x140347840 (sub_140347840.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405F43E0 @ 0x1405F43E0 (sub_1405F43E0.c)
 *     sub_1406689A4 @ 0x1406689A4 (sub_1406689A4.c)
 *     sub_14066960C @ 0x14066960C (sub_14066960C.c)
 *     sub_14071F0D0 @ 0x14071F0D0 (sub_14071F0D0.c)
 *     SeCreateAccessState @ 0x14071F140 (SeCreateAccessState.c)
 *     sub_14072266C @ 0x14072266C (sub_14072266C.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 *     sub_1407CCD80 @ 0x1407CCD80 (sub_1407CCD80.c)
 */

__int64 __fastcall sub_1406686C8(
        __int64 a1,
        struct _SECURITY_SUBJECT_CONTEXT *a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 *a7)
{
  int v9; // r12d
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v11; // rsi
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rbx
  int v15; // eax
  char v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 CurrentSilo; // rax
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _KPRCB *v24; // rdx
  __int64 v25; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // [rsp+70h] [rbp-41h] BYREF
  __int128 v31; // [rsp+78h] [rbp-39h] BYREF
  __int128 v32; // [rsp+88h] [rbp-29h] BYREF
  __int128 v33; // [rsp+98h] [rbp-19h]
  __int128 v34; // [rsp+A8h] [rbp-9h]
  __int64 v35; // [rsp+B8h] [rbp+7h]
  NTSTATUS AccessState; // [rsp+100h] [rbp+4Fh] BYREF
  unsigned int v37; // [rsp+110h] [rbp+5Fh]

  v37 = a3;
  v30 = 0LL;
  v35 = 0LL;
  v9 = a1;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = *((_QWORD *)CurrentPrcb + 272);
  ++*(_DWORD *)(v11 + 20);
  v14 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v11);
  if ( !v14 )
  {
    ++*(_DWORD *)(v11 + 24);
    v27 = *((_QWORD *)CurrentPrcb + 273);
    ++*(_DWORD *)(v27 + 20);
    v14 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v27);
    if ( !v14 )
    {
      v28 = *(unsigned int *)(v27 + 44);
      v29 = *(unsigned int *)(v27 + 36);
      ++*(_DWORD *)(v27 + 24);
      v14 = sub_14042A5E0(v29, v28);
      if ( !v14 )
        return 3221225626LL;
    }
  }
  v15 = *((_DWORD *)CurrentPrcb + 9);
  v16 = a5;
  LOBYTE(v12) = a5;
  LOBYTE(v13) = a5;
  *(_DWORD *)v14 = v15;
  AccessState = sub_1407CCD80(v13, v12, v9, (unsigned int)&v31, v14 + 160, 1);
  if ( AccessState >= 0 )
  {
    if ( !a2 )
    {
      AccessState = SeCreateAccessState(v14, v14 + 224, v37, a4 + 76);
      if ( AccessState < 0 )
      {
LABEL_18:
        if ( a2 == (struct _SECURITY_SUBJECT_CONTEXT *)v14 )
        {
          sub_1403478A0((__int64)a2);
          SeReleaseSubjectContext(a2 + 1);
        }
        v23 = *(_QWORD *)(v14 + 192);
        if ( v23 )
        {
          LOBYTE(v17) = *(_BYTE *)(v14 + 176);
          LOBYTE(v18) = 1;
          SeReleaseSecurityDescriptor(v23, v17, v18, v19);
          *(_QWORD *)(v14 + 192) = 0LL;
        }
        if ( *((_QWORD *)&v31 + 1) )
          sub_14071F0D0(&v31);
        goto LABEL_24;
      }
      a2 = (struct _SECURITY_SUBJECT_CONTEXT *)v14;
    }
    AccessState = sub_1406689A4(a2);
    if ( AccessState >= 0 )
    {
      CurrentSilo = PsGetCurrentSilo();
      AccessState = sub_1407CB6C0(
                      *(_QWORD *)(v14 + 168),
                      v16,
                      a6,
                      0LL,
                      0LL,
                      CurrentSilo,
                      (__int64)a2,
                      v14 + 448,
                      0LL,
                      (__int64)&v30);
      if ( AccessState >= 0 )
      {
        if ( *(_QWORD *)(v14 + 448) )
          sub_14066960C(v14 + 448);
        v21 = v30;
        v22 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v30 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v30 - 48) >> 8)];
        if ( (*(_DWORD *)(v22 + 72) & *(_DWORD *)(v14 + 160)) != 0 )
        {
          PsDereferenceSiloContext((void *)v30);
          AccessState = -1073741811;
        }
        else
        {
          if ( dword_140D3CAD0 )
          {
            *(_QWORD *)&v33 = v22 + 16;
            *((_QWORD *)&v33 + 1) = &v31;
            *(_QWORD *)&v34 = *(_QWORD *)(v14 + 168);
            sub_1405F43E0((__int64)&v32);
            v21 = v30;
          }
          if ( (unsigned __int8)sub_14072266C(v21, &AccessState) )
            *a7 = v30;
          else
            PsDereferenceSiloContext((void *)v30);
          sub_140347840();
        }
      }
    }
    goto LABEL_18;
  }
LABEL_24:
  v24 = KeGetCurrentPrcb();
  v25 = *((_QWORD *)v24 + 272);
  ++*(_DWORD *)(v25 + 28);
  if ( *(_WORD *)v25 < *(_WORD *)(v25 + 16)
    || (++*(_DWORD *)(v25 + 32),
        v25 = *((_QWORD *)v24 + 273),
        ++*(_DWORD *)(v25 + 28),
        *(_WORD *)v25 < *(_WORD *)(v25 + 16)) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v25, (PSLIST_ENTRY)v14);
  }
  else
  {
    ++*(_DWORD *)(v25 + 32);
    sub_14042A5E0(v14, v24);
  }
  return (unsigned int)AccessState;
}
