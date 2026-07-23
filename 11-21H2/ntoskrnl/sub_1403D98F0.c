/*
 * XREFs of sub_1403D98F0 @ 0x1403D98F0
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_1403D9880 @ 0x1403D9880 (sub_1403D9880.c)
 *     sub_1405C8360 @ 0x1405C8360 (sub_1405C8360.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 */

void __fastcall sub_1403D98F0(PKSPIN_LOCK SpinLock, KSPIN_LOCK a2, char a3, char a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rdi
  KSPIN_LOCK v10; // rax
  __int64 v11; // rbp
  int v12; // ecx
  unsigned __int64 *v13; // rax
  __int16 v14; // [rsp+40h] [rbp-8h]

  v4 = 0;
  v6 = 0LL;
  _disable();
  KeAcquireSpinLockAtDpcLevel(SpinLock);
  v10 = SpinLock[2];
  v11 = *((unsigned int *)SpinLock + 3);
  if ( a2 > v10 )
  {
    SpinLock[2] = a2;
    v6 = a2 - v10;
    if ( a4 )
    {
      SpinLock[3] += v6;
      SpinLock[v11 + 41] += v6;
    }
  }
  v12 = v11 + 1;
  if ( a3 )
    v12 = v11 - 1;
  *((_DWORD *)SpinLock + 3) = v12;
  KeReleaseSpinLockFromDpcLevel(SpinLock);
  if ( (v14 & 0x200) != 0 )
    _enable();
  if ( !a3 && !(_DWORD)v11 && v6 && a4 )
  {
    v13 = (unsigned __int64 *)&unk_140D05C40;
    do
    {
      if ( v6 < *v13 )
        break;
      ++v4;
      v13 += 3;
    }
    while ( v4 < 0x24 );
    _InterlockedExchangeAdd64((volatile signed __int64 *)&SpinLock[v4 + 4], v6);
  }
}
