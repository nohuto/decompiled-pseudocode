/*
 * XREFs of sub_1403AC9F8 @ 0x1403AC9F8
 * Callers:
 *     sub_1403AC640 @ 0x1403AC640 (sub_1403AC640.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_1403ACC4C @ 0x1403ACC4C (sub_1403ACC4C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1403AC9F8(__int64 *a1, __int64 *a2, unsigned int *a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 *v6; // rdi
  __int64 v8; // r13
  unsigned int *v9; // r14
  unsigned int v11; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  int *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  REGHANDLE v16; // r14
  int v18; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v19; // [rsp+48h] [rbp-61h] BYREF
  int v20; // [rsp+50h] [rbp-59h] BYREF
  unsigned int *v21; // [rsp+58h] [rbp-51h]
  __int64 v22; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  int *v24; // [rsp+80h] [rbp-29h]
  __int64 v25; // [rsp+88h] [rbp-21h]
  __int64 *v26; // [rsp+90h] [rbp-19h]
  __int64 v27; // [rsp+98h] [rbp-11h]
  int *v28; // [rsp+A0h] [rbp-9h]
  __int64 v29; // [rsp+A8h] [rbp-1h]

  v6 = (__int64 *)qword_140C4C758;
  v8 = qword_140C4C730;
  v9 = a3;
  v21 = a3;
  v11 = 0;
  *a1 = 0LL;
  *a2 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  *a3 = *((_DWORD *)CurrentPrcb + 9);
  if ( a6 )
  {
    v13 = (int *)v8;
    do
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v11 == *((_DWORD *)CurrentPrcb + 9) )
      {
        *v6 = 0LL;
        *v13 = 0;
      }
      else
      {
        v14 = sub_1403ACC4C(v11, v8 + 4LL * v11);
        *v6 = v14;
        if ( v14 < *a1 )
          *a1 = v14;
        v15 = *v6;
        if ( *v6 > *a2 )
        {
          *a2 = v15;
          *v9 = v11;
          v15 = *v6;
        }
        v20 = *v13;
        v22 = v15;
        LODWORD(CurrentPrcb) = *((_DWORD *)KeGetCurrentPrcb() + 9);
        v19 = v11;
        v18 = (int)CurrentPrcb;
        if ( byte_140C4C688 )
        {
          v16 = qword_140C4C680;
          LOBYTE(CurrentPrcb) = EtwEventEnabled(qword_140C4C680, &stru_1400394E8);
          if ( (_BYTE)CurrentPrcb )
          {
            v27 = 8LL;
            *(_QWORD *)&UserData.Size = 4LL;
            UserData.Ptr = (ULONGLONG)&v18;
            v25 = 4LL;
            v24 = (int *)&v19;
            v29 = 4LL;
            v26 = &v22;
            v28 = &v20;
            LOBYTE(CurrentPrcb) = EtwWriteEx(v16, &stru_1400394E8, 0LL, 0, 0LL, 0LL, 4u, &UserData);
          }
          v9 = v21;
        }
      }
      ++v11;
      ++v13;
      ++v6;
    }
    while ( v11 < a6 );
  }
  return (char)CurrentPrcb;
}
