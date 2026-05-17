/*
 * XREFs of RtlpSysVolCheckOwnerAndSecurity @ 0x18006C714
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x18006C380 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlEqualSid @ 0x180010A40 (RtlEqualSid.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180014870 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180014930 (RtlSetDaclSecurityDescriptor.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x18006CA50 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetDaclSecurityDescriptor @ 0x18006CAE0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetAce @ 0x18006CB40 (RtlGetAce.c)
 *     RtlMakeSelfRelativeSD @ 0x18006CE40 (RtlMakeSelfRelativeSD.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x1800899A0 (RtlSelfRelativeToAbsoluteSD2.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQuerySecurityObject @ 0x1800A1AA0 (NtQuerySecurityObject.c)
 *     NtSetSecurityObject @ 0x1800A24A0 (NtSetSecurityObject.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  const void *Heap; // rdi
  int DaclSecurityDescriptor; // esi
  unsigned int i; // r14d
  int Ace; // eax
  _BYTE *v9; // rsi
  __int64 v10; // r8
  void *v12; // rax
  const void *v13; // rsi
  int SelfRelativeSD; // r14d
  int v15; // eax
  void *ProcessHeap; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r8
  unsigned int Size; // [rsp+30h] [rbp-29h] BYREF
  char Size_4; // [rsp+34h] [rbp-25h] BYREF
  _BYTE Size_5[3]; // [rsp+35h] [rbp-24h] BYREF
  __int64 v23; // [rsp+38h] [rbp-21h] BYREF
  _BYTE *v24; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int8 *v25; // [rsp+48h] [rbp-11h] BYREF
  __int16 v26; // [rsp+50h] [rbp-9h] BYREF
  int v27; // [rsp+52h] [rbp-7h]
  __int16 v28; // [rsp+56h] [rbp-3h]
  int v29; // [rsp+58h] [rbp-1h]
  int v30; // [rsp+5Ch] [rbp+3h]
  __int16 v31; // [rsp+68h] [rbp+Fh] BYREF
  int v32; // [rsp+6Ah] [rbp+11h]
  __int16 v33; // [rsp+6Eh] [rbp+15h]
  int v34; // [rsp+70h] [rbp+17h]

  v2 = 0;
  v23 = 0LL;
  if ( (unsigned int)NtQuerySecurityObject(a1, 5LL, 0LL, 0LL, &Size) != -1073741789 )
    return 0LL;
  Heap = (const void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Size);
  if ( !Heap )
    return 3221225626LL;
  DaclSecurityDescriptor = NtQuerySecurityObject(a1, 5LL, Heap, Size, &Size);
  if ( DaclSecurityDescriptor < 0
    || (DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(Heap, &Size_4, &v23, Size_5), DaclSecurityDescriptor < 0)
    || (DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(Heap, &v25, Size_5), DaclSecurityDescriptor < 0) )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    goto LABEL_31;
  }
  v32 = 0;
  v27 = 0;
  v31 = 257;
  v33 = 1280;
  v34 = 18;
  v26 = 513;
  v28 = 1280;
  v29 = 32;
  v30 = 544;
  if ( v25 && RtlEqualSid(v25, &v26) && Size_4 && v23 )
  {
    for ( i = 0; ; ++i )
    {
      Ace = RtlGetAce(v23, i, &v24);
      v9 = v24;
      if ( Ace < 0 )
        v9 = 0LL;
      v24 = v9;
      if ( !v9 )
        break;
      if ( !*v9 && RtlEqualSid(v9 + 8, &v31) )
      {
        if ( (v9[1] & 3) == 3 )
          goto LABEL_17;
        v9[1] |= 3u;
        v15 = NtSetSecurityObject(a1, 4LL, Heap);
        goto LABEL_34;
      }
    }
  }
  LODWORD(v23) = Size;
  if ( (unsigned int)RtlSelfRelativeToAbsoluteSD2(Heap, &v23) != -1073741789 )
    goto LABEL_22;
  v12 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)v23);
  v13 = v12;
  if ( !v12 )
  {
LABEL_37:
    v2 = -1073741670;
    goto LABEL_17;
  }
  memmove(v12, Heap, Size);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  Size = v23;
  Heap = v13;
  SelfRelativeSD = RtlSelfRelativeToAbsoluteSD2(v13, &Size);
  if ( SelfRelativeSD >= 0 )
  {
LABEL_22:
    v15 = RtlSetOwnerSecurityDescriptor((__int64)Heap, (__int64)&v26, 0);
    if ( v15 < 0 || (v15 = RtlSetDaclSecurityDescriptor((__int64)Heap, 1, a2, 0), v15 < 0) )
    {
LABEL_34:
      v2 = v15;
LABEL_17:
      v10 = (__int64)Heap;
LABEL_18:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
      return v2;
    }
    LODWORD(v23) = 0;
    DaclSecurityDescriptor = RtlMakeSelfRelativeSD(Heap, 0LL, &v23);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( DaclSecurityDescriptor == -1073741789 )
    {
      v17 = RtlAllocateHeap((__int64)ProcessHeap, 0, (unsigned int)v23);
      v18 = v17;
      if ( v17 )
      {
        SelfRelativeSD = RtlMakeSelfRelativeSD(Heap, v17, &v23);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
        v19 = v18;
        if ( SelfRelativeSD >= 0 )
        {
          Size = v23;
          v2 = NtSetSecurityObject(a1, 5LL, v18);
          v10 = v18;
          goto LABEL_18;
        }
        goto LABEL_36;
      }
      goto LABEL_37;
    }
LABEL_31:
    RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Heap);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v19 = (__int64)v13;
LABEL_36:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v19);
  return (unsigned int)SelfRelativeSD;
}
