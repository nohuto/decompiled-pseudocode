/*
 * XREFs of SepAdjustPrivileges @ 0x1406BAA50
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x1406BA670 (NtAdjustPrivilegesToken.c)
 * Callees:
 *     RtlSidDominates @ 0x140226B40 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x140226C50 (SepCopyTokenIntegrity.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SepAdtTokenRightAdjusted @ 0x1406BB18C (SepAdtTokenRightAdjusted.c)
 */

NTSTATUS __fastcall SepAdjustPrivileges(
        __int64 a1,
        BOOLEAN a2,
        char a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6,
        int *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int v10; // r12d
  unsigned int v11; // r14d
  NTSTATUS result; // eax
  int v14; // esi
  __int64 v16; // rdx
  unsigned __int64 v17; // r13
  __int64 v18; // r9
  __int64 v19; // r8
  char v20; // r10
  int v21; // r11d
  unsigned int v22; // eax
  unsigned int v23; // edx
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  signed int i; // edx
  int v35; // r8d
  int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  BOOLEAN Dominates[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v42; // [rsp+3Ch] [rbp-CCh]
  _QWORD Sid1[3]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+58h] [rbp-B0h]
  unsigned int v45; // [rsp+68h] [rbp-A0h]
  NTSTATUS v46; // [rsp+6Ch] [rbp-9Ch]
  __int64 v47; // [rsp+70h] [rbp-98h]
  _BYTE *v48; // [rsp+78h] [rbp-90h]
  int *v49; // [rsp+80h] [rbp-88h]
  _QWORD v50[54]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v51[54]; // [rsp+238h] [rbp+130h] BYREF

  v10 = 0;
  v11 = 0;
  v49 = a7;
  HIDWORD(Sid1[0]) = 0;
  Dominates[1] = 0;
  Dominates[2] = 0;
  LOBYTE(Sid1[0]) = 0;
  v42 = 0;
  Dominates[0] = a2;
  v44 = 0LL;
  v45 = a4;
  v48 = a9;
  *(_OWORD *)&Sid1[1] = 0LL;
  memset(v50, 0, sizeof(v50));
  memset(v51, 0, sizeof(v51));
  *a8 = 0;
  *a9 = 0;
  SepCopyTokenIntegrity(a1, (__int64)&Sid1[1]);
  result = RtlSidDominates((PSID)Sid1[1], SeHighMandatorySid, &Dominates[1]);
  v46 = result;
  v14 = result;
  if ( result < 0 )
    return result;
  if ( !Dominates[1] )
  {
    result = RtlSidDominates((PSID)Sid1[1], SeMediumMandatorySid, &Dominates[2]);
    v46 = result;
    v14 = result;
    if ( result < 0 )
      return result;
    v31 = LOBYTE(Sid1[0]);
    if ( !Dominates[2] )
      v31 = 1;
    LODWORD(Sid1[0]) = v31;
  }
  if ( a3 )
  {
    for ( i = 0; (unsigned int)i <= 0x24; ++i )
    {
      if ( ((1LL << i) & *(_QWORD *)(a1 + 72)) != 0 )
      {
        if ( Dominates[0] )
        {
          v35 = -(((1LL << i) & *(_QWORD *)(a1 + 80)) != 0);
          Sid1[1] = i;
          v36 = 2 - v35;
          v44 = i;
          v37 = v11++;
          v38 = 3 * v37;
          *(_QWORD *)((char *)v50 + 4 * v38) = i;
          *((_DWORD *)&v50[1] + v38) = v36;
          if ( a6 )
          {
            v39 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(a6 + 4 * v39 + 4) = i;
            *(_DWORD *)(a6 + 4 * v39 + 12) = v36;
          }
          v40 = *(_QWORD *)(a1 + 72);
          _bittestandreset64(&v40, (unsigned int)i);
          *(_QWORD *)(a1 + 72) = v40;
        }
        ++*a8;
      }
    }
    goto LABEL_37;
  }
  if ( !v45 )
  {
LABEL_37:
    v23 = 0;
    goto LABEL_16;
  }
  v16 = v45;
  Sid1[1] = v45;
  do
  {
    v17 = *a5;
    v18 = *(_QWORD *)(a1 + 64);
    if ( !_bittest64(&v18, v17) )
      goto LABEL_13;
    ++HIDWORD(Sid1[0]);
    v19 = *(_QWORD *)(a1 + 72);
    v44 = *(_QWORD *)a5;
    v20 = v44;
    v21 = ((v19 & (1LL << v20)) != 0 ? 2 : 0) | (((1LL << v20) & *(_QWORD *)(a1 + 80)) != 0);
    v22 = a5[2];
    LODWORD(v47) = v22;
    if ( (v22 & 4) == 0 )
    {
      if ( _bittest64(&v19, (unsigned int)v17) || (v22 & 2) == 0 )
      {
        if ( (_bittest64(&v19, (unsigned int)v17) & ((v47 & 2) == 0)) == 0 )
        {
LABEL_12:
          v16 = Sid1[1];
          goto LABEL_13;
        }
        if ( !Dominates[0] )
        {
LABEL_27:
          ++*a8;
          goto LABEL_12;
        }
        if ( a6 )
        {
          v28 = 3LL * (unsigned int)*a8;
          *(_QWORD *)(a6 + 4 * v28 + 4) = v44;
          *(_DWORD *)(a6 + 4 * v28 + 12) = v21;
        }
        v29 = 3LL * v11;
        *(_QWORD *)((char *)v50 + 4 * v29) = v44;
        *((_DWORD *)&v50[1] + v29) = v21;
        ++v11;
        v26 = *(_QWORD *)(a1 + 72) & ~(1LL << v20);
LABEL_26:
        *(_QWORD *)(a1 + 72) = v26;
        goto LABEL_27;
      }
      if ( !Dominates[0] )
        goto LABEL_27;
      if ( a6 )
      {
        v30 = 3LL * (unsigned int)*a8;
        *(_QWORD *)(a6 + 4 * v30 + 4) = v44;
        *(_DWORD *)(a6 + 4 * v30 + 12) = v21;
      }
      v24 = v42;
      v25 = 3LL * v42;
      *(_QWORD *)((char *)v51 + 4 * v25) = v44;
      *((_DWORD *)&v51[1] + v25) = v21;
      v42 = v24 + 1;
      if ( Dominates[1] )
      {
LABEL_25:
        v26 = *(_QWORD *)(a1 + 72) | (1LL << v20);
        goto LABEL_26;
      }
      if ( Dominates[2] )
      {
        v32 = 0x1120160684LL;
        if ( !_bittest64(&v32, *a5) )
          goto LABEL_25;
      }
      else
      {
        if ( !LOBYTE(Sid1[0]) )
          goto LABEL_27;
        if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
          v33 = 0x200800000LL;
        else
          v33 = 0x202800000LL;
        if ( ((1LL << *a5) & v33) != 0 )
          goto LABEL_25;
      }
      ++v10;
      goto LABEL_27;
    }
    v16 = Sid1[1];
    if ( Dominates[0] )
    {
      *(_QWORD *)(a1 + 72) = v19 & ~(1LL << v44);
      *(_DWORD *)(a1 + 200) |= 0x800u;
      *(_QWORD *)(a1 + 64) = v18 & ~(1LL << v20);
    }
LABEL_13:
    a5 += 3;
    Sid1[1] = --v16;
  }
  while ( v16 );
  v14 = v46;
  if ( HIDWORD(Sid1[0]) < v45 || (v23 = v42, v10) )
  {
    v14 = 262;
    v23 = v42;
  }
LABEL_16:
  if ( *a8 && Dominates[0] )
  {
    *v48 = 1;
    SepAdtTokenRightAdjusted(a1, (unsigned int)v50, v11, (unsigned int)v51, v23, v14 >= 0);
  }
  if ( a6 )
  {
    if ( *a8 > 1u )
      v27 = 12 * *a8 + 4;
    else
      v27 = 16;
    *v49 = v27;
  }
  return v14;
}
