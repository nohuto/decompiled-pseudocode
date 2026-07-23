/*
 * XREFs of sub_14078ACE0 @ 0x14078ACE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1406DF998 @ 0x1406DF998 (sub_1406DF998.c)
 *     sub_1406E6000 @ 0x1406E6000 (sub_1406E6000.c)
 *     sub_1407698C4 @ 0x1407698C4 (sub_1407698C4.c)
 *     sub_14078AE7C @ 0x14078AE7C (sub_14078AE7C.c)
 *     sub_14078AF40 @ 0x14078AF40 (sub_14078AF40.c)
 *     sub_14078B9BC @ 0x14078B9BC (sub_14078B9BC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14078ACE0(PVOID P)
{
  int v1; // edi
  _DWORD *v3; // rbx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx

  v1 = 0;
  do
  {
    ExAcquireFastMutex(&stru_140C46740);
    v3 = qword_140C46720;
    KeReleaseGuardedMutex(&stru_140C46740);
    v4 = v3[22];
    switch ( v4 )
    {
      case 3:
      case 1:
        v5 = sub_14078B9BC(v3);
        break;
      case 2:
        v5 = sub_1407698C4((__int64)v3);
        break;
      case 4:
        goto LABEL_18;
      case 9:
        v5 = sub_1406E6000((__int64)v3);
        break;
      default:
        if ( v4 <= 9 || v4 > 11 )
        {
LABEL_5:
          sub_14078AF40(v3);
          goto LABEL_6;
        }
LABEL_18:
        v5 = sub_1406DF998((__int64)v3);
        break;
    }
    if ( v5 >= 0 )
      goto LABEL_5;
LABEL_6:
    ExAcquireFastMutex(&stru_140C46740);
    if ( *((PVOID **)qword_140C46720 + 1) != &qword_140C46720
      || (v6 = *(_QWORD *)qword_140C46720, *(PVOID *)(*(_QWORD *)qword_140C46720 + 8LL) != qword_140C46720) )
    {
      __fastfail(3u);
    }
    qword_140C46720 = *(PVOID *)qword_140C46720;
    *(_QWORD *)(v6 + 8) = &qword_140C46720;
    if ( qword_140C46720 == &qword_140C46720 )
      v1 = 1;
    KeReleaseGuardedMutex(&stru_140C46740);
    sub_14078AE7C(v3);
  }
  while ( !v1 );
  ExFreePoolWithTag(P, 0x59706E50u);
}
