/*
 * XREFs of sub_1405970A0 @ 0x1405970A0
 * Callers:
 *     MmTrimAllSystemPagableMemory @ 0x1405976F0 (MmTrimAllSystemPagableMemory.c)
 *     sub_140A81364 @ 0x140A81364 (sub_140A81364.c)
 * Callees:
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14038E4BC @ 0x14038E4BC (sub_14038E4BC.c)
 *     sub_14059676C @ 0x14059676C (sub_14059676C.c)
 */

__int64 __fastcall sub_1405970A0(int a1, int a2)
{
  _DWORD *v2; // r14
  _DWORD *v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned int v7; // r8d
  _DWORD *v8; // rdx
  _DWORD *v9; // rcx
  unsigned int v11; // ebp
  struct _KTHREAD *CurrentThread; // rbx
  int v13; // r13d
  __int64 v14; // rcx
  ULONG_PTR *v15; // rcx

  v2 = &unk_140C53368;
  v3 = &unk_140C53580;
  v5 = 1LL;
  v6 = 3LL;
  if ( !a1 )
  {
    v7 = 0;
    v8 = &unk_140C53368;
    v9 = &unk_140C53580;
    while ( 1 )
    {
      v5 = (__int64)v9;
      if ( v9 )
      {
        if ( *v8 != v9[1] )
          break;
      }
      ++v7;
      v9 += 80;
      ++v8;
      if ( v7 >= 3 )
      {
        if ( v7 == 6 )
          return 0LL;
        break;
      }
    }
  }
  if ( KeGetCurrentIrql() > 1u )
    return 0LL;
  v11 = 0;
  CurrentThread = 0LL;
  v13 = 0;
  if ( _InterlockedIncrement(&dword_140C53348) <= 1 && sub_1402ABBD0() )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = 1;
    --*((_WORD *)CurrentThread + 243);
    if ( !a1 )
    {
      do
      {
        v5 = (__int64)v3;
        if ( v3 && *v2 != v3[1] )
        {
          v11 = 1;
          sub_14059676C((__int64)v3);
          *v2 = v3[1];
        }
        v3 += 80;
        ++v2;
        --v6;
      }
      while ( v6 );
      goto LABEL_22;
    }
    if ( a1 == 1 )
    {
      v5 = *((_QWORD *)CurrentThread + 23) + 1664LL;
      v14 = v5;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 1124LL) & 0x10000) == 0 )
      {
LABEL_22:
        if ( a2 && v11 )
        {
          if ( a1 == 1 )
            v15 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v5 + 174));
          else
            v15 = &StartContext;
          sub_14038E4BC((__int64)v15, 8u);
        }
        goto LABEL_28;
      }
      v5 = sub_14027B520();
      v14 = v5;
    }
    sub_14059676C(v14);
    v11 = 1;
    goto LABEL_22;
  }
LABEL_28:
  _InterlockedAdd(&dword_140C53348, 0xFFFFFFFF);
  if ( v13 )
  {
    if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
      && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v11;
}
