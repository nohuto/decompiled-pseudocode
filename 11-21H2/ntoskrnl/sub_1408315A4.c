/*
 * XREFs of sub_1408315A4 @ 0x1408315A4
 * Callers:
 *     sub_140831BF4 @ 0x140831BF4 (sub_140831BF4.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     SeFilterToken @ 0x140831700 (SeFilterToken.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1408315A4(PACCESS_TOKEN *a1)
{
  PACCESS_TOKEN v2; // rdi
  struct _TOKEN_GROUPS *v3; // rsi
  void *v4; // r14
  NTSTATUS v5; // ebx
  struct _LOOKASIDE_LIST_EX *v6; // r9
  char *v7; // rax
  PVOID P; // [rsp+68h] [rbp+38h] BYREF
  PACCESS_TOKEN FilteredToken; // [rsp+70h] [rbp+40h] BYREF
  PVOID TokenInformation; // [rsp+78h] [rbp+48h] BYREF

  TokenInformation = 0LL;
  v2 = 0LL;
  P = 0LL;
  FilteredToken = 0LL;
  v3 = 0LL;
  v4 = (void *)sub_140347920((__int64)PsInitialSystemProcess, 0x746C6644u);
  v5 = SeQueryInformationToken(v4, TokenUser, &TokenInformation);
  if ( v5 >= 0 )
  {
    v5 = SeQueryInformationToken(v4, TokenGroups, &P);
    if ( v5 >= 0 )
    {
      v7 = (char *)Allocate(PagedPool, 16LL * (unsigned int)(*(_DWORD *)P + 1) + 8, 0x34384D43u, v6);
      v3 = (struct _TOKEN_GROUPS *)v7;
      if ( v7 )
      {
        *(_DWORD *)v7 = *(_DWORD *)P + 1;
        *(_OWORD *)(v7 + 8) = *(_OWORD *)TokenInformation;
        memmove(v7 + 24, (char *)P + 8, 16LL * *(unsigned int *)P);
        v5 = SeFilterToken(v4, 1u, v3, 0LL, 0LL, &FilteredToken);
        if ( v5 < 0 )
        {
          v2 = FilteredToken;
        }
        else
        {
          v5 = 0;
          *a1 = FilteredToken;
        }
      }
      else
      {
        v5 = -1073741670;
      }
    }
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v3 )
    SeFreePrivileges((PPRIVILEGE_SET)v3);
  return (unsigned int)v5;
}
