/*
 * XREFs of RaidBusEnumeratorBuildVitalProductInquiry @ 0x1C001766C
 * Callers:
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0016988 (RaidBusEnumeratorGenericInquiry.c)
 * Callees:
 *     RaidInitializeInquirySrb @ 0x1C00A0574 (RaidInitializeInquirySrb.c)
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
  __int64 v10; // rsi
  unsigned int v11; // r8d
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  char v14; // dl
  char v15; // cl
  _QWORD *result; // rax
  __int64 v17; // rax

  v6 = a3[2];
  v8 = *a1;
  v10 = 0LL;
  RaidInitializeInquirySrb(v6, a2, a2 >> 8, HIWORD(a2), a3[4], a5, *(_BYTE *)(*a1 + 442));
  if ( *(_BYTE *)(v8 + 442) == 1 )
  {
    *(_DWORD *)(v6 + 24) |= 0x80110u;
    v11 = 0;
    *(_QWORD *)(v6 + 104) = 0LL;
    *(_QWORD *)(v6 + 64) = a3[4];
    *(_DWORD *)(v6 + 60) = a5;
    if ( *(_DWORD *)(v6 + 56) )
    {
      while ( 1 )
      {
        v10 = 0LL;
        v12 = *(unsigned int *)(v6 + 4LL * v11 + 120);
        if ( (unsigned int)v12 >= 0x80 )
        {
          v13 = *(unsigned int *)(v6 + 16);
          if ( (unsigned int)v12 <= (unsigned int)v13 && *(_DWORD *)(v12 + v6) == 64 && v12 + 40 <= v13 )
            break;
        }
        if ( ++v11 >= *(_DWORD *)(v6 + 56) )
          goto LABEL_8;
      }
      v10 = (unsigned int)v12 + v6 + 24;
      *(_QWORD *)((unsigned int)v12 + v6 + 16) = a3[3];
      *(_BYTE *)((unsigned int)v12 + v6 + 9) = 18;
    }
  }
  else
  {
    *(_QWORD *)(v6 + 56) = 0LL;
    v10 = v6 + 72;
    *(_QWORD *)(v6 + 32) = a3[3];
    *(_BYTE *)(v6 + 11) = 18;
    v17 = a3[4];
    *(_DWORD *)(v6 + 12) |= 0x80110u;
    *(_QWORD *)(v6 + 24) = v17;
    *(_DWORD *)(v6 + 16) = a5;
  }
LABEL_8:
  v14 = a4;
  if ( a4 == -1 )
    v14 = 0;
  v15 = *(_BYTE *)(v10 + 1) & 0xFE;
  if ( a4 != -1 )
    v15 = *(_BYTE *)(v10 + 1) | 1;
  result = a6;
  *(_BYTE *)(v10 + 1) = v15;
  *(_BYTE *)(v10 + 2) = v14;
  *a6 = v6;
  return result;
}
