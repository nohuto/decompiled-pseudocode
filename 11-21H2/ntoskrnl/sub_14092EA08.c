/*
 * XREFs of sub_14092EA08 @ 0x14092EA08
 * Callers:
 *     sub_14071C610 @ 0x14071C610 (sub_14071C610.c)
 * Callees:
 *     sub_140249470 @ 0x140249470 (sub_140249470.c)
 *     sub_14024A390 @ 0x14024A390 (sub_14024A390.c)
 *     sub_14024C370 @ 0x14024C370 (sub_14024C370.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 */

__int64 __fastcall sub_14092EA08(__int64 a1, __int64 a2, IRP *a3)
{
  __int64 v6; // r8
  char v7; // si
  int v8; // ecx
  unsigned int v9; // edi

  if ( !a1 )
  {
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 1);
    return 0LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v7 = 1;
  v8 = *(_DWORD *)(a1 + 144);
  if ( (v8 & 0x1F00F00) != 0 || *(_QWORD *)(a1 + 72) != a1 + 72 || (v8 & 0x20000) != 0 )
  {
    if ( (v8 & 0x80u) == 0 )
    {
      v7 = 0;
      a3->IoStatus.Status = 0;
      LOBYTE(v6) = 1;
      sub_14024A390(a1, 0LL, v6);
      sub_14024C370(a1, 0LL);
      v9 = sub_140249470(a1, (__int64)a3, 0LL, (__int64)sub_14092E8B0, 0LL, 0LL, 0, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_10;
    }
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 1);
  v9 = 0;
LABEL_10:
  if ( v7 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v9;
}
