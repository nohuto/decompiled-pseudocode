/*
 * XREFs of ndisIfSetCompartmentJobObject @ 0x1C00B6984
 * Callers:
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x1C013DE1C (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfSetCompartmentJobObject(__int64 a1, PVOID a2, char a3)
{
  unsigned int v4; // edi
  PVOID *v5; // rbx
  PVOID *v8; // rsi
  KIRQL v9; // r12
  PVOID *i; // rax
  PVOID v11; // rcx
  void **v12; // rax
  __int64 Pool2; // rax
  _QWORD *v14; // rbx
  PVOID *v15; // rax

  v4 = 0;
  v5 = 0LL;
  v8 = (PVOID *)(a1 + 1728);
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  for ( i = (PVOID *)*v8; i != v8; i = (PVOID *)*i )
  {
    if ( i[2] == a2 )
    {
      v5 = i;
      break;
    }
  }
  if ( !a3 )
  {
    if ( v5 )
      goto LABEL_18;
    Pool2 = ExAllocatePool2(64LL, 24LL, 1718174798);
    v14 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
      v4 = -1073741670;
      goto LABEL_18;
    }
    *(_QWORD *)(Pool2 + 16) = a2;
    ObfReferenceObjectWithTag(a2, 0x7369644Eu);
    ++*(_DWORD *)(a1 + 1720);
    v15 = (PVOID *)*v8;
    if ( *((PVOID **)*v8 + 1) == v8 )
    {
      *v14 = v15;
      v14[1] = v8;
      v15[1] = v14;
      *v8 = v14;
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  if ( v5 )
  {
    --*(_DWORD *)(a1 + 1720);
    ObfDereferenceObjectWithTag(v5[2], 0x7369644Eu);
    v11 = *v5;
    if ( *((PVOID **)*v5 + 1) == v5 )
    {
      v12 = (void **)v5[1];
      if ( *v12 == v5 )
      {
        *v12 = v11;
        *((_QWORD *)v11 + 1) = v12;
        ExFreePoolWithTag(v5, 0);
        goto LABEL_18;
      }
    }
LABEL_16:
    __fastfail(3u);
  }
LABEL_18:
  KeReleaseSpinLock(&ndisIfListLock, v9);
  return v4;
}
