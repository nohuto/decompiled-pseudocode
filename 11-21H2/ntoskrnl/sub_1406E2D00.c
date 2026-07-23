/*
 * XREFs of sub_1406E2D00 @ 0x1406E2D00
 * Callers:
 *     sub_14066F440 @ 0x14066F440 (sub_14066F440.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall sub_1406E2D00(__int64 a1, unsigned __int64 a2, PVOID *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v7; // ebx
  unsigned __int64 i; // rbp
  __int64 v9; // r14
  PVOID v10; // rax
  PVOID v11; // rcx
  bool v12; // zf

  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v7 = 0;
  for ( i = 0LL; i < a2; ++i )
  {
    v9 = *(_QWORD *)(a1 + 8 * i);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v9 + 56), 1u);
    v10 = *(PVOID *)(v9 + 1752);
    if ( v10 == (PVOID)-1LL )
    {
      v7 = -1073740682;
    }
    else
    {
      v11 = *a3;
      if ( v10 )
      {
        if ( v11 )
        {
          if ( v10 != v11 )
            v7 = -1073741637;
        }
        else
        {
          ObfReferenceObjectWithTag(*(PVOID *)(v9 + 1752), 0x624A7350u);
          *a3 = *(PVOID *)(v9 + 1752);
        }
      }
    }
    ExReleaseResourceLite((PERESOURCE)(v9 + 56));
    if ( v7 < 0 )
      break;
  }
  if ( (*((_DWORD *)CurrentThread + 344) & 1) != 0 )
  {
    v7 = -1073741749;
  }
  else if ( v7 >= 0 )
  {
    goto LABEL_8;
  }
  if ( *a3 )
  {
    ObfDereferenceObjectWithTag(*a3, 0x624A7350u);
    *a3 = 0LL;
  }
LABEL_8:
  v12 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v12 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v7;
}
