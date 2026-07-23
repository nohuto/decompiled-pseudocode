/*
 * XREFs of sub_140553A48 @ 0x140553A48
 * Callers:
 *     sub_1405550FC @ 0x1405550FC (sub_1405550FC.c)
 * Callees:
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_14055C354 @ 0x14055C354 (sub_14055C354.c)
 *     sub_14055C3BC @ 0x14055C3BC (sub_14055C3BC.c)
 *     sub_14055C464 @ 0x14055C464 (sub_14055C464.c)
 *     sub_14055C7C4 @ 0x14055C7C4 (sub_14055C7C4.c)
 *     sub_14055CA14 @ 0x14055CA14 (sub_14055CA14.c)
 *     sub_140592348 @ 0x140592348 (sub_140592348.c)
 *     sub_1405C6658 @ 0x1405C6658 (sub_1405C6658.c)
 */

char __fastcall sub_140553A48(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 MaxDataSize)
{
  int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  ULONG v14; // ecx
  __int64 v15; // rbx
  unsigned int v16; // r8d

  sub_1403D99B4(a2 & 0xFFFFF000, (PVOID)0x1000);
  sub_1403D99B4(a3 & 0xFFFFF000, (PVOID)0x1000);
  sub_1403D99B4(a4 & 0xFFFFF000, (PVOID)0x1000);
  LOBYTE(v9) = sub_1403D99B4(MaxDataSize & 0xFFFFF000, (PVOID)0x1000);
  switch ( a1 )
  {
    case 205:
    case 214:
      LOBYTE(v9) = sub_1403D99B4((a2 - 4096) & 0xFFFFF000, (PVOID)0x1000);
      break;
    case 209:
      v9 = sub_140592348(a2);
      if ( v9 )
      {
        v10 = 4096LL;
        LODWORD(v11) = (a2 - 4096) & 0xFFFFF000;
LABEL_48:
        LOBYTE(v9) = sub_1403D99B4(v11, (PVOID)v10);
        return v9;
      }
      return v9;
    case 335:
    case 348:
      LOBYTE(v9) = sub_1403D7FD4(MaxDataSize, 16LL);
      if ( (_BYTE)v9 )
      {
        LOBYTE(v9) = sub_1403D99B4(MaxDataSize, (PVOID)0x10);
        v12 = *(_QWORD *)(MaxDataSize + 8);
        if ( v12 )
          LOBYTE(v9) = sub_14055CA14(v12);
      }
      break;
  }
  switch ( a1 )
  {
    case 412:
      if ( !a3 )
        return v9;
      v13 = a2 - 16;
      if ( v13 > 0x40 || (v13 & 0xF) != 0 )
        return v9;
      v14 = a3;
      goto LABEL_35;
    case 159:
      if ( a2 == 4 )
      {
        if ( a4 )
          LOBYTE(v9) = sub_14055C354(a4, MaxDataSize);
      }
      else if ( a2 == 3 )
      {
        LOBYTE(v9) = sub_14055C464(a3, a4, MaxDataSize);
      }
      return v9;
    case 469:
      LOBYTE(v9) = sub_14055C3BC(a3);
      return v9;
    case 160:
      if ( a2 == 1560 )
      {
        v14 = a4;
      }
      else
      {
        if ( a2 == 1561 )
        {
          LOBYTE(v9) = sub_14055C7C4(*(_QWORD *)(a3 + 48));
          if ( MaxDataSize )
            LOBYTE(v9) = sub_14055C7C4(MaxDataSize);
          return v9;
        }
        if ( a2 != 15 )
        {
          LOBYTE(v9) = a2 + 16;
          if ( (unsigned __int64)(a2 - 240) > 1 )
            return v9;
        }
        if ( !MaxDataSize )
          return v9;
        v14 = MaxDataSize;
      }
LABEL_35:
      LOBYTE(v9) = sub_14055CA14(v14);
      return v9;
    case 257:
      if ( !a3 )
      {
        LOBYTE(v9) = sub_1403D7FD4(a4, 48896LL);
        if ( (_BYTE)v9 )
        {
          sub_1403D99B4(a4, (PVOID)0xBF00);
          sub_1403D99B4(*(_QWORD *)(a4 + 35264), (PVOID)0x4D0);
          v15 = *(_QWORD *)(a4 + 8);
          if ( sub_1403D7FD4(v15, 2288LL) )
            sub_14055CA14(v15);
          v10 = 0x2000LL;
          v11 = (*(_QWORD *)(*(_QWORD *)(a4 + 35264) + 152LL) - 4096LL) & 0xFFFFFFFFFFFFF000uLL;
          goto LABEL_48;
        }
      }
      break;
    case 416:
      sub_14055CA14(a4);
      LOBYTE(v9) = sub_1405C6658(0LL, 0LL, 0LL);
      break;
    case 292:
      LOBYTE(v9) = sub_1403D7FD4(a3, 128LL);
      if ( (_BYTE)v9 )
      {
        v16 = *(_DWORD *)(a3 + 20);
        v10 = 72 * (unsigned int)*(unsigned __int16 *)(a3 + 10) + 128;
        LODWORD(v11) = a3;
        if ( v16 >= (unsigned int)v10 )
          v10 = v16;
        goto LABEL_48;
      }
      break;
  }
  return v9;
}
