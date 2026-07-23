/*
 * XREFs of sub_1403AC640 @ 0x1403AC640
 * Callers:
 *     sub_1403AC910 @ 0x1403AC910 (sub_1403AC910.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140398190 @ 0x140398190 (sub_140398190.c)
 *     sub_1403AC88C @ 0x1403AC88C (sub_1403AC88C.c)
 *     sub_1403AC9F8 @ 0x1403AC9F8 (sub_1403AC9F8.c)
 *     sub_1403ACB14 @ 0x1403ACB14 (sub_1403ACB14.c)
 *     sub_1403ACEFC @ 0x1403ACEFC (sub_1403ACEFC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14050DD30 @ 0x14050DD30 (sub_14050DD30.c)
 */

char __fastcall sub_1403AC640(__int64 a1)
{
  __int64 v2; // r15
  unsigned int v3; // ebx
  int v4; // r9d
  __int64 v5; // r14
  unsigned int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned int v9; // r10d
  unsigned int i; // esi
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rsi
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v15; // rdx
  REGHANDLE v16; // r14
  int v18; // [rsp+48h] [rbp-59h] BYREF
  __int64 v19; // [rsp+50h] [rbp-51h] BYREF
  __int64 v20; // [rsp+58h] [rbp-49h] BYREF
  int v21; // [rsp+60h] [rbp-41h] BYREF
  int v22; // [rsp+68h] [rbp-39h] BYREF
  int v23; // [rsp+70h] [rbp-31h] BYREF
  int v24; // [rsp+78h] [rbp-29h] BYREF
  int v25; // [rsp+80h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-19h] BYREF
  int *v27; // [rsp+98h] [rbp-9h]
  __int64 v28; // [rsp+A0h] [rbp-1h]
  int *v29; // [rsp+A8h] [rbp+7h]
  __int64 v30; // [rsp+B0h] [rbp+Fh]
  int *v31; // [rsp+B8h] [rbp+17h]
  __int64 v32; // [rsp+C0h] [rbp+1Fh]
  int *v33; // [rsp+C8h] [rbp+27h]
  __int64 v34; // [rsp+D0h] [rbp+2Fh]

  v2 = *((unsigned int *)KeGetCurrentPrcb() + 9);
  v3 = 0;
  v5 = sub_1403AC88C(v2);
  if ( byte_140C0C690 )
  {
    if ( !dword_140C0C68C )
      dword_140C0C68C = 500;
    if ( *(_BYTE *)(a1 + 34) )
    {
      sub_1403ACB14(*(unsigned int *)(a1 + 36));
    }
    else
    {
      v19 = 0LL;
      v20 = 0LL;
      v18 = *((_DWORD *)KeGetCurrentPrcb() + 9);
      sub_1403AC9F8((unsigned int)&v19, (unsigned int)&v20, (unsigned int)&v18, v4);
      if ( v18 != *((_DWORD *)KeGetCurrentPrcb() + 9) )
      {
        sub_1403AC88C((unsigned int)v2);
        LODWORD(v2) = v6;
        v7 = sub_1403AC88C(v6);
        v5 = v7 - v8;
        sub_140398190(v9);
      }
      for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
      {
        if ( i != *((_DWORD *)KeGetCurrentPrcb() + 9) && i != v18 )
          sub_1403ACB14(i);
      }
    }
  }
  v19 = 0LL;
  v20 = 0LL;
  v18 = *((_DWORD *)KeGetCurrentPrcb() + 9);
  sub_1403AC9F8((unsigned int)&v19, (unsigned int)&v20, (unsigned int)&v18, v4);
  v11 = (unsigned __int64)(1000000 * (sub_1403AC88C((unsigned int)v2) - v5)) / *(_QWORD *)KeGetPcr()->HalReserved;
  v12 = sub_1403ACEFC(5, 0, 0, 0, 1);
  v13 = v12;
  qword_140C4C760 = v20 - v19;
  if ( v20 - v19 > (unsigned __int64)(unsigned int)dword_140C4C74C )
  {
    *(_DWORD *)(v12 + 184) &= ~0x20u;
    byte_140C4C748 = 1;
    LOBYTE(CurrentPrcb) = sub_14050DD30(&stru_140038348);
  }
  else
  {
    v24 = v19;
    v23 = v20;
    v22 = v18;
    LODWORD(CurrentPrcb) = *((_DWORD *)KeGetCurrentPrcb() + 9);
    v21 = (int)CurrentPrcb;
    v25 = v11;
    if ( byte_140C4C688 )
    {
      v16 = qword_140C4C680;
      LOBYTE(CurrentPrcb) = EtwEventEnabled(qword_140C4C680, &stru_140038268);
      if ( (_BYTE)CurrentPrcb )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v21;
        v28 = 4LL;
        v27 = &v22;
        v30 = 4LL;
        v29 = &v23;
        v32 = 4LL;
        v31 = &v24;
        v34 = 4LL;
        v33 = &v25;
        LOBYTE(CurrentPrcb) = EtwWriteEx(v16, &stru_140038268, 0LL, 0, 0LL, 0LL, 5u, &UserData);
      }
    }
    *(_DWORD *)(v13 + 184) |= 0x20u;
  }
  if ( *(_DWORD *)(a1 + 40) )
  {
    do
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v3 != *((_DWORD *)CurrentPrcb + 9) )
      {
        v15 = (unsigned __int64)v3 << 7;
        _InterlockedExchange((volatile __int32 *)(v15 + qword_140C4C770), 7);
        LODWORD(CurrentPrcb) = *(_DWORD *)(v15 + qword_140C4C770);
        if ( (_DWORD)CurrentPrcb == 7 )
        {
          do
          {
            _mm_pause();
            LOBYTE(CurrentPrcb) = qword_140C4C770;
          }
          while ( *(_DWORD *)(v15 + qword_140C4C770) == 7 );
        }
      }
      ++v3;
    }
    while ( v3 < *(_DWORD *)(a1 + 40) );
  }
  return (char)CurrentPrcb;
}
