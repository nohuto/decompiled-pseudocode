/*
 * XREFs of sub_1407698C4 @ 0x1407698C4
 * Callers:
 *     sub_14078ACE0 @ 0x14078ACE0 (sub_14078ACE0.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402DE1B8 @ 0x1402DE1B8 (sub_1402DE1B8.c)
 *     sub_14078BC74 @ 0x14078BC74 (sub_14078BC74.c)
 *     sub_14078BEA4 @ 0x14078BEA4 (sub_14078BEA4.c)
 */

__int64 __fastcall sub_1407698C4(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v2; // rax
  _QWORD *v4; // r15
  unsigned int v5; // esi
  _QWORD **v6; // r14
  _QWORD *v7; // rdi
  _QWORD *v8; // rbp
  __int64 v9; // rcx
  __int64 v11; // rax
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 72) - 0x11D046F0CB3A4004LL;
  if ( *(_QWORD *)(a1 + 72) == 0x11D046F0CB3A4004LL )
    v2 = *(_QWORD *)(a1 + 80) - 0x3F05139760008FB0LL;
  if ( !v2 )
    goto LABEL_4;
  v11 = *(_QWORD *)(a1 + 72) - 0x11D046F0CB3A4005LL;
  if ( *(_QWORD *)(a1 + 72) == 0x11D046F0CB3A4005LL )
    v11 = *(_QWORD *)(a1 + 80) - 0x3F05139760008FB0LL;
  if ( !v11 )
  {
LABEL_4:
    ExAcquireFastMutex(&stru_140C46400);
    v4 = v12;
    v12[1] = &unk_140C463F0;
    v5 = 0;
    v12[0] = (char *)&unk_140C46320 + 16 * (unsigned int)sub_1402DE1B8((unsigned __int8 *)(a1 + 120));
    do
    {
      v6 = (_QWORD **)*v4;
      v7 = *(_QWORD **)*v4;
      while ( v7 != v6 )
      {
        v8 = v7;
        v7 = (_QWORD *)*v7;
        if ( !v5 )
        {
          v9 = *(_QWORD *)(a1 + 120) - v8[3];
          if ( !v9 )
            v9 = *(_QWORD *)(a1 + 128) - v8[4];
          if ( v9 )
            continue;
        }
        if ( (unsigned __int8)sub_14078BEA4(a1, v8) )
          v1 = sub_14078BC74(a1, v8);
      }
      ++v5;
      ++v4;
    }
    while ( v5 < 2 );
    KeReleaseGuardedMutex(&stru_140C46400);
  }
  return v1;
}
