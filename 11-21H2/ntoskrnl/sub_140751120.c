/*
 * XREFs of sub_140751120 @ 0x140751120
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     sub_14025DEF0 @ 0x14025DEF0 (sub_14025DEF0.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402D6220 @ 0x1402D6220 (sub_1402D6220.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E7694 @ 0x1406E7694 (sub_1406E7694.c)
 *     sub_1406E9070 @ 0x1406E9070 (sub_1406E9070.c)
 *     sub_1406EB3FC @ 0x1406EB3FC (sub_1406EB3FC.c)
 *     sub_140751880 @ 0x140751880 (sub_140751880.c)
 *     sub_14075197C @ 0x14075197C (sub_14075197C.c)
 *     sub_1407F77B8 @ 0x1407F77B8 (sub_1407F77B8.c)
 */

__int64 __fastcall sub_140751120(__int64 a1, _WNF_STATE_NAME *a2)
{
  char v3; // r12
  char v4; // r13
  char v5; // r15
  unsigned int v6; // esi
  _QWORD *v7; // r14
  __int64 v8; // rax
  _WNF_STATE_NAME *v9; // rdi
  _WNF_STATE_NAME v10; // rax
  int v11; // ebx
  __int64 CurrentSilo; // rax
  __int64 v13; // r8
  unsigned int ProcessSessionId; // eax
  unsigned int v16; // edi
  __int64 v17; // rax
  ULONG v18; // ecx
  _WNF_STATE_NAME StateName; // [rsp+40h] [rbp-38h] BYREF

  StateName = 0LL;
  v3 = 0;
  v4 = 0;
  ExAcquireFastMutex(&stru_140C237C0);
  v5 = 1;
  if ( a1 )
    v6 = *(_DWORD *)(a1 + 16);
  else
    v6 = -1;
  v7 = (_QWORD *)(a1 & -(__int64)(a1 != 0));
  if ( !v7 )
  {
    v10 = stru_140C4EF08;
    if ( stru_140C4EF08 == __PAIR64__(stru_140C4EF08.Data[0], 0) )
    {
      v11 = sub_1406E7694(&StateName);
      if ( v11 < 0 )
        goto LABEL_12;
      stru_140C4EF08 = StateName;
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  if ( (unsigned __int8)sub_14075197C(a1 & -(__int64)(a1 != 0)) )
  {
    ProcessSessionId = PsGetProcessSessionIdEx(*((_QWORD *)KeGetCurrentThread() + 23));
    v16 = ProcessSessionId;
    if ( v6 == -1 || v6 == ProcessSessionId )
    {
      if ( ProcessSessionId == -1 || sub_1406E9070(ProcessSessionId) )
      {
        v11 = -1073741811;
        goto LABEL_15;
      }
      v6 = v16;
    }
    else
    {
      v11 = sub_1406EB3FC(Group);
      if ( v11 < 0 )
      {
        if ( !sub_1406E9070(v16) || !sub_14025DEF0(v6) || (v11 = sub_1406EB3FC(SeExports->SeLocalServiceSid), v11 < 0) )
        {
LABEL_12:
          if ( v11 && v11 != -1073741275 )
            goto LABEL_15;
          goto LABEL_13;
        }
      }
    }
  }
  else
  {
    v6 = -1;
  }
  v8 = sub_140751880(v7, v6);
  v9 = (_WNF_STATE_NAME *)v8;
  if ( v8 )
  {
    v4 = 1;
    if ( !*(_DWORD *)(v8 + 56) && !*(_DWORD *)(v8 + 60) )
    {
      v11 = sub_1406E7694(&StateName);
      if ( v11 < 0 )
        goto LABEL_12;
      v17 = *v7 - 0x4B00E9D55D3E9A59LL;
      if ( *v7 == 0x4B00E9D55D3E9A59LL )
        v17 = v7[1] - 0x486551FF34FFBDA6LL;
      if ( !v17 )
        v9[6].Data[1] |= 8u;
      v18 = v9[6].Data[1];
      v9[7] = StateName;
      v9[6].Data[1] = v18 | 1;
      v3 = 1;
      goto LABEL_11;
    }
    v10 = *(_WNF_STATE_NAME *)(v8 + 56);
LABEL_10:
    StateName = v10;
LABEL_11:
    KeReleaseGuardedMutex(&stru_140C237C0);
    v5 = 0;
    *a2 = StateName;
    v11 = 0;
    goto LABEL_12;
  }
  v11 = -1073741275;
LABEL_13:
  CurrentSilo = PsGetCurrentSilo();
  if ( !PsIsHostSilo(CurrentSilo) )
  {
    LOBYTE(v13) = v4;
    sub_1407F77B8(v7, v6, v13);
  }
LABEL_15:
  if ( v5 )
    KeReleaseGuardedMutex(&stru_140C237C0);
  if ( v3 )
    sub_1402D6220(0x80u);
  return (unsigned int)v11;
}
