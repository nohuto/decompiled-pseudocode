/*
 * XREFs of sub_140373E1C @ 0x140373E1C
 * Callers:
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 *     sub_14030EC70 @ 0x14030EC70 (sub_14030EC70.c)
 *     sub_140330080 @ 0x140330080 (sub_140330080.c)
 * Callees:
 *     sub_140266B40 @ 0x140266B40 (sub_140266B40.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140373F2C @ 0x140373F2C (sub_140373F2C.c)
 *     sub_140374278 @ 0x140374278 (sub_140374278.c)
 *     sub_14037443C @ 0x14037443C (sub_14037443C.c)
 */

void __fastcall sub_140373E1C(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  char v3; // si
  int v5; // eax
  volatile LONG *v6; // rax
  volatile LONG *v7; // rax
  __int64 v8; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  if ( (*((_DWORD *)CurrentThread + 344) & 0x400000) != 0 )
    return;
  v5 = *(_DWORD *)(a1 + 188);
  if ( (v5 & 3) != 0 )
  {
    if ( (v5 & 4) != 0 )
    {
      if ( ((*(_BYTE *)(a1 + 184) & 0x40) == 0
         || *(_QWORD *)(a1 + 128) <= (unsigned __int64)(*(_QWORD *)(a1 + 120) + 64LL))
        && (unsigned __int64)sub_140266B40(*(_QWORD **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)), 6u) >= 0x120 )
      {
        goto LABEL_7;
      }
    }
    else if ( (unsigned int)sub_140373F2C() )
    {
      goto LABEL_7;
    }
    LOBYTE(a2) = v3;
    sub_140374278(a1, a2);
  }
LABEL_7:
  if ( (*(_BYTE *)(a1 + 187) & 0x10) != 0 )
  {
    v6 = (volatile LONG *)sub_140282AD0(a1);
    ExAcquireSpinLockExclusiveAtDpcLevel(v6 + 16);
    *(_BYTE *)(a1 + 187) &= ~0x10u;
    v7 = (volatile LONG *)sub_140282AD0(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel(v7 + 16);
    _interlockedbittestandset((volatile signed __int32 *)CurrentThread + 344, 0x16u);
    LOBYTE(v8) = v3;
    sub_14037443C(a1, v8, *(_QWORD *)(a1 + 120));
  }
  if ( (*((_DWORD *)CurrentThread + 344) & 0x400000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)CurrentThread + 344, 0x16u);
}
