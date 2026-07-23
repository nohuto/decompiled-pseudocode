/*
 * XREFs of sub_14025247C @ 0x14025247C
 * Callers:
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     sub_1405BB8B4 @ 0x1405BB8B4 (sub_1405BB8B4.c)
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 *     sub_140980A20 @ 0x140980A20 (sub_140980A20.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1405BA6F0 @ 0x1405BA6F0 (sub_1405BA6F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14025247C(__int64 a1, int a2)
{
  __int64 v3; // rbp
  KIRQL v4; // si
  __int64 v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  if ( *(_WORD *)(*(_QWORD *)(a1 + 1680) + 352LL) )
  {
    v3 = a1 + 1664;
    if ( a2 )
    {
      v4 = 17;
    }
    else
    {
      v5 = sub_140282AD0(a1 + 1664);
      v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v5);
      *(_DWORD *)(v5 + 4) = 0;
    }
    v7 = (_QWORD *)sub_1405BA6F0(a1);
    if ( v4 != 17 )
    {
      LOBYTE(v6) = v4;
      sub_14030FA80(v3, v6);
    }
    if ( v7 )
    {
      do
      {
        v8 = (_QWORD *)*v7;
        ExFreePoolWithTag(v7, 0);
        v7 = v8;
      }
      while ( v8 );
    }
  }
}
