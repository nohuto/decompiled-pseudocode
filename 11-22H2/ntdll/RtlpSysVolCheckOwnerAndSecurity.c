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

__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(HANDLE Handle, PACL Dacl)
{
  unsigned __int32 v2; // ebx
  PVOID Heap; // rdi
  NTSTATUS DaclSecurityDescriptor; // esi
  ULONG i; // r14d
  NTSTATUS v8; // eax
  _BYTE *v9; // rsi
  void *v10; // r8
  PVOID v12; // rax
  void *v13; // rsi
  NTSTATUS SelfRelativeSD; // r14d
  NTSTATUS v15; // eax
  void *ProcessHeap; // rcx
  PVOID v17; // rax
  void *v18; // rsi
  void *v19; // r8
  ULONG Length; // [rsp+30h] [rbp-29h] BYREF
  BOOLEAN DaclPresent; // [rsp+34h] [rbp-25h] BYREF
  BOOLEAN DaclDefaulted[3]; // [rsp+35h] [rbp-24h] BYREF
  PACL Dacla; // [rsp+38h] [rbp-21h] BYREF
  PVOID Ace; // [rsp+40h] [rbp-19h] BYREF
  PSID Owner; // [rsp+48h] [rbp-11h] BYREF
  __int16 Sid2; // [rsp+50h] [rbp-9h] BYREF
  int v27; // [rsp+52h] [rbp-7h]
  __int16 v28; // [rsp+56h] [rbp-3h]
  int v29; // [rsp+58h] [rbp-1h]
  int v30; // [rsp+5Ch] [rbp+3h]
  __int16 v31; // [rsp+68h] [rbp+Fh] BYREF
  int v32; // [rsp+6Ah] [rbp+11h]
  __int16 v33; // [rsp+6Eh] [rbp+15h]
  int v34; // [rsp+70h] [rbp+17h]

  v2 = 0;
  Dacla = 0LL;
  if ( NtQuerySecurityObject(Handle, 5u, 0LL, 0, &Length) != -1073741789 )
    return 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Length);
  if ( !Heap )
    return 3221225626LL;
  DaclSecurityDescriptor = NtQuerySecurityObject(Handle, 5u, Heap, Length, &Length);
  if ( DaclSecurityDescriptor < 0
    || (DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(Heap, &DaclPresent, &Dacla, DaclDefaulted),
        DaclSecurityDescriptor < 0)
    || (DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(Heap, &Owner, DaclDefaulted), DaclSecurityDescriptor < 0) )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    goto LABEL_31;
  }
  v32 = 0;
  v27 = 0;
  v31 = 257;
  v33 = 1280;
  v34 = 18;
  Sid2 = 513;
  v28 = 1280;
  v29 = 32;
  v30 = 544;
  if ( Owner && RtlEqualSid(Owner, &Sid2) && DaclPresent && Dacla )
  {
    for ( i = 0; ; ++i )
    {
      v8 = RtlGetAce(Dacla, i, &Ace);
      v9 = Ace;
      if ( v8 < 0 )
        v9 = 0LL;
      Ace = v9;
      if ( !v9 )
        break;
      if ( !*v9 && RtlEqualSid(v9 + 8, &v31) )
      {
        if ( (v9[1] & 3) == 3 )
          goto LABEL_17;
        v9[1] |= 3u;
        v15 = NtSetSecurityObject(Handle, 4u, Heap);
        goto LABEL_34;
      }
    }
  }
  LODWORD(Dacla) = Length;
  if ( RtlSelfRelativeToAbsoluteSD2(Heap, (PULONG)&Dacla) != -1073741789 )
    goto LABEL_22;
  v12 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Dacla);
  v13 = v12;
  if ( !v12 )
  {
LABEL_37:
    v2 = -1073741670;
    goto LABEL_17;
  }
  memmove(v12, Heap, Length);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  Length = (unsigned int)Dacla;
  Heap = v13;
  SelfRelativeSD = RtlSelfRelativeToAbsoluteSD2(v13, &Length);
  if ( SelfRelativeSD >= 0 )
  {
LABEL_22:
    v15 = RtlSetOwnerSecurityDescriptor(Heap, &Sid2, 0);
    if ( v15 < 0 || (v15 = RtlSetDaclSecurityDescriptor(Heap, 1u, Dacl, 0), v15 < 0) )
    {
LABEL_34:
      v2 = v15;
LABEL_17:
      v10 = Heap;
LABEL_18:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      return v2;
    }
    LODWORD(Dacla) = 0;
    DaclSecurityDescriptor = RtlMakeSelfRelativeSD(Heap, 0LL, (PULONG)&Dacla);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( DaclSecurityDescriptor == -1073741789 )
    {
      v17 = RtlAllocateHeap(ProcessHeap, 0, (unsigned int)Dacla);
      v18 = v17;
      if ( v17 )
      {
        SelfRelativeSD = RtlMakeSelfRelativeSD(Heap, v17, (PULONG)&Dacla);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        v19 = v18;
        if ( SelfRelativeSD >= 0 )
        {
          Length = (unsigned int)Dacla;
          v2 = NtSetSecurityObject(Handle, 5u, v18);
          v10 = v18;
          goto LABEL_18;
        }
        goto LABEL_36;
      }
      goto LABEL_37;
    }
LABEL_31:
    RtlFreeHeap(ProcessHeap, 0, Heap);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v19 = v13;
LABEL_36:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
  return (unsigned int)SelfRelativeSD;
}
