/*
 * XREFs of sub_1407F4BB0 @ 0x1407F4BB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_140947DA4 @ 0x140947DA4 (sub_140947DA4.c)
 *     sub_140947E30 @ 0x140947E30 (sub_140947E30.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407F4BB0(PVOID P)
{
  char v2; // si
  _DWORD *v3; // rdi
  char v4; // bl
  int v5; // ecx
  unsigned int v6; // ecx
  const WNF_STATE_NAME *v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  unsigned int v10; // ecx
  void *v11; // rbx
  const WNF_STATE_NAME *v12; // rcx
  int v13; // ecx
  unsigned int ExplicitScope; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  do
  {
    ExAcquireFastMutex(&stru_140C466E0);
    v3 = qword_140C46780;
    v4 = *((_BYTE *)qword_140C46780 + 16);
    KeReleaseGuardedMutex(&stru_140C466E0);
    if ( v4 )
    {
      v5 = v3[5];
      if ( !v5 )
      {
        v6 = v3[6];
        ExplicitScope = v6;
        if ( v6 == -1 )
        {
          v7 = &stru_140012858;
LABEL_6:
          ZwUpdateWnfStateData(v7, 0LL, 0, 0LL, 0LL, 0, 0);
          goto LABEL_7;
        }
        v11 = (void *)sub_1402DF880(v6);
        if ( !v11 )
          goto LABEL_7;
        v12 = &stru_140012868;
        goto LABEL_18;
      }
      v9 = v5 - 1;
      if ( !v9 )
      {
        v10 = v3[6];
        ExplicitScope = v10;
        if ( v10 == -1 )
        {
          v7 = (const WNF_STATE_NAME *)&qword_140012860;
          goto LABEL_6;
        }
        v11 = (void *)sub_1402DF880(v10);
        if ( !v11 )
          goto LABEL_7;
        v12 = (const WNF_STATE_NAME *)&qword_140037780;
LABEL_18:
        ZwUpdateWnfStateData(v12, 0LL, 0, 0LL, &ExplicitScope, 0, 0);
        ObfDereferenceObject(v11);
        goto LABEL_7;
      }
      v13 = v9 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
          sub_140947E30((unsigned int)v3[6], v3 + 7, v3 + 11);
      }
      else
      {
        sub_140947DA4((unsigned int)v3[6], v3 + 7);
      }
    }
LABEL_7:
    ExAcquireFastMutex(&stru_140C466E0);
    if ( *((PVOID **)qword_140C46780 + 1) != &qword_140C46780
      || (v8 = *(_QWORD *)qword_140C46780, *(PVOID *)(*(_QWORD *)qword_140C46780 + 8LL) != qword_140C46780) )
    {
      __fastfail(3u);
    }
    qword_140C46780 = *(PVOID *)qword_140C46780;
    *(_QWORD *)(v8 + 8) = &qword_140C46780;
    if ( qword_140C46780 == &qword_140C46780 )
      v2 = 1;
    KeReleaseGuardedMutex(&stru_140C466E0);
    ExFreePoolWithTag(v3, 0x59706E50u);
  }
  while ( !v2 );
  ExFreePoolWithTag(P, 0x59706E50u);
}
