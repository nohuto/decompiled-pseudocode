/*
 * XREFs of sub_1C002122C @ 0x1C002122C
 * Callers:
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00A4248 @ 0x1C00A4248 (sub_1C00A4248.c)
 *     sub_1C00B16A4 @ 0x1C00B16A4 (sub_1C00B16A4.c)
 */

__int64 __fastcall sub_1C002122C(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  PIO_SECURITY_CONTEXT SecurityContext; // rcx
  PIO_SECURITY_CONTEXT v6; // rcx
  __int64 v7; // rcx
  unsigned int v9; // r8d
  __int64 v10; // r8
  int v11; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext == (PIO_SECURITY_CONTEXT)&unk_1C0082F48
    || RtlCompareMemory(SecurityContext, &unk_1C0082F48, 0x10uLL) == 16 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    if ( v10 && (v11 = *(_DWORD *)(a1 + 48)) != 0 && (unsigned int)(v11 - 5) > 1 )
    {
      v9 = sub_1C00B16A4(
             (unsigned int)*(_QWORD *)(a1 + 104) + 16,
             (_DWORD)a2,
             *(_QWORD *)(v10 + 8),
             (unsigned int)*(_QWORD *)(a1 + 104) + 8,
             *(_QWORD *)(a1 + 104) + 16LL,
             **(_BYTE **)(a1 + 104) & 0x1F,
             *(_DWORD *)(a1 + 3344));
    }
    else
    {
      a2->IoStatus.Information = 0LL;
      v9 = -1073741810;
    }
  }
  else
  {
    v6 = CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( v6 != (PIO_SECURITY_CONTEXT)&unk_1C0082F38 && RtlCompareMemory(v6, &unk_1C0082F38, 0x10uLL) != 16 )
      return sub_1C00A4248(v7, a2);
    v9 = -1073741637;
  }
  return sub_1C0003440(a2, 0, v9);
}
