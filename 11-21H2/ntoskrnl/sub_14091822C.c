/*
 * XREFs of sub_14091822C @ 0x14091822C
 * Callers:
 *     sub_140916918 @ 0x140916918 (sub_140916918.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140203DD0 (RtlGetDaclSecurityDescriptor.c)
 *     sub_1402A2104 @ 0x1402A2104 (sub_1402A2104.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14066FE80 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140678970 (RtlGetGroupSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140679440 (RtlGetOwnerSecurityDescriptor.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406CCBA0 (RtlSetSaclSecurityDescriptor.c)
 *     sub_1406EB5FC @ 0x1406EB5FC (sub_1406EB5FC.c)
 *     sub_140715D90 @ 0x140715D90 (sub_140715D90.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14078ED60 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14078EDC0 (RtlSetOwnerSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1407B3DD0 (SeCaptureSecurityDescriptor.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14091822C(ULONG_PTR BugCheckParameter3, __int64 a2, ULONG_PTR a3, __int64 a4, unsigned int a5)
{
  unsigned int v6; // r12d
  void *v7; // rsi
  unsigned int v8; // eax
  ULONG_PTR v9; // rdx
  __int64 v10; // r15
  bool v11; // zf
  __int64 v13; // rax
  int SaclSecurityDescriptor; // ebx
  BOOLEAN v15; // r13
  __int64 v16; // rax
  _WORD *v17; // rsi
  __int64 v18; // r13
  unsigned int BugCheckParameter4; // [rsp+30h] [rbp-41h]
  unsigned int BugCheckParameter4_4; // [rsp+34h] [rbp-3Dh] BYREF
  __int64 v22; // [rsp+38h] [rbp-39h] BYREF
  __int64 v23; // [rsp+40h] [rbp-31h] BYREF
  PSID Owner; // [rsp+48h] [rbp-29h] BYREF
  PACL Sacl; // [rsp+50h] [rbp-21h] BYREF
  void *v26; // [rsp+58h] [rbp-19h] BYREF
  __int64 v27; // [rsp+60h] [rbp-11h]
  _OWORD SecurityDescriptor[2]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v29; // [rsp+88h] [rbp+17h]
  BOOLEAN SaclDefaulted; // [rsp+D0h] [rbp+5Fh] BYREF
  BOOLEAN SaclPresent; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v32; // [rsp+E8h] [rbp+77h]

  v32 = a4;
  v23 = 0xFFFFFFFFLL;
  v22 = 0xFFFFFFFFLL;
  Owner = 0LL;
  v6 = -1;
  Sacl = 0LL;
  v7 = 0LL;
  v8 = *(_DWORD *)(a4 + 44);
  v9 = *(unsigned int *)(a2 + 44);
  v10 = 0LL;
  v11 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v29 = 0LL;
  SaclPresent = 0;
  SaclDefaulted = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  BugCheckParameter4_4 = -1;
  v26 = 0LL;
  BugCheckParameter4 = v8;
  if ( v11 )
    v13 = sub_1407C9820(BugCheckParameter3, v9, (unsigned int *)&v23);
  else
    v13 = sub_1406BF400(BugCheckParameter3, v9, &v23);
  v27 = v13;
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                             (PSECURITY_DESCRIPTOR)(v13 + 20),
                             &SaclPresent,
                             &Sacl,
                             &SaclDefaulted);
  if ( SaclSecurityDescriptor < 0 )
    goto LABEL_32;
  v15 = SaclPresent;
  if ( !SaclPresent )
    goto LABEL_23;
  if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
    v16 = sub_1406BF400(a3, BugCheckParameter4, &v22);
  else
    v16 = sub_1407C9820(a3, BugCheckParameter4, (unsigned int *)&v22);
  v17 = (_WORD *)(v16 + 20);
  v10 = v16;
  SaclSecurityDescriptor = RtlCreateSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 *)(v16 + 20));
  if ( SaclSecurityDescriptor >= 0 )
  {
    WORD1(SecurityDescriptor[0]) = v17[1] & 0x7FFF;
    SaclSecurityDescriptor = RtlSetSaclSecurityDescriptor(SecurityDescriptor, v15, Sacl, SaclDefaulted);
    if ( SaclSecurityDescriptor >= 0 )
    {
      SaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(v17, &Owner, &SaclDefaulted);
      if ( SaclSecurityDescriptor >= 0 )
      {
        SaclSecurityDescriptor = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
        if ( SaclSecurityDescriptor >= 0 )
        {
          SaclSecurityDescriptor = RtlGetGroupSecurityDescriptor(v17, &Owner, &SaclDefaulted);
          if ( SaclSecurityDescriptor >= 0 )
          {
            SaclSecurityDescriptor = RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
            if ( SaclSecurityDescriptor >= 0 )
            {
              SaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v17, &SaclPresent, &Sacl, &SaclDefaulted);
              if ( SaclSecurityDescriptor >= 0 )
              {
                SaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(
                                           SecurityDescriptor,
                                           SaclPresent,
                                           Sacl,
                                           SaclDefaulted);
                if ( SaclSecurityDescriptor >= 0 )
                {
                  SaclSecurityDescriptor = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, 1, 1, &v26);
                  if ( SaclSecurityDescriptor < 0
                    || (SaclSecurityDescriptor = sub_14071F300(a3, BugCheckParameter4, 0), SaclSecurityDescriptor < 0)
                    || (SaclSecurityDescriptor = sub_14071F300(a3, *(unsigned int *)(v10 + 4), 0),
                        SaclSecurityDescriptor < 0)
                    || (SaclSecurityDescriptor = sub_14071F300(a3, *(unsigned int *)(v10 + 8), 0),
                        SaclSecurityDescriptor < 0) )
                  {
                    v7 = v26;
                  }
                  else
                  {
                    v7 = v26;
                    v18 = v32;
                    SaclSecurityDescriptor = sub_1406EB5FC(a3, a5, v32, v26, 0, &BugCheckParameter4_4);
                    if ( SaclSecurityDescriptor >= 0 )
                    {
                      sub_140715D90(a3, a5);
                      v6 = -1;
                      *(_DWORD *)(v18 + 44) = BugCheckParameter4_4;
LABEL_23:
                      SaclSecurityDescriptor = 0;
                      goto LABEL_24;
                    }
                    v6 = BugCheckParameter4_4;
                  }
LABEL_24:
                  if ( v7 )
                    SeReleaseSecurityDescriptor(v7, 0, 1);
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v10 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      sub_1406BF450(a3, &v22);
    else
      sub_1407C97C0(a3, (unsigned int *)&v22);
  }
LABEL_32:
  if ( v27 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v23);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v23);
  }
  if ( v6 != -1 )
    sub_1402A2104(a3, v6);
  return (unsigned int)SaclSecurityDescriptor;
}
