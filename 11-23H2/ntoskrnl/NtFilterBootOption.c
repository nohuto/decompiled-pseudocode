/*
 * XREFs of NtFilterBootOption @ 0x1409D06F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembership @ 0x140370230 (RtlCheckTokenMembership.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     SepSecureBootCorrectBcd @ 0x1409D0B64 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1409D1174 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtFilterBootOption(
        FILTER_BOOT_OPTION_OPERATION FilterOperation,
        ULONG ObjectType,
        ULONG ElementType,
        PVOID Data,
        ULONG DataSize)
{
  FILTER_BOOT_OPTION_OPERATION v7; // r15d
  NTSTATUS v8; // edi
  ULONG v9; // r14d
  int v10; // eax
  int v11; // eax
  PVOID v12; // rsi
  unsigned int v13; // r8d
  unsigned int *v14; // rdx
  int v15; // eax
  __int16 v16; // r10
  __int64 v17; // rcx
  BOOLEAN IsMember; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v20[3]; // [rsp+21h] [rbp-47h] BYREF
  int v21; // [rsp+24h] [rbp-44h]
  PVOID P; // [rsp+28h] [rbp-40h]
  _QWORD v23[2]; // [rsp+30h] [rbp-38h] BYREF

  v7 = FilterOperation;
  P = 0LL;
  v20[0] = 0;
  v23[0] = 0LL;
  IsMember = SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode);
  if ( !IsMember && (RtlCheckTokenMembership(0LL, SeAliasAdminsSid, &IsMember) < 0 || !IsMember) )
  {
    v8 = -1073741790;
    goto LABEL_61;
  }
  v21 = 0;
  v8 = 0;
  if ( !qword_140D17E70 )
  {
    v8 = -2143092730;
    goto LABEL_61;
  }
  if ( v7 == FilterBootOptionOperationOpenSystemStore )
  {
    if ( !ObjectType && !ElementType && !Data && !DataSize )
    {
      if ( !_InterlockedCompareExchange(&dword_140D1BEA4, 0, 0) )
      {
        v8 = SepSecureBootCorrectBcd(v20);
        v21 = v8;
        if ( v8 < 0 || !byte_140D1BEA8 && v20[0] )
          goto LABEL_61;
        _InterlockedExchange(&dword_140D1BEA4, 1);
      }
      v8 = v21;
      goto LABEL_61;
    }
    goto LABEL_49;
  }
  if ( v7 == FilterBootOptionOperationSetElement )
  {
    if ( ObjectType )
    {
      if ( ElementType )
      {
        if ( Data )
        {
          v9 = DataSize;
          if ( DataSize )
          {
            v11 = dword_140D1BEB8;
            if ( !_bittest(&v11, HIBYTE(ElementType) & 0xF) )
            {
LABEL_21:
              v8 = 0;
              goto LABEL_61;
            }
            if ( KeGetCurrentThread()->PreviousMode )
            {
              if ( (unsigned __int64)Data + DataSize > 0x7FFFFFFF0000LL || (char *)Data + DataSize < Data )
                MEMORY[0x7FFFFFFF0000] = 0;
              if ( DataSize > 8 )
              {
                P = (PVOID)ExAllocatePool2(256LL, DataSize, 1649632595LL);
                if ( !P )
                {
                  v8 = -1073741801;
                  v21 = -1073741801;
                  goto LABEL_61;
                }
                v12 = P;
                memmove(P, Data, DataSize);
                Data = v12;
              }
              else
              {
                memmove(v23, Data, DataSize);
                Data = v23;
              }
              v8 = v21;
              v7 = FilterOperation;
            }
            else
            {
              v8 = v21;
            }
            goto LABEL_33;
          }
        }
      }
    }
LABEL_49:
    v8 = -1073741811;
    goto LABEL_61;
  }
  if ( v7 != FilterBootOptionOperationDeleteElement )
  {
    v8 = -1073741585;
    goto LABEL_61;
  }
  if ( !ObjectType )
    goto LABEL_49;
  if ( !ElementType )
    goto LABEL_49;
  if ( Data )
    goto LABEL_49;
  v9 = DataSize;
  if ( DataSize )
    goto LABEL_49;
  v10 = dword_140D1BEB8;
  if ( !_bittest(&v10, HIBYTE(ElementType) & 0xF) )
    goto LABEL_21;
LABEL_33:
  v13 = 0;
  if ( *((_WORD *)qword_140D17E70 + 18) )
  {
    v14 = (unsigned int *)(qword_140D1BEB0 + 8);
    while ( 1 )
    {
      if ( *(v14 - 1) == ElementType )
      {
        v15 = *(v14 - 2);
        if ( !v15 || v15 == ObjectType )
        {
          v16 = *(_WORD *)(*v14 + qword_140D1BEC0);
          if ( ((v16 & 0x20) == 0 || (dword_140C70F84 & 4) != 0) && ((v16 & 0x40) == 0 || (dword_140C70F84 & 0x10) != 0) )
            break;
        }
      }
      ++v13;
      v14 += 3;
      if ( v13 >= *((unsigned __int16 *)qword_140D17E70 + 18) )
        goto LABEL_61;
    }
    if ( v7 == FilterBootOptionOperationSetElement )
    {
      v8 = SepSecureBootValidateBcdDataAgainstBcdRule(qword_140D1BEB0 + 12LL * v13, Data, v9);
    }
    else
    {
      v8 = 0;
      v17 = *(unsigned int *)(qword_140D1BEB0 + 12LL * v13 + 8);
      if ( (*(_BYTE *)(v17 + qword_140D1BEC0) & 0x1F) != 8 || *(_WORD *)(v17 + qword_140D1BEC0 + 2) )
        v8 = -1069350910;
    }
  }
LABEL_61:
  if ( P )
    ExFreePoolWithTag(P, 0x62536553u);
  return v8;
}
