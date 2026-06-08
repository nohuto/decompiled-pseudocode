/*
 * XREFs of PepQueryVetoList @ 0x1C002472C
 * Callers:
 *     QueryPepCapabilites @ 0x1C0025850 (QueryPepCapabilites.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     PepQueryName @ 0x1C0041734 (PepQueryName.c)
 */

__int64 __fastcall PepQueryVetoList(__int64 a1)
{
  unsigned int Name; // edi
  unsigned int *Pool2; // rax
  unsigned int *v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // esi
  unsigned int i; // esi
  void *v9; // rcx
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  if ( (int)PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 24LL, &v10) >= 0 && v10 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, 16 * v10 + 8, 1919119952LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v10;
      v6 = 0LL;
      if ( v10 )
      {
        while ( 1 )
        {
          v7 = v6 + 1;
          Name = PepQueryName(a1, (unsigned int)(v6 + 1), 25LL, &v5[4 * v6 + 2]);
          if ( Name )
            break;
          v6 = v7;
          if ( v7 >= *v5 )
            goto LABEL_10;
        }
      }
      else
      {
LABEL_10:
        Name = ((__int64 (__fastcall *)(unsigned int *))qword_1C001E018)(v5);
        if ( !Name )
        {
          qword_1C001E370 = (__int64)v5;
          return Name;
        }
      }
      for ( i = 0; i < *v5; ++i )
      {
        v9 = *(void **)&v5[4 * i + 4];
        if ( v9 )
          ExFreePoolWithTag(v9, (ULONG)1919119952);
      }
      ExFreePoolWithTag(v5, (ULONG)1919119952);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 0;
  }
  return Name;
}
