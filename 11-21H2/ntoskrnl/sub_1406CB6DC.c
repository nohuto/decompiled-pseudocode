/*
 * XREFs of sub_1406CB6DC @ 0x1406CB6DC
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     ZwSetInformationThread @ 0x14041B900 (ZwSetInformationThread.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x14041BD60 (ZwOpenProcessTokenEx.c)
 *     ZwAdjustPrivilegesToken @ 0x14041BF80 (ZwAdjustPrivilegesToken.c)
 *     sub_1406CB908 @ 0x1406CB908 (sub_1406CB908.c)
 *     sub_1406CBA3C @ 0x1406CBA3C (sub_1406CBA3C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406CB6DC(unsigned int *a1, unsigned int a2, int a3, _QWORD *a4)
{
  __int64 v5; // rbp
  char v7; // si
  char *PoolWithQuotaTag; // rax
  char *v9; // rbx
  HANDLE *v10; // r15
  NTSTATUS v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rcx
  char *v17; // rcx
  struct _TOKEN_PRIVILEGES *PreviousState; // rax
  __int64 ThreadInformation[7]; // [rsp+30h] [rbp-38h] BYREF
  ULONG BufferLength; // [rsp+80h] [rbp+18h] BYREF

  BufferLength = 0;
  v5 = a2;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  v7 = a3 | 1;
  if ( (a3 & 2) == 0 )
    v7 = a3;
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 12 * (a2 - 1 + 90LL), 0x62507452u);
  v9 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    *(_QWORD *)PoolWithQuotaTag = 0LL;
    v10 = (HANDLE *)(PoolWithQuotaTag + 8);
    *((_QWORD *)PoolWithQuotaTag + 1) = 0LL;
    *((_DWORD *)PoolWithQuotaTag + 8) = 0;
    if ( (*((_DWORD *)KeGetCurrentThread() + 344) & 8) == 0 )
      goto LABEL_9;
    if ( (v7 & 1) != 0 )
    {
      v11 = sub_1406CBA3C(4u, v10);
      if ( v11 >= 0 )
      {
        *((_DWORD *)v9 + 8) |= 1u;
        ThreadInformation[0] = 0LL;
        ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, ThreadInformation, 8u);
        goto LABEL_9;
      }
    }
    else
    {
      v11 = sub_1406CBA3C(0x28u, (PHANDLE)PoolWithQuotaTag);
      if ( v11 >= 0 )
      {
LABEL_9:
        if ( !*(_QWORD *)v9 )
        {
          if ( (v7 & 2) != 0 )
          {
            v11 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, (PHANDLE)v9);
            if ( v11 >= 0 )
            {
              *((_DWORD *)v9 + 8) |= 2u;
              goto LABEL_13;
            }
          }
          else
          {
            v11 = sub_1406CB908(3LL, 40LL, v9);
            if ( v11 >= 0 )
            {
              *((_DWORD *)v9 + 8) |= 1u;
              goto LABEL_13;
            }
          }
LABEL_26:
          if ( (*((_DWORD *)v9 + 8) & 1) != 0 )
          {
            ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, v10, 8u);
            if ( *v10 )
              ZwClose(*v10);
          }
          goto LABEL_29;
        }
LABEL_13:
        *((_QWORD *)v9 + 3) = v9 + 1064;
        *((_QWORD *)v9 + 2) = v9 + 36;
        *((_DWORD *)v9 + 266) = v5;
        if ( (_DWORD)v5 )
        {
          v12 = 0LL;
          v13 = v5;
          do
          {
            v14 = *a1;
            v12 += 12LL;
            v15 = *((_QWORD *)v9 + 3);
            ++a1;
            ThreadInformation[0] = v14;
            *(_QWORD *)(v12 + v15 - 8) = v14;
            *(_DWORD *)(v12 + *((_QWORD *)v9 + 3)) = 2;
            --v13;
          }
          while ( v13 );
        }
        BufferLength = 1024;
        v11 = ZwAdjustPrivilegesToken(
                *(HANDLE *)v9,
                0,
                *((PTOKEN_PRIVILEGES *)v9 + 3),
                0x400u,
                *((PTOKEN_PRIVILEGES *)v9 + 2),
                &BufferLength);
        if ( v11 == -1073741789 )
        {
          while ( 1 )
          {
            PreviousState = (struct _TOKEN_PRIVILEGES *)ExAllocatePoolWithQuotaTag(
                                                          (POOL_TYPE)520,
                                                          BufferLength,
                                                          0x62507452u);
            *((_QWORD *)v9 + 2) = PreviousState;
            if ( !PreviousState )
              break;
            v11 = ZwAdjustPrivilegesToken(
                    *(HANDLE *)v9,
                    0,
                    *((PTOKEN_PRIVILEGES *)v9 + 3),
                    BufferLength,
                    PreviousState,
                    &BufferLength);
            if ( v11 != -1073741789 )
              goto LABEL_17;
            ExFreePoolWithTag(*((PVOID *)v9 + 2), 0);
          }
          v11 = -1073741801;
        }
        else
        {
LABEL_17:
          if ( v11 == 262 )
          {
            if ( (_DWORD)v5 != 1 )
              goto LABEL_19;
            v11 = -1073741727;
          }
          else if ( v11 >= 0 )
          {
LABEL_19:
            *a4 = v9;
            return 0LL;
          }
        }
        v17 = (char *)*((_QWORD *)v9 + 2);
        if ( v17 && v17 != v9 + 36 )
          ExFreePoolWithTag(v17, 0);
        ZwClose(*(HANDLE *)v9);
        goto LABEL_26;
      }
    }
LABEL_29:
    ExFreePoolWithTag(v9, 0);
    return (unsigned int)v11;
  }
  return 3221225495LL;
}
