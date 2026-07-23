/*
 * XREFs of sub_1402AC350 @ 0x1402AC350
 * Callers:
 *     sub_1407227B0 @ 0x1407227B0 (sub_1407227B0.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 * Callees:
 *     sub_14022A380 @ 0x14022A380 (sub_14022A380.c)
 *     sub_1402A45CC @ 0x1402A45CC (sub_1402A45CC.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     sub_1405F4288 @ 0x1405F4288 (sub_1405F4288.c)
 *     sub_1405F5D18 @ 0x1405F5D18 (sub_1405F5D18.c)
 */

__int64 __fastcall sub_1402AC350(PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext, __int64 a2, int a3, __int64 a4)
{
  unsigned int v6; // esi
  __int64 v8; // rbp
  __int16 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  ACL *v13; // rcx
  PACCESS_TOKEN ClientToken; // rcx
  void *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-28h] BYREF
  __int64 v19; // [rsp+58h] [rbp-20h]
  NTSTATUS AccessStatus; // [rsp+90h] [rbp+18h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  v6 = 0;
  if ( (a3 & 0xC0000) == 0 )
    return 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 48LL);
  if ( !v8 )
  {
    v8 = a4;
    if ( !a4 )
    {
      v8 = *(_QWORD *)(a2 + 64);
      if ( !v8 )
        return 0LL;
    }
  }
  v9 = *(_WORD *)(v8 + 2);
  if ( (v9 & 4) != 0 )
  {
    if ( v9 >= 0 )
    {
      v11 = *(_QWORD *)(v8 + 32);
    }
    else
    {
      v10 = *(unsigned int *)(v8 + 16);
      v11 = (_DWORD)v10 ? v10 + v8 : 0LL;
    }
  }
  else
  {
    v11 = 0LL;
  }
  if ( !sub_14022A380(0, v11) )
  {
    if ( (v9 & 0x10) != 0 )
    {
      if ( v9 >= 0 )
      {
        v13 = *(ACL **)(v8 + 24);
      }
      else
      {
        v12 = *(unsigned int *)(v8 + 12);
        v13 = (_DWORD)v12 ? (ACL *)(v12 + v8) : 0LL;
      }
    }
    else
    {
      v13 = 0LL;
    }
    v19 = 0LL;
    if ( !byte_140C1B311 )
      return 0LL;
    if ( !v13 )
      return 0LL;
    v15 = (void *)sub_1405F4288(v13);
    if ( !v15 )
      return 0LL;
    v16 = sub_1405F5D18(v15);
    v17 = v19;
    if ( v16 < 0 )
      v17 = qword_140D3B0F8;
    if ( (*(_DWORD *)(v17 + 56) & 1) == 0 )
      return 0LL;
  }
  ClientToken = SubjectSecurityContext->ClientToken;
  if ( !SubjectSecurityContext->ClientToken )
    ClientToken = SubjectSecurityContext->PrimaryToken;
  if ( !(unsigned __int8)sub_1402A45CC((__int64)ClientToken) )
    return 0LL;
  if ( (a3 & 0x40000) != 0
    && !SeAccessCheck(
          (PSECURITY_DESCRIPTOR)v8,
          SubjectSecurityContext,
          1u,
          0x40000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&GenericMapping,
          *((_BYTE *)KeGetCurrentThread() + 562),
          &GrantedAccess,
          &AccessStatus) )
  {
    v6 = 0x40000;
  }
  if ( (a3 & 0x80000) != 0
    && !SeAccessCheck(
          (PSECURITY_DESCRIPTOR)v8,
          SubjectSecurityContext,
          1u,
          0x80000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&GenericMapping,
          *((_BYTE *)KeGetCurrentThread() + 562),
          &GrantedAccess,
          &AccessStatus) )
  {
    v6 |= 0x80000u;
  }
  return v6;
}
