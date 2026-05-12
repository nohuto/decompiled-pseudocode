/*
 * XREFs of RaidBusEnumeratorBuildVitalProductInquiry @ 0x1C001BC4C
 * Callers:
 *     RaidBusEnumeratorGenericInquiry @ 0x1C001B614 (RaidBusEnumeratorGenericInquiry.c)
 * Callees:
 *     RaidInitializeInquirySrb @ 0x1C00868E4 (RaidInitializeInquirySrb.c)
 */

_QWORD *__fastcall RaidBusEnumeratorBuildVitalProductInquiry(
        __int64 *a1,
        unsigned int a2,
        _QWORD *a3,
        int a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v6; // rdi
  __int64 v8; // rbx
  char v10; // si
  __int64 v11; // rbp
  unsigned int v12; // r8d
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  char v15; // al
  char v16; // cl
  char v17; // al
  _QWORD *result; // rax
  __int64 v19; // rax

  v6 = a3[2];
  v8 = *a1;
  v10 = 0;
  v11 = 0LL;
  RaidInitializeInquirySrb(v6, a2, a2 >> 8, HIWORD(a2), a3[4], a5, *(_BYTE *)(*a1 + 442));
  if ( *(_BYTE *)(v8 + 442) == 1 )
  {
    *(_DWORD *)(v6 + 24) |= 0x80110u;
    v12 = 0;
    *(_QWORD *)(v6 + 104) = 0LL;
    *(_QWORD *)(v6 + 64) = a3[4];
    *(_DWORD *)(v6 + 60) = a5;
    if ( *(_DWORD *)(v6 + 56) )
    {
      while ( 1 )
      {
        v13 = *(unsigned int *)(v6 + 4LL * v12 + 120);
        if ( (unsigned int)v13 >= 0x80 )
        {
          v14 = *(unsigned int *)(v6 + 16);
          if ( (unsigned int)v13 <= (unsigned int)v14 && *(_DWORD *)(v13 + v6) == 64 && v13 + 40 <= v14 )
            break;
        }
        ++v12;
        v11 = 0LL;
        if ( v12 >= *(_DWORD *)(v6 + 56) )
          goto LABEL_8;
      }
      v11 = (unsigned int)v13 + v6 + 24;
      *(_QWORD *)((unsigned int)v13 + v6 + 16) = a3[3];
      *(_BYTE *)((unsigned int)v13 + v6 + 9) = 18;
    }
  }
  else
  {
    *(_QWORD *)(v6 + 56) = 0LL;
    v11 = v6 + 72;
    *(_QWORD *)(v6 + 32) = a3[3];
    *(_BYTE *)(v6 + 11) = 18;
    v19 = a3[4];
    *(_DWORD *)(v6 + 12) |= 0x80110u;
    *(_QWORD *)(v6 + 24) = v19;
    *(_DWORD *)(v6 + 16) = a5;
  }
LABEL_8:
  v15 = *(_BYTE *)(v11 + 1);
  v16 = v15 & 0xFE;
  v17 = v15 | 1;
  if ( a4 != -1 )
  {
    v16 = v17;
    v10 = a4;
  }
  *(_BYTE *)(v11 + 1) = v16;
  result = a6;
  *(_BYTE *)(v11 + 2) = v10;
  *a6 = v6;
  return result;
}
