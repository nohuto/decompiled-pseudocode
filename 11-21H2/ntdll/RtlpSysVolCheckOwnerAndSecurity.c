/*
 * XREFs of RtlpSysVolCheckOwnerAndSecurity @ 0x1800718B4
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x180071520 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlEqualSid @ 0x180012520 (RtlEqualSid.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180049B90 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x18004D6E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x180071BF0 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetDaclSecurityDescriptor @ 0x180071C30 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetAce @ 0x180071CE0 (RtlGetAce.c)
 *     RtlMakeSelfRelativeSD @ 0x180071FE0 (RtlMakeSelfRelativeSD.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x18008FF50 (RtlSelfRelativeToAbsoluteSD2.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtQuerySecurityObject @ 0x1800A6CC0 (NtQuerySecurityObject.c)
 *     NtSetSecurityObject @ 0x1800A76A0 (NtSetSecurityObject.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(HANDLE Handle, PACL Dacl)
{
  unsigned __int32 v2; // ebx
  PVOID Heap; // rdi
  NTSTATUS DaclSecurityDescriptor; // esi
  ULONG i; // r14d
  NTSTATUS v8; // eax
  _BYTE *v9; // rsi
  char v10; // al
  void *v11; // r8
  PVOID v13; // rax
  void *v14; // rsi
  NTSTATUS SelfRelativeSD; // r14d
  NTSTATUS v16; // eax
  void *ProcessHeap; // rcx
  PVOID v18; // rax
  void *v19; // rsi
  void *v20; // r8
  ULONG Length; // [rsp+30h] [rbp-29h] BYREF
  BOOLEAN DaclPresent; // [rsp+34h] [rbp-25h] BYREF
  BOOLEAN DaclDefaulted[3]; // [rsp+35h] [rbp-24h] BYREF
  PACL Dacla; // [rsp+38h] [rbp-21h] BYREF
  PVOID Ace; // [rsp+40h] [rbp-19h] BYREF
  PSID Owner; // [rsp+48h] [rbp-11h] BYREF
  __int16 Sid2; // [rsp+50h] [rbp-9h] BYREF
  int v28; // [rsp+52h] [rbp-7h]
  __int16 v29; // [rsp+56h] [rbp-3h]
  int v30; // [rsp+58h] [rbp-1h]
  int v31; // [rsp+5Ch] [rbp+3h]
  __int16 v32; // [rsp+68h] [rbp+Fh] BYREF
  int v33; // [rsp+6Ah] [rbp+11h]
  __int16 v34; // [rsp+6Eh] [rbp+15h]
  int v35; // [rsp+70h] [rbp+17h]

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
    goto LABEL_32;
  }
  v33 = 0;
  v28 = 0;
  v32 = 257;
  v34 = 1280;
  v35 = 18;
  Sid2 = 513;
  v29 = 1280;
  v30 = 32;
  v31 = 544;
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
      if ( !*v9 && RtlEqualSid(v9 + 8, &v32) )
      {
        v10 = v9[1];
        if ( (v10 & 1) == 0 || (v10 & 2) == 0 )
        {
          v9[1] = v10 | 3;
          v16 = NtSetSecurityObject(Handle, 4u, Heap);
          goto LABEL_35;
        }
        goto LABEL_18;
      }
    }
  }
  LODWORD(Dacla) = Length;
  if ( RtlSelfRelativeToAbsoluteSD2(Heap, (PULONG)&Dacla) != -1073741789 )
    goto LABEL_23;
  v13 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Dacla);
  v14 = v13;
  if ( !v13 )
  {
LABEL_38:
    v2 = -1073741670;
    goto LABEL_18;
  }
  memmove(v13, Heap, Length);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  Length = (unsigned int)Dacla;
  Heap = v14;
  SelfRelativeSD = RtlSelfRelativeToAbsoluteSD2(v14, &Length);
  if ( SelfRelativeSD >= 0 )
  {
LABEL_23:
    v16 = RtlSetOwnerSecurityDescriptor(Heap, &Sid2, 0);
    if ( v16 < 0 || (v16 = RtlSetDaclSecurityDescriptor(Heap, 1u, Dacl, 0), v16 < 0) )
    {
LABEL_35:
      v2 = v16;
LABEL_18:
      v11 = Heap;
LABEL_19:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
      return v2;
    }
    LODWORD(Dacla) = 0;
    DaclSecurityDescriptor = RtlMakeSelfRelativeSD(Heap, 0LL, (PULONG)&Dacla);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( DaclSecurityDescriptor == -1073741789 )
    {
      v18 = RtlAllocateHeap(ProcessHeap, 0, (unsigned int)Dacla);
      v19 = v18;
      if ( v18 )
      {
        SelfRelativeSD = RtlMakeSelfRelativeSD(Heap, v18, (PULONG)&Dacla);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        v20 = v19;
        if ( SelfRelativeSD >= 0 )
        {
          Length = (unsigned int)Dacla;
          v2 = NtSetSecurityObject(Handle, 5u, v19);
          v11 = v19;
          goto LABEL_19;
        }
        goto LABEL_37;
      }
      goto LABEL_38;
    }
LABEL_32:
    RtlFreeHeap(ProcessHeap, 0, Heap);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v20 = v14;
LABEL_37:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v20);
  return (unsigned int)SelfRelativeSD;
}
