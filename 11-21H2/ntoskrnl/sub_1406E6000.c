/*
 * XREFs of sub_1406E6000 @ 0x1406E6000
 * Callers:
 *     sub_14078ACE0 @ 0x14078ACE0 (sub_14078ACE0.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402E08A0 @ 0x1402E08A0 (sub_1402E08A0.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_14078BC74 @ 0x14078BC74 (sub_14078BC74.c)
 *     sub_14078BEA4 @ 0x14078BEA4 (sub_14078BEA4.c)
 */

__int64 __fastcall sub_1406E6000(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *v3; // r15
  unsigned int v4; // edi
  _QWORD **v5; // r14
  _QWORD *v6; // rbx
  _QWORD *v8; // r13
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  if ( *(_DWORD *)(a1 + 88) == 9 )
  {
    ExAcquireFastMutex(&stru_140C46400);
    v3 = v9;
    v9[0] = (char *)&unk_140C46440 + 16 * (unsigned int)sub_1402E08A0((PCWSTR)(a1 + 120));
    v4 = 0;
    v9[1] = &unk_140C46510;
    do
    {
      v5 = (_QWORD **)*v3;
      v6 = *(_QWORD **)*v3;
      while ( v6 != v5 )
      {
        v8 = v6;
        v6 = (_QWORD *)*v6;
        if ( v4 || !wcsicmp((const wchar_t *)(a1 + 120), *(const wchar_t **)(v8[3] + 16LL)) )
        {
          if ( (unsigned __int8)sub_14078BEA4(a1, v8) )
            v1 = sub_14078BC74(a1, v8);
        }
      }
      ++v4;
      ++v3;
    }
    while ( v4 < 2 );
    KeReleaseGuardedMutex(&stru_140C46400);
  }
  return v1;
}
