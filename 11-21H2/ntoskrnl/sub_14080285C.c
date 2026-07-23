/*
 * XREFs of sub_14080285C @ 0x14080285C
 * Callers:
 *     sub_140812D44 @ 0x140812D44 (sub_140812D44.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_140802A64 @ 0x140802A64 (sub_140802A64.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140A1D568 @ 0x140A1D568 (sub_140A1D568.c)
 *     sub_140A1D8A8 @ 0x140A1D8A8 (sub_140A1D8A8.c)
 *     sub_140A1D990 @ 0x140A1D990 (sub_140A1D990.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14080285C(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        GUID *Guid,
        unsigned int *a7)
{
  unsigned int *v7; // r14
  const WCHAR *v8; // r15
  unsigned int v9; // edi
  unsigned int v11; // esi
  char v12; // r12
  __int64 v13; // rbx
  NTSTATUS v14; // ebx
  __int16 v15; // r12
  void *v16; // rcx
  int v17; // eax
  PVOID v18; // rdi
  GUID *v20; // rdi
  GUID *v21; // rbx
  GUID *v22; // rcx
  GUID *v23; // rcx
  GUID *v24; // r12
  unsigned int v25; // r13d
  __int64 v26; // rax
  __int64 v27; // r8
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  size_t Size; // [rsp+98h] [rbp+48h] BYREF

  v7 = a7;
  v8 = (const WCHAR *)a2;
  v9 = a3;
  P = 0LL;
  LODWORD(Size) = 0;
  v11 = 0;
  DestinationString = 0LL;
  if ( (HIBYTE(a4) & 0xF) != 1 )
  {
    if ( (HIBYTE(a4) & 0xF) == 2 )
    {
      if ( a3 && (a3 & 1) == 0 )
      {
        v12 = 0;
        v11 = a3;
        v13 = a3;
        if ( *(_WORD *)((char *)a2 + a3 - 2) )
        {
          v11 = a3 + 2;
          v12 = 1;
          v9 = a3 + 2;
        }
        if ( v9 > *a7 )
          goto LABEL_8;
        v20 = Guid;
        memmove(Guid, a2, a3);
        if ( v12 )
          *(_WORD *)((char *)&v20->Data1 + v13) = 0;
LABEL_29:
        v14 = 0;
        goto LABEL_19;
      }
      return (unsigned int)-1073741788;
    }
    if ( (HIBYTE(a4) & 0xF) == 3 )
    {
      v11 = 16;
      LODWORD(Size) = 16;
      if ( *a7 >= 0x10 )
      {
        if ( a3 < 2 || (a3 & 1) != 0 )
          return (unsigned int)-1073741788;
        *((_WORD *)a2 + ((unsigned __int64)a3 >> 1) - 1) = 0;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)a2);
        v14 = RtlGUIDFromString(&DestinationString, Guid);
        if ( v14 >= 0 )
        {
          v14 = 0;
LABEL_18:
          v11 = Size;
          goto LABEL_19;
        }
        goto LABEL_31;
      }
LABEL_8:
      v14 = -1073741789;
LABEL_19:
      *v7 = v11;
      return (unsigned int)v14;
    }
    if ( (HIBYTE(a4) & 0xF) == 4 )
    {
      v24 = Guid;
      v25 = 0;
      v14 = 0;
      if ( a3 >= 2 && (a3 & 1) == 0 )
      {
        *((_WORD *)a2 + ((unsigned __int64)a3 >> 1) - 1) = 0;
        if ( *(_WORD *)a2 )
        {
          do
          {
            if ( v25 >= v9 )
              break;
            v11 += 16;
            LODWORD(Size) = v11;
            if ( v11 <= *v7 )
            {
              RtlInitUnicodeString(&DestinationString, v8);
              v14 = RtlGUIDFromString(&DestinationString, v24);
              if ( v14 < 0 )
                goto LABEL_31;
              v11 = Size;
              ++v24;
            }
            v26 = -1LL;
            do
              ++v26;
            while ( v8[v26] );
            v25 += 2 * v26 + 2;
            v8 += (unsigned int)(v26 + 1);
          }
          while ( *v8 );
        }
        if ( v11 > *v7 )
          v14 = -1073741789;
        goto LABEL_19;
      }
      return (unsigned int)-1073741788;
    }
    if ( (HIBYTE(a4) & 0xF) == 5 )
    {
      v11 = 8;
      if ( a3 > 8 )
        return (unsigned int)-1073741788;
      if ( *a7 < 8 )
        goto LABEL_8;
      v22 = Guid;
      *(_QWORD *)&Guid->Data1 = 0LL;
    }
    else
    {
      if ( (HIBYTE(a4) & 0xF) == 6 )
      {
        if ( a3 == 1 )
        {
          v11 = 2;
          if ( *a7 >= 2 )
          {
            v23 = Guid;
            v14 = 0;
            BYTE1(Guid->Data1) = 0;
            LOBYTE(v23->Data1) = *(_BYTE *)a2 != 0;
            goto LABEL_19;
          }
          goto LABEL_8;
        }
        return (unsigned int)-1073741788;
      }
      if ( (HIBYTE(a4) & 0xF) == 7 )
      {
        if ( !a3 || (a3 & 7) != 0 )
          return (unsigned int)-1073741788;
        v11 = a3;
        if ( *a7 < a3 )
          goto LABEL_8;
      }
      else
      {
        if ( !a3 )
          return (unsigned int)-1073741788;
        v11 = a3;
        if ( a3 > *a7 )
          goto LABEL_8;
      }
      v22 = Guid;
    }
    memmove(v22, a2, a3);
    goto LABEL_29;
  }
  if ( a3 < 0x1C || a2[6] + 16LL != a3 )
    return (unsigned int)-1073741788;
  v15 = a5;
  v16 = a2 + 4;
  if ( (a5 & 1) != 0 )
  {
    v17 = sub_140A1D8A8(v16, &P, &Size);
  }
  else if ( (a5 & 2) != 0 )
  {
    v17 = sub_140A1D990(v16);
  }
  else
  {
    v17 = sub_140802A64((_DWORD)v16, a4, a5, (unsigned int)&P, (__int64)&Size);
  }
  v14 = v17;
  if ( v17 >= 0 )
  {
    v18 = P;
    if ( *(_DWORD *)P == 8 )
    {
      if ( (v15 & 0x100) != 0 )
      {
        sub_1408138F0(4LL, L"BCD resolve locate not supported. Status: %x", 3221225659LL);
        v18 = P;
      }
      else
      {
        if ( (int)sub_140A1D568(a1, P) >= 0 )
        {
          v27 = *((unsigned int *)P + 6);
          LODWORD(Size) = Size - v27;
          memmove(P, (char *)P + v27, (unsigned int)Size);
        }
        v18 = P;
      }
    }
    if ( (unsigned int)Size <= *v7 )
    {
      v21 = Guid;
      memmove(Guid, v18, (unsigned int)Size);
      *(GUID *)&v21->Data2 = *(GUID *)v8;
      ExFreePoolWithTag(v18, 0x4B444342u);
      v14 = 0;
    }
    else
    {
      v14 = -1073741789;
      ExFreePoolWithTag(v18, 0x4B444342u);
    }
    goto LABEL_18;
  }
LABEL_31:
  v11 = Size;
  if ( v14 == -1073741789 )
    goto LABEL_19;
  return (unsigned int)v14;
}
