/*
 * XREFs of sub_1403C7A8C @ 0x1403C7A8C
 * Callers:
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1403C7B20 @ 0x1403C7B20 (sub_1403C7B20.c)
 */

__int64 __fastcall sub_1403C7A8C(unsigned int a1)
{
  __int64 v1; // rbx
  wchar_t **v2; // rdi
  wchar_t **v3; // rbx
  wchar_t *v4; // rcx
  __int64 v6; // rax

  v1 = 23LL * a1;
  v2 = &off_140C02530[v1];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&off_140C02530[v1 + 18], 0LL);
  v3 = &off_140C02530[v1 + 19];
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (wchar_t *)v3 )
      break;
    if ( *((wchar_t ***)v4 + 1) != v3 || (v6 = *(_QWORD *)v4, *(wchar_t **)(*(_QWORD *)v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = (wchar_t *)v6;
    *(_QWORD *)(v6 + 8) = v3;
    *((_BYTE *)v4 + 109) = 0;
    sub_1403C7B20((PWORK_QUEUE_ITEM)(v4 + 8));
  }
  return ExReleasePushLockEx((ULONG_PTR)(v2 + 18), 0LL);
}
