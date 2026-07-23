/*
 * XREFs of sub_1409276D0 @ 0x1409276D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     sub_1407D80A4 @ 0x1407D80A4 (sub_1407D80A4.c)
 *     sub_1409279CC @ 0x1409279CC (sub_1409279CC.c)
 *     sub_1409289DC @ 0x1409289DC (sub_1409289DC.c)
 */

void __fastcall sub_1409276D0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v5; // rsi
  int v6; // ebx
  __int64 *v7; // rdi
  char v8; // bl
  _DWORD *v9; // rcx

  if ( a4 <= 1 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 24));
    *(_DWORD *)(a2 + 96) |= 1u;
    v5 = *(_QWORD **)(a2 + 80);
    *(_QWORD *)(a2 + 80) = a2 + 80;
    *(_QWORD *)(a2 + 88) = a2 + 80;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a2 + 24));
    KeSetEvent((PRKEVENT)a2, 0, 0);
    v6 = *(_DWORD *)(a2 + 96) & 2;
    v7 = sub_1407B6B90(0LL);
    if ( v7 )
    {
      v8 = v6 != 0 ? 2 : 0;
      do
      {
        if ( v7[175] == a2 )
        {
          v8 &= ~1u;
          ExAcquireFastMutex(&stru_140C48CC0);
          if ( v7[175] == a2 )
          {
            v7[175] = 0LL;
            v8 |= 1u;
          }
          KeReleaseGuardedMutex(&stru_140C48CC0);
          if ( (v8 & 1) != 0 )
          {
            sub_1409279CC((ULONG_PTR)v7);
            if ( (v8 & 2) != 0 )
              sub_1407D80A4((__int64)v7, 0xC0000354);
            ObfDereferenceObject((PVOID)a2);
          }
        }
        v7 = sub_1407B6B90(v7);
      }
      while ( v7 );
    }
    while ( v5 != (_QWORD *)(a2 + 80) )
    {
      v9 = v5;
      v5 = (_QWORD *)*v5;
      v9[18] = -1073740972;
      sub_1409289DC(v9);
    }
  }
}
