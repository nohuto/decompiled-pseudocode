/*
 * XREFs of DeferredRoutine @ 0x140648750
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402DA7A8 @ 0x1402DA7A8 (sub_1402DA7A8.c)
 *     sub_14042C360 @ 0x14042C360 (sub_14042C360.c)
 */

void __fastcall __noreturn DeferredRoutine(
        struct _KDPC *Dpc,
        ULONG_PTR *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONG_PTR *v4; // r10
  unsigned __int64 v5; // rcx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rax
  unsigned __int8 CurrentIrql; // cl
  __int64 v13; // r9

  v4 = DeferredContext;
  v5 = DeferredContext[13] % 0xA;
  if ( v5 <= 9 )
  {
    v6 = v5 - 5;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 == 1 )
              _disable();
          }
          else
          {
            CurrentThread = KeGetCurrentThread();
            --*((_WORD *)CurrentThread + 243);
          }
        }
        else
        {
          v11 = KeGetCurrentThread();
          --*((_WORD *)v11 + 242);
        }
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v13 + 20) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
        }
      }
    }
    else
    {
      sub_1402DA7A8();
    }
  }
  sub_14042C360(__ROL4__(-2071986176, 137), v4[9], v4[10], v4[11], v4[12]);
}
