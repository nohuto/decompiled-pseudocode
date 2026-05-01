/*
 * XREFs of sub_180013980 @ 0x180013980
 * Callers:
 *     sub_180013F04 @ 0x180013F04 (sub_180013F04.c)
 * Callees:
 *     sub_180013578 @ 0x180013578 (sub_180013578.c)
 *     sub_180013E14 @ 0x180013E14 (sub_180013E14.c)
 *     sub_18001417C @ 0x18001417C (sub_18001417C.c)
 *     sub_18001F1C4 @ 0x18001F1C4 (sub_18001F1C4.c)
 */

void __fastcall sub_180013980(__int64 a1, int a2, int a3, char a4)
{
  int v4; // esi
  int i; // ebp
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax

  v4 = a2 + 1;
  for ( i = a4 & 2; v4 <= a3; ++v4 )
  {
    switch ( v4 )
    {
      case 1:
        if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24)) <= 1 )
          __fastfail(0xEu);
        continue;
      case 2:
        if ( (a4 & 1) != 0 )
        {
          sub_18001F1C4(a1 + 64);
          *(_DWORD *)(a1 + 104) |= 0x10u;
LABEL_20:
          *(_DWORD *)(a1 + 72) = 0;
          RtlReleaseSRWLockExclusive(a1 + 64);
          continue;
        }
        sub_18001417C(a1, 1LL);
        break;
      case 3:
        sub_18001F1C4(a1 + 64);
        v11 = *(_DWORD *)(a1 + 104);
        if ( (v11 & 0x10) != 0 )
          v12 = v11 & 0xFFFFFF9F;
        else
          v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(16 * a4)) & 0x40 | 0x20;
        *(_DWORD *)(a1 + 104) = v12;
        if ( i )
          sub_180013578(a1);
        goto LABEL_20;
      case 4:
        sub_180013E14(a1, i != 0 ? 3 : 1);
        sub_18001F1C4(a1 + 64);
        v9 = *(_DWORD *)(a1 + 104);
        if ( (v9 & 0x10) != 0 )
        {
          v10 = v9 & 0xFFFFFF9F;
        }
        else
        {
          if ( !i )
            v9 |= 0x20u;
          v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(16 * a4)) & 0x40;
        }
        *(_DWORD *)(a1 + 104) = v10;
        goto LABEL_20;
    }
  }
}
