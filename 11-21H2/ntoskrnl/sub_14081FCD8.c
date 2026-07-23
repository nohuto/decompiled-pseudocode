/*
 * XREFs of sub_14081FCD8 @ 0x14081FCD8
 * Callers:
 *     sub_140747FB4 @ 0x140747FB4 (sub_140747FB4.c)
 *     sub_140958D9C @ 0x140958D9C (sub_140958D9C.c)
 *     sub_14095A02C @ 0x14095A02C (sub_14095A02C.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140748D08 @ 0x140748D08 (sub_140748D08.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_14081FDD8 @ 0x14081FDD8 (sub_14081FDD8.c)
 *     sub_14082071C @ 0x14082071C (sub_14082071C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14081FCD8(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v4; // r15
  unsigned int v5; // esi
  unsigned int v6; // r13d
  _DWORD *v7; // rbx
  int v8; // eax
  _DWORD *v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned __int64 i; // rdi
  __int64 v14; // rbx
  void *v15; // rcx
  void *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax

  v4 = a1;
  if ( a3 )
  {
    for ( i = a1; i < a2; i += 64LL )
    {
      if ( *(_QWORD *)i )
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)i + 312LL) + 40LL);
      else
        v14 = 0LL;
      ExAcquireFastMutex(&stru_140C461A0);
      v15 = *(void **)(v14 + 416);
      if ( v15 )
      {
        ExFreePoolWithTag(v15, 0);
        *(_QWORD *)(v14 + 416) = 0LL;
      }
      v16 = *(void **)(v14 + 424);
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0);
        *(_QWORD *)(v14 + 424) = 0LL;
      }
      KeReleaseGuardedMutex(&stru_140C461A0);
    }
  }
  v5 = -1;
  do
  {
    v6 = v5;
    v5 = 0;
    if ( v4 >= a2 )
      break;
    v7 = (_DWORD *)(v4 + 56);
    do
    {
      *((_QWORD *)v7 - 2) = 0LL;
      v8 = *(v7 - 12);
      if ( (v8 & 0x28) == 0 )
      {
        if ( (v8 & 0x10) != 0 )
        {
          *v7 = -1073741823;
        }
        else if ( v6 == -1 || *v7 == -1073741267 )
        {
          *v7 = 0;
          v9 = v7 - 14;
          sub_14082071C(v7 - 14, 1LL);
          if ( *v7 == -1073741267 )
          {
            ++v5;
          }
          else
          {
            if ( a3 )
            {
              if ( *(_QWORD *)v9 )
                v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 312LL) + 40LL);
              else
                v17 = 0LL;
              if ( (*(v7 - 12) & 0x400) != 0 )
                sub_14076FBEC(v17, 3072);
              ExAcquireFastMutex(&stru_140C461A0);
              v18 = *((_QWORD *)v7 - 2);
              *(_QWORD *)(v17 + 416) = v18;
              if ( !v18 )
                sub_14076FB70(v17, 256);
              *(_QWORD *)(v17 + 424) = *((_QWORD *)v7 - 1);
              KeReleaseGuardedMutex(&stru_140C461A0);
            }
            v10 = *((_QWORD *)v7 - 2);
            if ( v10 )
            {
              if ( *(_QWORD *)v9 )
                v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 312LL) + 40LL);
              else
                v11 = 0LL;
              v12 = sub_140748D08(*((_DWORD **)v7 - 2));
              sub_14081FDD8(v11, v10, v12);
            }
          }
        }
      }
      v7 += 16;
    }
    while ( (unsigned __int64)(v7 - 14) < a2 );
    v4 = a1;
    if ( !v5 )
      break;
  }
  while ( v5 < v6 );
}
