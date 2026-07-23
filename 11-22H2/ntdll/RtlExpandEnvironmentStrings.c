/*
 * XREFs of RtlExpandEnvironmentStrings @ 0x180059B50
 * Callers:
 *     RtlGetPersistedStateLocation @ 0x18000B6A0 (RtlGetPersistedStateLocation.c)
 *     RtlExpandEnvironmentStrings_U @ 0x180059AD0 (RtlExpandEnvironmentStrings_U.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18001ED70 (RtlQueryEnvironmentVariable.c)
 */

NTSTATUS __cdecl RtlExpandEnvironmentStrings(
        PVOID Environment,
        PCWSTR Source,
        SIZE_T SourceLength,
        PWSTR Destination,
        SIZE_T DestinationLength,
        PSIZE_T ReturnLength)
{
  SIZE_T v6; // rdi
  SIZE_T ValueLength; // r15
  NTSTATUS v10; // r14d
  __int64 v11; // rbp
  PCWSTR v12; // rsi
  NTSTATUS result; // eax
  SIZE_T v14; // r13
  SIZE_T v15; // rax
  NTSTATUS v16; // ecx
  PVOID v17; // [rsp+70h] [rbp+8h]
  ULONG_PTR v18; // [rsp+80h] [rbp+18h] BYREF

  v17 = Environment;
  v6 = SourceLength;
  ValueLength = DestinationLength;
  v10 = 0;
  v11 = 0LL;
  if ( !SourceLength )
  {
LABEL_9:
    if ( ValueLength )
      *Destination = 0;
    else
      v10 = -1073741789;
    goto LABEL_11;
  }
  do
  {
    if ( *Source != 37 )
      goto LABEL_3;
    v14 = 0LL;
    v12 = Source + 1;
    v15 = v6 - 1;
    if ( v6 != 1 )
    {
      do
      {
        if ( *v12 == 37 )
          break;
        ++v12;
        ++v14;
      }
      while ( v14 < v15 );
    }
    if ( v14
      && v14 < v15
      && ((v16 = RtlQueryEnvironmentVariable(Environment, Source + 1, v14, Destination, ValueLength, &v18),
           (int)(v16 + 0x80000000) < 0)
       || v16 == -1073741789) )
    {
      v11 += v18;
      if ( v16 == -1073741789 )
      {
        --v11;
        v6 = v6 - v14 - 2;
      }
      else
      {
        v6 += -2LL - v14;
        if ( v16 >= 0 )
        {
          ValueLength -= v18;
          Destination += v18;
          goto LABEL_7;
        }
      }
      v10 = v16;
    }
    else
    {
LABEL_3:
      if ( v10 >= 0 )
      {
        if ( ValueLength <= 1 )
        {
          v10 = -1073741789;
        }
        else
        {
          --ValueLength;
          *Destination++ = *Source;
        }
      }
      ++v11;
      v12 = Source;
      --v6;
    }
LABEL_7:
    Environment = v17;
    Source = v12 + 1;
  }
  while ( v6 );
  if ( v10 >= 0 )
    goto LABEL_9;
LABEL_11:
  result = v10;
  if ( ReturnLength )
    *ReturnLength = v11 + 1;
  return result;
}
