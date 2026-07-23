/*
 * XREFs of RtlQuerySecurityObject @ 0x1800E1EF0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpFilterSacl @ 0x1800F2EB8 (RtlpFilterSacl.c)
 */

NTSTATUS __cdecl RtlQuerySecurityObject(
        PSECURITY_DESCRIPTOR ObjectDescriptor,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ResultantDescriptor,
        ULONG DescriptorLength,
        PULONG ReturnLength)
{
  __int16 v5; // bp
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // r13d
  unsigned __int16 *v11; // r14
  char *v12; // rbx
  unsigned __int8 *v13; // r15
  unsigned int v14; // r12d
  char *v15; // rbp
  unsigned int v16; // ecx
  char *v17; // rbp
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-68h]
  int v23; // [rsp+24h] [rbp-64h]
  int v24; // [rsp+28h] [rbp-60h]
  void *Src; // [rsp+30h] [rbp-58h]
  unsigned int v26; // [rsp+90h] [rbp+8h] BYREF
  int v27; // [rsp+98h] [rbp+10h]
  size_t Size; // [rsp+A0h] [rbp+18h]
  ULONG v29; // [rsp+A8h] [rbp+20h]

  v29 = DescriptorLength;
  v5 = SecurityInformation;
  v8 = 0;
  v22 = 0;
  v26 = 0;
  v9 = 0;
  LODWORD(Size) = 0;
  Src = 0LL;
  v24 = v5 & 2;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (v5 & 2) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v13 = (unsigned __int8 *)*((_QWORD *)ObjectDescriptor + 2);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 2) )
        goto LABEL_8;
      v13 = (unsigned __int8 *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 2);
    }
    if ( v13 )
      v22 = (4 * v13[1] + 11) & 0xFFFFFFFC;
  }
LABEL_8:
  v23 = v5 & 4;
  if ( (v5 & 4) != 0 && (*((_BYTE *)ObjectDescriptor + 2) & 4) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v11 = (unsigned __int16 *)*((_QWORD *)ObjectDescriptor + 4);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 4) )
        goto LABEL_16;
      v11 = (unsigned __int16 *)((char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 4));
    }
    if ( v11 )
      v10 = (v11[1] + 3) & 0xFFFFFFFC;
  }
LABEL_16:
  v14 = v5 & 0x1F8;
  if ( (v5 & 0x1F8) != 0 && (*((_BYTE *)ObjectDescriptor + 2) & 0x10) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v12 = (char *)*((_QWORD *)ObjectDescriptor + 3);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 3) )
        goto LABEL_24;
      v12 = (char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 3);
    }
    if ( v12 )
    {
      RtlpFilterSacl(v12, 0LL, &v26, v5 & 0x1F8);
      v8 = v26;
      v9 = Size;
      DescriptorLength = v29;
    }
  }
LABEL_24:
  v27 = v5 & 1;
  if ( (v5 & 1) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v15 = (char *)*((_QWORD *)ObjectDescriptor + 1);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 1) )
      {
        Src = 0LL;
        goto LABEL_32;
      }
      v15 = (char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 1);
    }
    Src = v15;
    if ( v15 )
    {
      v9 = (4 * (unsigned __int8)v15[1] + 11) & 0xFFFFFFFC;
      LODWORD(Size) = v9;
    }
  }
LABEL_32:
  v16 = v10 + v9 + v8 + v22 + 20;
  *ReturnLength = v16;
  if ( v16 > DescriptorLength || !ResultantDescriptor )
    return -1073741789;
  v17 = (char *)ResultantDescriptor + 20;
  *(_OWORD *)ResultantDescriptor = 0LL;
  *((_DWORD *)ResultantDescriptor + 4) = 0;
  *((_WORD *)ResultantDescriptor + 1) |= 0x8000u;
  *(_BYTE *)ResultantDescriptor = 1;
  if ( v14 )
  {
    if ( v8 )
    {
      RtlpFilterSacl(v12, (char *)ResultantDescriptor + 20, &v26, v14);
      *((_DWORD *)ResultantDescriptor + 3) = 20;
      v17 += v26;
    }
    *((_WORD *)ResultantDescriptor + 1) |= *((_WORD *)ObjectDescriptor + 1) & 0x2830;
  }
  if ( v23 )
  {
    if ( v10 )
    {
      memmove(v17, v11, v10);
      v18 = (int)v17;
      v17 += v10;
      *((_DWORD *)ResultantDescriptor + 4) = v18 - (_DWORD)ResultantDescriptor;
    }
    *((_WORD *)ResultantDescriptor + 1) |= *((_WORD *)ObjectDescriptor + 1) & 0x140C;
  }
  if ( v27 )
  {
    if ( (_DWORD)Size )
    {
      v19 = (unsigned int)Size;
      memmove(v17, Src, (unsigned int)Size);
      v20 = (int)v17;
      v17 += v19;
      *((_DWORD *)ResultantDescriptor + 1) = v20 - (_DWORD)ResultantDescriptor;
    }
    *((_WORD *)ResultantDescriptor + 1) |= *((_WORD *)ObjectDescriptor + 1) & 1;
  }
  if ( v24 )
  {
    if ( v22 )
    {
      memmove(v17, v13, v22);
      *((_DWORD *)ResultantDescriptor + 2) = (_DWORD)v17 - (_DWORD)ResultantDescriptor;
    }
    *((_WORD *)ResultantDescriptor + 1) |= *((_WORD *)ObjectDescriptor + 1) & 2;
  }
  return 0;
}
