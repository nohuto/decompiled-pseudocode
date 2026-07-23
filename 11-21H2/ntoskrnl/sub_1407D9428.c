/*
 * XREFs of sub_1407D9428 @ 0x1407D9428
 * Callers:
 *     sub_1407D9410 @ 0x1407D9410 (sub_1407D9410.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_14035F854 @ 0x14035F854 (sub_14035F854.c)
 *     sub_14035FB90 @ 0x14035FB90 (sub_14035FB90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407D9680 @ 0x1407D9680 (sub_1407D9680.c)
 *     sub_1407D97F8 @ 0x1407D97F8 (sub_1407D97F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407D9428(struct _EX_RUNDOWN_REF *P)
{
  char v2; // r14
  int Ptr_high; // edx
  int v4; // ecx
  __int64 Count_low; // rax
  int v6; // edi
  _QWORD *v7; // rsi
  _QWORD *v8; // rax
  unsigned int v9; // eax
  int v11; // eax
  PVOID v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int16 v15; // [rsp+38h] [rbp-29h] BYREF
  PVOID Pa; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-19h] BYREF
  struct _EX_RUNDOWN_REF *v18; // [rsp+58h] [rbp-9h]
  int v19; // [rsp+60h] [rbp-1h]
  int v20; // [rsp+64h] [rbp+3h]
  char *v21; // [rsp+68h] [rbp+7h]
  __int64 v22; // [rsp+70h] [rbp+Fh]
  struct _EX_RUNDOWN_REF *v23; // [rsp+78h] [rbp+17h]
  __int64 v24; // [rsp+80h] [rbp+1Fh]
  struct _EX_RUNDOWN_REF *v25; // [rsp+88h] [rbp+27h]
  __int64 v26; // [rsp+90h] [rbp+2Fh]

  Pa = 0LL;
  v2 = *((_BYTE *)KeGetCurrentThread() + 562);
  *((_BYTE *)KeGetCurrentThread() + 562) = 0;
  sub_14035F854(P);
  if ( P && qword_140C54788 && EtwEventEnabled(qword_140C54788, &stru_140010EE8) )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_WORD *)&P[3].Count + v14) );
    v15 = v14;
    UserData.Ptr = (ULONGLONG)&v15;
    v19 = 2 * (unsigned __int16)v14;
    v18 = P + 3;
    v21 = (char *)&P[10].Ptr + 4;
    v23 = P + 11;
    v25 = P + 50;
    *(_QWORD *)&UserData.Size = 2LL;
    v20 = 0;
    v22 = 4LL;
    v24 = 4LL;
    v26 = 4LL;
    EtwWrite(qword_140C54788, &stru_140010EE8, 0LL, 5u, &UserData);
  }
  Ptr_high = HIDWORD(P[40].Ptr);
  v4 = HIDWORD(P[41].Ptr);
  if ( Ptr_high > v4 )
  {
    HIDWORD(P[40].Ptr) = v4;
    Ptr_high = v4;
  }
  Count_low = SLODWORD(P[41].Count);
  if ( (int)Count_low < dword_140C544F4 )
  {
    *((_DWORD *)&P[35].Ptr + Count_low + 1) = v4 - Ptr_high;
    v11 = HIDWORD(P[41].Ptr);
    ++LODWORD(P[41].Count);
    HIDWORD(P[40].Ptr) = v11;
  }
  else
  {
    if ( (int)Count_low > 10 )
    {
      LODWORD(P[41].Count) = 10;
      LODWORD(Count_low) = 10;
    }
    if ( Ptr_high != v4 )
      *((_DWORD *)&P[35].Count + (int)Count_low) += v4 - Ptr_high;
  }
  if ( LODWORD(P[11].Count) != 1 || LODWORD(P[50].Count) == 8 )
    v6 = sub_1407D97F8(&Pa, P);
  else
    v6 = -2147483614;
  v7 = Pa;
  P[56].Count = (ULONG_PTR)Pa;
  LODWORD(P[57].Count) = v6;
  sub_1407D9680(P);
  ExFreePoolWithTag(P, 0);
  if ( v6 >= 0 )
  {
    sub_14035FB90((__int64)&unk_140C4EA40);
    ExAcquireFastMutex(&stru_140C546A8);
    if ( dword_140C546E4 == 1 )
    {
      KeReleaseGuardedMutex(&stru_140C546A8);
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      v8 = qword_140C546A0;
      if ( *(PVOID **)qword_140C546A0 != &qword_140C54698 )
LABEL_29:
        __fastfail(3u);
      v7[1] = qword_140C546A0;
      *v7 = &qword_140C54698;
      *v8 = v7;
      v9 = dword_140C546E0 + 1;
      qword_140C546A0 = v7;
      while ( 1 )
      {
        dword_140C546E0 = v9;
        if ( v9 <= dword_140C5438C )
          break;
        v12 = qword_140C54698;
        if ( qword_140C54698 == &qword_140C54698 )
          break;
        if ( *((PVOID **)qword_140C54698 + 1) != &qword_140C54698 )
          goto LABEL_29;
        v13 = *(_QWORD *)qword_140C54698;
        if ( *(PVOID *)(*(_QWORD *)qword_140C54698 + 8LL) != qword_140C54698 )
          goto LABEL_29;
        qword_140C54698 = *(PVOID *)qword_140C54698;
        *(_QWORD *)(v13 + 8) = &qword_140C54698;
        ExFreePoolWithTag(v12, 0);
        v9 = dword_140C546E0 - 1;
      }
      KeReleaseGuardedMutex(&stru_140C546A8);
      if ( qword_140C546E8 )
        KeSetEvent(qword_140C546E8, 0, 0);
      v6 = 0;
    }
  }
  *((_BYTE *)KeGetCurrentThread() + 562) = v2;
  return (unsigned int)v6;
}
