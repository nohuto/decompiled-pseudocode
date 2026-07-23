/*
 * XREFs of sub_140252164 @ 0x140252164
 * Callers:
 *     sub_140251EA0 @ 0x140251EA0 (sub_140251EA0.c)
 *     sub_1403B043C @ 0x1403B043C (sub_1403B043C.c)
 *     sub_1403B07C8 @ 0x1403B07C8 (sub_1403B07C8.c)
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 *     sub_1403D5B40 @ 0x1403D5B40 (sub_1403D5B40.c)
 *     sub_140508270 @ 0x140508270 (sub_140508270.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 */

__int64 __fastcall sub_140252164(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 *v5; // rax
  unsigned __int8 v6; // si
  __int64 v7; // rbp
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = a1;
  v3 = 0;
  *(_DWORD *)a3 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v5 = *(__int64 **)(a2 + 8);
      v6 = 0;
      LODWORD(ProcNumber) = 0;
      v7 = *v5;
      LOWORD(ProcNumber) = *((_WORD *)v5 + 4);
      while ( 1 )
      {
        if ( !v7 )
          return v3;
        if ( _bittest64(&v7, v6) )
        {
          v7 &= ~(1LL << v6);
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber);
          v9 = qword_140C54A80;
          v10 = 3LL * ProcessorIndexFromNumber;
          v11 = *(_DWORD *)(qword_140C54A80 + 24LL * ProcessorIndexFromNumber);
          switch ( v11 )
          {
            case 4:
              *(_DWORD *)a3 = 4;
              goto LABEL_9;
            case 5:
              if ( *(_DWORD *)a3 != 5 )
              {
                *(_DWORD *)a3 = 5;
LABEL_9:
                *(_DWORD *)(a3 + 8) = *(_DWORD *)(v9 + 8 * v10 + 8);
                break;
              }
              *(_DWORD *)(a3 + 8) |= *(_DWORD *)(qword_140C54A80 + 8 * v10 + 8);
              break;
            case 6:
              if ( *(_DWORD *)a3 == 6 && *(_DWORD *)(a3 + 8) == *(_DWORD *)(qword_140C54A80 + 8 * v10 + 8) )
              {
                *(_DWORD *)(a3 + 12) |= *(_DWORD *)(qword_140C54A80 + 8 * v10 + 12);
              }
              else
              {
                *(_DWORD *)a3 = 6;
                *(_DWORD *)(a3 + 8) = *(_DWORD *)(v9 + 8 * v10 + 8);
                *(_DWORD *)(a3 + 12) = *(_DWORD *)(v9 + 8 * v10 + 12);
              }
              break;
            default:
              *(_DWORD *)a3 = 3;
              break;
          }
        }
        BYTE2(ProcNumber) = ++v6;
      }
    case 3:
      *(_DWORD *)a3 = 1;
      break;
    case 4:
      *(_DWORD *)a3 = 2;
      break;
    case 5:
      *(_DWORD *)a3 = 3;
      break;
    case 6:
      v13 = 3LL * *(unsigned int *)(a2 + 8);
      v14 = qword_140C54A80;
      *(_OWORD *)a3 = *(_OWORD *)(qword_140C54A80 + 24LL * *(unsigned int *)(a2 + 8));
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(v14 + 8 * v13 + 16);
      break;
    default:
      return (unsigned int)-1073741811;
  }
  return v3;
}
