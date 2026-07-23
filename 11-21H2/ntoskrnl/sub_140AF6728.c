/*
 * XREFs of sub_140AF6728 @ 0x140AF6728
 * Callers:
 *     sub_140AF65CC @ 0x140AF65CC (sub_140AF65CC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140AF6728(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // eax

  if ( *(_QWORD *)(a1 + 16) == -1LL )
  {
    v1 = *(_QWORD *)(a1 + 32);
    v2 = *(_DWORD *)(v1 + 24);
    if ( (v2 & 0x40000000) != 0 )
    {
      *(_DWORD *)(v1 + 24) = v2 & 0xBFFFFFFF;
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) |= 0x80000000;
    }
  }
}
