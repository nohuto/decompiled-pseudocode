/*
 * XREFs of sub_1406DD8D0 @ 0x1406DD8D0
 * Callers:
 *     sub_14078C520 @ 0x14078C520 (sub_14078C520.c)
 *     sub_14078D764 @ 0x14078D764 (sub_14078D764.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ZwDeleteWnfStateName @ 0x14041D320 (ZwDeleteWnfStateName.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     sub_14078AE24 @ 0x14078AE24 (sub_14078AE24.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406DD8D0(char *P, char a2)
{
  __int64 v3; // r8
  PFAST_MUTEX v4; // rcx
  PVOID *v5; // rax
  int v6; // ecx
  char *v7; // rdi
  char *v8; // rdi
  int v9; // ecx
  void *v10; // rcx
  int v11; // ecx
  char *v12; // rdx
  char *v13; // rdx

  if ( a2 )
  {
    ExAcquireFastMutex(&stru_140C46400);
    ExAcquireFastMutex(*((PFAST_MUTEX *)P + 2));
    v4 = *(PFAST_MUTEX *)P;
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
      __fastfail(3u);
    *v5 = v4;
    v4->Owner = v5;
    v6 = *((_DWORD *)P + 33);
    if ( v6 )
    {
      v9 = v6 - 1;
      if ( v9 )
      {
        v11 = v9 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            --dword_140D01120;
        }
        else
        {
          --dword_140C4E918;
        }
      }
      else
      {
        --dword_140C4E914;
      }
    }
    else
    {
      --dword_140C4E91C;
    }
    v7 = (char *)*((_QWORD *)P + 14);
    while ( v7 != P + 112 )
    {
      v13 = v7;
      v7 = *(char **)v7;
      sub_14078AE24(P, v13, 0LL);
    }
    v8 = (char *)*((_QWORD *)P + 12);
    while ( v8 != P + 96 )
    {
      v12 = v8;
      LOBYTE(v3) = 1;
      v8 = *(char **)v8;
      sub_14078AE24(P, v12, v3);
    }
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)P + 2));
    KeReleaseGuardedMutex(&stru_140C46400);
  }
  if ( *((_DWORD *)P + 33) == 1 || (unsigned int)(*((_DWORD *)P + 33) - 2) < 2 )
  {
    v10 = (void *)*((_QWORD *)P + 3);
    if ( v10 )
      sub_14077B394(v10);
  }
  ZwDeleteWnfStateName((PCWNF_STATE_NAME)P + 11);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(P + 56));
  ExFreePoolWithTag(*((PVOID *)P + 2), 0x59706E50u);
  memset(P, 0, 0x90uLL);
  ExFreePoolWithTag(P, 0x59706E50u);
}
