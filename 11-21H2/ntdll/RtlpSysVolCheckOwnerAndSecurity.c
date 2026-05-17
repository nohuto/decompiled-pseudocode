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

__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  const void *Heap; // rdi
  int DaclSecurityDescriptor; // esi
  unsigned int i; // r14d
  int Ace; // eax
  _BYTE *v9; // rsi
  char v10; // al
  __int64 v11; // r8
  void *v13; // rax
  const void *v14; // rsi
  int SelfRelativeSD; // r14d
  int v16; // eax
  void *ProcessHeap; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r8
  unsigned int Size; // [rsp+30h] [rbp-29h] BYREF
  char Size_4; // [rsp+34h] [rbp-25h] BYREF
  _BYTE Size_5[3]; // [rsp+35h] [rbp-24h] BYREF
  __int64 v24; // [rsp+38h] [rbp-21h] BYREF
  _BYTE *v25; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int8 *v26; // [rsp+48h] [rbp-11h] BYREF
  __int16 v27; // [rsp+50h] [rbp-9h] BYREF
  int v28; // [rsp+52h] [rbp-7h]
  __int16 v29; // [rsp+56h] [rbp-3h]
  int v30; // [rsp+58h] [rbp-1h]
  int v31; // [rsp+5Ch] [rbp+3h]
  __int16 v32; // [rsp+68h] [rbp+Fh] BYREF
  int v33; // [rsp+6Ah] [rbp+11h]
  __int16 v34; // [rsp+6Eh] [rbp+15h]
  int v35; // [rsp+70h] [rbp+17h]

  v2 = 0;
  v24 = 0LL;
  if ( (unsigned int)NtQuerySecurityObject(a1, 5LL, 0LL, 0LL, &Size) != -1073741789 )
    return 0LL;
  Heap = (const void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Size);
  if ( !Heap )
    return 3221225626LL;
  DaclSecurityDescriptor = NtQuerySecurityObject(a1, 5LL, Heap, Size, &Size);
  if ( DaclSecurityDescriptor < 0
    || (DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(Heap, &Size_4, &v24, Size_5), DaclSecurityDescriptor < 0)
    || (DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(Heap, &v26, Size_5), DaclSecurityDescriptor < 0) )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    goto LABEL_32;
  }
  v33 = 0;
  v28 = 0;
  v32 = 257;
  v34 = 1280;
  v35 = 18;
  v27 = 513;
  v29 = 1280;
  v30 = 32;
  v31 = 544;
  if ( v26 && RtlEqualSid(v26, &v27) && Size_4 && v24 )
  {
    for ( i = 0; ; ++i )
    {
      Ace = RtlGetAce(v24, i, &v25);
      v9 = v25;
      if ( Ace < 0 )
        v9 = 0LL;
      v25 = v9;
      if ( !v9 )
        break;
      if ( !*v9 && RtlEqualSid(v9 + 8, &v32) )
      {
        v10 = v9[1];
        if ( (v10 & 1) == 0 || (v10 & 2) == 0 )
        {
          v9[1] = v10 | 3;
          v16 = NtSetSecurityObject(a1, 4LL, Heap);
          goto LABEL_35;
        }
        goto LABEL_18;
      }
    }
  }
  LODWORD(v24) = Size;
  if ( (unsigned int)RtlSelfRelativeToAbsoluteSD2(Heap, &v24) != -1073741789 )
    goto LABEL_23;
  v13 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)v24);
  v14 = v13;
  if ( !v13 )
  {
LABEL_38:
    v2 = -1073741670;
    goto LABEL_18;
  }
  memmove(v13, Heap, Size);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  Size = v24;
  Heap = v14;
  SelfRelativeSD = RtlSelfRelativeToAbsoluteSD2(v14, &Size);
  if ( SelfRelativeSD >= 0 )
  {
LABEL_23:
    v16 = RtlSetOwnerSecurityDescriptor((__int64)Heap, (__int64)&v27, 0);
    if ( v16 < 0 || (v16 = RtlSetDaclSecurityDescriptor((__int64)Heap, 1, a2, 0), v16 < 0) )
    {
LABEL_35:
      v2 = v16;
LABEL_18:
      v11 = (__int64)Heap;
LABEL_19:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
      return v2;
    }
    LODWORD(v24) = 0;
    DaclSecurityDescriptor = RtlMakeSelfRelativeSD(Heap, 0LL, &v24);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( DaclSecurityDescriptor == -1073741789 )
    {
      v18 = RtlAllocateHeap((__int64)ProcessHeap, 0, (unsigned int)v24);
      v19 = v18;
      if ( v18 )
      {
        SelfRelativeSD = RtlMakeSelfRelativeSD(Heap, v18, &v24);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
        v20 = v19;
        if ( SelfRelativeSD >= 0 )
        {
          Size = v24;
          v2 = NtSetSecurityObject(a1, 5LL, v19);
          v11 = v19;
          goto LABEL_19;
        }
        goto LABEL_37;
      }
      goto LABEL_38;
    }
LABEL_32:
    RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Heap);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v20 = (__int64)v14;
LABEL_37:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v20);
  return (unsigned int)SelfRelativeSD;
}
