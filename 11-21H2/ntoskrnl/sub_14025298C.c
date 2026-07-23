/*
 * XREFs of sub_14025298C @ 0x14025298C
 * Callers:
 *     sub_140239F94 @ 0x140239F94 (sub_140239F94.c)
 *     sub_1402536E0 @ 0x1402536E0 (sub_1402536E0.c)
 *     sub_1403983A0 @ 0x1403983A0 (sub_1403983A0.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252A60 @ 0x140252A60 (sub_140252A60.c)
 */

void __fastcall sub_14025298C(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v8; // al
  char v9; // dl
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v13 = 0;
  if ( !a4 )
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 64));
  v8 = *(_BYTE *)(a1 + 304);
  if ( (v8 & 2) == 0 )
  {
    *(_BYTE *)(a1 + 304) = v8 | 2;
    if ( (unsigned __int8)sub_140252A60(a1, &v12, &v13, a1 + 320) )
    {
      v9 = v13;
      switch ( v13 )
      {
        case 1:
          if ( v12 <= a3 )
          {
            *(_QWORD *)(a1 + 312) = 0LL;
            break;
          }
          v11 = a2 + v12 - a3;
          goto LABEL_18;
        case 2:
          if ( v12 <= a3 )
            v10 = 0LL;
          else
            v10 = a3 - v12;
          *(_QWORD *)(a1 + 312) = v10;
          break;
        case 3:
          v11 = v12;
LABEL_18:
          *(_QWORD *)(a1 + 312) = v11;
          break;
      }
    }
    else
    {
      v9 = 0;
    }
    *(_BYTE *)(a1 + 248) = v9;
  }
  if ( !a4 )
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 64));
}
