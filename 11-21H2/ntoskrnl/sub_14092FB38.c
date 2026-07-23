/*
 * XREFs of sub_14092FB38 @ 0x14092FB38
 * Callers:
 *     FsRtlHeatInit @ 0x14092F8A0 (FsRtlHeatInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_140542D30 @ 0x140542D30 (sub_140542D30.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14092FB38(__int64 a1, const GUID *a2, unsigned int *a3)
{
  __int64 i; // r9
  __int64 v7; // rcx
  __int64 Pool2; // r8
  int v9; // ebx
  __int64 *v10; // rax
  unsigned int v11; // edx
  __int128 v12; // xmm0
  __int64 *v13; // rcx
  __int64 v14; // rdx
  void *ExplicitScope; // [rsp+20h] [rbp-28h]

  ExAcquireResourceExclusiveLite(&stru_140C48A90, 1u);
  for ( i = qword_140C48A80; (__int64 *)i != &qword_140C48A80; i = *(_QWORD *)i )
  {
    v7 = *(_QWORD *)(i + 20) - *(_QWORD *)a1;
    if ( !v7 )
      v7 = *(_QWORD *)(i + 28) - *(_QWORD *)(a1 + 8);
    if ( !v7 )
    {
      ++*(_DWORD *)(i + 16);
      *a3 = *(_DWORD *)(i + 36);
      goto LABEL_21;
    }
  }
  Pool2 = ExAllocatePool2(258LL, 40LL, 1752453958LL);
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_22;
  }
  v10 = (__int64 *)qword_140C48A80;
  v11 = *(_DWORD *)a1 ^ (*(unsigned __int16 *)(a1 + 6) | (*(unsigned __int16 *)(a1 + 4) << 16)) ^ (*(unsigned __int8 *)(a1 + 15) | (*(unsigned __int8 *)(a1 + 10) << 24));
  while ( v10 != &qword_140C48A80 )
  {
    if ( *((_DWORD *)v10 + 9) == v11 )
    {
      if ( !++v11 )
        v10 = &qword_140C48A80;
    }
    else if ( *((_DWORD *)v10 + 9) > v11 )
    {
      break;
    }
    v10 = (__int64 *)*v10;
  }
  v12 = *(_OWORD *)a1;
  *(_DWORD *)(Pool2 + 36) = v11;
  *(_DWORD *)(Pool2 + 16) = 1;
  *(_OWORD *)(Pool2 + 20) = v12;
  v13 = (__int64 *)v10[1];
  if ( (__int64 *)*v13 != v10 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v10;
  *(_QWORD *)(Pool2 + 8) = v13;
  *v13 = Pool2;
  v10[1] = Pool2;
  *a3 = v11;
  if ( !qword_140C08E10[0] )
    EtwRegister(&stru_14003ACE8, (PETWENABLECALLBACK)sub_140542C10, qword_140C08E10, qword_140C08E10);
LABEL_21:
  v9 = 0;
LABEL_22:
  ExReleaseResourceLite(&stru_140C48A90);
  if ( v9 >= 0 )
  {
    if ( (byte_140C48A78 & 1) != 0 )
    {
      LODWORD(ExplicitScope) = *a3;
      sub_140542D30(qword_140C08E10, v14, a2, a1, (__int64)ExplicitScope);
    }
    ZwUpdateWnfStateData(&stru_140037710, 0LL, 0, 0LL, 0LL, 0, 0);
  }
  return (unsigned int)v9;
}
