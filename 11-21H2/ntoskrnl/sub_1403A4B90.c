/*
 * XREFs of sub_1403A4B90 @ 0x1403A4B90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1403A4CC0 @ 0x1403A4CC0 (sub_1403A4CC0.c)
 *     sub_1403A4DCC @ 0x1403A4DCC (sub_1403A4DCC.c)
 *     sub_1403A5020 @ 0x1403A5020 (sub_1403A5020.c)
 *     sub_1403B1230 @ 0x1403B1230 (sub_1403B1230.c)
 *     sub_1403B5584 @ 0x1403B5584 (sub_1403B5584.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405C9E88 @ 0x1405C9E88 (sub_1405C9E88.c)
 *     sub_1405CFED4 @ 0x1405CFED4 (sub_1405CFED4.c)
 */

__int64 __fastcall sub_1403A4B90(__int64 a1, IRP *a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  char v5; // bp
  IRP *v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx

  v3 = *(_QWORD *)(a3 + 200);
  v5 = *(_BYTE *)(a3 + 184);
  v6 = a2;
  if ( v3 && v5 == 2 )
    sub_1403B5584(v3);
  if ( *(_QWORD *)(a3 + 216) )
  {
    LOBYTE(a2) = v5;
    sub_14042A5E0(*(_QWORD *)(a3 + 232), a2);
  }
  if ( v5 )
  {
    sub_1403A4CC0(a3);
  }
  else
  {
    sub_1403A5020(v6);
    if ( v6->IoStatus.Status >= 0 )
    {
      if ( !*(_BYTE *)(a3 + 240) || (sub_1405CFED4(*(PVOID *)(a3 + 24)), v6->IoStatus.Status >= 0) )
      {
        v9 = *(_QWORD *)(a3 + 24);
        if ( v9 )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
          if ( v10 )
          {
            if ( (*(_DWORD *)(v10 + 760) & 0x30000) != 0 )
              sub_1405C9E88(0LL);
          }
        }
      }
    }
    if ( v3 )
    {
      LOBYTE(v8) = 1;
      sub_1403B1230(*(_QWORD *)(v3 + 56), v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 244), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v3 + 248), 0, 0);
    }
    sub_1403A4DCC(v6);
  }
  return 3221225494LL;
}
