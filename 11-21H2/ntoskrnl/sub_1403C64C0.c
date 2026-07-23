/*
 * XREFs of sub_1403C64C0 @ 0x1403C64C0
 * Callers:
 *     sub_14082FBD4 @ 0x14082FBD4 (sub_14082FBD4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_1403E39D0 @ 0x1403E39D0 (sub_1403E39D0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCultureNameToLCID @ 0x140830F20 (RtlCultureNameToLCID.c)
 *     sub_140830FE0 @ 0x140830FE0 (sub_140830FE0.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1403C64C0(__int64 a1)
{
  ULONG_PTR v2; // r13
  ULONG_PTR v3; // r12
  int v4; // r14d
  unsigned int v5; // esi
  _WORD *PoolWithTag; // rax
  _WORD *v7; // rbx
  int v8; // esi
  _WORD *i; // r14
  unsigned int v10; // esi
  _WORD *v11; // rax
  _WORD *v12; // rbx
  int v13; // esi
  _WORD *j; // r14
  unsigned int v15; // esi
  _WORD *v16; // rax
  _WORD *v17; // rbx
  int v18; // esi
  _WORD *v19; // r14
  unsigned int v20; // ebx
  __int64 result; // rax
  int v22; // [rsp+20h] [rbp-38h]
  int v23; // [rsp+24h] [rbp-34h]
  BOOL v24; // [rsp+28h] [rbp-30h]
  __int64 v25; // [rsp+2Ch] [rbp-2Ch]
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  size_t Size; // [rsp+A0h] [rbp+48h] BYREF
  DWORD Lcid; // [rsp+A8h] [rbp+50h] BYREF
  ULONG Type; // [rsp+B0h] [rbp+58h] BYREF
  int v31; // [rsp+B8h] [rbp+60h]

  LODWORD(v25) = -1;
  Lcid = 0;
  Type = 0;
  LODWORD(Size) = 0;
  v2 = 0LL;
  v3 = 0LL;
  v22 = 0;
  v4 = 0;
  v31 = 0;
  BugCheckParameter3 = 0LL;
  v23 = 0;
  v24 = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    v20 = -1073741811;
    goto LABEL_44;
  }
  v24 = (int)sub_140830FE0(L"WindowsExcludedProcs", &Type, (PULONG)&Size) >= 0;
  if ( (int)sub_140830FE0(L"Kernel-MUI-Number-Allowed", &Type, (PULONG)&Size) >= 0 )
  {
    v25 = MEMORY[0];
    sub_140348B40(0LL);
  }
  if ( (int)sub_140830FE0(L"Kernel-MUI-Language-Allowed", &Type, (PULONG)&Size) >= 0 )
  {
    v22 = Size + 4;
    if ( (_DWORD)Size == -4 )
      goto LABEL_51;
    v5 = Size + 4;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(Size + 4), 0x72746C6Du);
    v7 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v5);
    v8 = 0;
    v2 = (ULONG_PTR)v7;
    if ( !v7 )
    {
LABEL_51:
      v22 = 0;
LABEL_54:
      v20 = -1073741801;
      goto LABEL_43;
    }
    memmove(v7, 0LL, (unsigned int)Size);
    for ( i = (_WORD *)sub_1403E39D0(v7, qword_14043D1F0); i; i = (_WORD *)sub_1403E39D0(i + 1, qword_14043D1F0) )
    {
      *i = 0;
      RtlInitUnicodeString(&DestinationString, v7);
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
        ++v8;
      v7 = i + 1;
    }
    if ( *v7 )
    {
      RtlInitUnicodeString(&DestinationString, v7);
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
        ++v8;
    }
    if ( !v8 )
    {
      sub_140348B40(v2);
      v22 = 0;
      v2 = 0LL;
    }
  }
  if ( (int)sub_140830FE0(L"Kernel-MUI-Language-Disallowed", &Type, (PULONG)&Size) < 0 )
    goto LABEL_26;
  v31 = Size + 4;
  if ( (_DWORD)Size == -4 )
  {
    v3 = 0LL;
LABEL_53:
    v4 = 0;
    goto LABEL_54;
  }
  v10 = Size + 4;
  v11 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(Size + 4), 0x72746C6Du);
  v12 = v11;
  if ( v11 )
    memset(v11, 0, v10);
  v13 = 0;
  v3 = (ULONG_PTR)v12;
  if ( !v12 )
    goto LABEL_53;
  memmove(v12, 0LL, (unsigned int)Size);
  for ( j = (_WORD *)sub_1403E39D0(v12, qword_14043D1F0); j; j = (_WORD *)sub_1403E39D0(j + 1, qword_14043D1F0) )
  {
    *j = 0;
    RtlInitUnicodeString(&DestinationString, v12);
    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
      ++v13;
    v12 = j + 1;
  }
  if ( *v12 )
  {
    RtlInitUnicodeString(&DestinationString, v12);
    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
      ++v13;
  }
  if ( !v13 )
  {
    sub_140348B40(v3);
    v31 = 0;
    v3 = 0LL;
  }
LABEL_26:
  if ( (int)sub_140830FE0(L"Kernel-MUI-Language-SKU", &Type, (PULONG)&Size) >= 0 )
  {
    v23 = Size + 4;
    if ( (_DWORD)Size == -4 )
    {
      BugCheckParameter3 = 0LL;
    }
    else
    {
      v15 = Size + 4;
      v16 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(Size + 4), 0x72746C6Du);
      v17 = v16;
      if ( v16 )
        memset(v16, 0, v15);
      v18 = 0;
      BugCheckParameter3 = (ULONG_PTR)v17;
      if ( v17 )
      {
        memmove(v17, 0LL, (unsigned int)Size);
        BugCheckParameter3 = (ULONG_PTR)v17;
        v19 = (_WORD *)sub_1403E39D0(v17, qword_14043D1F0);
        if ( v19 )
        {
          BugCheckParameter3 = (ULONG_PTR)v17;
          do
          {
            *v19 = 0;
            RtlInitUnicodeString(&DestinationString, v17);
            if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
              ++v18;
            v17 = v19 + 1;
            v19 = (_WORD *)sub_1403E39D0(v19 + 1, qword_14043D1F0);
          }
          while ( v19 );
        }
        if ( *v17 )
        {
          RtlInitUnicodeString(&DestinationString, v17);
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
            ++v18;
        }
        if ( !v18 )
        {
          sub_140348B40(BugCheckParameter3);
          v23 = 0;
          BugCheckParameter3 = 0LL;
        }
        goto LABEL_41;
      }
    }
    v23 = 0;
    v20 = -1073741801;
    goto LABEL_42;
  }
LABEL_41:
  v20 = 0;
LABEL_42:
  v4 = v31;
LABEL_43:
  if ( v2 && v3 )
  {
    sub_140348B40(v3);
    v3 = 0LL;
    v4 = 0;
  }
LABEL_44:
  *(_DWORD *)a1 |= 0x800u;
  *(_DWORD *)(a1 + 116) = v24;
  *(_DWORD *)(a1 + 120) = v25;
  *(_DWORD *)(a1 + 148) = v22;
  *(_QWORD *)(a1 + 136) = BugCheckParameter3;
  *(_DWORD *)(a1 + 144) = v23;
  result = v20;
  *(_QWORD *)(a1 + 128) = v2;
  *(_QWORD *)(a1 + 152) = v3;
  *(_DWORD *)(a1 + 160) = v4;
  return result;
}
