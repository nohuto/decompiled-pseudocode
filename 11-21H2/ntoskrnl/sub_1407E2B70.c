/*
 * XREFs of sub_1407E2B70 @ 0x1407E2B70
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406D5B38 @ 0x1406D5B38 (sub_1406D5B38.c)
 *     sub_1406E158C @ 0x1406E158C (sub_1406E158C.c)
 *     sub_1407E15B4 @ 0x1407E15B4 (sub_1407E15B4.c)
 *     sub_1407E17A4 @ 0x1407E17A4 (sub_1407E17A4.c)
 *     sub_1407E2D60 @ 0x1407E2D60 (sub_1407E2D60.c)
 *     sub_1407E3010 @ 0x1407E3010 (sub_1407E3010.c)
 *     sub_1407E3070 @ 0x1407E3070 (sub_1407E3070.c)
 *     sub_1407E3F30 @ 0x1407E3F30 (sub_1407E3F30.c)
 *     sub_140A0F208 @ 0x140A0F208 (sub_140A0F208.c)
 *     sub_140A100D4 @ 0x140A100D4 (sub_140A100D4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407E2B70(char *Src, size_t Size)
{
  size_t v2; // r14
  unsigned int v4; // ebx
  char *v5; // rax
  int v6; // edi
  int *v7; // rdi
  HANDLE ProcessId; // rax
  int v9; // eax
  int v11; // [rsp+24h] [rbp-44h]
  int v12; // [rsp+28h] [rbp-40h]
  PVOID v13; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  v2 = (unsigned int)Size;
  v4 = 0;
  v13 = 0LL;
  P = 0LL;
  if ( !Src )
  {
    v12 = 4;
LABEL_11:
    v4 = 1;
    goto LABEL_12;
  }
  if ( (unsigned int)Size < 8 )
  {
    v6 = -1073741811;
    v11 = -1073741811;
    goto LABEL_19;
  }
  v5 = &Src[(unsigned int)Size];
  if ( (unsigned __int64)v5 > 0x7FFFFFFF0000LL || v5 < Src )
    MEMORY[0x7FFFFFFF0000] = 0;
  v6 = sub_1407E3010((unsigned int)Size, &P);
  v11 = v6;
  if ( v6 < 0 )
    goto LABEL_19;
  v7 = (int *)P;
  memmove(P, Src, v2);
  v12 = *v7;
  if ( *v7 != 7 )
    goto LABEL_11;
LABEL_12:
  ProcessId = PsGetProcessId(*((PEPROCESS *)KeGetCurrentThread() + 23));
  v6 = sub_1407E2D60(ProcessId, v4, &v13);
  v11 = v6;
  if ( v6 < 0 )
    goto LABEL_19;
  if ( v12 == 3 )
  {
    v9 = sub_1407E3070(v13, P, Src, (unsigned int)v2);
    goto LABEL_18;
  }
  if ( v12 == 4 )
  {
    if ( !P )
    {
      v9 = sub_1407E3F30(v13);
LABEL_18:
      v6 = v9;
      v11 = v9;
      goto LABEL_19;
    }
LABEL_30:
    v6 = -1073741811;
    v11 = -1073741811;
  }
  else
  {
    switch ( v12 )
    {
      case 1:
        v9 = sub_140A0F208(v13, P, (unsigned int)v2);
        goto LABEL_18;
      case 2:
        v9 = sub_140A100D4(v13, P, (unsigned int)v2);
        goto LABEL_18;
      case 5:
      case 6:
        v6 = -1073741811;
        if ( Src )
          v6 = -1073741822;
        v11 = v6;
        break;
      case 7:
        v9 = sub_1407E15B4(*(_QWORD *)v13);
        goto LABEL_18;
      case 8:
        v9 = sub_1406E158C((__int64)v13, P, v2);
        goto LABEL_18;
      case 9:
        v9 = sub_1406D5B38((__int64)v13, P, v2);
        goto LABEL_18;
      default:
        goto LABEL_30;
    }
  }
LABEL_19:
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 29, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      sub_1407E17A4(v13);
    v6 = v11;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v6;
}
