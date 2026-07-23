/*
 * XREFs of sub_1409CD6CC @ 0x1409CD6CC
 * Callers:
 *     sub_14025CB88 @ 0x14025CB88 (sub_14025CB88.c)
 *     sub_1406FE720 @ 0x1406FE720 (sub_1406FE720.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     sub_1409C664C @ 0x1409C664C (sub_1409C664C.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409CD6CC(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edx
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rsi
  __int64 *v6; // rdx
  __int64 *v7; // rbx
  __int64 *v8; // rax
  __int64 **v9; // rdx

  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = (unsigned int)(1529154084 * *(_DWORD *)(a1 + 24)) >> 28;
    --*((_WORD *)CurrentThread + 242);
    v4 = v3;
    v5 = &stru_140CF66C0 + (v3 & 3);
    ExAcquireResourceExclusiveLite(v5, 1u);
    v6 = *(__int64 **)(qword_140D3CA78 + 8 * v4);
    if ( v6 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a1 + 24) == *((_DWORD *)v6 + 2)
          && *(_DWORD *)(a1 + 28) == *((_DWORD *)v6 + 3)
          && *(_QWORD *)(*(_QWORD *)(a1 + 216) + 160LL) == v6[20] )
        {
          v7 = (__int64 *)v6[22];
          if ( v7 != v6 + 22 )
            break;
        }
LABEL_9:
        v6 = (__int64 *)*v6;
        if ( !v6 )
          goto LABEL_10;
      }
      while ( 1 )
      {
        v8 = (__int64 *)*v7;
        if ( v7[2] == a1 )
          break;
        v7 = (__int64 *)*v7;
        if ( v8 == v6 + 22 )
          goto LABEL_9;
      }
      if ( (__int64 *)v8[1] != v7 || (v9 = (__int64 **)v7[1], *v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = (__int64)v9;
      ExReleaseResourceLite(v5);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
LABEL_10:
      ExReleaseResourceLite(v5);
      KeLeaveCriticalRegion();
    }
  }
}
