/*
 * XREFs of sub_1C00A0F84 @ 0x1C00A0F84
 * Callers:
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

__int64 __fastcall sub_1C00A0F84(__int64 a1, IRP *a2)
{
  __int64 v4; // rax
  unsigned int Status; // edi
  ULONG_PTR v6; // rsi

  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length == 4 )
  {
    v4 = sub_1C0007CF4(256LL, 16LL, 1380213074LL, *(_QWORD *)(a1 + 8));
    Status = 0;
    v6 = v4;
    if ( v4 )
    {
      *(_DWORD *)v4 = 1;
      *(_QWORD *)(v4 + 8) = *(_QWORD *)(a1 + 8);
      ObfReferenceObject(*(PVOID *)(a1 + 8));
      a2->IoStatus.Information = v6;
    }
    else
    {
      Status = -1073741801;
    }
  }
  else
  {
    Status = a2->IoStatus.Status;
  }
  return sub_1C0003440(a2, 0, Status);
}
